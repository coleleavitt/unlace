__int64 __fastcall sub_179140(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // r12d
  __int64 v6; // rbx
  int v7; // r12d
  int v8; // r12d
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r12
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  char v14; // al
  __m128i v15; // [rsp+10h] [rbp-178h] BYREF
  __int64 *v16; // [rsp+20h] [rbp-168h]
  __int64 *v17; // [rsp+28h] [rbp-160h]
  __int64 v18[2]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v19[4]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v20[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v21; // [rsp+70h] [rbp-118h] BYREF
  __m128i v22; // [rsp+78h] [rbp-110h]
  __int64 v23[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-E8h]
  __m128i v25; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v26[6]; // [rsp+C0h] [rbp-C8h] BYREF
  int v27; // [rsp+F0h] [rbp-98h]
  _QWORD v28[3]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v29; // [rsp+118h] [rbp-70h]
  __int64 v30; // [rsp+120h] [rbp-68h]
  char v31; // [rsp+128h] [rbp-60h]
  __int64 v32; // [rsp+130h] [rbp-58h]
  int v33; // [rsp+138h] [rbp-50h]
  unsigned __int64 v34; // [rsp+148h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a2 && *(_QWORD *)(a2 + 8) )
  {
    sub_124680((__int64)v18, a1, a2, 1u);
    sub_127A20((__int64)v20, a1, a2, 0, v2, v3);
    if ( (unsigned __int8)sub_64780(v18, v20) || (v17 = &v21, v16 = v19, v4 = sub_318470(v19, &v21), (_BYTE)v4) )
    {
      v4 = 0;
    }
    else
    {
      sub_64280(v18, v20);
      sub_316CB0(v16, &v21);
      v26[5] = a2;
      v32 = a2;
      v6 = *(_QWORD *)(a2 + 8);
      v26[0] = &off_4DE068;
      v26[1] = 0;
      v26[3] = 0;
      v26[4] = 0;
      v27 = 0;
      v26[2] = a1;
      v28[1] = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v28[0] = &off_4DE090;
      v33 = 0;
      v28[2] = a1;
      if ( v6 )
      {
        v7 = 0;
        do
        {
          sub_11F760((_BYTE *)v6, v26);
          if ( v27 != v7 )
            sub_167810(a1, v6, 6);
          v29 = v6;
          v8 = v33;
          sub_11E900((_BYTE *)v6, (__int64)v28);
          if ( v33 != v8 )
            sub_167810(a1, v6, 6);
          sub_127A20((__int64)v23, a1, v6, 1, v9, v10);
          sub_648D0(v20, v23);
          v11 = v24;
          v24 = 0;
          v12 = _mm_loadu_si128(&v25);
          v25 = 0;
          if ( v21 )
          {
            v15 = v12;
            v22.m128i_i64[0] = 0;
            qfree(v21);
            v13 = _mm_load_si128(&v15);
            v21 = v11;
            v22 = v13;
            if ( v24 )
            {
              v25.m128i_i64[0] = 0;
              qfree(v24);
            }
          }
          else
          {
            v21 = v11;
            v22 = v12;
          }
          qfree(v23[0]);
          if ( (unsigned __int8)sub_64780(v18, v20) )
            break;
          v14 = sub_318470(v16, v17);
          v7 = v27;
          if ( v14 )
            break;
          v6 = *(_QWORD *)(v6 + 8);
        }
        while ( v6 );
        v4 = 1;
        if ( !v27 )
          LOBYTE(v4) = v33 != 0;
      }
    }
    if ( v21 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v21);
    }
    qfree(v20[0]);
    if ( v19[0] )
    {
      v19[1] = 0;
      qfree(v19[0]);
    }
    qfree(v18[0]);
  }
  else
  {
    return 0;
  }
  return v4;
}
