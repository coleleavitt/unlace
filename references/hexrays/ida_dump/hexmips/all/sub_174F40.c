__int64 __fastcall sub_174F40(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbx
  int v5; // r12d
  int v6; // r12d
  __int64 v7; // r12
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  char v10; // al
  __m128i v11; // [rsp+10h] [rbp-178h] BYREF
  _QWORD *v12; // [rsp+20h] [rbp-168h]
  __int64 *v13; // [rsp+28h] [rbp-160h]
  __int64 v14[2]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v16[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v17; // [rsp+70h] [rbp-118h] BYREF
  __m128i v18; // [rsp+78h] [rbp-110h]
  __int64 v19[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-E8h]
  __m128i v21; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v22[6]; // [rsp+C0h] [rbp-C8h] BYREF
  int v23; // [rsp+F0h] [rbp-98h]
  _QWORD v24[3]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v25; // [rsp+118h] [rbp-70h]
  __int64 v26; // [rsp+120h] [rbp-68h]
  char v27; // [rsp+128h] [rbp-60h]
  __int64 v28; // [rsp+130h] [rbp-58h]
  int v29; // [rsp+138h] [rbp-50h]
  unsigned __int64 v30; // [rsp+148h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a2 && *(_QWORD *)(a2 + 8) )
  {
    sub_120480((__int64)v14, a1, a2, 1u);
    sub_123820((__int64)v16, a1, a2, 0);
    if ( (unsigned __int8)sub_60580(v14, v16) || (v13 = &v17, v12 = v15, v2 = sub_3136F0(v15, &v17), (_BYTE)v2) )
    {
      v2 = 0;
    }
    else
    {
      sub_60080(v14, v16);
      sub_311F30(v12, &v17);
      v22[5] = a2;
      v28 = a2;
      v4 = *(_QWORD *)(a2 + 8);
      v22[0] = &off_4BE7E8;
      v22[1] = 0;
      v22[3] = 0;
      v22[4] = 0;
      v23 = 0;
      v22[2] = a1;
      v24[1] = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v24[0] = &off_4BE810;
      v29 = 0;
      v24[2] = a1;
      if ( v4 )
      {
        v5 = 0;
        do
        {
          sub_11B560((_BYTE *)v4, v22);
          if ( v23 != v5 )
            sub_163610(a1, v4, 6);
          v25 = v4;
          v6 = v29;
          sub_11A700((_BYTE *)v4, (__int64)v24);
          if ( v29 != v6 )
            sub_163610(a1, v4, 6);
          sub_123820((__int64)v19, a1, v4, 1u);
          sub_606D0(v16, v19);
          v7 = v20;
          v20 = 0;
          v8 = _mm_loadu_si128(&v21);
          v21 = 0;
          if ( v17 )
          {
            v11 = v8;
            v18.m128i_i64[0] = 0;
            qfree(v17);
            v9 = _mm_load_si128(&v11);
            v17 = v7;
            v18 = v9;
            if ( v20 )
            {
              v21.m128i_i64[0] = 0;
              qfree(v20);
            }
          }
          else
          {
            v17 = v7;
            v18 = v8;
          }
          qfree(v19[0]);
          if ( (unsigned __int8)sub_60580(v14, v16) )
            break;
          v10 = sub_3136F0(v12, v13);
          v5 = v23;
          if ( v10 )
            break;
          v4 = *(_QWORD *)(v4 + 8);
        }
        while ( v4 );
        v2 = 1;
        if ( !v23 )
          LOBYTE(v2) = v29 != 0;
      }
    }
    if ( v17 )
    {
      v18.m128i_i64[0] = 0;
      qfree(v17);
    }
    qfree(v16[0]);
    if ( v15[0] )
    {
      v15[1] = 0;
      qfree(v15[0]);
    }
    qfree(v14[0]);
  }
  else
  {
    return 0;
  }
  return v2;
}
