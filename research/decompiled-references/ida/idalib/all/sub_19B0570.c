__int64 __fastcall sub_19B0570(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        __int64 *a6,
        __m128 a7,
        __m128 a8,
        _BYTE *a9)
{
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  char *v32; // rcx
  bool v33; // cf
  char *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  char v38; // al
  char v39; // r14
  char *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rsi
  char *v47; // rcx
  unsigned __int64 *v48; // rdi
  char *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbp
  __int64 v54; // r15
  size_t v55; // rax
  __int64 v56; // r12
  __int64 v57; // rax
  unsigned int v58; // eax
  int v59; // ebp
  int v60; // eax
  __int64 v62; // [rsp+8h] [rbp-210h]
  __int64 v63; // [rsp+20h] [rbp-1F8h]
  char v64; // [rsp+33h] [rbp-1E5h] BYREF
  int v65; // [rsp+34h] [rbp-1E4h] BYREF
  __int64 v66; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v68; // [rsp+4Ch] [rbp-1CCh] BYREF
  __int64 v69; // [rsp+54h] [rbp-1C4h] BYREF
  char v70; // [rsp+5Ch] [rbp-1BCh]
  __int64 v71[3]; // [rsp+60h] [rbp-1B8h] BYREF
  void *v72; // [rsp+78h] [rbp-1A0h]
  __int64 v73; // [rsp+88h] [rbp-190h] BYREF
  void *ptr; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-170h]
  _BYTE v76[64]; // [rsp+B0h] [rbp-168h] BYREF
  void *v77; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-120h]
  int v79; // [rsp+100h] [rbp-118h]
  unsigned __int8 v80; // [rsp+104h] [rbp-114h]
  unsigned __int64 v81; // [rsp+108h] [rbp-110h] BYREF
  _QWORD v82[25]; // [rsp+150h] [rbp-C8h] BYREF

  v13 = sub_192A5C0(a1, a2, a3, a7, a8);
  if ( v13 == 1 )
    return 1;
  v19 = sub_1907C70(a1, (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a7, a8, v14, v15, v16, v17);
  if ( v19 == 1 )
    return 1;
  v22 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v23 = *(_QWORD *)(v22 + 8);
  v24 = v22;
  v25 = v22;
  v66 = v23;
  v26 = v23;
  v27 = v23 & 0xFFFFFFFFFFFFFFF0LL;
  *a9 = 0;
  v28 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v28 + 17) & 4) != 0 )
  {
    if ( a5 == 37 )
    {
      if ( *(_BYTE *)(v28 + 16) == 42 || (v28 = sub_199F9E0(v28, v27, v23, v23)) != 0 )
        v26 = *(_QWORD *)(v28 + 32);
      else
        v26 = v66;
    }
    *a6 = v26;
    *a9 = 1;
    return v24;
  }
  if ( a5 != 37 )
    goto LABEL_7;
  v30 = *(_QWORD *)(a1 + 544);
  v67 = v23;
  v64 = 0;
  v31 = *(_BYTE *)(v30 + 8);
  v32 = (char *)(v30 - 72);
  v80 = 1;
  v78 = 8;
  v79 = 0;
  v33 = (v31 & 0x7Fu) - 34 < 6;
  v34 = nullptr;
  if ( v33 )
    v34 = v32;
  v63 = (__int64)v34;
  v77 = &v81;
  ptr = v76;
  v75 = 0x800000000LL;
  v35 = *(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL];
  HIDWORD(v78) = 1;
  v36 = v35 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v35 | (unsigned __int8)v23) & 7;
  v81 = v36;
  v37 = *(_QWORD *)v27;
  v38 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v38 != 48 )
  {
LABEL_63:
    if ( v38 == 42 )
    {
      v66 = sub_F68450(v37, v27, v36, (__int64)v32, v20);
    }
    else
    {
      v27 = v66;
      v51 = sub_A72040(*(_QWORD **)(a1 + 248), v66);
      if ( v51 )
        v66 = *(_QWORD *)(v51 + 32);
    }
    goto LABEL_66;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 232) + 124LL) )
  {
LABEL_47:
    sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), a4, 0x126Bu, 0);
    v50 = sub_1605D30((__int64)v82, &v67);
    LODWORD(v69) = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 124LL);
    v62 = sub_1588370(v50, (unsigned int *)&v69);
    v71[0] = sub_EEC8C0(v25, (__int64)&v69, *(double *)a7.m128_u64);
    sub_1587DB0(v62, v71);
    sub_15F7200(v82);
    sub_19B02E0(a1, (__int64)ptr, (unsigned int)v75);
    sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), a4, 0x1837u, 0);
    LODWORD(v71[0]) = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 124LL);
    sub_1588370((__int64)v82, (unsigned int *)v71);
    sub_15F7200(v82);
    result = 1;
LABEL_48:
    if ( ptr != v76 )
    {
      free(ptr);
      result = 1;
    }
    if ( !v80 )
    {
      free(v77);
      return 1;
    }
    return result;
  }
  v39 = 1;
  while ( 1 )
  {
    v40 = v39 && v63 && (unsigned __int8)sub_B77A80(v63) ? nullptr : &v64;
    v41 = sub_1C042D0(a1, a2, v25, a4, v40);
    if ( v41 == 1 )
      break;
    v25 = v41 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_WORD *)(v41 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) == 0x5B )
    {
      v42 = sub_BFBC70(*(_QWORD *)(v25 + 32));
      if ( v42 )
      {
        v43 = 0;
        if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 34 <= 5 )
          v43 = v42;
      }
      else
      {
        v43 = 0;
      }
      v44 = (unsigned int)v75;
      v45 = (unsigned int)v75 + 1LL;
      if ( v45 > HIDWORD(v75) )
      {
        sub_2237220(&ptr, v76, v45, 8);
        v44 = (unsigned int)v75;
      }
      *((_QWORD *)ptr + v44) = v43;
      LODWORD(v75) = v75 + 1;
    }
    v66 = *(_QWORD *)(v25 + 8);
    v46 = *(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v66) & 7;
    v36 = v80;
    if ( !v80 )
      goto LABEL_53;
    v47 = (char *)v77;
    v20 = 8LL * HIDWORD(v78);
    v48 = (unsigned __int64 *)((char *)v77 + v20);
    if ( v77 != (char *)v77 + v20 )
    {
      v49 = (char *)v77;
      if ( v46 == *(_QWORD *)v77 )
      {
LABEL_55:
        v36 = 0;
        goto LABEL_38;
      }
      while ( 1 )
      {
        v49 += 8;
        if ( v48 == (unsigned __int64 *)v49 )
          break;
        if ( v46 == *(_QWORD *)v49 )
          goto LABEL_55;
      }
    }
    if ( HIDWORD(v78) < (unsigned int)v78 )
    {
      ++HIDWORD(v78);
      *v48 = v46;
      v47 = (char *)v77;
      v49 = (char *)v77 + v20;
    }
    else
    {
LABEL_53:
      v49 = (char *)sub_2236760(&v77, v46);
      v47 = (char *)v77;
      if ( !v80 )
      {
        v27 = (unsigned int)v78;
        v32 = (char *)v77 + 8 * (unsigned int)v78;
        goto LABEL_39;
      }
    }
LABEL_38:
    v27 = HIDWORD(v78);
    v32 = &v47[8 * HIDWORD(v78)];
LABEL_39:
    if ( v32 != v49 )
    {
      v27 = *(_QWORD *)v49 + 2LL;
      if ( v27 <= 1 )
      {
        do
          v49 += 8;
        while ( v32 != v49 && *(_QWORD *)v49 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
    if ( !(_BYTE)v36 )
    {
      sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), a4, 0x126Au, 0);
      sub_1605D30((__int64)v82, &v67);
      sub_15F7200(v82);
      sub_19B02E0(a1, (__int64)ptr, (unsigned int)v75);
      goto LABEL_81;
    }
    v37 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v38 != 48 )
      goto LABEL_63;
    v39 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 124LL) <= (unsigned int)v75 )
      goto LABEL_47;
  }
  if ( !v64 )
  {
LABEL_81:
    result = 1;
    goto LABEL_48;
  }
  if ( !v39 )
  {
    sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), a4, 0x14ABu, 0);
    v56 = sub_1605D30((__int64)v82, &v66);
    v71[0] = sub_EEC8C0(v25, (__int64)&v66, *(double *)a7.m128_u64);
    sub_1587DB0(v56, v71);
    sub_15F7200(v82);
    if ( ((*(_WORD *)v25 + 423) & 0x1FFu) <= 4 )
    {
      v57 = sub_BFBC70(*(_QWORD *)(v25 + 32));
      if ( v57 )
      {
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), v58, 0x17C6u, 0);
        sub_15F7200(v82);
      }
    }
    goto LABEL_81;
  }
  sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), a4, 0x14AFu, 0);
  v52 = sub_1605D30((__int64)v82, &v66);
  v65 = 1;
  v53 = sub_1587D10(v52, &v65);
  v68 = sub_EEC8C0(v25, (__int64)&v65, *(double *)a7.m128_u64);
  v54 = sub_1587DB0(v53, &v68);
  v55 = j__strlen(".");
  LODWORD(v69) = a4;
  HIDWORD(v69) = a4;
  v70 = 1;
  sub_19A1600((__int64)v71, v69, 1, ".", v55);
  v27 = (unsigned __int64)v71;
  sub_1589170(v54, v71);
  if ( v72 != &v73 )
    operator delete(v72);
  sub_15F7200(v82);
LABEL_66:
  if ( ptr != v76 )
    free(ptr);
  if ( !v80 )
    free(v77);
  v26 = v66;
  v28 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_7:
  v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v29 == 34 )
  {
    v66 = sub_F68450(v28, v27, v29, v26, v20);
    v26 = v66;
    v28 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
    v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  if ( (_BYTE)v29 != 48 )
  {
    *a6 = v26;
    *a9 = 1;
    return v25;
  }
  if ( (*(_BYTE *)(v28 + 17) & 4) != 0 )
  {
LABEL_61:
    *a6 = v26;
    return v25;
  }
  else
  {
    if ( sub_19A2DC0(a1, v66, v29, v26, v20, v21) || !(unsigned __int8)sub_1E63CF0(a1, a4, v66, 1, 3963) )
    {
      v26 = v66;
      goto LABEL_61;
    }
    v82[0] = v25;
    v59 = sub_EEC140(v25);
    v60 = sub_EEB7E0(v25, a4, *(double *)a7.m128_u64);
    return sub_18C4330(a1, v60, v59, v82, 1, 0);
  }
}
