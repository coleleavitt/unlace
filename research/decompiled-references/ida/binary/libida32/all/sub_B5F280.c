__int64 __fastcall sub_B5F280(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v7; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  int v12; // eax
  _BYTE *v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rsi
  unsigned __int8 v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int8 v36; // dl
  char v37; // cl
  unsigned __int8 v38; // al
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  char v45; // al
  unsigned __int64 v46; // rcx
  char v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rdx
  unsigned __int8 v52; // al
  unsigned __int8 v53; // al
  unsigned __int8 v54; // dl
  unsigned __int8 v55; // si
  char v56; // al
  __int64 v57; // rcx
  unsigned __int8 v58; // al
  __int64 v59; // rdx
  _QWORD *v60; // rdi
  __int64 v61; // rax
  unsigned __int8 v62; // al
  bool v63; // al
  unsigned __int8 v64; // [rsp+7h] [rbp-51h]
  __int64 *v65; // [rsp+8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+8h] [rbp-50h]
  unsigned __int8 v67[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v7 = 0;
  v64 = a3 & 1;
  v9 = sub_B685F0(a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 )
    v7 = a2;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( (unsigned int)(v11 - 68) <= 6 )
  {
    v10 = *(_QWORD *)(v10 + 48);
    if ( !v10 )
      goto LABEL_11;
    v11 = *(_BYTE *)(v10 + 28) & 0x7F;
  }
  if ( (unsigned int)(v11 - 40) > 6 )
  {
    if ( (unsigned int)(v11 - 34) > 5 )
      goto LABEL_11;
    v12 = *(_BYTE *)(v10 + 81) >> 5;
  }
  else
  {
    v12 = *(_BYTE *)(v10 + 96) & 7;
  }
  if ( v12 == 2 )
    return 18;
LABEL_11:
  v14 = *(_BYTE **)(v9 + 2320);
  if ( (*v14 & 8) != 0 )
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B && *(char *)(v7 + 97) < 0 )
        return 18;
LABEL_13:
      v15 = (__int64 *)(v7 + 72);
      if ( (v14[1] & 8) != 0 )
      {
        v16 = *(_QWORD *)(v7 + 48);
        if ( ((v16 & 1) != 0 || (byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0)
          && (v16 & 4) == 0
          && (byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
        {
          v28 = *(_BYTE *)(v7 + 28) & 0x7F;
          if ( v28 == 43 || (*(_BYTE *)(v7 + 97) & 0x20) == 0 )
          {
            v29 = *(_QWORD *)(v7 + 8) & 7LL;
            if ( *(char *)(v7 + 29) < 0 )
            {
              if ( !v29 )
                goto LABEL_57;
              v30 = sub_B68920(v7);
              v15 = (__int64 *)(v7 + 72);
            }
            else
            {
              if ( !v29 )
              {
LABEL_57:
                if ( (unsigned int)v28 - 41 > 1 )
                {
                  v65 = v15;
                  v33 = sub_B4FEA0(v7);
                  v15 = v65;
                  if ( !v33 )
                  {
                    v34 = sub_AC7080(v65);
                    v15 = v65;
                    if ( v34 )
                      return sub_B5D9A0(a1, v34, a3);
                    if ( (*(_BYTE *)(v7 + 96) & 5) != 1 )
                    {
                      v63 = sub_B4CBF0(v7);
                      v15 = v65;
                      if ( !v63 )
                        return 18;
                    }
                  }
                }
                goto LABEL_16;
              }
              v30 = *(_QWORD *)(v7 - 8);
            }
            if ( !v30
              || (v31 = *(unsigned int *)(v30 + 36), (unsigned int)v31 > 8)
              || (v32 = 308, !_bittest64(&v32, v31)) )
            {
              v28 = *(_BYTE *)(v7 + 28) & 0x7F;
              goto LABEL_57;
            }
          }
        }
      }
LABEL_16:
      v17 = sub_AC7080(v15);
      if ( v17 )
      {
        while ( 1 )
        {
          v21 = *(_BYTE *)(v17 + 96) & 7;
          if ( (_DWORD)v21 == 3 )
          {
            if ( (*(_BYTE *)(v7 + 96) & 7) == 0 )
              return sub_B5DD60(a1, v17);
          }
          else if ( (_DWORD)v21 == 2 )
          {
            return 18;
          }
          if ( (*(_BYTE *)(v17 + 72) & 3) == 0 )
          {
            v17 = (__int64)sub_6E4E40((__int64 *)(v17 + 72), v17, v21, v18, v19, v20);
            if ( v17 )
              continue;
          }
          goto LABEL_21;
        }
      }
      goto LABEL_21;
    }
  }
  else if ( v7 )
  {
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x20 )
  {
    v27 = **(_QWORD **)(a2 + 56);
    if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 40 >= 7 )
      v27 = 0;
    return sub_B5F280(a1, v27, a3, a4);
  }
LABEL_21:
  if ( (unsigned __int8)sub_B69430(a2) )
  {
    v23 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v23 - 40) > 6 )
    {
      if ( (unsigned int)(v23 - 34) > 5 || !(unsigned __int8)sub_B50F80(*(_QWORD *)(a2 + 112)) )
        return 18;
    }
    else if ( !(unsigned __int8)sub_B4F840(*(_QWORD *)(a2 + 80)) )
    {
      return 18;
    }
  }
  v67[0] = v67[0] & 0xC0 | 0x16;
  if ( (a3 & 2) != 0 )
    goto LABEL_25;
  v35 = sub_B5A830(a2, v64, 0);
  if ( BYTE4(v35) )
  {
    v36 = v67[0];
    if ( ((v67[0] >> 3) & 3) < (int)v35 )
      goto LABEL_65;
    v37 = 8 * (v35 & 3);
    goto LABEL_64;
  }
  v46 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v46 = *(_QWORD *)v46;
LABEL_98:
  v47 = *(_BYTE *)(v46 + 8) & 0x7F;
  if ( v47 )
  {
    while ( 1 )
    {
      if ( v47 == 24 && v46 != 48 )
      {
        v66 = v46;
        v48 = sub_B5A830(v46 - 48, v64, 0);
        v46 = v66;
        if ( BYTE4(v48) )
          break;
      }
      v49 = *(_QWORD *)(sub_B68470(v46) + 16);
      if ( (v49 & 4) != 0 )
      {
        v46 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_98;
      }
      v46 = v49 & 0xFFFFFFFFFFFFFFF8LL;
      v47 = *(_BYTE *)(v46 + 8) & 0x7F;
      if ( !v47 )
        goto LABEL_104;
    }
    v36 = v67[0];
    if ( ((v67[0] >> 3) & 3) < (int)v48 )
      goto LABEL_65;
    v37 = 8 * (v48 & 3);
LABEL_64:
    v67[0] = v37 | v36 & 0xE7 | 0x20;
    v36 = v67[0];
    goto LABEL_65;
  }
LABEL_104:
  v36 = v67[0];
LABEL_65:
  if ( (v36 & 0x20) == 0 )
  {
    v38 = *(_BYTE *)(*(_QWORD *)(v9 + 2320) + 209LL);
    if ( !v64 )
      v38 >>= 3;
    v39 = v38 & 7;
    if ( ((v36 >> 3) & 3) > v39 )
      v67[0] = (8 * (v39 & 3)) | v36 & 0xC7;
    if ( (unsigned __int8)sub_B5BB20(a2) && (v67[0] & 0x18) != 0 )
      v67[0] &= 0xC7u;
  }
LABEL_25:
  v24 = *(_BYTE *)(a2 + 28) & 0x7F;
  v25 = (unsigned __int8)v24;
  if ( (unsigned int)(unsigned __int8)v24 - 40 <= 6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 2320) + 1LL) & 8) == 0 )
    {
LABEL_27:
      if ( (*(_BYTE *)(a2 + 96) & 7) == 3 )
        v67[0] = v67[0] & 0xC7 | 0x20;
      if ( (unsigned int)(v25 - 41) <= 1 )
        sub_B5E790(a1, v67, a2, a3);
      goto LABEL_31;
    }
    v45 = sub_B4F840(*(_QWORD *)(a2 + 80));
    if ( a4 || v45 )
    {
LABEL_92:
      v25 = *(_BYTE *)(a2 + 28) & 0x7F;
      goto LABEL_27;
    }
    v53 = sub_B4EAD0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a3);
    if ( (v53 & 7) == 0 )
      goto LABEL_157;
    if ( (v53 & 7u) > 3 )
    {
      if ( (v53 & 7) == 7 )
        goto LABEL_157;
      v54 = (v53 >> 3) & 3;
      if ( (v67[0] & 0x20) == 0 )
      {
        v55 = (v67[0] >> 3) & 3;
        if ( v55 >= v54 )
        {
          v56 = v53 & 0x20;
          if ( v55 != v54 || v56 )
            v67[0] = v56 | v67[0] & 0xC7 | (8 * (v54 & 3));
        }
      }
      goto LABEL_92;
    }
    return 19;
  }
  if ( (unsigned int)(unsigned __int8)v24 - 34 <= 5 )
  {
    if ( *(_BYTE *)(a2 + 81) >> 5 == 3 )
      v67[0] = v67[0] & 0xC7 | 0x20;
    v40 = *(_QWORD *)(v9 + 2320);
    v41 = v40;
    if ( *(_DWORD *)(v40 + 64) && (*(_BYTE *)(v40 + 68) & 8) != 0 )
    {
      v42 = *(_DWORD *)(*(_QWORD *)(v9 + 17448) + 248LL);
      if ( ((v42 - 25) & 0xFFFFFFEE) != 0 && (unsigned int)(v42 - 49) > 2 )
      {
        if ( !(unsigned __int8)(sub_AE2550((_BYTE *)a2) >> 32) )
        {
          v40 = *(_QWORD *)(v9 + 2320);
          goto LABEL_83;
        }
        v41 = *(_QWORD *)(v9 + 2320);
      }
      if ( (v67[0] & 0x18) != 0 )
        v67[0] &= 0xC7u;
      v40 = v41;
    }
LABEL_83:
    if ( (*(_BYTE *)(v40 + 1) & 8) != 0 && !(unsigned __int8)sub_B50F80(*(_QWORD *)(a2 + 112)) )
    {
      v50 = *(_QWORD *)(a2 + 48);
      v51 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
        v51 = (__int64 *)v51[4];
      if ( v51 )
        v50 = *v51;
      v52 = sub_F40350(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v52 )
        goto LABEL_157;
      if ( v52 <= 3u )
        return 19;
      if ( v52 > 6u )
        goto LABEL_157;
    }
    v43 = *(_QWORD *)(a2 + 152);
    if ( v43 )
    {
      if ( ((v43 >> 1) & 3) == 2 )
      {
        v44 = v43 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v44 )
          sub_B5EB50(a1, v67, a2, v44, v64 | a3 & 0xFFFFFFFE);
      }
    }
    goto LABEL_31;
  }
  if ( (unsigned int)(unsigned __int8)v24 - 58 <= 4 )
  {
    if ( *(_QWORD *)(a2 + 40) || (v59 = *(_QWORD *)(a2 + 120), (v59 & 4) == 0) && (v59 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (unsigned int)(v25 - 60) <= 1 )
        sub_B5E980(a1, v67, a2, a3);
      goto LABEL_31;
    }
    return 17;
  }
  if ( (_BYTE)v24 == 33 )
  {
    v60 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v60 = (_QWORD *)*v60;
    v61 = sub_B68470(v60);
    v62 = sub_B5D9A0(a1, v61, a3);
    if ( (v62 & 7) == 3 || (v62 & 7) == 6 )
    {
      sub_B4E730(v67, v62);
      goto LABEL_31;
    }
    return 17;
  }
  v57 = (unsigned int)(unsigned __int8)v24 - 68;
  if ( (unsigned int)v57 <= 6 )
  {
    v58 = sub_B4EB00(a1, *(_QWORD *)(a2 + 56), a3);
    sub_B4E7B0(v67, v58, (a3 & 2) == 0);
LABEL_31:
    v26 = v67[0] & 7;
    if ( (v67[0] & 7) != 0 )
    {
      if ( (unsigned __int8)v26 <= 3u )
        return v26 | 0x10u;
      if ( (v67[0] & 7) != 7 )
        return v67[0];
    }
LABEL_157:
    BUG();
  }
  if ( (_BYTE)v24 != 24 )
  {
    if ( (_BYTE)v24 == 20 )
      goto LABEL_31;
    if ( (unsigned int)(unsigned __int8)v24 - 64 > 2 )
    {
      if ( (_BYTE)v24 == 31 )
        goto LABEL_31;
    }
    else if ( sub_B56870((_QWORD *)a2, 1, v24, v57, v22) )
    {
      goto LABEL_31;
    }
    return 17;
  }
  return v67[0];
}

