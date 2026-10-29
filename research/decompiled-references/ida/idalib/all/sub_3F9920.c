unsigned __int64 __fastcall sub_3F9920(__int64 *a1, __int64 *a2, void *a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rdi
  __int128 v9; // kr00_16
  __int64 v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // [rsp+7h] [rbp-1A1h]
  __int128 v20; // [rsp+20h] [rbp-188h] BYREF
  void *ptr; // [rsp+30h] [rbp-178h] BYREF
  __int128 v22; // [rsp+38h] [rbp-170h]
  __m128i v23; // [rsp+50h] [rbp-158h] BYREF
  unsigned __int64 v24; // [rsp+168h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !sub_3C9470(a1, &v23, (unsigned __int64)a3, a4, a5) )
    return v24 - __readfsqword(0x28u);
  v8 = *a1;
  v22 = 0;
  ptr = nullptr;
  v20 = 0;
  sub_630CA0(v8, 26, &v20, 16);
  v9 = v20;
  v16 = is_stroff(a5, a4);
  if ( !v16 )
  {
    if ( (unsigned __int8)is_enum(a5, a4) )
    {
      if ( v23.m128i_i64[0] >= (unsigned __int64)v9 && v23.m128i_i64[0] < *((_QWORD *)&v9 + 1) )
        goto LABEL_21;
    }
    else if ( (a5 & 0x600) != 0x400
           || (a5 & 0xF0000000) != 0x60000000
           || v23.m128i_i64[0] >= (unsigned __int64)v9 && v23.m128i_i64[0] < *((_QWORD *)&v9 + 1) )
    {
      goto LABEL_21;
    }
    sub_35A910((__int64 *)&ptr);
    if ( (unsigned __int64)v22 <= 1 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v22 = 0;
        qfree(ptr);
      }
LABEL_14:
      sub_3D0D10(a1, a3, a4);
      return v24 - __readfsqword(0x28u);
    }
LABEL_17:
    v12 = a2[1];
    v13 = *a2;
    if ( a2[2] < (unsigned __int64)(v12 + 1) )
    {
      v15 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v15;
      v12 = a2[1];
      v13 = v15;
    }
    v14 = v13 + 24 * v12;
    *(_QWORD *)v14 = 0;
    *(_OWORD *)(v14 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v14);
    goto LABEL_11;
  }
  if ( v23.m128i_i32[0] <= 0 )
  {
LABEL_21:
    if ( (unsigned __int64)v22 <= 1 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v22 = 0;
        qfree(ptr);
      }
      goto LABEL_24;
    }
    v16 = 1;
    goto LABEL_17;
  }
  v10 = 0;
  while ( 1 )
  {
    if ( v23.m128i_i64[v10 + 1] >= (unsigned __int64)v9 && v23.m128i_i64[v10 + 1] < *((_QWORD *)&v9 + 1) )
      goto LABEL_6;
    if ( v10 )
      break;
    sub_35A910((__int64 *)&ptr);
    v16 = 0;
LABEL_6:
    if ( v23.m128i_i32[0] <= (int)++v10 )
      goto LABEL_10;
  }
  sub_35A790((char **)&ptr);
  v23.m128i_i32[0] = v10;
LABEL_10:
  if ( (unsigned __int64)v22 > 1 )
    goto LABEL_17;
LABEL_11:
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  if ( !v16 )
    goto LABEL_14;
LABEL_24:
  sub_3CA2F0(a1, (__int64)a3, a4, a5, &v23, 1);
  return v24 - __readfsqword(0x28u);
}
