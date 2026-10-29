__int64 __fastcall sub_7EFDD0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // r15
  __m128i v16; // rax
  __int64 v17; // rdx
  __int64 *v19; // rax
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h]
  __m128i v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]

  v7 = sub_7EF1F0((__int64)a1, a2[4], a2[5], a4, a5, a6);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = v7;
  v9 = (__int64 *)a2[6];
  if ( v9 )
  {
    if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v9, (__int64)(v9 + 1)) )
      return 0;
  }
  v10 = a2[8];
  if ( v10 )
  {
    if ( (v10 & 4) == 0 )
    {
      v19 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v19 )
      {
        if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v19, (__int64)(v19 + 1)) )
          return 0;
      }
    }
  }
  sub_AC4830(&v22);
  v14 = v24;
  v15 = v25;
  v21 = v23;
  v16 = _mm_load_si128(&v22);
  v20 = v16;
LABEL_7:
  if ( v14 != v16.m128i_i64[0] )
  {
LABEL_8:
    v17 = v16.m128i_i8[8] & 3;
    if ( (_DWORD)v17 )
      v16.m128i_i64[0] = sub_ACE280(&v20, a2, v17, v11, v12, v13);
    do
    {
      a2 = *(__int64 **)v16.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v16.m128i_i64[0], a3) )
        return 0;
      v16.m128i_i64[1] = v20.m128i_i64[1];
      if ( (v20.m128i_i8[8] & 3) != 0 )
      {
        if ( v20.m128i_i64[1] <= 3uLL )
        {
          a2 = (_QWORD *)(&dword_0 + 1);
          sub_ACE0F0(&v20, 1);
        }
        else
        {
          sub_ACE150(&v20);
        }
        v16 = v20;
        goto LABEL_7;
      }
      v16.m128i_i64[0] = v20.m128i_i64[0] + 8;
      v20.m128i_i64[0] = v16.m128i_i64[0];
    }
    while ( v14 != v16.m128i_i64[0] );
  }
  if ( v15 != v16.m128i_i64[1] )
    goto LABEL_8;
  return v8;
}

