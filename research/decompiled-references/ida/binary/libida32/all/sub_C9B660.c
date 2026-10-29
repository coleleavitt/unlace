__int64 __fastcall sub_C9B660(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rsi
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // r15
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // r12d
  int v26; // eax
  int v27; // r15d
  int v28; // eax
  int v29; // r14d
  unsigned int v30; // r12d
  unsigned int i; // r14d
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  char v38; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+18h] [rbp-70h]
  unsigned int v40; // [rsp+20h] [rbp-68h]
  int v41; // [rsp+24h] [rbp-64h]
  char v42; // [rsp+2Ah] [rbp-5Eh]
  unsigned __int8 v43; // [rsp+2Bh] [rbp-5Dh]
  unsigned int v44; // [rsp+2Ch] [rbp-5Ch]
  __int64 v45; // [rsp+30h] [rbp-58h]
  _BYTE *v46; // [rsp+40h] [rbp-48h] BYREF
  __int64 v47[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = (unsigned __int8)a1[586];
  if ( !(_BYTE)v6 )
  {
    v7 = sub_C9B050((__int64)a1, a2);
    if ( !BYTE4(v7) )
      return v6;
    v47[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C80E60((__int64)a1, v7, v47) )
      return v6;
  }
  v36 = *(_QWORD *)(a2 + 16);
  v37 = *(_QWORD *)(a2 + 24);
  v40 = -1;
  v41 = sub_C8E170((__int64)a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( !a1[584] )
  {
    v47[0] = a2 | 2;
    v40 = sub_C9B2B0((__int64)a1, v47, 13, 1u, 0, 1, 0);
    if ( !a1[584] )
    {
      v47[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C7D320((__int64)a1, v47) )
        return 0;
      v47[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C81650((__int64)a1, 13, v40, v47) )
        return 0;
    }
  }
  v12 = *(_QWORD *)(v36 + 8);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 7
    || (v9 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v9 + 16) == 7)
    && (v39 = *(_QWORD *)(v36 + 8), v14 = sub_F3F310(*v13, v12, v9, v10), v12 = v39, v14) )
  {
    v12 = *(_QWORD *)(v14 + 32);
    v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v15 = *(_QWORD *)(v37 + 8);
  v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 7 )
    goto LABEL_9;
  v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v18 != 7 )
    goto LABEL_11;
  v17 = sub_F3F310(v17, v12, v9, v18);
  if ( v17 )
  {
LABEL_9:
    v15 = *(_QWORD *)(v17 + 32);
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v17 = *(_QWORD *)v16;
  v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_11:
  v19 = *v13;
  v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v38 = v20 == 14;
  v42 = (_BYTE)v18 == 14;
  v43 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  LOBYTE(v11) = v20 == 14 && v43 == 2;
  v6 = v11;
  if ( (_BYTE)v11 )
  {
    if ( (_BYTE)v18 == 14 )
    {
      if ( *(_BYTE *)(v19 + 16) != 14 )
        v19 = sub_C8AD90(v19, v12, v43, v18);
      v25 = sub_C8D700((__int64)a1, *(_QWORD *)(v19 + 32));
      if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v36)
        && (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v37) )
      {
        v47[0] = a2 | 4;
        return (unsigned int)sub_C7E7C0((__int64)a1, v25, v47);
      }
      return 0;
    }
    goto LABEL_13;
  }
  if ( v43 != 3 || (_BYTE)v18 != 14 )
  {
    if ( v20 != 14 )
    {
      v26 = sub_C8D700((__int64)a1, v12);
      v47[0] = v36 | 2;
      v27 = v26;
      v44 = sub_C9B2B0((__int64)a1, v47, v26, 1u, 0, 1, 0);
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v36) )
        return 0;
      v45 = a2 | 4;
      v47[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C81650((__int64)a1, v27, v44, v47) )
        return 0;
      goto LABEL_48;
    }
LABEL_13:
    v47[0] = v36 | 2;
    v44 = sub_C9B2B0((__int64)a1, v47, 13, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v36) )
      return 0;
    v45 = a2 | 4;
    v47[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C81650((__int64)a1, 13, v44, v47) )
      return 0;
LABEL_48:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
    {
      v47[0] = v37 | 2;
      v30 = sub_C9B2B0((__int64)a1, v47, 13, 1u, 0, 1, 0);
      if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v37) )
      {
        v47[0] = v45;
        if ( (unsigned __int8)sub_C81650((__int64)a1, 13, v30, v47) )
        {
LABEL_51:
          v46 = a1;
          for ( i = 0; ; i = 1 )
          {
            if ( !a1[584] )
            {
              v47[0] = v45;
              if ( !(unsigned __int8)sub_C80B80((__int64)a1, 13, v40, v47) )
                break;
            }
            if ( v43 == 3 )
            {
              if ( !(unsigned __int8)sub_C930B0((__int64 *)&v46, v38, 0, i, v44, v36)
                || !(unsigned __int8)sub_C930B0((__int64 *)&v46, v42, 0, i, v30, v37) )
              {
                return 0;
              }
              v47[0] = v45;
              if ( v41 == 12 )
              {
                v32 = sub_C8DEB0((__int64)a1, a2);
                if ( !(unsigned __int8)sub_C807F0((__int64)a1, v32, v47) )
                  return 0;
              }
              else if ( !(unsigned __int8)sub_C7D180((__int64)a1, v41, v47) )
              {
                return 0;
              }
            }
            else if ( v43 <= 3u )
            {
              if ( v43 != 2
                || !(unsigned __int8)sub_C930B0((__int64 *)&v46, v38, 0, i, v44, v36)
                || !(unsigned __int8)sub_C930B0((__int64 *)&v46, v42, 0, i, v30, v37) )
              {
                return 0;
              }
              v47[0] = v45;
              if ( v41 == 12 )
              {
                v35 = sub_C8DEB0((__int64)a1, a2);
                if ( !(unsigned __int8)sub_C81620((__int64)a1, v35, v47) )
                  return 0;
              }
              else if ( !(unsigned __int8)sub_C7E6E0((__int64)a1, v41, v47) )
              {
                return 0;
              }
            }
            else if ( v43 == 5 )
            {
              if ( !(unsigned __int8)sub_C930B0((__int64 *)&v46, v38, 1, i, v44, v36)
                || !(unsigned __int8)sub_C930B0((__int64 *)&v46, v42, 1, i, v30, v37) )
              {
                return 0;
              }
              v47[0] = v45;
              if ( v41 == 12 )
              {
                v33 = sub_C8DEB0((__int64)a1, a2);
                if ( !(unsigned __int8)sub_C800D0((__int64)a1, v33, v47) )
                  return 0;
              }
              else if ( !(unsigned __int8)sub_C7C1C0((__int64)a1, v41, v47) )
              {
                return 0;
              }
            }
            else
            {
              if ( v43 != 6
                || !(unsigned __int8)sub_C930B0((__int64 *)&v46, v38, 1, i, v44, v36)
                || !(unsigned __int8)sub_C930B0((__int64 *)&v46, v42, 1, i, v30, v37) )
              {
                return 0;
              }
              v47[0] = v45;
              if ( v41 == 12 )
              {
                v34 = sub_C8DEB0((__int64)a1, a2);
                if ( !(unsigned __int8)sub_C81760((__int64)a1, v34, v47) )
                  return 0;
              }
              else if ( !(unsigned __int8)sub_C7FCE0((__int64)a1, v41, v47) )
              {
                return 0;
              }
            }
            if ( a1[584] )
            {
              v47[0] = v45;
              if ( !(unsigned __int8)sub_C7EAD0((__int64)a1, v41, v47) )
                return 0;
            }
            else
            {
              v47[0] = v45;
              if ( !(unsigned __int8)sub_C81150((__int64)a1, v41, i, v47) )
                return 0;
            }
            if ( i == 1 )
              return 1;
          }
        }
      }
    }
    else
    {
      v28 = sub_C8D700((__int64)a1, v15);
      v47[0] = v37 | 2;
      v29 = v28;
      v30 = sub_C9B2B0((__int64)a1, v47, v28, 1u, 0, 1, 0);
      if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v37) )
      {
        v47[0] = v45;
        if ( (unsigned __int8)sub_C81650((__int64)a1, v29, v30, v47) )
          goto LABEL_51;
      }
    }
    return 0;
  }
  if ( *(_BYTE *)(v17 + 16) != 14 )
    v17 = sub_C8AD90(v17, v12, v43, v18);
  v21 = *(_QWORD *)(v17 + 32);
  v22 = sub_C8D700((__int64)a1, v21);
  if ( v20 == 14 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v36) )
      return v6;
  }
  else
  {
    v23 = sub_C9B050((__int64)a1, v37);
    if ( !BYTE4(v23) )
      return v6;
    v47[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C80E60((__int64)a1, v23, v47) )
      return v6;
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v36) )
      return v6;
    v47[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C81040((__int64)a1, v22, 0, v47) )
      return v6;
    if ( !(unsigned __int8)sub_C8ED90((__int64)a1, v22, v21, a2, v24) )
      return v6;
    v47[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C81040((__int64)a1, v22, 1u, v47) )
      return v6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v37) )
  {
    v47[0] = a2 | 4;
    return (unsigned int)sub_C7D250((__int64)a1, v22, v47);
  }
  return v6;
}

