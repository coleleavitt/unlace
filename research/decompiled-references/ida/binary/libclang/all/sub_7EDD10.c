__int64 __fastcall sub_7EDD10(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // r15
  __m128i v13; // rax
  __int64 v14; // rdx
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+10h] [rbp-78h]
  __m128i v17; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]

  v4 = sub_8C4680(a2);
  v5 = sub_7EBA80(a1, v4);
  if ( (_BYTE)v5 )
  {
    v6 = v5;
    sub_AC4830(&v17);
    v11 = v19;
    v12 = v20;
    v15 = _mm_load_si128(&v17);
    v16 = v18;
    v13 = v15;
LABEL_5:
    if ( v11 == v13.m128i_i64[0] )
    {
LABEL_11:
      if ( v12 == v13.m128i_i64[1] )
        return v6;
    }
    v14 = v13.m128i_i8[8] & 3;
    if ( (_DWORD)v14 )
      v13.m128i_i64[0] = sub_ACE280(&v15, a2, v14, v8, v9, v10);
    while ( 1 )
    {
      a2 = *(_QWORD *)v13.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v13.m128i_i64[0], a3) )
        break;
      v13.m128i_i64[1] = v15.m128i_i64[1];
      if ( (v15.m128i_i8[8] & 3) != 0 )
      {
        if ( v15.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v15, 1);
        }
        else
        {
          sub_ACE150(&v15);
        }
        v13 = v15;
        goto LABEL_5;
      }
      v13.m128i_i64[0] = v15.m128i_i64[0] + 8;
      v15.m128i_i64[0] = v13.m128i_i64[0];
      if ( v13.m128i_i64[0] == v11 )
        goto LABEL_11;
    }
  }
  return 0;
}

