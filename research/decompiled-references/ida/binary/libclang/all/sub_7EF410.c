__int64 __fastcall sub_7EF410(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r15
  __m128i v15; // rax
  __int64 v16; // rdx
  __m128i v17; // [rsp+0h] [rbp-88h] BYREF
  __int64 v18; // [rsp+10h] [rbp-78h]
  __m128i v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]

  v7 = sub_7EF1F0((__int64)a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), a4, a5, a6);
  if ( (_BYTE)v7 )
  {
    v8 = v7;
    sub_AC4830(&v19);
    v13 = v21;
    v14 = v22;
    v17 = _mm_load_si128(&v19);
    v18 = v20;
    v15 = v17;
LABEL_5:
    if ( v13 == v15.m128i_i64[0] )
    {
LABEL_11:
      if ( v14 == v15.m128i_i64[1] )
        return v8;
    }
    v16 = v15.m128i_i8[8] & 3;
    if ( (_DWORD)v16 )
      v15.m128i_i64[0] = sub_ACE280(&v17, a2, v16, v10, v11, v12);
    while ( 1 )
    {
      a2 = *(_QWORD *)v15.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v15.m128i_i64[0], a3) )
        break;
      v15.m128i_i64[1] = v17.m128i_i64[1];
      if ( (v17.m128i_i8[8] & 3) != 0 )
      {
        if ( v17.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v17, 1);
        }
        else
        {
          sub_ACE150(&v17);
        }
        v15 = v17;
        goto LABEL_5;
      }
      v15.m128i_i64[0] = v17.m128i_i64[0] + 8;
      v17.m128i_i64[0] = v15.m128i_i64[0];
      if ( v15.m128i_i64[0] == v13 )
        goto LABEL_11;
    }
  }
  return 0;
}

