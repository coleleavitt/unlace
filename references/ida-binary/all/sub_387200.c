unsigned __int64 __fastcall sra_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rcx
  __int64 v8; // rsi
  int v10; // r12d
  __int64 *v11; // rbp
  int v12; // r14d
  __int64 *v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rbp
  __int64 *v17; // rbx
  _BYTE *v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // [rsp+0h] [rbp-58h] BYREF
  char v26; // [rsp+18h] [rbp-40h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(unsigned __int16 **)(a1 + 192);
  v27 = __readfsqword(0x28u);
  v25 = 0;
  v8 = *(_DWORD *)(v6 + 68) + (unsigned int)*v7;
  if ( *(_DWORD *)(v6 + 80) <= (int)v8 )
    v8 = (unsigned int)(v8 + 1);
  if ( (unsigned __int8)getn_sreg_range(&v25, v8, a5) )
  {
    v10 = 2 * *(_DWORD *)(a1 + 232);
    sub_169A50(*a2, (__int64)"%0*a", v10, 0.0);
    sub_169A50(*a2 + 3, (__int64)"%0*a", v10, 0.0);
    sub_169A50(*a2 + 6, (__int64)"%0*a", v10, 0.0);
    v11 = *a2;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL);
    v13 = *a2 + 9;
    sub_169A50(v13, (__int64)"%0*a", v12, 0.0);
    v14 = v11[10];
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v12 < (int)v15 )
      {
        v19 = (int)v15 - v12;
        if ( v15 )
        {
          v20 = 1;
          v21 = 0;
          if ( v19 < v15 )
          {
            v21 = v15 - v19;
            v20 = v15 - v19 + 1;
            memmove((void *)v11[9], (const void *)(v11[9] + v19), v15 - v19);
          }
          v22 = v11[9];
          if ( v11[11] < v20 )
          {
            v24 = qvector_reserve(v13, v22, v20, 1);
            v11[9] = v24;
            v22 = v24;
          }
          v11[10] = v20;
          *(_BYTE *)(v22 + v21) = 0;
        }
      }
    }
    v16 = (char *)"u";
    if ( v26 != 2 )
    {
      v16 = " ";
      if ( (unsigned __int8)(v26 - 3) <= 1u )
        v16 = "a";
    }
    v17 = *a2;
    v18 = (_BYTE *)v17[12];
    if ( (unsigned __int64)v17[14] <= 1 )
    {
      v23 = qvector_reserve(v17 + 12, v18, 2, 1);
      v17[12] = v23;
      v18 = (_BYTE *)v23;
    }
    v17[13] = 2;
    *v18 = *v16;
    *(_BYTE *)(v17[12] + 1) = 0;
  }
  return v27 - __readfsqword(0x28u);
}
