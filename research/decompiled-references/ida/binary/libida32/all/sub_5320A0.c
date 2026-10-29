__int64 __fastcall sub_5320A0(__int64 *a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r14
  __int64 v8; // rbp
  __int64 *v9; // rdi
  unsigned int v10; // eax
  char *v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // rbp
  char *v15; // rbx
  void *v16; // rdi
  void *v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 8) <= 1u )
    return 0;
  v4 = *a2;
  if ( *a2 <= 0xFF
    || (v19 = *(_QWORD *)(*a1 + 1632), v8 = sub_51B750(v19, *a2), sub_51B8E0(v19, v4), !v8)
    || (v9 = *(__int64 **)(v8 + 40)) == nullptr
    || *(_QWORD *)(v8 + 32) && (~(unsigned __int8)*(_WORD *)(v8 + 68) & 0x70) != 0 )
  {
    ptr = nullptr;
    v21 = 0;
    sub_520270((__int64 *)&ptr, (const char *)a3);
    v10 = sub_531EC0(a1, a2, (__int64)&ptr);
    v11 = (char *)ptr;
    v12 = v10;
    if ( ptr )
    {
      v13 = v21;
      if ( (_QWORD)v21 )
      {
        v14 = 0;
        do
        {
          v15 = &v11[48 * v14];
          v16 = *((void **)v15 + 3);
          if ( v16 )
          {
            *((_QWORD *)v15 + 4) = 0;
            qfree(v16);
          }
          v17 = *(void **)v15;
          if ( *(_QWORD *)v15 )
          {
            *((_QWORD *)v15 + 1) = 0;
            qfree(v17);
          }
          ++v14;
          v11 = (char *)ptr;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v21 = 0;
      qfree(v11);
    }
    return v12;
  }
  return sub_5203F0(v9, a3, a4);
}

