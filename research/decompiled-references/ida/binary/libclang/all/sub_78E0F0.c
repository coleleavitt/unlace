__int64 __fastcall sub_78E0F0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int8 v9; // r12
  unsigned int v10; // ecx
  _QWORD *v11; // rsi
  __int64 result; // rax
  int v13; // r15d
  int v14; // eax
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  bool v25; // al
  char v26; // dl
  unsigned __int64 v27; // rax
  bool v28; // al
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  _BYTE *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  _BYTE *v35; // rax
  _QWORD *v36; // rax
  char v37; // al
  char v38; // cl
  unsigned __int8 v39; // al
  unsigned __int8 v40; // si
  unsigned __int8 v41; // dl
  _QWORD *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // rdx
  _BYTE *v47; // rax
  char v49; // [rsp+8h] [rbp-70h]
  char v50; // [rsp+8h] [rbp-70h]
  unsigned __int64 v51; // [rsp+8h] [rbp-70h]
  char v52; // [rsp+8h] [rbp-70h]
  char v53; // [rsp+8h] [rbp-70h]
  char v54; // [rsp+8h] [rbp-70h]
  char v55; // [rsp+8h] [rbp-70h]
  char v56; // [rsp+1Eh] [rbp-5Ah]
  char v57; // [rsp+1Fh] [rbp-59h]
  unsigned __int8 v58[9]; // [rsp+27h] [rbp-51h] BYREF
  unsigned __int64 v59; // [rsp+30h] [rbp-48h]
  unsigned __int64 v60; // [rsp+38h] [rbp-40h]

  v4 = (*(_BYTE *)(a2 + 28) + 98) & 0x7F;
  if ( (unsigned __int8)v4 > 0x2Au )
    return 17;
  v6 = 0x7F07C0E7F79LL;
  if ( !_bittest64(&v6, v4) )
    return 17;
  LOBYTE(v7) = 0;
  v9 = 2;
  if ( (a3 & 2) == 0 )
  {
    v27 = sub_786650(a2, a3 & 1, 0);
    v59 = v27;
    v7 = HIDWORD(v27);
    v60 = v27;
    if ( BYTE4(v27) )
    {
      if ( (int)v27 > 2 )
        LOBYTE(v7) = 0;
      else
        v9 = v27 & 3;
    }
    v58[0] = (32 * (v7 & 1)) | (8 * (v9 & 3)) & 0xDF | v58[0] & 0xC0 | 6;
    if ( (v58[0] & 0x20) == 0 && sub_78BDA0(a2) )
    {
      v28 = v9 == 0;
      v9 = 0;
      LOBYTE(v7) = v28 & v7;
    }
  }
  v10 = a3;
  v58[0] = (32 * (v7 & 1)) | (8 * (v9 & 3)) & 0xDF | v58[0] & 0xC0 | 6;
  if ( (v58[0] & 0x20) != 0 )
    LOBYTE(v10) = a3 | 2;
  v11 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v11 = (_QWORD *)*v11;
  if ( v11 )
    v11 -= 8;
  result = sub_78C840(a1, (__int64)v11, v10);
  v13 = result;
  if ( ((unsigned __int8)result & 7u) > 3 )
  {
    v57 = ((unsigned __int8)result >> 3) & 3;
    v14 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v14 - 33) <= 3 )
    {
      v15 = *(_QWORD *)(a2 + 48);
      v16 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
        v16 = (__int64 *)v16[4];
      if ( v16 )
        v15 = *v16;
      if ( (unsigned __int8)sub_B15EF0(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL)) <= 3u )
        return v13 & 0xFFFFFFC0 | 0x13;
      v17 = *(_QWORD *)(a2 + 152);
      if ( v17 && (*(_QWORD *)(a2 + 152) & 6LL) == 4 && (v33 = v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v51 = v33;
        v19 = a2;
        sub_78D460(a1, v58, a2, v33, a3);
        v20 = v58[0] & 7;
        LOBYTE(v7) = (v58[0] & 0x20) != 0;
        v9 = (v58[0] >> 3) & 3;
        if ( (*(_QWORD *)(v51 + 16) & 6LL) != 2 )
        {
          v56 = v58[0] & 7;
          v19 = 0;
          v35 = (_BYTE *)sub_7D2DE0(*(_QWORD *)(v51 + 16) & 0xFFFFFFFFFFFFFFF8LL, v58, v34, v20);
          LOBYTE(v20) = v56;
          if ( (*v35 & 4) != 0 )
            v19 = *(_QWORD *)((*(_QWORD *)(v51 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 48);
        }
      }
      else
      {
        v18 = (_QWORD *)sub_780C90(a2);
        v19 = (__int64)v18;
        if ( v18 )
        {
          if ( (*v18 & 6LL) == 2 )
          {
            v19 = a2;
            LOBYTE(v20) = 6;
          }
          else
          {
            LOBYTE(v20) = 6;
            v19 = 0;
          }
        }
        else
        {
          LOBYTE(v20) = 6;
        }
      }
      v49 = v20;
      v21 = sub_798D40(a2);
      v22 = *(_QWORD *)(v21 + 2160);
      LOBYTE(v23) = v49;
      if ( *(_DWORD *)(v22 + 64) && (*(_BYTE *)(v22 + 68) & 8) != 0 )
      {
        v24 = *(_DWORD *)(*(_QWORD *)(v21 + 17288) + 248LL);
        if ( v24 > 0x1A )
        {
          if ( v24 - 41 <= 1 )
            goto LABEL_28;
        }
        else if ( v24 > 0x18 )
        {
LABEL_28:
          v25 = v9 == 0;
          v9 = 0;
          LOBYTE(v7) = v25 & v7;
          goto LABEL_29;
        }
        v43 = sub_723500((_BYTE *)a2);
        LOBYTE(v23) = v49;
        if ( BYTE4(v43) )
          goto LABEL_28;
      }
LABEL_29:
      v26 = 1;
      if ( !v19 )
      {
LABEL_33:
        v58[0] = v58[0] & 0xC0 | ((32 * v7) | v23 | (8 * v9)) & 0x3F;
        sub_779E80(v58, v13, v26);
        return v58[0];
      }
      goto LABEL_30;
    }
    if ( (unsigned int)(v14 - 57) > 2 )
    {
      if ( (unsigned int)(v14 - 38) <= 6 )
      {
        if ( (unsigned int)(v14 - 39) > 1 )
        {
          v38 = 6;
        }
        else
        {
          sub_78CF40(a1, v58, a2, a3);
          v38 = v58[0] & 7;
          LOBYTE(v7) = (v58[0] & 0x20) != 0;
          v9 = (v58[0] >> 3) & 3;
        }
        if ( !a4 )
        {
          v53 = v38;
          v39 = sub_77A150(a1, *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a3);
          v38 = v53;
          v40 = (v39 >> 3) & 3;
          v58[0] = (32 * (v7 & 1)) | (8 * (v9 & 3)) & 0xDF | v53 & 7 | v58[0] & 0xC0;
          if ( (((unsigned __int8)v13 | v58[0]) & 0x20) == 0 && v9 >= v40 )
          {
            v41 = v39 & 0x20;
            if ( v9 != v40 || (v9 = (v39 >> 3) & 3, v41) )
            {
              v9 = (v39 >> 3) & 3;
              LOBYTE(v7) = v41 >> 5;
            }
          }
          if ( (v39 & 7u) <= 3 )
          {
            if ( v53 == 4 )
            {
              v38 = 1;
            }
            else if ( v53 == 6 )
            {
              v38 = 3;
            }
          }
        }
        v54 = v38;
        v42 = (_QWORD *)sub_77D020(a2);
        LOBYTE(v23) = v54;
        v26 = 1;
        if ( !v42 || (*v42 & 6LL) != 2 )
          goto LABEL_33;
        v19 = a2;
        goto LABEL_30;
      }
      if ( (unsigned int)(v14 - 66) <= 6 )
      {
        v44 = sub_77A180(a1, *(_QWORD *)(a2 + 56), a3);
        v45 = v44;
        sub_779E80(v58, v44, (v58[0] & 0x20 | a3 & 2 | v13 & 0x20) == 0);
        v23 = v58[0] & 7;
        LOBYTE(v7) = (v58[0] & 0x20) != 0;
        v9 = (v58[0] >> 3) & 3;
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 67 > 3
          || (v55 = v58[0] & 7, v47 = (_BYTE *)sub_7D2DE0(a2, v45, v46, v23), LOBYTE(v23) = v55, (*v47 & 4) == 0) )
        {
LABEL_32:
          v26 = 1;
          goto LABEL_33;
        }
        v19 = *(_QWORD *)(a2 + 48);
        goto LABEL_29;
      }
    }
    else
    {
      if ( (unsigned int)(v14 - 58) <= 1 )
      {
        v19 = a2;
        sub_78D1C0(a1, v58, a2, a3);
        LOBYTE(v23) = v58[0] & 7;
        LOBYTE(v7) = (v58[0] & 0x20) != 0;
        v9 = (v58[0] >> 3) & 3;
        if ( (*(_BYTE *)(a2 + 180) & 7) != 2 )
        {
          v50 = v58[0] & 7;
          v29 = sub_7D65F0(a2);
          v32 = (_BYTE *)sub_7D2DE0(v29, v58, v30, v31);
          LOBYTE(v23) = v50;
          v26 = 1;
          if ( (*v32 & 4) == 0 )
            goto LABEL_33;
          v19 = *(_QWORD *)(v29 + 48);
          goto LABEL_29;
        }
LABEL_30:
        v58[0] = (32 * (v7 & 1)) | (8 * (v9 & 3)) & 0xDF | v23 & 7 | v58[0] & 0xC0;
        if ( (v58[0] & 0x20) != 0 && v57 != 2 )
        {
          v52 = v23;
          v37 = sub_777E60(v19, a3);
          LOBYTE(v23) = v52;
          v26 = v37 ^ 1;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      v36 = (_QWORD *)sub_7A46F0(a2);
      if ( v36 && (*v36 & 6LL) == 2 )
      {
        v19 = a2;
        LOBYTE(v23) = 6;
        goto LABEL_30;
      }
    }
    v26 = 1;
    LOBYTE(v23) = 6;
    goto LABEL_33;
  }
  return result;
}

