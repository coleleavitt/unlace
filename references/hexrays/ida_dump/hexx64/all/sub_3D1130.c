_QWORD *__fastcall sub_3D1130(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 i; // r12
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 j; // r12
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v21; // [rsp+0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+10h] [rbp-50h] BYREF
  __int64 v24; // [rsp+18h] [rbp-48h]
  __int128 v25; // [rsp+20h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-28h]

  v26 = __readfsqword(0x28u);
  v23 = a3;
  v24 = 0;
  v21 = 0;
  v25 = 0;
  sub_14BF70(&v22, a2, &v23, a5, &v21, 0, 67, a4);
  v6 = (__int64 *)v22;
  if ( v22 )
  {
    if ( (*(_DWORD *)(v22 + 104))-- == 1 )
    {
      sub_258970(v6);
      v8 = v6[23];
      if ( v8 )
      {
        v9 = v6[24];
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = (__int64 *)(v8 + 24 * i);
            v12 = *v11;
            if ( *v11 )
            {
              v11[1] = 0;
              qfree(v12);
              v8 = v6[23];
            }
          }
        }
        v6[24] = 0;
        qfree(v8);
      }
      v13 = v6[20];
      if ( v13 )
      {
        v6[21] = 0;
        qfree(v13);
      }
      v14 = v6[16];
      if ( v14 )
      {
        v15 = v6[17];
        if ( v15 )
        {
          for ( j = 0; j != v15; ++j )
          {
            v17 = (__int64 *)(v14 + 32 * j);
            v18 = *v17;
            if ( *v17 )
            {
              v17[1] = 0;
              qfree(v18);
              v14 = v6[16];
            }
          }
        }
        v6[17] = 0;
        qfree(v14);
      }
      sub_255050((__int64)(v6 + 2));
      j__qfree(v6);
    }
  }
  v19 = v24;
  *a1 = v21;
  if ( v19 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v19);
  }
  return a1;
}
