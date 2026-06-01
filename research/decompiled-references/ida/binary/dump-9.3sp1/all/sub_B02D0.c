bool __fastcall sub_B02D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v9; // rdx
  bool result; // al
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rbx
  void *v15; // rax
  const void *v16; // rsi
  __int64 v17[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a4 + 8);
  v20 = __readfsqword(0x28u);
  v9 = sub_A9AA0(a1, a2, v7, a5, 1u);
  result = 0;
  if ( !v9 )
  {
    v11 = *(_QWORD *)(a4 + 8);
    if ( a5 == v11 )
    {
      return 1;
    }
    else
    {
      sub_64000(v17, a3);
      v13 = *(_QWORD *)(a3 + 24);
      v18 = 0;
      v19 = 0;
      if ( v13 )
      {
        v15 = (void *)qalloc_or_throw(16 * v13, a3, 16 * v13, v12);
        v16 = *(const void **)(a3 + 16);
        v18 = (__int64)v15;
        *((_QWORD *)&v19 + 1) = v13;
        memcpy(v15, v16, 16 * v13);
        *(_QWORD *)&v19 = v13;
      }
      v14 = sub_A9D90(a1, v17, v11, a5, 1u);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      qfree(v17[0]);
      return v14 == 0;
    }
  }
  return result;
}
