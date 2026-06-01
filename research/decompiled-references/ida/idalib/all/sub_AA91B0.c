__int64 __fastcall sub_AA91B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned __int8 v7; // r12
  unsigned __int8 v9; // bl
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  int v21; // r9d
  int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rsi
  unsigned int v34; // r11d
  unsigned int v35; // r9d
  int v36; // r9d
  __int64 v37; // rdi
  __int64 *v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  int v50; // eax
  __int64 v51; // [rsp+0h] [rbp-108h]
  int v52; // [rsp+8h] [rbp-100h]
  unsigned __int64 v53; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v54; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-B0h] BYREF

  v7 = a5;
  v9 = a4;
  v55 = a2;
  v54 = a3;
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43 > 1 )
    v10 = sub_A56C80(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v11 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43 > 1 )
  {
    v11 = sub_A56C80(v11, a2, a3, a4, a5);
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 2320) + 64LL) )
      goto LABEL_10;
  }
  else if ( !*(_DWORD *)(*(_QWORD *)(a1 + 2320) + 64LL) )
  {
    return 0;
  }
  if ( !v10 || !v11 )
  {
LABEL_10:
    if ( v11 | v10 )
      return 0;
    if ( v7 )
    {
      v55 = sub_6D5440(&v55);
      v54 = sub_6D5440(&v54);
    }
    v14 = (__int64 *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
    v15 = (__int64 *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v55) & 7) == (*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v54) & 7) )
      return v55;
    v16 = 0;
    if ( (byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
      v16 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
    v17 = ((unsigned __int8)*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v55) & 7 | v16;
    v18 = 0;
    if ( (byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
      v18 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
    v19 = ((unsigned __int8)*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v54) & 7 | v18;
    if ( v17 != v19 )
    {
      if ( (v17 & 7) != (v19 & 7)
        || (unsigned int)v17 >> 9 != (unsigned int)v19 >> 9
        || ((v17 >> 6) & 7) != ((v19 >> 6) & 7) )
      {
        return 0;
      }
      v20 = HIDWORD(v17);
      v21 = HIDWORD(v17);
      v22 = HIDWORD(v19);
      if ( HIDWORD(v19) && ((WORD2(v19) ^ 0xFFC0) & 0xFFC0) != 0 )
      {
        if ( v20 )
        {
          if ( ((WORD2(v17) ^ 0xFFC0) & 0xFFC0) == 0 )
            v21 = 0;
        }
        else
        {
          v21 = 0;
        }
      }
      else
      {
        if ( !v20 || ((WORD2(v17) ^ 0xFFC0) & 0xFFC0) == 0 )
        {
LABEL_28:
          if ( ((v19 & 8) != 0) != ((v17 & 8) != 0) )
            return 0;
          v23 = (v17 >> 4) & 3;
          v24 = (v19 >> 4) & 3;
          if ( (_DWORD)v23 == 1 || (_DWORD)v24 == 1 )
            return 0;
          if ( (_DWORD)v23 == 2
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL]
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 34 )
          {
            v50 = sub_A71330(a1, v54, 2);
            return sub_AA91B0(a1, v55, v50, 0, 0, 0, 0);
          }
          else
          {
            if ( (_DWORD)v24 != 2
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL]
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) != 34 )
            {
              return 0;
            }
            v25 = sub_A71330(a1, v55, 2);
            return sub_AA91B0(a1, v25, v54, 0, 0, 0, 0);
          }
        }
        v22 = 0;
      }
      if ( v21 != v22 )
        return 0;
      goto LABEL_28;
    }
    v31 = *(_QWORD *)(*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v53 = *(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
    v32 = *(unsigned __int8 *)(v31 + 16);
    v51 = *(_QWORD *)(*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v33 = *(unsigned __int8 *)(v51 + 16);
    if ( (_DWORD)v32 != 26 )
    {
      v34 = v32 - 5;
      if ( (_DWORD)v33 == 26 )
      {
        v52 = 2;
        v36 = 25;
        if ( v34 <= 1 )
          goto LABEL_43;
        if ( (_DWORD)v32 == 36 )
          goto LABEL_44;
      }
      else
      {
        v35 = v33 - 5;
        if ( v34 <= 1 )
        {
          v52 = 2;
          if ( v35 <= 1 )
          {
LABEL_41:
            v35 = v52;
            switch ( v52 )
            {
              case 0:
              case 1:
                goto LABEL_98;
              default:
                goto LABEL_55;
            }
          }
          if ( (_DWORD)v33 == 36 )
            goto LABEL_85;
          goto LABEL_49;
        }
LABEL_55:
        if ( v35 <= 1 )
        {
          if ( (_DWORD)v32 != 36 && (_DWORD)v32 != 58 )
          {
            v52 = *(unsigned __int8 *)(v31 + 16);
            v36 = 2;
            goto LABEL_43;
          }
          goto LABEL_44;
        }
        if ( (_DWORD)v32 == 36 )
        {
          if ( (_DWORD)v33 == 36 || (_DWORD)v33 == 35 )
          {
            v41 = *v15;
            if ( (unsigned int)*(unsigned __int8 *)(*v15 + 16) - 35 > 1 )
            {
              v41 = sub_F63050(*v15, v33, v15, v14);
              v14 = (__int64 *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
            }
            v42 = *v14;
            if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 35 > 1 )
              v42 = sub_F63050(*v14, v42, v15, v14);
            if ( !(unsigned __int8)sub_AAB830(a1, v42, v41) )
              return 0;
            return v55;
          }
          goto LABEL_44;
        }
        if ( (_DWORD)v33 == 36 )
        {
          if ( (_DWORD)v32 != 58 )
          {
            v52 = *(unsigned __int8 *)(v31 + 16);
LABEL_85:
            v36 = 35;
            goto LABEL_43;
          }
          goto LABEL_44;
        }
        v36 = *(unsigned __int8 *)(v51 + 16);
      }
      if ( (_DWORD)v32 == 58 )
      {
        if ( (unsigned int)(v36 - 57) <= 1 )
        {
LABEL_98:
          v49 = (unsigned int)(v33 - 57);
          if ( (unsigned int)v49 > 1 )
          {
            v51 = sub_F63050(v51, v49, v15, v14);
            v31 = *(_QWORD *)v53;
            LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)v53 + 16LL);
          }
          if ( (unsigned int)(v32 - 57) > 1 )
            v31 = sub_F63050(v31, v49, v15, v14);
          if ( *(_QWORD *)(v31 + 32) != *(_QWORD *)(v51 + 32) || *(_DWORD *)(v31 + 20) != *(_DWORD *)(v51 + 20) )
            return 0;
          return v55;
        }
        goto LABEL_44;
      }
      v52 = *(unsigned __int8 *)(v31 + 16);
      goto LABEL_50;
    }
    if ( (_DWORD)v33 == 26 )
    {
      v52 = 25;
      v36 = 25;
      goto LABEL_43;
    }
    v52 = 25;
    v36 = 2;
    if ( (unsigned int)(v33 - 5) <= 1 )
      goto LABEL_43;
    if ( (_DWORD)v33 != 36 )
    {
LABEL_49:
      v36 = *(unsigned __int8 *)(v51 + 16);
LABEL_50:
      if ( v36 == 58 )
        v36 = 57;
LABEL_43:
      if ( v36 == v52 )
        goto LABEL_41;
    }
LABEL_44:
    v37 = *v14;
    v38 = (__int64 *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v38 + 16) == 47 )
      return sub_AA9100(a1, *v38, v54, 0, v32);
    v39 = *(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v40 = *(_QWORD *)v39;
    if ( *(_BYTE *)(*(_QWORD *)v39 + 16LL) == 47 )
      return sub_AA9100(a1, v40, v55, a6, v32);
    if ( a6 == 1 || !v9 )
      goto LABEL_74;
    if ( !sub_9C7DB0(v37, v40, (__int64)v15, (__int64)v38, v32) )
    {
      v46 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_72:
      if ( sub_9C7DB0(v46, v40, v43, v44, v45) )
      {
        v37 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
          return v54;
      }
      else
      {
        v37 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
      }
LABEL_74:
      if ( *(_BYTE *)(v37 + 16) != 16
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16
         || (v37 = sub_F63050(v37, v40, v15, v38)) == 0)
        || (*(_QWORD *)(v37 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
        || (*(_BYTE *)(v37 + 17) & 4) != 0
        || ((*(_BYTE *)(v37 + 18) >> 3) & 3) != 2 )
      {
        v47 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v47 + 16) != 16 )
        {
          v48 = *(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v48 + 16) != 16 )
            return 0;
          v47 = sub_F63050(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL), v40, v48, v38);
          if ( !v47 )
            return 0;
        }
        if ( (*(_QWORD *)(v47 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
          || (*(_BYTE *)(v47 + 17) & 4) != 0
          || ((*(_BYTE *)(v47 + 18) >> 3) & 3) != 2 )
        {
          return 0;
        }
        return v55;
      }
      return v54;
    }
    v46 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
      goto LABEL_72;
    return v55;
  }
  v12 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) != *(_BYTE *)(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
    return 0;
  v26 = sub_9B4870(v11, a2, v12, a4, a5);
  v30 = sub_9B4870(v10, a2, v27, v28, v29);
  return sub_AA91B0(a1, v30, v26, v9, v7, a6, 0);
}
