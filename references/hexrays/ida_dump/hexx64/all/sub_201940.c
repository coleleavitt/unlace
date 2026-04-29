__int64 __fastcall sub_201940(_QWORD *a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v8; // rdi
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
  __int64 v21[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a4 )
  {
    v4 = *a2;
    if ( (unsigned __int8)v4 <= 0xFu )
    {
      v6 = 32802;
      if ( _bittest64(&v6, v4) )
      {
        v8 = a1[2];
        v21[0] = 0;
        v21[1] = 0;
        v22 = 0;
        v23 = 0;
        sub_127FE0(v8, v21, (__int64)a2, 0);
        v9 = (__int64 *)a1[6];
        v14 = sub_64640(v9, v21, v10, v11, v12, v13);
        v15 = sub_317C60(v9 + 2, &v22);
        if ( v14 || v15 )
        {
          v17 = (__int64 *)a1[7];
          v18 = v17[1];
          v19 = *v17;
          if ( v17[2] < (unsigned __int64)(v18 + 1) )
          {
            v20 = qvector_reserve(v17, v19, v18 + 1, 8);
            *v17 = v20;
            v19 = v20;
            v18 = v17[1];
          }
          *(_QWORD *)(v19 + 8 * v18) = a2;
          ++v17[1];
        }
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v22);
        }
        qfree(v21[0]);
      }
    }
  }
  return 0;
}
