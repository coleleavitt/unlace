__int64 __fastcall sub_1370410(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rsi
  void *v12; // r10
  void *v13; // r14
  volatile signed __int32 *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  char v17; // r15
  char v18; // dl
  unsigned int v19; // r8d
  __int64 v20; // r11
  bool v21; // al
  bool v22; // zf
  unsigned int v23; // ecx
  __int64 v24; // rdx
  void *v25; // r8
  bool v26; // r15
  void *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rax
  size_t v31; // r15
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // r8
  void *v36; // rax
  __int64 *v37; // r14
  __int64 v38; // rdx
  void (__fastcall *v39)(__int64 *, __int64 *, _QWORD *, void **, void **, __int64 *, void **); // r15
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __m128i v44; // xmm1
  __int64 v46; // rax
  unsigned int v47; // r9d
  __int64 *v48; // r8
  _QWORD *v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // [rsp-8h] [rbp-1A0h]
  void *srca; // [rsp+0h] [rbp-198h]
  _BYTE *src; // [rsp+0h] [rbp-198h]
  __int64 v55; // [rsp+8h] [rbp-190h]
  void *v58; // [rsp+28h] [rbp-170h]
  void *v59; // [rsp+30h] [rbp-168h]
  unsigned int v60; // [rsp+30h] [rbp-168h]
  _BOOL4 v61; // [rsp+40h] [rbp-158h]
  __int64 *v62; // [rsp+40h] [rbp-158h]
  _QWORD *v63; // [rsp+48h] [rbp-150h]
  __int64 v64; // [rsp+50h] [rbp-148h]
  unsigned int v65; // [rsp+5Ch] [rbp-13Ch]
  void *v66; // [rsp+60h] [rbp-138h]
  __int64 v67; // [rsp+68h] [rbp-130h]
  void *v68; // [rsp+70h] [rbp-128h]
  volatile signed __int32 *v69; // [rsp+78h] [rbp-120h]
  __int64 v70; // [rsp+88h] [rbp-110h] BYREF
  __int64 v71; // [rsp+90h] [rbp-108h] BYREF
  __int64 v72; // [rsp+98h] [rbp-100h] BYREF
  void *v73; // [rsp+A0h] [rbp-F8h] BYREF
  volatile signed __int32 *v74; // [rsp+A8h] [rbp-F0h]
  __m128i v75; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-D8h]
  void *v77[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v78[16]; // [rsp+E0h] [rbp-B8h] BYREF
  void *v79; // [rsp+F0h] [rbp-A8h]
  __int64 v80; // [rsp+F8h] [rbp-A0h]
  _BYTE v81[16]; // [rsp+100h] [rbp-98h] BYREF
  void *v82; // [rsp+110h] [rbp-88h] BYREF
  volatile signed __int32 *v83; // [rsp+118h] [rbp-80h]
  _BYTE v84[120]; // [rsp+120h] [rbp-78h] BYREF

  (*(void (__fastcall **)(__int64 *))(*(_QWORD *)a2 + 136LL))(&v70);
  if ( !v70 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  v7 = *(_QWORD *)(a3[2] + 160LL);
  v77[0] = v78;
  sub_136FF00(v77, *(_BYTE **)(v7 + 72), *(_QWORD *)(v7 + 72) + *(_QWORD *)(v7 + 80));
  v80 = 0;
  v79 = v81;
  v81[0] = 0;
  v8 = operator new(0x48u);
  v75.m128i_i64[0] = 0;
  v9 = v77[0];
  v10 = v8;
  v11 = a3[12];
  v12 = v79;
  *(_QWORD *)(v8 + 8) = 0x100000001LL;
  v13 = (void *)(v8 + 16);
  v14 = (volatile signed __int32 *)(v8 + 8);
  *(_OWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  *(_QWORD *)v8 = off_2C42F98;
  *(_QWORD *)(v8 + 40) = v8 + 64;
  v15 = a3[2];
  *(_QWORD *)(v10 + 64) = 0;
  v16 = *(_QWORD *)(v15 + 160);
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 56) = 0;
  v75.m128i_i64[1] = 0;
  v76 = 0;
  v17 = *(_BYTE *)(v16 + 3);
  v59 = v9;
  LOBYTE(v15) = *(_BYTE *)(v16 + 2);
  v18 = v15;
  v19 = (unsigned int)(char)v15 >> 31;
  v58 = v13;
  v20 = v80;
  v82 = v13;
  v21 = (v15 & 0x10) != 0;
  v22 = (v18 & 0x10) == 0;
  v83 = (volatile signed __int32 *)v10;
  v23 = 0;
  v69 = v14;
  v24 = a3[10];
  if ( !v22 )
    v23 = v19;
  v25 = v77[1];
  v26 = (v17 & 4) != 0;
  if ( &_pthread_key_create )
    _InterlockedAdd(v14, 1u);
  else
    *(_DWORD *)(v10 + 8) = 2;
  v68 = v25;
  v66 = v12;
  srca = *(void **)(v16 + 432);
  v67 = v20;
  v55 = (__int64)(*(_QWORD *)(v16 + 440) - (_QWORD)srca) >> 4;
  v65 = v23;
  v64 = v24;
  v61 = v21;
  v27 = (void *)operator new(0xF18u);
  sub_1FCFD20(v27, v11, v64, v59, v68, &v82, v66, v67, srca, v55, v26, v65, v61, v61, 0);
  if ( v83 )
    sub_4343A0(v83);
  v82 = v27;
  if ( v75.m128i_i64[1] == v76 )
  {
    sub_12E0120((__int64)&v75, (char *)v75.m128i_i64[1], &v82);
  }
  else
  {
    v82 = nullptr;
    v28 = v75.m128i_i64[1] + 8;
    *(_QWORD *)v75.m128i_i64[1] = v27;
    v75.m128i_i64[1] = v28;
  }
  if ( v82 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v82 + 8LL))(v82);
  v29 = a3[24];
  v30 = *(_QWORD *)(a3[2] + 48LL);
  v31 = *(_QWORD *)(v30 + 256);
  src = *(_BYTE **)(v30 + 248);
  v32 = sub_2244B30(src, v31);
  v33 = (unsigned int)sub_2244CB0(v29, src, v31, v32);
  v35 = (__int64 *)(*(_QWORD *)v29 + 8 * v33);
  if ( !*v35 )
    goto LABEL_37;
  if ( *v35 == -8 )
  {
    --*(_DWORD *)(v29 + 16);
LABEL_37:
    v62 = v35;
    v60 = v33;
    v46 = sub_22300B0(v31 + 17, 8, v33, v34, v35, v33);
    v47 = v60;
    v48 = v62;
    v49 = (_QWORD *)v46;
    if ( v31 )
    {
      v63 = (_QWORD *)v46;
      memcpy((void *)(v46 + 16), src, v31);
      v49 = v63;
      v48 = v62;
      v47 = v60;
    }
    *((_BYTE *)v49 + v31 + 16) = 0;
    *v49 = v31;
    v49[1] = 0;
    *v48 = (__int64)v49;
    ++*(_DWORD *)(v29 + 12);
    v50 = sub_22450D0(v29, v47);
    sub_13703D0((__int64 **)&v82, (__int64 *)(*(_QWORD *)v29 + 8LL * v50), 0);
    v36 = v82;
    goto LABEL_15;
  }
  sub_13703D0((__int64 **)&v82, v35, 0);
  v36 = v82;
LABEL_15:
  v37 = *(__int64 **)(*(_QWORD *)v36 + 8LL);
  if ( !v37 )
  {
    v51 = a3[4];
    if ( v51 )
    {
      sub_FC70B0((__int64)&v82, v51, 0, 35);
      sub_AEC220((unsigned __int8 **)&v82, src, v31);
      sub_AEA040((__int64)&v82);
    }
    sub_2221C70("unknown module format", 1);
  }
  v38 = *v37;
  v74 = (volatile signed __int32 *)v10;
  v39 = *(void (__fastcall **)(__int64 *, __int64 *, _QWORD *, void **, void **, __int64 *, void **))(v38 + 24);
  v73 = v58;
  if ( &_pthread_key_create )
    _InterlockedAdd(v69, 1u);
  else
    ++*(_DWORD *)(v10 + 8);
  v40 = v70;
  v70 = 0;
  v71 = v40;
  v82 = v84;
  sub_136FFC0(&v82, a4, (__int64)&a4[a5]);
  v39(&v72, v37, a3, &v82, v77, &v71, &v73);
  v41 = v75.m128i_i64[1];
  v42 = v52;
  if ( v75.m128i_i64[1] == v76 )
  {
    sub_12E0120((__int64)&v75, (char *)v75.m128i_i64[1], &v72);
  }
  else
  {
    v43 = v72;
    v41 = v75.m128i_i64[1] + 8;
    v72 = 0;
    *(_QWORD *)v75.m128i_i64[1] = v43;
    v75.m128i_i64[1] = v41;
  }
  if ( v72 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v72 + 8LL))(v72, v41, v42);
  if ( v82 != v84 )
    operator delete(v82);
  if ( v71 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v71 + 8LL))(v71, v41, v42);
  if ( v74 )
    sub_4343A0(v74);
  v44 = _mm_load_si128(&v75);
  *(_QWORD *)(a1 + 16) = v76;
  *(__m128i *)a1 = v44;
  sub_4343A0((volatile signed __int32 *)v10);
  if ( v79 != v81 )
    operator delete(v79);
  if ( v77[0] != v78 )
    operator delete(v77[0]);
  if ( v70 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
  return a1;
}
