__int64 __fastcall sub_B5ECA0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int8 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v7; // r8
  unsigned __int8 v11; // r8
  unsigned int v12; // edx
  _QWORD *v13; // rsi
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rax
  __int64 *v17; // rdx
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // rbp
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // dl
  unsigned __int64 v27; // rax
  char v28; // al
  __int64 v29; // rbp
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // di
  char v35; // al
  char v36; // r8
  __int64 *v37; // rax
  char v38; // r12
  unsigned __int8 v39; // al
  unsigned __int64 v40; // rdi
  unsigned __int8 v41; // al
  unsigned __int8 v42[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = a3 & 1;
  v5 = (*(_BYTE *)(a2 + 28) + 96) & 0x7F;
  if ( (unsigned __int8)v5 > 0x2Au )
    return 17;
  v7 = 0x7F07C0E7F79LL;
  if ( !_bittest64(&v7, v5) )
    return 17;
  v11 = v42[0] & 0xC0 | 0x16;
  v42[0] = v11;
  if ( (a3 & 2) == 0 )
  {
    v27 = sub_B5A830(a2, v4, 0);
    v11 = v42[0];
    if ( BYTE4(v27) && (int)v27 <= ((v42[0] >> 3) & 3) )
    {
      v11 = (8 * (v27 & 3)) | v42[0] & 0xE7 | 0x20;
      v42[0] = v11;
    }
    if ( (v11 & 0x20) == 0 )
    {
      v28 = sub_B5BB20(a2);
      v11 = v42[0];
      if ( v28 )
      {
        if ( (v42[0] & 0x18) != 0 )
        {
          v11 = v42[0] & 0xC7;
          v42[0] &= 0xC7u;
        }
      }
    }
  }
  v12 = a3;
  if ( (v11 & 0x20) != 0 )
    LOBYTE(v12) = v4 & 1 | a3 & 0xFE | 2;
  v13 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v13 = (_QWORD *)*v13;
  if ( v13 )
    v13 -= 8;
  v14 = sub_B5D9A0(a1, (__int64)v13, v12);
  if ( (v14 & 7) == 0 )
    goto LABEL_95;
  if ( (v14 & 7) <= 3 )
    return v14;
  if ( (v14 & 7) == 7 )
    goto LABEL_95;
  v15 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v15 - 35) <= 3 )
  {
    v16 = *(_QWORD *)(a2 + 48);
    v17 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
      v17 = (__int64 *)v17[4];
    if ( v17 )
      v16 = *v17;
    v18 = sub_F40350(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v18 )
    {
      if ( v18 <= 3u )
        return 19;
      if ( v18 <= 6u )
      {
        v19 = *(_QWORD *)(a2 + 152);
        if ( v19 && ((v19 >> 1) & 3) == 2 && (v20 = v19 & 0xFFFFFFFFFFFFFFF8LL, (v21 = v20) != 0) )
        {
          sub_B5EB50(a1, v42, a2, v20, a3);
          if ( ((*(__int64 *)(v21 + 16) >> 1) & 3) != 1 )
          {
            if ( (*(_BYTE *)sub_B9F900(*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL) & 4) != 0 )
            {
              v22 = *(_QWORD *)((*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 48);
LABEL_33:
              v24 = sub_B685F0(a2);
              v25 = *(_QWORD *)(v24 + 2320);
              if ( *(_DWORD *)(v25 + 64)
                && (*(_BYTE *)(v25 + 68) & 8) != 0
                && (((*(_DWORD *)(*(_QWORD *)(v24 + 17448) + 248LL) - 25) & 0xFFFFFFEE) == 0
                 || (unsigned __int8)(sub_AE2550((_BYTE *)a2) >> 32))
                && (v42[0] & 0x18) != 0 )
              {
                v42[0] &= 0xC7u;
              }
              goto LABEL_35;
            }
LABEL_32:
            v22 = 0;
            goto LABEL_33;
          }
        }
        else
        {
          v23 = (__int64 *)sub_B53BF0(a2);
          if ( !v23 || ((*v23 >> 1) & 3) != 1 )
            goto LABEL_32;
        }
        v22 = a2;
        goto LABEL_33;
      }
    }
LABEL_95:
    BUG();
  }
  if ( (unsigned int)(v15 - 59) > 2 )
  {
    if ( (unsigned int)(v15 - 40) > 6 )
    {
      if ( (unsigned int)(v15 - 68) > 6 )
        goto LABEL_38;
      v38 = (v42[0] & 0x20) == 0 && (v14 & 0x20) == 0 && (a3 & 2) == 0;
      v39 = sub_B4EB00(a1, *(_QWORD *)(a2 + 56), a3);
      sub_B4E7B0(v42, v39, v38);
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 69 > 3 )
        goto LABEL_38;
      if ( (*(_BYTE *)sub_B9F900(a2) & 4) == 0 )
      {
        v40 = *(_QWORD *)sub_B9F900(a2) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v40 )
        {
          v41 = sub_B5DDC0(v40);
          sub_B4E7B0(v42, v41, v38);
        }
        goto LABEL_38;
      }
      v22 = *(_QWORD *)(a2 + 48);
      goto LABEL_35;
    }
    if ( (unsigned int)(v15 - 41) <= 1 )
      sub_B5E790(a1, v42, a2, a3);
    if ( !a4 )
    {
      v30 = sub_B4EAD0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a3);
      v31 = v42[0];
      v32 = v30 & 7;
      v33 = (v30 >> 3) & 3;
      if ( (v42[0] & 0x20) == 0 && (v14 & 0x20) == 0 )
      {
        v34 = (v42[0] >> 3) & 3;
        if ( v34 >= v33 )
        {
          v35 = v30 & 0x20;
          if ( v34 != v33 || v35 )
          {
            v42[0] = v35 | v42[0] & 0xC7 | (8 * (v33 & 3));
            v31 = v42[0];
          }
        }
      }
      v36 = v31 & 7;
      if ( !v32 )
        goto LABEL_95;
      if ( v32 > 3u )
      {
        if ( v32 > 6u )
          goto LABEL_95;
      }
      else if ( v36 == 4 )
      {
        v36 = 1;
      }
      else if ( v36 == 6 )
      {
        v36 = 3;
      }
      v42[0] = v42[0] & 0xF8 | v36 & 7;
    }
    v37 = (__int64 *)sub_B50190(a2);
    if ( !v37 )
      goto LABEL_38;
LABEL_75:
    if ( ((*v37 >> 1) & 3) != 1 )
      goto LABEL_38;
    goto LABEL_51;
  }
  if ( (unsigned int)(v15 - 60) > 1 )
  {
    v37 = (__int64 *)sub_B734D0(a2);
    if ( !v37 )
      goto LABEL_38;
    goto LABEL_75;
  }
  sub_B5E980(a1, v42, a2, a3);
  if ( (*(_BYTE *)(a2 + 180) & 7) != 2 )
  {
    v29 = sub_B9B550(a2);
    if ( (*(_BYTE *)sub_B9F900(v29) & 4) == 0 )
      goto LABEL_38;
    v22 = *(_QWORD *)(v29 + 48);
LABEL_35:
    if ( !v22 )
      goto LABEL_38;
    goto LABEL_36;
  }
LABEL_51:
  v22 = a2;
LABEL_36:
  if ( (((unsigned __int8)v14 >> 3) & 3) != 2 && (v42[0] & 0x20) != 0 )
  {
    v26 = sub_B4DE80(v22, a3) ^ 1;
    goto LABEL_39;
  }
LABEL_38:
  v26 = 1;
LABEL_39:
  sub_B4E7B0(v42, v14, v26);
  return v42[0];
}

