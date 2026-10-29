void __fastcall sub_11EF6E0(__int64 *a1, int *a2, int a3, int a4, __int64 a5)
{
  char *v8; // r15
  size_t v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  char v13; // al
  char v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // r10d
  int v18; // edi
  char v19; // si
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  char v24; // dl
  char v25; // al
  __int64 v26; // r13
  __m128i *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rcx
  int v30; // r10d
  char v31; // r9
  int v32; // r8d
  __int64 v33; // rdi
  __int64 v34; // rsi
  size_t v35; // rax
  __int64 v36; // r15
  __int64 v37; // rbx
  size_t v38; // r15
  const void *v39; // rax
  size_t v40; // rdx
  size_t v41; // rax
  _BYTE *v42; // rdi
  size_t v43; // r15
  unsigned __int64 v44; // rdx
  _BYTE *v45; // rdi
  unsigned __int64 v46; // rsi
  char v47; // dl
  __int64 v48; // rax
  __int64 v49; // r11
  int v50; // r10d
  int v51; // r9d
  __int64 v52; // r8
  char v53; // di
  __int64 v54; // r9
  unsigned __int64 v56; // [rsp+20h] [rbp-118h]
  __int64 v57; // [rsp+20h] [rbp-118h]
  __int64 v58; // [rsp+28h] [rbp-110h]
  unsigned __int8 v60; // [rsp+34h] [rbp-104h]
  __int64 v61; // [rsp+38h] [rbp-100h]
  unsigned __int64 v62; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-F0h]
  _QWORD v64[2]; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v65; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v66; // [rsp+70h] [rbp-C8h] BYREF
  char v67; // [rsp+80h] [rbp-B8h]
  void *v68; // [rsp+90h] [rbp-A8h] BYREF
  size_t v69; // [rsp+98h] [rbp-A0h]
  _QWORD v70[2]; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v71; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v72[16]; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v73; // [rsp+D0h] [rbp-68h] BYREF
  __int32 v74; // [rsp+E0h] [rbp-58h]
  __int16 v75; // [rsp+F0h] [rbp-48h]

  sub_10DC5D0(*a1, (__int64)"-platform_version");
  switch ( a3 )
  {
    case 0:
      v8 = "macos";
      goto LABEL_3;
    case 1:
      v8 = "ios";
      if ( a4 != 2 )
        goto LABEL_3;
      v68 = v70;
      v35 = j__strlen("mac catalyst");
      sub_11E46A0(&v68, "mac catalyst", (__int64)&aMacCatalyst[v35]);
      break;
    case 2:
      v8 = "tvos";
      goto LABEL_3;
    case 3:
      v8 = "watchos";
      goto LABEL_3;
    case 4:
      v8 = "driverkit";
      goto LABEL_3;
    case 5:
      v8 = "xros";
LABEL_3:
      v68 = v70;
      v9 = j__strlen(v8);
      sub_11E46A0(&v68, v8, (__int64)&v8[v9]);
      if ( a4 == 1 )
      {
        v41 = j__strlen("-simulator");
        if ( v41 > 0x7FFFFFFFFFFFFFFFLL - v69 )
          std::__throw_length_error("basic_string::append");
        v42 = v68;
        v43 = v41 + v69;
        if ( v68 == v70 )
          v44 = 15;
        else
          v44 = v70[0];
        if ( v43 > v44 )
        {
          sub_998B30((__int64)&v68, v69, 0, "-simulator", v41);
          v42 = v68;
        }
        else if ( v41 )
        {
          v45 = (char *)v68 + v69;
          if ( v41 == 1 )
            *v45 = 45;
          else
            memcpy(v45, "-simulator", v41);
          v42 = v68;
        }
        v69 = v43;
        v42[v43] = 0;
      }
      break;
  }
  v10 = a1[1];
  v11 = *a1;
  v75 = 260;
  v73.m128i_i64[0] = (__int64)&v68;
  v12 = sub_10DA6C0(v10, (__int64)&v73);
  sub_10DC5D0(v11, v12);
  if ( *((char *)a2 + 15) < 0 )
  {
    v19 = 0;
    v18 = 0;
    v16 = *a2;
    v14 = 1;
    v13 = 1;
    v17 = a2[2] & 0x7FFFFFFF;
    v15 = a2[1] & 0x7FFFFFFF;
  }
  else
  {
    v13 = *((_BYTE *)a2 + 7) >> 7;
    v14 = *((_BYTE *)a2 + 11) >> 7;
    v15 = a2[1] & 0x7FFFFFFF;
    v16 = *a2;
    v17 = a2[2] & 0x7FFFFFFF;
    v18 = a2[3] & 0x7FFFFFFF;
    v19 = *((_BYTE *)a2 + 15) >> 7;
  }
  LODWORD(v62) = v16;
  HIDWORD(v62) = v15 | HIDWORD(v62) & 0x80000000;
  LODWORD(v63) = v17 | v63 & 0x80000000;
  HIBYTE(v62) = (v13 << 7) | HIBYTE(v62) & 0x7F;
  HIDWORD(v63) = v18 | HIDWORD(v63) & 0x80000000;
  BYTE3(v63) = (v14 << 7) | BYTE3(v63) & 0x7F;
  HIBYTE(v63) = (v19 << 7) | HIBYTE(v63) & 0x7F;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v38 = j__strlen("arm64e");
    v39 = (const void *)sub_22B7480(a1[2] + 16);
    if ( v40 == v38 && (!v40 || !memcmp(v39, "arm64e", v40)) && (unsigned int)v62 <= 0xD )
    {
      v63 = 0;
      v62 = 0x800000000000000ELL;
    }
  }
  v20 = sub_22B8070(a5);
  v64[1] = v21;
  v58 = v21;
  v64[0] = v20;
  v56 = v20;
  if ( ((unsigned int)v21 | HIDWORD(v20)) & 0x7FFFFFFF | (unsigned int)v20 | HIDWORD(v21) & 0x7FFFFFFF
    && (unsigned __int8)sub_A09E20((unsigned int *)&v62, (unsigned int *)v64) )
  {
    v62 = v56;
    v63 = v58;
  }
  v61 = a1[1];
  v57 = *a1;
  sub_2257830(&v71, &v62);
  v75 = 260;
  v73.m128i_i64[0] = (__int64)&v71;
  v22 = sub_10DA6C0(v61, (__int64)&v73);
  sub_10DC5D0(v57, v22);
  if ( (_BYTE *)v71.m128i_i64[0] != v72 )
    operator delete((void *)v71.m128i_i64[0]);
  v23 = a1[2];
  v24 = *(_BYTE *)(v23 + 4040);
  v25 = a3 == 1 && a4 == 2;
  if ( v25 )
  {
    if ( v24 && (v60 = *(_BYTE *)(v23 + 4040), (v46 = sub_11EF5B0(v23 + 3976, 0x171000000EDLL)) != 0) )
    {
      LOBYTE(v74) = 0;
      v47 = v60;
      v71 = (__m128i)0x800000010000000DLL;
      v48 = a1[2];
      v49 = *(_QWORD *)(v48 + 3976);
      v50 = *(_DWORD *)(v48 + 3984) & 0x7FFFFFFF;
      if ( *(char *)(v48 + 3991) < 0 )
      {
        v51 = v60;
        v53 = 0;
        v52 = 0;
      }
      else
      {
        v47 = *(_BYTE *)(v48 + 3983) >> 7;
        v51 = *(_BYTE *)(v48 + 3987) >> 7;
        v52 = *(_DWORD *)(v48 + 3988) & 0x7FFFFFFF;
        v53 = *(_BYTE *)(v48 + 3991) >> 7;
      }
      v54 = (unsigned int)(v51 << 7);
      v65.m128i_i8[7] = v65.m128i_i8[7] & 0x7F | (v47 << 7);
      v65.m128i_i32[2] = v50 | v65.m128i_i32[2] & 0x80000000;
      v65.m128i_i64[0] = v49 & 0x7FFFFFFFFFFFFFFFLL | v65.m128i_i64[0] & 0x8000000000000000LL;
      v65.m128i_i32[3] = v52 | v65.m128i_i32[3] & 0x80000000;
      v65.m128i_i8[11] = v54 | v65.m128i_i8[11] & 0x7F;
      v65.m128i_i8[15] = (v53 << 7) | v65.m128i_i8[15] & 0x7F;
      sub_FC0010(&v66, v46, (unsigned int *)&v65, &v71, v52, v54, (__int128)_mm_load_si128(&v73), v74);
      v36 = *a1;
      v37 = a1[1];
      if ( v67 )
      {
        v65 = _mm_load_si128(&v66);
        goto LABEL_35;
      }
    }
    else
    {
      v36 = *a1;
      v37 = a1[1];
    }
    v65 = (__m128i)0x800000010000000DLL;
LABEL_35:
    sub_2257830(&v71, &v65);
    v75 = 260;
    v73.m128i_i64[0] = (__int64)&v71;
    v33 = v36;
    v34 = sub_10DA6C0(v37, (__int64)&v73);
    goto LABEL_20;
  }
  v26 = *a1;
  v27 = (__m128i *)&v62;
  v28 = a1[1];
  if ( v24 )
  {
    v29 = *(_QWORD *)(v23 + 3976);
    v30 = *(_DWORD *)(v23 + 3984) & 0x7FFFFFFF;
    if ( *(char *)(v23 + 3991) < 0 )
    {
      v31 = *(_BYTE *)(v23 + 4040);
      v32 = 0;
    }
    else
    {
      v24 = *(_BYTE *)(v23 + 3983) >> 7;
      v31 = *(_BYTE *)(v23 + 3987) >> 7;
      v32 = *(_DWORD *)(v23 + 3988) & 0x7FFFFFFF;
      v25 = *(_BYTE *)(v23 + 3991) >> 7;
    }
    v66.m128i_i8[7] = v66.m128i_i8[7] & 0x7F | (v24 << 7);
    v66.m128i_i64[0] = v29 & 0x7FFFFFFFFFFFFFFFLL | v66.m128i_i64[0] & 0x8000000000000000LL;
    v66.m128i_i32[2] = v30 | v66.m128i_i32[2] & 0x80000000;
    v66.m128i_i32[3] = v32 | v66.m128i_i32[3] & 0x80000000;
    v66.m128i_i8[11] = (v31 << 7) | v66.m128i_i8[11] & 0x7F;
    v66.m128i_i8[15] = v66.m128i_i8[15] & 0x7F | (v25 << 7);
    if ( v66.m128i_i8[7] >= 0 )
    {
      v66.m128i_i32[1] = 0x80000000;
      v66.m128i_i64[1] = 0;
    }
    v27 = &v66;
  }
  sub_2257830(&v71, v27);
  v75 = 260;
  v73.m128i_i64[0] = (__int64)&v71;
  v33 = v26;
  v34 = sub_10DA6C0(v28, (__int64)&v73);
LABEL_20:
  sub_10DC5D0(v33, v34);
  if ( (_BYTE *)v71.m128i_i64[0] != v72 )
    operator delete((void *)v71.m128i_i64[0]);
  if ( v68 != v70 )
    operator delete(v68);
}
