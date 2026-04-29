__int64 __fastcall sub_201940(__int64 *a1, unsigned __int8 *a2, __int64 a3, char a4, int a5, int a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rdx
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  char v14; // r14
  char v15; // al
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v22[3] = __readfsqword(0x28u);
  if ( a4 )
  {
    v6 = *a2;
    if ( (unsigned __int8)v6 <= 0xFu )
    {
      v8 = 32802;
      if ( _bittest64(&v8, v6) )
      {
        sub_127FE0(a1[2], (__int64)&v21, (__int64)a2, 0, a5, a6, 0, 0, 0, 0, 0);
        v9 = (__int64 *)a1[6];
        v14 = sub_64640(v9, &v21, v10, v11, v12, v13);
        v15 = sub_317C60(v9 + 2, v22);
        if ( v14 || v15 )
        {
          v17 = (__int64 *)a1[7];
          v18 = v17[1];
          v19 = *v17;
          if ( v17[2] < (unsigned __int64)(v18 + 1) )
          {
            v20 = qvector_reserve((__int64)v17, v19, v18 + 1, 8);
            *v17 = v20;
            v19 = v20;
            v18 = v17[1];
          }
          *(_QWORD *)(v19 + 8 * v18) = a2;
          ++v17[1];
        }
        if ( v22[0] )
        {
          v22[1] = 0;
          qfree(v22[0]);
        }
        qfree(v21);
      }
    }
  }
  return 0;
}
