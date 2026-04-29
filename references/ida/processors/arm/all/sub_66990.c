__int64 __fastcall sub_66990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  char v11; // si
  __int64 v13; // r8
  unsigned int v14; // eax
  __int16 v15; // r12
  unsigned int v16; // ebp
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // esi
  __int16 v22; // ax
  char v23; // si
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rdx
  __int16 v28; // ax
  __int64 v29; // rdx
  __int16 v30; // ax
  __int64 v31; // rdx
  int v32; // eax
  int v33; // ecx
  __int64 v34; // rdx
  __int16 v35; // ax
  __int64 v36; // rdx
  __int16 v37; // ax
  __int64 v38; // rdx
  __int16 v39; // ax
  __int16 v40; // ax
  __int64 v41; // rdx
  __int16 v42; // ax
  __int64 v43; // rdx
  __int16 v44; // ax
  __int16 v45; // ax
  __int64 v46; // rdx
  __int16 v47; // ax
  __int64 v48; // rdx
  __int16 v49; // ax
  __int64 v50; // rdx
  __int16 v51; // ax
  __int64 v52; // rdx
  __int16 v53; // ax
  __int64 v54; // rax
  int v55; // r9d
  int v56; // edi
  unsigned int v57; // r8d
  int v58; // eax
  __int64 v59; // rdx
  int v60; // ecx
  char v61; // r14
  char v62; // r13
  __int64 v63; // rdx
  int v64; // eax
  char v65; // dl
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // al
  __int16 v69; // cx
  __int64 v70; // rdx
  __int16 v71; // cx
  __int64 v72; // rdx
  __int64 v73; // rdx
  int v74; // eax
  char v75; // dl
  char v76; // r14
  char v77; // dl
  __int64 v78; // rdx
  int v79; // eax
  __int64 v80; // rdx
  int v81; // eax

  v6 = *(_DWORD *)(a1 + 52);
  v8 = (v6 >> 20) & 3 | (v6 >> 21) & 4;
  v9 = v6 >> 6;
  if ( *(int *)(*(_QWORD *)a1 + 192LL) <= 13 || v6 >> 28 != 15 )
  {
    v10 = (v6 >> 8) & 3;
    if ( v10 == 1 )
    {
      v11 = -109;
    }
    else if ( v10 == 2 )
    {
      v11 = -108;
    }
    else
    {
      v11 = -107;
      if ( v10 != 3 )
        return 0;
    }
    v13 = v9 & 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v11;
    v14 = *(_DWORD *)(a1 + 52);
    v15 = word_8DC60[2 * v8 + v13];
    v16 = (v14 >> 8) & 3;
    if ( v15 )
    {
      if ( !v16 )
        return 0;
      v24 = *(_QWORD *)(a1 + 8);
      v25 = *(_DWORD *)(a1 + 20);
      v26 = *(_DWORD *)(a1 + 32);
      if ( v16 == 3 )
      {
        *(_BYTE *)(v24 + 41) = 1;
        *(_BYTE *)(v24 + 45) = 4;
        *(_WORD *)(v24 + 46) = (v25 | (16 * v26)) + 61;
        v41 = *(_QWORD *)(a1 + 8);
        v42 = (*(_WORD *)(a1 + 16) | (16 * *(_WORD *)(a1 + 36))) + 61;
        *(_BYTE *)(v41 + 81) = 1;
        *(_WORD *)(v41 + 86) = v42;
        *(_BYTE *)(v41 + 85) = 4;
        v43 = *(_QWORD *)(a1 + 8);
        v44 = *(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44));
        *(_BYTE *)(v43 + 121) = 1;
        *(_WORD *)(v43 + 126) = v44 + 61;
        *(_BYTE *)(v43 + 125) = 4;
      }
      else
      {
        *(_BYTE *)(v24 + 41) = 1;
        *(_BYTE *)(v24 + 45) = 3;
        *(_WORD *)(v24 + 46) = (v26 | (2 * v25)) + 93;
        if ( v16 == 1 )
        {
          *(_BYTE *)(v24 + 45) = 18;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = (*(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16))) + 93;
          *(_BYTE *)(v27 + 81) = 1;
          *(_WORD *)(v27 + 86) = v28;
          *(_BYTE *)(v27 + 85) = 18;
          v29 = *(_QWORD *)(a1 + 8);
          v30 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
          *(_BYTE *)(v29 + 121) = 1;
          *(_WORD *)(v29 + 126) = v30 + 93;
          *(_BYTE *)(v29 + 125) = 18;
        }
        else
        {
          v36 = *(_QWORD *)(a1 + 8);
          v37 = *(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16));
          *(_BYTE *)(v36 + 81) = 1;
          *(_BYTE *)(v36 + 85) = 3;
          *(_WORD *)(v36 + 86) = v37 + 93;
          v38 = *(_QWORD *)(a1 + 8);
          v39 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
          *(_BYTE *)(v38 + 121) = 1;
          *(_WORD *)(v38 + 126) = v39 + 93;
          *(_BYTE *)(v38 + 125) = 3;
        }
      }
      goto LABEL_39;
    }
    if ( v8 != 7 )
      return 0;
    v17 = HIWORD(v14);
    v18 = BYTE2(v14) & 0xF;
    if ( !(_DWORD)v13 )
    {
      if ( (v14 & 0xA0) != 0 )
        return 0;
      v19 = *(_QWORD *)(a1 + 8);
      if ( v16 == 1 )
      {
        *(_BYTE *)(v19 + 33) = -109;
        v19 = *(_QWORD *)(a1 + 8);
        v40 = *(_WORD *)(a1 + 32) | (2 * *(_WORD *)(a1 + 20));
        *(_BYTE *)(v19 + 41) = 1;
        *(_WORD *)(v19 + 46) = v40 + 93;
        *(_BYTE *)(v19 + 45) = 3;
      }
      else
      {
        v20 = *(_DWORD *)(a1 + 20);
        v21 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 28) )
        {
          v22 = (v20 | (16 * v21)) + 61;
          v23 = 4;
        }
        else
        {
          v45 = v21 | (2 * v20);
          v23 = 3;
          v22 = v45 + 93;
        }
        *(_BYTE *)(v19 + 41) = 1;
        *(_WORD *)(v19 + 46) = v22;
        *(_BYTE *)(v19 + 45) = v23;
      }
      v15 = 351;
      sub_628A0(*(_QWORD *)(a1 + 8) + 80LL, (16 * v18) | *(_BYTE *)(a1 + 52) & 0xF, v16, v19, v13, a6);
      goto LABEL_39;
    }
    v15 = word_8DC20[2 * v18 + ((v9 >> 1) & 1)];
    if ( !v15 || !v16 )
      return 0;
    v31 = *(_QWORD *)(a1 + 8);
    v32 = *(_DWORD *)(a1 + 20);
    v33 = *(_DWORD *)(a1 + 32);
    if ( v16 == 3 )
    {
      *(_BYTE *)(v31 + 41) = 1;
      *(_BYTE *)(v31 + 45) = 4;
      *(_WORD *)(v31 + 46) = (v32 | (16 * v33)) + 61;
      v48 = *(_QWORD *)(a1 + 8);
      v49 = *(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44));
      *(_BYTE *)(v48 + 81) = 1;
      *(_WORD *)(v48 + 86) = v49 + 61;
      *(_BYTE *)(v48 + 85) = 4;
    }
    else
    {
      *(_BYTE *)(v31 + 41) = 1;
      *(_BYTE *)(v31 + 45) = 3;
      *(_WORD *)(v31 + 46) = (v33 | (2 * v32)) + 93;
      if ( v16 == 1 )
      {
        *(_BYTE *)(v31 + 45) = 18;
        v46 = *(_QWORD *)(a1 + 8);
        v47 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
        *(_BYTE *)(v46 + 81) = 1;
        *(_WORD *)(v46 + 86) = v47 + 93;
        *(_BYTE *)(v46 + 85) = 18;
      }
      else
      {
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
        *(_BYTE *)(v34 + 81) = 1;
        *(_BYTE *)(v34 + 85) = 3;
        *(_WORD *)(v34 + 86) = v35 + 93;
      }
    }
    if ( (unsigned __int16)v15 > 0x148u )
    {
      if ( v15 == 885 )
      {
        v50 = *(_QWORD *)(a1 + 8);
        v51 = *(_WORD *)(a1 + 32) | (2 * *(_WORD *)(a1 + 20));
        *(_BYTE *)(v50 + 41) = 1;
        *(_BYTE *)(v50 + 45) = 3;
        *(_WORD *)(v50 + 46) = v51 + 93;
        v52 = *(_QWORD *)(a1 + 8);
        v53 = *(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44));
        *(_BYTE *)(v52 + 81) = 1;
        *(_WORD *)(v52 + 86) = v53 + 61;
        *(_BYTE *)(v52 + 85) = 4;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 2;
        v54 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v54 + 33) = -121;
        *(_BYTE *)(v54 + 72) = 21;
      }
      goto LABEL_39;
    }
    if ( (unsigned __int16)v15 > 0x146u )
    {
      v67 = *(_QWORD *)(a1 + 8);
      v68 = 20 - ((*(_DWORD *)(a1 + 28) == 0) - 1);
      if ( (*(_BYTE *)(a1 + 54) & 1) != 0 )
      {
        v69 = *(_WORD *)(a1 + 32) | (2 * *(_WORD *)(a1 + 20));
        *(_BYTE *)(v67 + 45) = 3;
        *(_BYTE *)(v67 + 41) = 1;
        *(_WORD *)(v67 + 46) = v69 + 93;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 18;
        v70 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v70 + 33) = -109;
        *(_BYTE *)(v70 + 72) = v68;
      }
      else
      {
        v71 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
        *(_BYTE *)(v67 + 85) = 3;
        *(_BYTE *)(v67 + 81) = 1;
        *(_WORD *)(v67 + 86) = v71 + 93;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 18;
        v72 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v72 + 33) = v68 | 0x80;
        *(_BYTE *)(v72 + 72) = 19;
      }
      goto LABEL_39;
    }
    if ( (unsigned __int16)v15 <= 0x143u )
    {
      if ( (unsigned __int16)v15 > 0x141u && (*(_BYTE *)(a1 + 54) & 1) != 0 )
      {
        if ( *(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 24) )
          return 0;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) = 0;
      }
      goto LABEL_39;
    }
    if ( v15 != 325 )
    {
LABEL_39:
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v15;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    v55 = *(_DWORD *)(a1 + 52);
    v56 = *(_DWORD *)(a1 + 32);
    v57 = v17 & 7;
    v58 = *(_DWORD *)(a1 + 20);
    v59 = *(_QWORD *)(a1 + 8);
    v60 = (*(_DWORD *)(a1 + 52) >> 7) & 1;
    if ( v57 > 5 )
    {
      if ( v57 == 7 && (v55 & 0x80000) == 0 )
      {
        sub_62660(v59 + 40, v58, v56, *(_DWORD *)(a1 + 28) == 0);
        sub_62660(*(_QWORD *)(a1 + 8) + 80LL, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 28));
        v66 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(a1 + 28) )
        {
          *(_BYTE *)(v66 + 33) = -108;
          v62 = 21;
        }
        else
        {
          *(_BYTE *)(v66 + 33) = -107;
          v62 = 20;
        }
LABEL_67:
        *(_BYTE *)(v66 + 72) = v62;
        goto LABEL_39;
      }
    }
    else
    {
      if ( (v17 & 4) != 0 )
      {
        v76 = 11;
        if ( (v17 & 1) != 0 )
          v76 = 7;
        v62 = 20;
        if ( *(_DWORD *)(a1 + 28) )
          v62 = 21;
        if ( v16 == 1 )
          v62 = 19;
        *(_BYTE *)(v59 + 41) = 1;
        *(_BYTE *)(v59 + 45) = 3;
        v15 = 326 - v60;
        *(_WORD *)(v59 + 46) = (v56 | (2 * v58)) + 93;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 2;
        sub_626A0(*(_QWORD *)(a1 + 8) + 80LL, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 44), v16);
        v66 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v66 + 33) = v76 | 0x80;
        goto LABEL_67;
      }
      if ( (v17 & 7) == 0 )
      {
        v61 = 20;
        if ( *(_DWORD *)(a1 + 28) )
          v61 = 21;
        v62 = 11;
        if ( v60 )
          v62 = 7;
        sub_626A0(v59 + 40, v58, v56, v16);
        v63 = *(_QWORD *)(a1 + 8);
        v64 = *(_DWORD *)(a1 + 44) | (2 * *(unsigned __int16 *)(a1 + 24));
        *(_BYTE *)(v63 + 81) = 1;
        *(_BYTE *)(v63 + 85) = 3;
        *(_WORD *)(v63 + 86) = v64 + 93;
        v65 = v61 | 0x80;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 2;
        if ( v16 == 1 )
          v65 = -109;
        v66 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v66 + 33) = v65;
        goto LABEL_67;
      }
    }
    if ( v16 == 3 )
    {
      *(_BYTE *)(v59 + 41) = 1;
      *(_BYTE *)(v59 + 45) = 4;
      *(_WORD *)(v59 + 46) = (v58 | (16 * v56)) + 61;
      v80 = *(_QWORD *)(a1 + 8);
      v81 = *(_DWORD *)(a1 + 20) | (16 * *(unsigned __int16 *)(a1 + 32));
      *(_BYTE *)(v80 + 81) = 1;
      *(_WORD *)(v80 + 86) = v81 + 61;
      *(_BYTE *)(v80 + 85) = 4;
    }
    else
    {
      *(_BYTE *)(v59 + 41) = 1;
      *(_WORD *)(v59 + 46) = (v56 | (2 * v58)) + 93;
      if ( v16 == 1 )
      {
        *(_BYTE *)(v59 + 45) = 18;
        v78 = *(_QWORD *)(a1 + 8);
        v79 = *(_DWORD *)(a1 + 32) | (2 * *(unsigned __int16 *)(a1 + 20));
        *(_BYTE *)(v78 + 81) = 1;
        *(_WORD *)(v78 + 86) = v79 + 93;
        *(_BYTE *)(v78 + 85) = 18;
      }
      else
      {
        *(_BYTE *)(v59 + 45) = 3;
        v73 = *(_QWORD *)(a1 + 8);
        v74 = *(_DWORD *)(a1 + 32) | (2 * *(unsigned __int16 *)(a1 + 20));
        *(_BYTE *)(v73 + 81) = 1;
        *(_WORD *)(v73 + 86) = v74 + 93;
        *(_BYTE *)(v73 + 85) = 3;
      }
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 121LL) = 5;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = (v60 == 0 ? 16 : 32)
                                             - (*(_DWORD *)(a1 + 44) | (unsigned int)(2 * *(_DWORD *)(a1 + 24)));
    v62 = byte_8DC00[2 * (v17 & 1) + v60];
    if ( (v17 & 4) != 0 )
    {
      if ( v16 == 3 )
        v75 = 21;
      else
        v75 = (v16 != 1) + 19;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = v60 + 1;
      if ( !v62 )
        goto LABEL_39;
      v66 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v66 + 33) = v62 | 0x80;
      v62 = v75;
    }
    else
    {
      if ( v16 == 3 )
        v77 = 21;
      else
        v77 = (v16 != 1) + 19;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = v60 + 1;
      v66 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v66 + 33) = v77 | 0x80;
      if ( !v62 )
        goto LABEL_39;
    }
    goto LABEL_67;
  }
  if ( (v6 & 0x300) == 0 )
    return 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = 14;
  if ( ((v6 >> 21) & 4) != 0 )
  {
    if ( v8 == 4 )
    {
      return sub_66510(a1);
    }
    else
    {
      if ( v8 != 7 || (v6 & 0x40) == 0 )
        return 0;
      if ( (v6 & 0xF0000) != 0 )
      {
        if ( (v6 & 0x80000) == 0 )
          return 0;
        return sub_66730(a1);
      }
      else
      {
        return sub_666B0(a1);
      }
    }
  }
  else
  {
    if ( (v6 & 0x40) != 0 )
      return 0;
    return sub_66360(a1);
  }
}
