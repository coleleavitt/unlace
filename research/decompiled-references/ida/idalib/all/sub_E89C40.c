__int64 __fastcall sub_E89C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  char v7; // al
  char v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  size_t v12; // r8
  __int64 v13; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v19[3]; // [rsp+10h] [rbp-368h] BYREF
  int v20; // [rsp+28h] [rbp-350h]
  __int64 v21; // [rsp+30h] [rbp-348h]
  const char *v22; // [rsp+38h] [rbp-340h]
  __int64 (__fastcall **v23)(); // [rsp+40h] [rbp-338h] BYREF
  int v24; // [rsp+48h] [rbp-330h]
  __int128 v25; // [rsp+50h] [rbp-328h]
  __int64 v26; // [rsp+60h] [rbp-318h]
  char v27; // [rsp+68h] [rbp-310h]
  int v28; // [rsp+6Ch] [rbp-30Ch]
  __int64 **v29; // [rsp+70h] [rbp-308h]
  __int64 v30; // [rsp+78h] [rbp-300h]
  __int64 *v31; // [rsp+80h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-2F0h]
  __int64 v33; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-298h] BYREF
  __int64 (__fastcall ***v35)(); // [rsp+E8h] [rbp-290h]
  __int64 v36; // [rsp+F0h] [rbp-288h]
  int v37; // [rsp+F8h] [rbp-280h]
  _BYTE *v38; // [rsp+100h] [rbp-278h]
  __int64 v39; // [rsp+108h] [rbp-270h]
  _BYTE v40[320]; // [rsp+110h] [rbp-268h] BYREF
  __int64 v41; // [rsp+250h] [rbp-128h]
  __int64 v42; // [rsp+258h] [rbp-120h]
  int v43; // [rsp+260h] [rbp-118h]
  __int64 v44; // [rsp+268h] [rbp-110h]
  __int64 v45; // [rsp+270h] [rbp-108h]
  int v46; // [rsp+278h] [rbp-100h]
  __int64 v47; // [rsp+280h] [rbp-F8h]
  __int64 v48; // [rsp+288h] [rbp-F0h]
  int v49; // [rsp+290h] [rbp-E8h]
  __int128 v50; // [rsp+298h] [rbp-E0h] BYREF
  _BYTE *v51; // [rsp+2A8h] [rbp-D0h]
  __int64 v52; // [rsp+2B0h] [rbp-C8h]
  _BYTE v53[32]; // [rsp+2B8h] [rbp-C0h] BYREF
  __m128i *v54; // [rsp+2D8h] [rbp-A0h]
  __int64 v55; // [rsp+2E0h] [rbp-98h]
  __m128i v56; // [rsp+2E8h] [rbp-90h] BYREF
  __int128 *v57; // [rsp+2F8h] [rbp-80h]
  int v58; // [rsp+308h] [rbp-70h] BYREF
  __int64 v59; // [rsp+310h] [rbp-68h]
  int *v60; // [rsp+318h] [rbp-60h]
  int *v61; // [rsp+320h] [rbp-58h]
  __int64 v62; // [rsp+328h] [rbp-50h]
  bool v63; // [rsp+330h] [rbp-48h]

  v5 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 2312LL);
  sub_2233820(v19);
  v21 = v6;
  v25 = 0;
  v19[0] = &off_2B4B368;
  v22 = "Mangling declaration";
  v19[2] = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v20 = 0;
  v23 = &off_2BEBEE0;
  v29 = &v31;
  v24 = 2;
  v27 = 0;
  v28 = 1;
  v26 = 0;
  sub_227B8B0(&v23, 0, 0, 0);
  v30 = a4;
  v23 = &off_2C04F98;
  v31 = &v33;
  v7 = *(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v8 = v7 & 0x7F;
  if ( v8 == 38 )
  {
    v34 = a1;
    v35 = &v23;
    v9 = sub_B77AF0(v5);
    if ( v9 )
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 48) + 32LL))(*(_QWORD *)(v9 + 48));
    else
      v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 32LL))(v5);
    v36 = v10;
    v38 = v40;
    v12 = 1;
    v39 = 0xA00000000LL;
    v51 = v53;
    v52 = 0x400000000LL;
    v54 = &v56;
    v57 = &v50;
    v50 = 0;
    v60 = &v58;
    v61 = &v58;
    v13 = *(_QWORD *)(a1 + 8);
    v37 = a2 & 7;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v55 = 0;
    v56 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    v58 = 0;
    v59 = 0;
    v62 = 0;
    v63 = *(_BYTE *)(*(_QWORD *)(v13 + 17448) + 8LL) == 64;
  }
  else
  {
    if ( v8 == 36 )
    {
      v34 = a1;
      v35 = &v23;
      v15 = sub_B77AF0(v5);
      if ( v15 )
        v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 48) + 32LL))(*(_QWORD *)(v15 + 48));
      else
        v16 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 32LL))(v5);
      v36 = v16;
      v38 = v40;
      v39 = 0xA00000000LL;
      v51 = v53;
      v52 = 0x400000000LL;
      v54 = &v56;
      v57 = &v50;
      v50 = 0;
      v60 = &v58;
      v61 = &v58;
      v17 = *(_QWORD *)(a1 + 8);
      v37 = a2 & 7;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v55 = 0;
      v56 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
      v58 = 0;
      v59 = 0;
      v62 = 0;
      v63 = *(_BYTE *)(*(_QWORD *)(v17 + 17448) + 8LL) == 64;
    }
    else
    {
      sub_E78640((__int64)&v34, a1, (__int64)&v23);
    }
    v12 = j__strlen("?");
  }
  sub_E89720(&v34, a2, a3, "?", v12, v11);
  sub_E7AB30((__int64)&v34);
  sub_E7A440(&v23);
  v19[0] = &off_2B4B368;
  return sub_22338A0(v19);
}
