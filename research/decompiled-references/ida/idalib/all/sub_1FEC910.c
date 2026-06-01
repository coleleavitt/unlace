__m128 *__fastcall sub_1FEC910(
        __m128 *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v13; // r15
  _QWORD **v14; // rax
  __int64 v15; // rdx
  char *v16; // rsi
  __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  void *v19; // rdi
  __int64 *v21; // [rsp+0h] [rbp-78h] BYREF
  void **v22; // [rsp+8h] [rbp-70h]
  _QWORD v23[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v24[2]; // [rsp+20h] [rbp-58h] BYREF
  void *v25; // [rsp+30h] [rbp-48h]

  *(_OWORD *)v24 = 0;
  v25 = nullptr;
  v9 = (unsigned __int16 *)((char *)a7 + 3 * a8);
  if ( a7 == v9 )
  {
    v18 = 0;
    v17 = nullptr;
LABEL_7:
    v21 = v17;
    a1[1].m128_u64[0] = v18;
    a1[1].m128_i8[8] = 1;
    *a1 = _mm_loadh_ps((const double *)&v21);
  }
  else
  {
    v21 = v23;
    v13 = a7;
    v22 = v24;
    while ( 1 )
    {
      v14 = sub_1FEBB80(a2, a3, a4, *v13 | ((unsigned __int64)*((unsigned __int8 *)v13 + 2) << 16));
      v23[1] = v15;
      v23[0] = v14;
      if ( !(_BYTE)v15 )
        break;
      if ( v24[1] == v25 )
      {
        v13 = (unsigned __int16 *)((char *)v13 + 3);
        sub_1FE6F90((__int64)v22, v24[1], v21);
        if ( v9 == v13 )
        {
LABEL_6:
          v17 = (__int64 *)v24[1];
          v18 = (unsigned __int64)v25;
          goto LABEL_7;
        }
      }
      else
      {
        v16 = (char *)v24[1] + 8;
        v13 = (unsigned __int16 *)((char *)v13 + 3);
        *(_QWORD *)v24[1] = v23[0];
        v24[1] = v16;
        if ( v9 == v13 )
          goto LABEL_6;
      }
    }
    v19 = v24[0];
    a1[1].m128_i8[8] = 0;
    if ( v19 )
      operator delete(v19);
  }
  return a1;
}
