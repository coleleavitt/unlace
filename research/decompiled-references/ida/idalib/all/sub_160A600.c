__int64 __fastcall sub_160A600(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        double a8,
        int a9)
{
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 result; // rax
  unsigned int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rbp
  unsigned __int64 v34; // rax
  unsigned int v35; // ebx
  unsigned __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // [rsp+4h] [rbp-E4h] BYREF
  __int64 v45; // [rsp+8h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+14h] [rbp-D4h] BYREF
  char v47; // [rsp+1Ch] [rbp-CCh]
  _BYTE v48[200]; // [rsp+20h] [rbp-C8h] BYREF

  v14 = a2;
  v15 = sub_EEB7E0(a2, a2, a7);
  sub_160A450(a1, a3, *(_QWORD *)(a2 + 8), v15, v16);
  sub_1608070(a1, a4, a2, a7, a8);
  v18 = *(_QWORD *)(a1 + 248);
  if ( *(_BYTE *)(v18 + 17441) && (unsigned int)(a9 - 1) > 2 && a4 - 13 > 1 )
  {
    v26 = sub_EEB7E0(a2, a4, a7);
    sub_1605DE0(a1, a3, *(_QWORD *)(a2 + 8), v26, v27);
    v18 = *(_QWORD *)(a1 + 248);
  }
  v19 = *(_QWORD *)(a2 + 8);
  v20 = *(_QWORD *)&byte_8[*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v19 | (unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  v21 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  if ( a4 == 66 )
  {
    if ( (*(_WORD *)v14 & 0x1FF) == 0x38 )
    {
      if ( v21 == v20 )
        return v14;
      goto LABEL_10;
    }
    v28 = *(unsigned int *)(a1 + 1952);
    v29 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v29, v28) )
    {
      v29 = 0;
      v28 = 0;
    }
    return sub_C0A3E0((_QWORD *)v18, a3, 66, v14, a6, a5, (v29 << 32) | v28);
  }
  else
  {
    if ( v21 == v20 )
      return v14;
    if ( a4 != 11 )
      goto LABEL_6;
    v30 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
    if ( (v30 & 8) != 0 )
    {
      if ( (*(_BYTE *)(v14 + 1) & 6) != 0 )
      {
LABEL_6:
        v22 = *(_WORD *)v14 & 0x1FF;
        goto LABEL_7;
      }
      result = sub_1A0BDC0(a1, v19, v14, ((v30 >> 4) ^ 1) & 1);
      if ( result == 1 )
        return result;
      v14 = result & 0xFFFFFFFFFFFFFFFELL;
      v22 = *(_WORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x1FF;
      if ( a5 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
        goto LABEL_7;
    }
    else
    {
      v22 = *(_WORD *)v14 & 0x1FF;
      if ( a5 )
        goto LABEL_7;
    }
    if ( (*(_BYTE *)(v14 + 1) & 6) == 0 || v22 != 71 )
    {
LABEL_7:
      if ( v22 == 79 && a4 == ((*(_WORD *)(v14 + 2) >> 3) & 0x7F) && (!a6 || !*(_DWORD *)(a6 + 8)) )
      {
        *(_QWORD *)(v14 + 8) = a3;
        *(_BYTE *)(v14 + 1) = (2 * (a5 & 3)) | *(_BYTE *)(v14 + 1) & 0xF9;
        return v14;
      }
      goto LABEL_9;
    }
    v31 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 40 > 6 || (*(_BYTE *)(v31 + 96) & 7) != 5 )
    {
LABEL_9:
      v18 = *(_QWORD *)(a1 + 248);
LABEL_10:
      v23 = *(unsigned int *)(a1 + 1952);
      v24 = *(unsigned int *)(a1 + 1956);
      if ( __PAIR64__(v24, v23) == *(_QWORD *)(a1 + 1944) )
      {
        v24 = 0;
        v23 = 0;
      }
      return sub_C0A3E0((_QWORD *)v18, a3, a4, v14, a6, a5, (v24 << 32) | v23);
    }
    v32 = sub_C00A40(v14, v19, v31, v20, v17);
    sub_168B9F0(v48, a1 + 8, v32, 5207, 0);
    v44 = 3;
    v33 = sub_1587D10((__int64)v48, &v44);
    v34 = sub_EEC8C0(v14, (__int64)&v44, a7);
    v35 = v34;
    v36 = HIDWORD(v34);
    if ( *(_BYTE *)(v33 + 120) )
    {
      v46 = v34;
      v47 = 1;
      sub_AEC610((__int64 *)(v33 + 32), (__int64 *)&v46);
    }
    else if ( *(_BYTE *)(v33 + 132) )
    {
      v41 = sub_168B9E0(v33);
      v42 = *(_QWORD *)(v33 + 16);
      if ( v42 )
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v33 + 16));
      v45 = v42;
      v43 = *sub_1587BC0(v41, &v45, v37, v38, v39, v40) + 32LL * *(unsigned int *)(v33 + 128);
      v46 = __PAIR64__(v36, v35);
      v47 = 1;
      sub_AEC610((__int64 *)(v43 + 8), (__int64 *)&v46);
    }
    sub_15F7200(v48);
    return 1;
  }
}
