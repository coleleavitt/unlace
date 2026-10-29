__int64 __fastcall sub_2186CB0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  unsigned int v48; // [rsp+8h] [rbp-160h]
  size_t v49; // [rsp+8h] [rbp-160h]
  void *v50; // [rsp+10h] [rbp-158h] BYREF
  __int64 v51; // [rsp+18h] [rbp-150h]
  _BYTE v52[16]; // [rsp+20h] [rbp-148h] BYREF
  void *v53; // [rsp+30h] [rbp-138h] BYREF
  size_t v54; // [rsp+38h] [rbp-130h]
  _BYTE v55[16]; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int8 v56; // [rsp+50h] [rbp-118h]
  _QWORD v57[7]; // [rsp+60h] [rbp-108h] BYREF
  int v58; // [rsp+98h] [rbp-D0h]
  __int64 v59; // [rsp+A0h] [rbp-C8h]
  _QWORD v60[5]; // [rsp+A8h] [rbp-C0h] BYREF
  int v61; // [rsp+D0h] [rbp-98h]
  __int64 v62; // [rsp+D8h] [rbp-90h]
  __int128 v63; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-78h]
  __int64 v65; // [rsp+F8h] [rbp-70h]
  __int64 v66; // [rsp+100h] [rbp-68h]
  __int64 v67; // [rsp+108h] [rbp-60h]
  __int16 v68; // [rsp+110h] [rbp-58h]
  __int64 v69; // [rsp+118h] [rbp-50h]
  __int64 v70; // [rsp+120h] [rbp-48h]

  sub_22B0340(a1, &byte_22F0C30, 0);
  v2 = (__int64 *)sub_2227D10();
  v3 = *v2;
  v4 = v2[1];
  v57[2] = 7;
  v57[1] = "hexagon";
  v65 = v4;
  v68 = 1;
  v57[0] = &off_2C75B00;
  v5 = *a2;
  v57[3] = v60;
  v58 = 1065353216;
  v61 = 1065353216;
  v64 = v3;
  v57[4] = 1;
  v57[5] = 0;
  v57[6] = 0;
  v59 = 0;
  v60[0] = 0;
  v60[1] = &v63;
  v60[2] = 1;
  v60[3] = 0;
  v60[4] = 0;
  v62 = 0;
  v63 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  (*(void (__fastcall **)(void **, __int64 *, _QWORD *))(v5 + 520))(&v50, a2, v57);
  if ( v50 )
  {
    v53 = v50;
    v50 = nullptr;
    sub_A0E8E0((_QWORD **)&v53);
    if ( v53 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 8LL))(v53);
    if ( v50 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v50 + 8LL))(v50);
    goto LABEL_6;
  }
  v11 = sub_21831C0((__int64)v57, 4u, v6, v7, v8, v9);
  v15 = HIDWORD(v11);
  if ( BYTE4(v11) )
  {
    sub_2182C40((__int64)&v53, v11);
    if ( v56 )
    {
      sub_22B0360(a1, v53, v54, 1);
      if ( v56 )
      {
        if ( v53 != v55 )
          operator delete(v53);
      }
    }
  }
  v16 = sub_21831C0((__int64)v57, 5u, v15, v12, v13, v14);
  v20 = HIDWORD(v16);
  if ( BYTE4(v16) )
  {
    v48 = v16;
    sub_2182C40((__int64)&v53, v16);
    v20 = v56;
    if ( v48 > 0x3B )
    {
      if ( !v56 )
        goto LABEL_9;
      v43 = j__strlen("hvx");
      v50 = v52;
      v49 = v43;
      v51 = 0;
      v52[0] = 0;
      sub_995C30((__int64)&v50, v54 + v43);
      if ( v49 > 0x7FFFFFFFFFFFFFFFLL - v51 )
        std::__throw_length_error("basic_string::append");
      sub_9EE560(&v50, "hvx", v49);
      sub_9EE560(&v50, v53, v54);
      sub_22B0360(a1, v50, v51, 1);
      if ( v50 != v52 )
        operator delete(v50);
      v20 = v56;
    }
    if ( (_BYTE)v20 && v53 != v55 )
      operator delete(v53);
  }
LABEL_9:
  v21 = sub_21831C0((__int64)v57, 6u, v20, v17, v18, v19);
  if ( (_DWORD)v21 && BYTE4(v21) )
  {
    v44 = j__strlen("hvx-ieee-fp");
    sub_22B0360(a1, "hvx-ieee-fp", v44, 1);
  }
  v26 = sub_21831C0((__int64)v57, 7u, v22, v23, v24, v25);
  if ( (_DWORD)v26 && BYTE4(v26) )
  {
    v45 = j__strlen("hvx-qfloat");
    sub_22B0360(a1, "hvx-qfloat", v45, 1);
  }
  v31 = sub_21831C0((__int64)v57, 8u, v27, v28, v29, v30);
  if ( (_DWORD)v31 && BYTE4(v31) )
  {
    v46 = j__strlen("zreg");
    sub_22B0360(a1, "zreg", v46, 1);
  }
  v36 = sub_21831C0((__int64)v57, 9u, v32, v33, v34, v35);
  if ( (_DWORD)v36 && BYTE4(v36) )
  {
    v47 = j__strlen("audio");
    sub_22B0360(a1, "audio", v47, 1);
  }
  v41 = sub_21831C0((__int64)v57, 0xAu, v37, v38, v39, v40);
  if ( (_DWORD)v41 && BYTE4(v41) )
  {
    v42 = j__strlen("cabac");
    sub_22B0360(a1, "cabac", v42, 1);
  }
LABEL_6:
  v57[0] = &off_2C75B00;
  sub_2182FA0((__int64)v57);
  return a1;
}
