__int64 __fastcall sub_9A2E90(__int64 *a1, __int64 *a2, __int64 **a3, _WORD *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int16 v7; // r14
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned __int16 v12; // cx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // r14
  __int64 v17; // rsi
  int v18; // eax
  __int64 **i; // rsi
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 ***v27; // rdx
  unsigned int v28; // r14d
  _BOOL8 v29; // r15
  __int64 v30; // r12
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r15
  __int16 v39; // ax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // r14
  unsigned int v44; // eax
  __int64 v45; // r9
  unsigned int v46; // ebx
  __int64 v47; // r12
  __int64 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  _WORD *v53; // rax
  __int64 v54; // [rsp-10h] [rbp-68h]
  __int64 *v55; // [rsp+8h] [rbp-50h]
  unsigned int v56[16]; // [rsp+18h] [rbp-40h] BYREF

  v6 = (__int64)a4;
  v7 = *a4 & 0x1FF;
  if ( v7 == 254 )
  {
    *(_QWORD *)v56 = 0;
    v28 = 1;
    v29 = 0;
    goto LABEL_34;
  }
  v10 = (unsigned __int64)a3[4] & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10 && (*(_WORD *)v10 & 0x1FF) == 0xF4 && a4 == (_WORD *)sub_BD9810(*(_QWORD *)(v10 + 16)) )
  {
    result = sub_BD9810(v6);
    v12 = *(_WORD *)result & 0x1FF;
    if ( v12 <= 0x34u )
    {
      result = 0x10010000000200uLL >> *(_BYTE *)result;
      if ( ((0x10010000000200uLL >> v12) & 1) != 0 )
        return result;
    }
    else
    {
      switch ( v12 )
      {
        case 'N':
          return result;
        case 's':
          return result;
        case 'G':
          result = *(_BYTE *)(*(_QWORD *)(result + 16) + 28LL) & 0x7F;
          if ( (_BYTE)result == 33 )
            return result;
          break;
      }
    }
  }
  if ( v7 == 71 )
  {
    v13 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      if ( (v14 & 7) == 0 && (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        result = sub_B51D10(v13, 0);
        if ( (_DWORD)result == 1444 )
          return result;
      }
    }
  }
  v15 = *a3;
  v16 = a3[1];
  if ( *a3 != v16 )
  {
    v17 = *a2;
    v18 = *(_DWORD *)v15 & 3 | (4 * (v15[1] & 3));
    if ( (unsigned int)v18 > 5 && v18 <= 8 )
    {
      v35 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( ((*(_WORD *)v35 + 423) & 0x1FFu) <= 4 )
      {
        v55 = *a3;
        v36 = sub_BD7B40(*(_QWORD *)(v35 + 32));
        v15 = v55;
        if ( v6 == v36 )
        {
          result = sub_BDA770(v35, v17);
          if ( (_BYTE)result )
            return result;
          v15 = *a3;
          v16 = a3[1];
        }
      }
    }
  }
  for ( i = a3; ; v15 = *i )
  {
    if ( v16 == v15 )
      goto LABEL_28;
    v20 = *v15;
    v21 = *(_DWORD *)v15 & 3 | (4 * (v15[1] & 3));
    if ( (unsigned int)v21 <= 5 || v21 > 8 )
    {
      v22 = v15 + 2;
      while ( v16 != v22 )
      {
        v23 = v22[1];
        v20 = *v22;
        v22 += 2;
        v24 = v20 & 3 | (4 * (v23 & 3));
        if ( (unsigned int)v24 > 5 && v24 <= 8 )
          goto LABEL_25;
      }
      goto LABEL_28;
    }
LABEL_25:
    v25 = v20 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_WORD *)v25 & 0x1FF) == 0x8B )
    {
      if ( v6 == v25 )
        goto LABEL_91;
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
        break;
    }
LABEL_28:
    if ( (((__int64)i[4] >> 1) & 3) == 1 )
    {
      i = (__int64 **)i[10][2];
    }
    else
    {
      if ( ((unsigned __int64)i[4] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_44;
      v27 = (__int64 ***)i[10];
      if ( (unsigned int)(((char *)i[11] - (char *)v27) >> 4) != 1 )
        goto LABEL_44;
      i = *v27;
      if ( (unsigned int)(((char *)(*v27)[8] - (char *)(*v27)[7]) >> 4) > 1 )
        goto LABEL_44;
    }
    v16 = i[1];
  }
  v37 = sub_BD9810(v26);
  if ( v6 == v37 || (sub_EA5A50(v56, v37), v38 = sub_EA1E50(v56, v6), sub_EA1E10(v56), v38) )
  {
LABEL_91:
    v28 = 0;
    v39 = *(_WORD *)v6 & 0x1FF;
    if ( v39 != 130 )
    {
      *(_QWORD *)v56 = 0;
      v29 = 0;
      goto LABEL_64;
    }
LABEL_45:
    v40 = v6 + 16;
    v41 = v6 + 16 + 8LL * (*(_DWORD *)v6 >> 9);
    if ( v6 + 16 >= v41 )
    {
      if ( v6 + 16 == v41 )
      {
LABEL_49:
        v29 = 0;
LABEL_50:
        *(_QWORD *)v56 = 0;
        if ( v28 != 3 )
          goto LABEL_34;
        v39 = 130;
        goto LABEL_52;
      }
      while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 46 )
      {
        v41 += 8LL;
        if ( v40 == v41 )
          goto LABEL_49;
      }
    }
    else
    {
      v42 = v6 + 16;
      while ( 1 )
      {
        v40 = v42;
        if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) == 46 )
          break;
        v42 += 8;
        if ( v41 == v42 )
          goto LABEL_49;
      }
    }
    v29 = v40 != v41;
    goto LABEL_50;
  }
LABEL_44:
  v28 = 3;
  v39 = *(_WORD *)v6 & 0x1FF;
  if ( v39 == 130 )
    goto LABEL_45;
  *(_QWORD *)v56 = 0;
  v29 = 0;
LABEL_52:
  v43 = a3[5];
  if ( !v43 )
  {
    v48 = a3[7];
    v28 = 3;
    if ( v48 != a3[8] && (v48[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v53 = (_WORD *)sub_971DB0(v48[1] & 0xFFFFFFFFFFFFFFF8LL, 0);
      sub_9A2810(v53, *a1, v56, 1u, 0);
      v39 = *(_WORD *)v6 & 0x1FF;
    }
LABEL_64:
    v30 = 0;
    if ( ((v39 + 509) & 0x1FFu) <= 0x7E )
    {
      v6 = sub_BD7DA0(v6);
      v39 = *(_WORD *)v6 & 0x1FF;
    }
    if ( v39 == 118 )
    {
LABEL_84:
      v34 = *(unsigned int *)(v6 + 4);
      v32 = 0;
      v33 = 0;
      goto LABEL_35;
    }
    if ( (unsigned __int16)v39 <= 0x76u )
    {
      if ( v39 != 80 )
      {
        if ( (unsigned __int16)v39 <= 0x50u )
        {
          if ( v39 != 4 )
          {
            if ( v39 != 46 )
              goto LABEL_34;
            v49 = sub_EC8B80(v6);
            v34 = *(unsigned int *)(v6 + 40);
            v32 = 0;
            v33 = 0;
            v30 = v49;
            goto LABEL_35;
          }
          v30 = sub_EC8B80(*(_QWORD *)(v6 + 16));
          goto LABEL_84;
        }
        if ( v39 == 86 )
        {
          v30 = sub_EC8B80(*(_QWORD *)(v6 + 16));
          v52 = sub_C70DC0(v6);
          v32 = 0;
          v33 = 0;
          v34 = v52;
          goto LABEL_35;
        }
        if ( v39 != 87 )
          goto LABEL_34;
      }
      v50 = sub_EC8B80(*(_QWORD *)(v6 + 16));
      v34 = *(unsigned int *)(v6 + 32);
      v32 = 0;
      v33 = 0;
      v30 = v50;
      goto LABEL_35;
    }
    if ( (unsigned __int16)v39 > 0x81u )
    {
      if ( v39 == 251 )
      {
        v32 = 0;
        v33 = 0;
        v34 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 8LL);
        goto LABEL_35;
      }
    }
    else
    {
      if ( (unsigned __int16)v39 >= 0x80u )
      {
        v34 = *(unsigned int *)(v6 + 16);
        v32 = 0;
        v33 = 0;
        goto LABEL_35;
      }
      if ( v39 == 119 || v39 == 123 )
      {
        v30 = sub_EC8B80(*(_QWORD *)(v6 + 16));
        v51 = sub_EC8B80(*(_QWORD *)(v6 + 24));
        v34 = *(unsigned int *)(v6 + 4);
        v33 = (unsigned int)v51;
        v32 = HIDWORD(v51);
        goto LABEL_35;
      }
    }
LABEL_34:
    v30 = sub_EC8B80(v6);
    v31 = sub_EC7AA0(v6);
    v32 = 0;
    v33 = 0;
    v34 = v31;
LABEL_35:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64, _BOOL8))(*(_QWORD *)a5 + 24LL))(
      a5,
      v28,
      v34,
      *(_QWORD *)v56,
      v30,
      (v32 << 32) | v33,
      v29);
    return v54;
  }
  v44 = sub_EC7AA0(a3[5]);
  v45 = 0;
  v46 = v44;
  if ( (*(_WORD *)v43 & 0x1FF) == 0xF3 )
  {
    v47 = v43[4];
    v46 = sub_EC7AA0(v47);
    v45 = sub_EC8B80(v47);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned __int64, __int64, _BOOL8))(*(_QWORD *)a5 + 24LL))(
           a5,
           2,
           v46,
           0,
           v46 | ((unsigned __int64)v46 << 32),
           v45,
           v29);
}

