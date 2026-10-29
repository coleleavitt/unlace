__int64 __fastcall sub_2045100(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i *v10; // r14
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 (__fastcall ***v15)(); // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rax
  __int64 v25; // rsi
  _BYTE *v26; // rax
  __m128i *v27; // rax
  __int64 (__fastcall ***v28)(); // [rsp-18h] [rbp-4C8h]
  __int64 *v29; // [rsp+0h] [rbp-4B0h] BYREF
  __m128 v30; // [rsp+8h] [rbp-4A8h] BYREF
  __m128i *v31; // [rsp+18h] [rbp-498h]
  __int64 v32; // [rsp+20h] [rbp-490h]
  __int64 (__fastcall **v33)(); // [rsp+28h] [rbp-488h] BYREF
  int v34; // [rsp+30h] [rbp-480h]
  __int128 v35; // [rsp+38h] [rbp-478h]
  _BYTE *v36; // [rsp+48h] [rbp-468h]
  char v37; // [rsp+50h] [rbp-460h]
  int v38; // [rsp+54h] [rbp-45Ch]
  __int64 v39; // [rsp+58h] [rbp-458h]
  __int64 v40; // [rsp+60h] [rbp-450h]
  _BYTE *v41; // [rsp+70h] [rbp-440h]
  __m128i si128; // [rsp+78h] [rbp-438h]
  _BYTE v43[16]; // [rsp+88h] [rbp-428h] BYREF
  __m128i v44[23]; // [rsp+98h] [rbp-418h] BYREF
  __int64 v45[3]; // [rsp+208h] [rbp-2A8h] BYREF
  int v46; // [rsp+220h] [rbp-290h]
  __int64 v47; // [rsp+228h] [rbp-288h]
  __int64 v48; // [rsp+230h] [rbp-280h]
  int v49; // [rsp+238h] [rbp-278h]
  __int64 v50; // [rsp+240h] [rbp-270h]
  __int64 v51; // [rsp+248h] [rbp-268h]
  int v52; // [rsp+250h] [rbp-260h]
  __int64 v53; // [rsp+258h] [rbp-258h]
  __int64 v54; // [rsp+260h] [rbp-250h]
  int v55; // [rsp+268h] [rbp-248h]
  __int128 v56; // [rsp+270h] [rbp-240h]
  __int64 v57; // [rsp+280h] [rbp-230h]
  char v58; // [rsp+288h] [rbp-228h]
  __int64 v59; // [rsp+290h] [rbp-220h]
  __int64 v60; // [rsp+298h] [rbp-218h]
  int v61; // [rsp+2A0h] [rbp-210h]
  __int128 v62; // [rsp+2A8h] [rbp-208h]
  __int64 v63; // [rsp+2B8h] [rbp-1F8h]

  v35 = 0;
  LODWORD(v29) = a4;
  v33 = &off_2C75A88;
  v41 = v43;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  v34 = 0;
  v37 = 0;
  v38 = 1;
  v36 = nullptr;
  v39 = 0;
  v40 = 0;
  v43[8] = 0;
  sub_202EDF0((__int64)&v33, a2, (__int64)a3, a4, a5, a6);
  sub_20326F0(v44, 0, 0);
  if ( a3[1].m128i_i8[0] )
  {
    if ( sub_2032850(a3) )
    {
      if ( a3[1].m128i_i8[0] )
        v10 = sub_2032850(a3);
      else
        v10 = (__m128i *)a3[2].m128i_i64[1];
LABEL_3:
      v11 = *(_BYTE *)a1;
      if ( *(_BYTE *)a1 > 0x1Cu )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else
  {
    v10 = (__m128i *)a3[2].m128i_i64[1];
    if ( v10 )
      goto LABEL_3;
  }
  v11 = *(_BYTE *)a1;
  v10 = v44;
  if ( *(_BYTE *)a1 > 0x1Cu )
  {
LABEL_4:
    v12 = *(_QWORD *)(a1 + 40);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 72);
      if ( v13 )
        sub_2032E40(a3, v13);
    }
    v14 = sub_202ED50((unsigned __int8 *)a1);
    sub_2036650((__int64)v45, (__int64)&v33, (__int64)v10, v14, 0, (char)v29, 0);
    v15 = (__int64 (__fastcall ***)())a1;
    sub_2041FC0(v45, (unsigned __int8 *)a1);
    sub_202F280((__int64)v45);
    goto LABEL_8;
  }
LABEL_10:
  if ( v11 == 23 )
  {
    v21 = *(_QWORD *)(a1 + 72);
    if ( v21 )
      sub_2032E40(a3, v21);
    v22 = sub_202ED50((unsigned __int8 *)a1);
    sub_2036650((__int64)v45, (__int64)&v33, (__int64)v10, v22, 0, (char)v29, 0);
    sub_2043D50(v45, a1);
    sub_202F280((__int64)v45);
    v15 = v28;
  }
  else if ( (unsigned __int8)(v11 - 13) > 3u )
  {
    if ( v11 == 24 )
    {
      v24 = sub_202ED50((unsigned __int8 *)a1);
      v15 = *(__int64 (__fastcall ****)())(a1 + 24);
      sub_203FB60(a2, v15, a3, v24, 0, 0);
    }
    else if ( v11 > 0x15u )
    {
      v15 = &v33;
      sub_20414F0((unsigned __int8 *)a1, (__int64)&v33, 1, (__int64)a3, v8, v9);
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 8);
      memset(v45, 0, sizeof(v45));
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      sub_2034FF0((__int64)v45, v25, (__int64)&v33);
      v26 = v36;
      if ( (unsigned __int64)v36 >= *((_QWORD *)&v35 + 1) )
      {
        sub_227BA10(&v33, 32);
      }
      else
      {
        ++v36;
        *v26 = 32;
      }
      if ( a3[1].m128i_i8[0] )
        v27 = sub_2032850(a3);
      else
        v27 = (__m128i *)a3[2].m128i_i64[1];
      v15 = (__int64 (__fastcall ***)())a1;
      v31 = v27;
      v32 = 0;
      v29 = v45;
      v30 = _mm_loadh_ps((const double *)&v29);
      sub_2038DE0((__int64)&v33, (char *)a1, (__int64)&v30);
      sub_202ECB0((__int64)v45);
    }
  }
  else
  {
    sub_2036650((__int64)v45, (__int64)&v33, (__int64)v10, *(_QWORD *)(a1 + 40), 0, (char)v29, 0);
    v23 = *(_BYTE *)a1;
    v15 = (__int64 (__fastcall ***)())a1;
    if ( *(_BYTE *)a1 == 16 )
    {
      sub_20418A0(v45, a1);
    }
    else if ( v23 == 13 )
    {
      sub_2044110(v45, a1);
    }
    else if ( v23 == 14 )
    {
      sub_2040ED0(v45, a1);
    }
    else
    {
      sub_2041280(v45, a1);
    }
    sub_202F280((__int64)v45);
  }
LABEL_8:
  sub_202EF80((__int64)v44);
  return sub_20322F0((__int64)&v33, (__int64)v15, v16, v17, v18, v19);
}
