unsigned __int64 __fastcall sub_78CE80(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  _DWORD *v8; // rdx
  unsigned __int64 v9; // r14
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned int *v12; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // cf
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 *v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v5 = a1[15];
  v6 = a1[14];
  v28 = __readfsqword(0x28u);
  if ( v5 && (v8 = (_DWORD *)(v6 + 8 * v5 - 8), *v8 == a2) )
  {
    v8[1] = a3;
  }
  else
  {
    v27 = __PAIR64__(a3, a2);
    v9 = a1[16];
    v10 = a1 + 14;
    v11 = v5 + 1;
    if ( (unsigned __int64)&v27 < v6 || (unsigned __int64)&v27 >= v6 + 8 * v9 )
    {
      if ( v9 < v11 )
      {
        v14 = qvector_reserve(v10, 0, v5 + 1, 8);
        v15 = a1[16];
        v16 = (__int64 *)a1[14];
        a1[16] = v9;
        v6 = v14;
        v17 = a1[15] - 1LL;
        if ( v17 >= 0 )
        {
          v18 = v6;
          do
          {
            v19 = *v16;
            v18 += 8LL;
            ++v16;
            *(_QWORD *)(v18 - 8) = v19;
            v20 = v17-- == 0;
          }
          while ( !v20 );
          v16 = (__int64 *)a1[14];
        }
        qfree(v16);
        a1[14] = v6;
        v5 = a1[15];
        a1[16] = v15;
      }
      *(_QWORD *)(v6 + 8 * v5) = v27;
    }
    else
    {
      if ( v9 < v11 )
      {
        v21 = qvector_reserve(v10, 0, v5 + 1, 8);
        v22 = a1[16];
        v23 = (__int64 *)a1[14];
        a1[16] = v9;
        v6 = v21;
        v24 = a1[15] - 1LL;
        if ( v24 >= 0 )
        {
          v25 = v6;
          do
          {
            v26 = *v23;
            v25 += 8LL;
            ++v23;
            *(_QWORD *)(v25 - 8) = v26;
            v20 = v24-- == 0;
          }
          while ( !v20 );
          v23 = (__int64 *)a1[14];
        }
        qfree(v23);
        a1[14] = v6;
        v5 = a1[15];
        a1[16] = v22;
      }
      v12 = (unsigned int *)(v6 + 8 * v5);
      *v12 = a2;
      v12[1] = a3;
    }
    ++a1[15];
  }
  return v28 - __readfsqword(0x28u);
}
