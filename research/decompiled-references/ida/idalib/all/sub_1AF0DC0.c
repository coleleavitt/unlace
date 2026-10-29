__int64 __fastcall sub_1AF0DC0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r9
  int v18; // r15d
  unsigned int v19; // edi
  unsigned int v20; // r11d
  __int64 v21; // rdx
  __int64 v22; // r10
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  __m128 v26; // xmm0
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // edi
  __int64 v31; // rsi
  int v32; // edx
  int v33; // ebp
  char v34; // al
  unsigned __int64 v35; // rdi
  unsigned __int8 v36; // cl
  int v37; // edx
  __int64 v38; // r10
  int v39; // r14d
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  char v44; // al
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // ebp
  bool v49; // al
  bool v50; // zf
  unsigned __int64 v51; // rdx
  int v52; // edx
  int v53; // eax
  int v54; // edx
  bool v55; // al
  unsigned __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  char v59; // al
  __int64 v60; // rdx
  unsigned int v61; // r12d
  char v62; // al
  __int64 v63; // rdx
  __int64 v64; // rcx
  char v65; // al
  int v66; // r10d
  __int64 v67; // rsi
  __int64 v68; // [rsp+8h] [rbp-90h] BYREF
  unsigned __int64 v69; // [rsp+10h] [rbp-88h]
  __int64 *v70; // [rsp+18h] [rbp-80h]
  __int64 v71; // [rsp+28h] [rbp-70h] BYREF
  __int64 v72[13]; // [rsp+30h] [rbp-68h] BYREF

  v4 = 0;
  v8 = sub_1AEE450(a4);
  v9 = v8;
  v10 = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( (unsigned int)(v10 - 40) > 6 )
  {
    if ( (unsigned int)(v10 - 49) <= 2 )
      v4 = v8;
    v9 = 0;
  }
  v11 = *(unsigned int *)(a2 + 344);
  v12 = 0;
  if ( (_DWORD)v11 )
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 336) + 6776 * v11 - 6776);
  v13 = *a3;
  if ( *a3 == v12 )
  {
    v33 = 106;
    if ( !v9 )
    {
LABEL_39:
      *(_DWORD *)a1 = 103;
      if ( v4 )
        v33 = 94;
      *(_DWORD *)(a1 + 4) = v33;
      goto LABEL_42;
    }
    v34 = *(_BYTE *)(v9 + 28) & 0x7F;
    if ( v34 != 46 && v34 != 40 )
    {
LABEL_36:
      v33 = 94;
      if ( v34 != 43 )
        goto LABEL_37;
      goto LABEL_46;
    }
    v35 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
      v35 = *(_QWORD *)(v35 + 8);
    v36 = *(_BYTE *)(sub_B8EAA0(v35) + 8) & 0x7F;
    if ( v36 > 0x12u )
    {
      if ( ((v36 + 94) & 0x7Fu) > 5 )
      {
LABEL_35:
        v34 = *(_BYTE *)(v9 + 28) & 0x7F;
        goto LABEL_36;
      }
    }
    else if ( ((1LL << v36) & 0x40182) == 0 || v36 == 8 )
    {
      goto LABEL_35;
    }
LABEL_46:
    v33 = 106;
LABEL_37:
    if ( !sub_9B48E0(v9) )
      v33 = 94;
    goto LABEL_39;
  }
  if ( v9 )
  {
    v72[0] = *a3;
    if ( sub_1AEFE80(a2, v9, v72) )
    {
      v14 = *(_BYTE *)(v9 + 28) & 0x7F;
      if ( (v14 == 40 || v14 == 46) && sub_1AE8710(v9) && (*(_BYTE *)(v9 + 96) & 3) == 0 )
      {
        *(_QWORD *)a1 = 0x5200000067LL;
LABEL_42:
        *(_DWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 32) = 0;
        *(_BYTE *)(a1 + 36) = 0;
        return a1;
      }
    }
    v13 = *a3;
  }
  v15 = *(_DWORD *)(v13 - 712);
  v16 = *(_BYTE *)(v13 - 1688) & 1;
  if ( (*(_BYTE *)(v13 - 1688) & 1) != 0 )
  {
    v17 = v13 - 1680;
    v18 = 7;
    v19 = ((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4);
    v20 = ((unsigned __int8)((unsigned int)v8 >> 9) ^ (unsigned __int8)((unsigned int)v8 >> 4)) & 7;
    v21 = v13
        - 1680
        + 40LL * (((unsigned __int8)((unsigned int)v8 >> 9) ^ (unsigned __int8)((unsigned int)v8 >> 4)) & 7);
    v22 = *(_QWORD *)v21;
    if ( v8 == *(_QWORD *)v21 )
      goto LABEL_18;
  }
  else
  {
    v28 = *(_DWORD *)(v13 - 1672);
    if ( !v28 )
      goto LABEL_44;
    v29 = v28 - 1;
    v17 = *(_QWORD *)(v13 - 1680);
    v18 = v29;
    v19 = ((unsigned int)v8 >> 4) ^ ((unsigned int)v8 >> 9);
    v20 = v19 & v29;
    v22 = *(_QWORD *)(v17 + 40LL * (v19 & v29));
    if ( v8 == v22 )
      goto LABEL_23;
  }
  v37 = 1;
  if ( v22 != -4096 )
  {
    while ( 1 )
    {
      v20 = v18 & (v37 + v20);
      v38 = *(_QWORD *)(v17 + 40LL * v20);
      if ( v8 == v38 )
        break;
      ++v37;
      if ( v38 == -4096 )
        goto LABEL_44;
    }
    if ( (_BYTE)v16 )
    {
      v30 = v19 & 7;
      v29 = 7;
      v21 = v17 + 40LL * v30;
      v31 = *(_QWORD *)v21;
LABEL_24:
      if ( v8 != v31 )
      {
        v32 = 1;
        if ( v31 == -4096 )
        {
LABEL_26:
          v69 = 0;
          LOBYTE(v16) = 0;
          v24 = 0;
          v23 = 106;
          v68 = 0;
          goto LABEL_19;
        }
        while ( 1 )
        {
          v66 = v32 + 1;
          v30 = v29 & (v32 + v30);
          v21 = v17 + 40LL * v30;
          v67 = *(_QWORD *)v21;
          if ( v8 == *(_QWORD *)v21 )
            break;
          v32 = v66;
          if ( v67 == -4096 )
            goto LABEL_26;
        }
      }
LABEL_18:
      v23 = *(_DWORD *)(v21 + 8);
      v24 = *(_DWORD *)(v21 + 12);
      v68 = *(_QWORD *)(v21 + 24);
      LOBYTE(v16) = *(_BYTE *)(v21 + 32);
      v69 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCLL;
LABEL_19:
      v25 = *(_DWORD *)(v13 - 756);
      *(_DWORD *)a1 = v15;
      *(_DWORD *)(a1 + 4) = v23;
      *(_DWORD *)(a1 + 8) = v24;
      v26 = _mm_loadh_ps((const double *)&v68);
      *(_DWORD *)(a1 + 32) = v25;
      *(_BYTE *)(a1 + 36) = v16;
      *(__m128 *)(a1 + 16) = v26;
      return a1;
    }
    v24 = *(_DWORD *)(v13 - 1672);
    if ( !v24 )
    {
      v69 = 0;
      v23 = 106;
      v68 = 0;
      goto LABEL_19;
    }
    v29 = v24 - 1;
LABEL_23:
    v30 = v29 & v19;
    v21 = v17 + 40LL * v30;
    v31 = *(_QWORD *)v21;
    goto LABEL_24;
  }
LABEL_44:
  switch ( *(_DWORD *)(v13 - 760) )
  {
    case 0:
      LODWORD(v68) = *(_DWORD *)(v13 - 712);
      v39 = *(_DWORD *)(v13 - 756);
      v40 = sub_FFE740(v15);
      v43 = v68;
      if ( v40 )
      {
        v44 = sub_FFE5D0(v68);
        v43 = v68;
        if ( !v44 )
          goto LABEL_56;
      }
      LODWORD(v68) = v43;
      v45 = sub_FFEA60(v43, v16, v41, v42);
      v43 = v68;
      if ( v45 )
        goto LABEL_56;
      v59 = sub_FFEF70((unsigned int)v68, v16, v46, v47);
      v43 = v68;
      v50 = v59 == 0;
      v13 = *a3;
      if ( v50 )
        goto LABEL_77;
      v60 = *(unsigned int *)(a2 + 344);
      v71 = *a3;
      v69 = 0;
      if ( (_DWORD)v60 )
        v69 = *(_QWORD *)(*(_QWORD *)(a2 + 336) + 6776 * v60 - 6776);
      v70 = &v71;
      break;
    case 1:
      *(_DWORD *)a1 = v15;
      *(_QWORD *)(a1 + 4) = 106;
      *(_OWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      return a1;
    case 2:
      v58 = *(_DWORD *)(v13 - 756);
      *(_DWORD *)a1 = v15;
      *(_QWORD *)(a1 + 4) = 94;
      *(_OWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = v58;
      *(_BYTE *)(a1 + 36) = 0;
      return a1;
    case 4:
      v54 = 82;
      if ( v9 )
      {
        LODWORD(v68) = *(_DWORD *)(v13 - 712);
        v55 = sub_9B48E0(v9);
        v15 = v68;
        if ( v55 || (*(_BYTE *)(v9 + 96) & 0x18) != 0 )
          goto LABEL_78;
        v56 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
          v56 = *(_QWORD *)v56;
        v57 = *(_BYTE *)(v56 + 8) & 0x7F;
        if ( v57 && v57 != 24 )
        {
LABEL_78:
          v13 = *a3;
          v54 = 82;
        }
        else
        {
          v13 = *a3;
          v54 = 106;
        }
      }
      v53 = *(_DWORD *)(v13 - 756);
      *(_DWORD *)a1 = v15;
      *(_DWORD *)(a1 + 4) = v54;
      goto LABEL_66;
    case 8:
      v48 = 36;
      if ( v9 )
      {
        LODWORD(v68) = *(_DWORD *)(v13 - 712);
        v49 = sub_9B48E0(v9);
        v15 = v68;
        v50 = !v49;
        v13 = *a3;
        if ( v50 && (*(_BYTE *)(v9 + 96) & 0x18) == 0 )
        {
          v51 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
            v51 = *(_QWORD *)v51;
          v52 = *(_BYTE *)(v51 + 8) & 0x7F;
          if ( v52 == 24 || (v48 = 36, !v52) )
            v48 = 106;
        }
      }
      *(_DWORD *)a1 = v15;
      v53 = *(_DWORD *)(v13 - 756);
      *(_DWORD *)(a1 + 4) = v48;
LABEL_66:
      *(_DWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = v53;
      *(_BYTE *)(a1 + 36) = 0;
      return a1;
    default:
LABEL_77:
      *a3 = v13 - 1688;
      sub_1AF0DC0(a1, a2, a3, v8);
      return a1;
  }
  while ( 1 )
  {
    LODWORD(v68) = v43;
    v71 = v13 - 1688;
    sub_1AF0DC0(v72, a2, v70, v8);
    v43 = v68;
    if ( HIDWORD(v72[0]) != 94 )
      break;
    if ( v69 == v71
      || (v61 = *(_DWORD *)(v71 - 712), v62 = sub_FFE740(v61), v43 = v68, v62)
      || (v65 = sub_FFEA60(v61, a2, v63, v64), v43 = v68, v65) )
    {
LABEL_56:
      *(_DWORD *)a1 = v43;
      *(_QWORD *)(a1 + 4) = 94;
      *(_OWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = v39;
      *(_BYTE *)(a1 + 36) = 0;
      return a1;
    }
    v13 = v71;
  }
  *(_DWORD *)a1 = v68;
  *(_QWORD *)(a1 + 4) = 36;
  *(_OWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = v39;
  *(_BYTE *)(a1 + 36) = 0;
  return a1;
}
