__int64 __fastcall sub_116820(_QWORD *a1, __int64 a2, int *a3, char a4)
{
  int v4; // r13d
  int v6; // eax
  int *v10; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  _DWORD *v17; // rcx
  char v18; // r14
  __int64 v19; // rdi
  _DWORD *v20; // rax
  _DWORD *v21; // r12
  int v22; // eax
  _DWORD *v23; // rdx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rdi
  __int64 v30; // rax
  char v31; // dl
  int v32; // [rsp+4h] [rbp-54h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  _DWORD *v34; // [rsp+8h] [rbp-50h]
  _QWORD v35[9]; // [rsp+10h] [rbp-48h] BYREF

  v35[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[1] + 64LL) + 1504LL) + 80LL);
  if ( a3[9] > 2 * v4 )
    return 0;
  v6 = *a3;
  v10 = a3;
  v32 = a4 & 4;
  if ( (a4 & 4) == 0 && v6 == 11 )
  {
    if ( *((_BYTE *)a3 + 32) != 4 )
      return 0;
    v10 = *((int **)a3 + 5);
    v6 = *v10;
  }
  if ( v6 != 14 )
    return 0;
  v12 = sub_11C8A0(v10, a1 + 6);
  if ( !v12 )
  {
    if ( v4 <= 7 )
      return 0;
    if ( *((_BYTE *)v10 + 32) == 4
      && (v28 = *((_QWORD *)v10 + 5), (unsigned int)(*(_DWORD *)v28 - 8) <= 1)
      && *(_BYTE *)(v28 + 32) == 2 )
    {
      v12 = v28 + 32;
      a1[6] = v10 + 12;
    }
    else
    {
      if ( *((_BYTE *)v10 + 48) != 4 )
        return 0;
      v13 = *((_QWORD *)v10 + 7);
      if ( (unsigned int)(*(_DWORD *)v13 - 8) > 1 || *(_BYTE *)(v13 + 32) != 2 )
        return 0;
      v12 = v13 + 32;
      a1[6] = v10 + 8;
    }
  }
  v33 = v12;
  v14 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), *(unsigned int *)(v12 + 4), 0);
  a1[13] = 0;
  a1[12] = v14;
  if ( !v14 )
    return 0;
  v15 = v33;
  if ( (a4 & 8) != 0 )
  {
    v27 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL), (unsigned int)a3[17], 1);
    v15 = v33;
    if ( v27 < 0 )
      return 0;
  }
  v16 = a1[6];
  a1[8] = **(_QWORD **)(v15 + 8);
  *((_BYTE *)a1 + 133) = (a4 & 2) != 0;
  if ( *(_BYTE *)v16 == 4 )
  {
    v17 = *(_DWORD **)(v16 + 8);
    if ( (unsigned int)(*v17 - 8) <= 1 )
    {
      a1[3] = v17;
      if ( (a4 & 2) == 0 && *v17 == 8 )
        return 0;
      a1[6] = v17 + 8;
    }
  }
  a1[7] = a2;
  sub_125180(a1 + 4);
  v18 = *((_BYTE *)a1 + 133);
  if ( v18 )
  {
    v30 = sub_32ABC0(a1[12], (unsigned int)a3[17], 0);
    a1[13] = 0;
    a1[12] = v30;
    return 1;
  }
  if ( *((_BYTE *)a1 + 32) == 4 )
  {
    v29 = (_DWORD *)a1[5];
    if ( *v29 == 23 )
    {
      if ( (unsigned __int8)sub_152630(v29, (char *)a1 + 124) )
      {
        a1[6] = *(_QWORD *)(a1[6] + 8LL) + 32LL;
        sub_125180(a1 + 4);
      }
    }
  }
  if ( (a4 & 1) == 0 || *((_DWORD *)a1 + 31) )
  {
    if ( v10 != a3 )
      return 1;
    goto LABEL_36;
  }
  v19 = a1[1];
  v35[0] = a1[2];
  v20 = (_DWORD *)sub_129440(v19, a1 + 4, v35, 0);
  v21 = v20;
  if ( !v20 )
    goto LABEL_24;
  v22 = *v20;
  v23 = v21;
  if ( v22 == 9 )
  {
    if ( *((_BYTE *)v21 + 32) == 4 )
    {
      v23 = *((_DWORD **)v21 + 5);
      if ( v23 )
      {
        v22 = *v23;
        goto LABEL_23;
      }
    }
LABEL_24:
    v24 = *((_DWORD *)a1 + 9);
    if ( v24 != 1 )
      goto LABEL_25;
    if ( *((_BYTE *)a1 + 32) == 1 )
    {
      v31 = sub_12CD10(a1 + 4, *a1, 0);
      v24 = *((_DWORD *)a1 + 9);
      if ( !v31 )
      {
LABEL_25:
        if ( v24 == 2 )
        {
          if ( v32 || v10 != a3 )
            return 1;
          goto LABEL_38;
        }
        goto LABEL_26;
      }
      v18 = v31;
      *((_DWORD *)a1 + 31) = 8 * v24;
    }
LABEL_26:
    if ( !(unsigned __int8)sub_1167A0((__int64)a1, 0) || !(unsigned __int8)sub_131830(a1 + 4, *a1, 0) )
      return 0;
    if ( v32 || v10 != a3 )
    {
LABEL_30:
      if ( v18 )
        sub_12AB50(a1 + 4, *a1, *((unsigned int *)a1 + 9), 2);
      return 1;
    }
    goto LABEL_37;
  }
LABEL_23:
  if ( v22 != 23 )
    goto LABEL_24;
  v34 = v23;
  if ( !(unsigned __int8)sub_152630(v23, (char *)a1 + 124) )
    goto LABEL_24;
  a1[7] = v21;
  a1[6] = v34 + 8;
  sub_125180(a1 + 4);
  if ( v10 != a3 )
    return 1;
LABEL_36:
  if ( !v32 )
  {
LABEL_37:
    v24 = *((_DWORD *)a1 + 9);
LABEL_38:
    v25 = *((_DWORD *)a1 + 32);
    v26 = 8 * v24;
    if ( v25 < v26 )
      return 0;
    *((_DWORD *)a1 + 30) = v26;
    *((_DWORD *)a1 + 32) = v25 - v26;
    goto LABEL_30;
  }
  return 1;
}
