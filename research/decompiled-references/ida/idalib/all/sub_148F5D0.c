_BYTE *__fastcall sub_148F5D0(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  int v16; // eax
  _WORD *v17; // rax
  size_t v18; // rdx
  _BYTE *result; // rax
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rbp
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // [rsp-10h] [rbp-118h]
  __int64 v39; // [rsp-8h] [rbp-110h]
  int v40; // [rsp+0h] [rbp-108h]
  size_t v41; // [rsp+0h] [rbp-108h]
  __int64 v42; // [rsp+0h] [rbp-108h]
  __int64 v43; // [rsp+0h] [rbp-108h]
  unsigned int v44; // [rsp+8h] [rbp-100h]
  void *v45; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v46; // [rsp+18h] [rbp-F0h]
  _BYTE *v47; // [rsp+20h] [rbp-E8h] BYREF
  char v48; // [rsp+28h] [rbp-E0h]
  __int64 v49; // [rsp+30h] [rbp-D8h]
  int v50; // [rsp+38h] [rbp-D0h]
  __int16 v51; // [rsp+3Ch] [rbp-CCh]
  __int64 (__fastcall *v52)(__int64); // [rsp+40h] [rbp-C8h]
  __int64 v53; // [rsp+48h] [rbp-C0h]
  __int64 v54; // [rsp+50h] [rbp-B8h]
  void *ptr[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v56[152]; // [rsp+70h] [rbp-98h] BYREF

  v16 = sub_F963B0(a2, a6, a10 & 0xF);
  switch ( v16 )
  {
    case 48:
      sub_14837B0(a1, (__int64)a2, a3, a4, a5, a6, a9, a10);
      return (_BYTE *)v38;
    case 131:
      sub_14831E0(a1, (__int64)a2, a3, (__int64)a4, a5, a6, a9, a10);
      return (_BYTE *)v39;
    case 255:
      return sub_1481190(a1, (__int64)a2, a3, (__int64)a4, a5, a6, a9, a10);
    case 368:
      return sub_1481580(a1, (__int64)a2, a3, (__int64)a4, a5, a6, a9, a10);
    case 386:
      return sub_148F1B0(a1, (__int64)a2, a3, (__int64)a4, a5, a6, a7, a8, a9, a10);
  }
  v40 = v16;
  if ( sub_1479610((__int64)a2) )
    return sub_148EF00(a1, a2, a3, (__int64)a4, a6, a9, a7, a8, a10);
  if ( (unsigned int)(v40 - 109) <= 1 || (unsigned int)(v40 - 346) <= 1 )
  {
    v49 = a1;
    v47 = (_BYTE *)(a1 + 1952);
    v21 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v48 = v21;
    v50 = 1507350;
    v51 = 63;
    v52 = sub_146A990;
    v53 = 0;
    v54 = 0;
    sub_1477FA0((__int64)&v47);
    if ( *(_WORD *)(a1 + 32) == 23 )
    {
      sub_1564820(ptr, a1, *(unsigned int *)(a1 + 16), 1543);
      sub_AEA040((__int64)ptr);
      sub_14808E0((__int64)&v47, (__int64 *)a1, v34, v35, v36, v37);
    }
    else
    {
      ptr[0] = v56;
      ptr[1] = (void *)0xC00000000LL;
      v43 = *(_QWORD *)(a1 + 96);
      sub_18C74E0(v43, 6, 0, 2);
      v22 = sub_14BDAD0(a1, 0);
      if ( v22 == 1 )
      {
        sub_156E210(&v47);
        sub_190D5E0(v43);
        v33 = ptr[0];
        if ( ptr[0] == v56 )
          goto LABEL_37;
      }
      else
      {
        v23 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
        sub_147FEB0((__int64)ptr, v22 & 0xFFFFFFFFFFFFFFFCLL);
        sub_14808E0((__int64)&v47, v23, v24, v25, v26, v27);
        v28 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 248LL);
        v29 = sub_A63CE0(v28);
        v30 = sub_A63CE0(v28);
        v46 = sub_A97D20((__int64)v28, *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v46 > 0x40 )
          sub_2205470(&v45, 0, 0);
        else
          v45 = nullptr;
        v31 = sub_C0C5D0(v28, (__int64)&v45, v29, 0);
        sub_147FEB0((__int64)ptr, v31 & 0xFFFFFFFFFFFFFFFDLL);
        if ( v46 > 0x40 && v45 )
          operator delete[](v45);
        v32 = sub_147A2E0(
                (__int64)(a4 + 5),
                (__int64)a2,
                ((unsigned __int64)HIDWORD(v54) << 32) | a3,
                0,
                0,
                ptr[0],
                (unsigned int)ptr[1],
                a10,
                0);
        sub_147F4B0((__int64)(a4 + 1), v32);
        sub_190D5E0(v43);
        v33 = ptr[0];
        if ( ptr[0] == v56 )
          goto LABEL_37;
      }
      free(v33);
    }
LABEL_37:
    result = v47;
    *v47 = v48;
    return result;
  }
  if ( v40 == 80 )
    return (_BYTE *)sub_14A6B90(a1, (_DWORD)a4, (_DWORD)a2, a3, a6, a9, (__int64)a5, a10);
  *(_OWORD *)ptr = 0;
  v41 = j__strlen("enable_if");
  v17 = sub_1479360((_WORD *)(a2[2] + 16), *(unsigned int *)a2[2]);
  if ( v41 == v18 && (!v18 || !memcmp(v17, "enable_if", v18)) && a11 && (unsigned __int8)sub_147B3A0(a11, &v47) )
  {
    LODWORD(v47) = 0;
    sub_147B3A0(a11, &v47);
    v42 = *(_QWORD *)(a11 + 128) + 144LL * (unsigned int)v47;
    if ( LOBYTE(ptr[1]) )
    {
      LOBYTE(ptr[1]) = 0;
      if ( ptr[0] )
        sub_1564F70(ptr[0]);
    }
    sub_146B5E0((__int64 *)ptr, a1, 0x308u, 1, 0);
    LOBYTE(ptr[1]) = 1;
    if ( *(_DWORD *)(v42 + 72) )
    {
      v20 = 0;
      do
      {
        v44 = v20;
        sub_183CE30(
          *(_QWORD *)(a1 + 96),
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
          *(_QWORD *)(*(_QWORD *)(v42 + 96) + 32LL * v20 + 16));
        v20 = v44 + 1;
      }
      while ( *(_DWORD *)(v42 + 72) != v44 + 1 );
    }
  }
  result = (_BYTE *)sub_148B990(a1, (__int64)a2, a3, (__int64)a4, a5, a6, (__m128i)0LL, a8, a9, a10);
  if ( LOBYTE(ptr[1]) )
  {
    if ( ptr[0] )
      return (_BYTE *)sub_1564F70(ptr[0]);
  }
  return result;
}
