__int64 __fastcall sub_155F460(__int64 a1)
{
  int *v1; // rbp
  unsigned __int16 v3; // ax
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  char i; // bp
  int v7; // eax
  __int64 *v9; // rdi
  __int16 v10; // ax
  __int16 v11; // r12
  __int16 v12; // ax
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  __int64 *v21; // rdi
  unsigned __int16 v22; // cx
  unsigned int v23; // eax
  unsigned __int16 v24; // si
  __int64 v25; // rdx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned __int16 v30; // cx
  unsigned int v31; // eax
  unsigned __int16 v32; // si
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned __int16 v37; // si
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned __int16 v40; // si
  __int64 v41; // rdx

  v1 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v3 = *(_WORD *)(a1 + 32);
  if ( v3 > 0x42u )
  {
    if ( v3 != 131 )
    {
      if ( v3 <= 0x83u )
      {
        if ( v3 == 71 )
          goto LABEL_25;
        v9 = *(__int64 **)(a1 + 8);
        if ( (*(_BYTE *)(v9[7] + 1) & 0x10) == 0 )
          goto LABEL_8;
        goto LABEL_18;
      }
      if ( v3 != 139 )
      {
        if ( v3 == 168 )
          goto LABEL_25;
        goto LABEL_17;
      }
    }
    v16 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v16, v1);
    if ( *(_WORD *)(a1 + 32) != 20 )
      return 0;
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)(v17 + 2944);
    v19 = v18 >= *(unsigned int *)(v17 + 2912) ? sub_14180A0(v17, 1u) : *(_QWORD *)(v17 + 2904) + 24 * v18;
    if ( *(_WORD *)(v19 + 16) != 21 )
      return 0;
    v20 = *(_WORD *)(a1 + 90);
    if ( *(_WORD *)(a1 + 32) == 20 )
    {
      *(_WORD *)(a1 + 90) = v20 + 1;
      goto LABEL_41;
    }
    if ( !v20 )
    {
LABEL_41:
      v21 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v21, v1);
      if ( *(_WORD *)(a1 + 32) == 20 )
      {
LABEL_87:
        ++*(_WORD *)(a1 + 90);
        goto LABEL_25;
      }
      v22 = *(_WORD *)(a1 + 90);
      if ( !v22 )
        goto LABEL_25;
      v23 = *(_DWORD *)(a1 + 2792);
      if ( !v23 )
      {
LABEL_80:
        *(_WORD *)(a1 + 90) = v22 - 1;
        goto LABEL_25;
      }
      v24 = *(_WORD *)(a1 + 88);
      v25 = *(_QWORD *)(a1 + 2784) + 24LL * v23 - 24;
      while ( 1 )
      {
        if ( v24 == *(_WORD *)(v25 + 14) )
        {
          if ( *(_DWORD *)(v25 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_46;
        }
        else if ( v24 > *(_WORD *)(v25 + 14) )
        {
          goto LABEL_46;
        }
        if ( v22 <= *(_WORD *)(v25 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v25 + 18) )
          goto LABEL_80;
LABEL_46:
        --v23;
        v25 -= 24;
        *(_DWORD *)(a1 + 2792) = v23;
        if ( !v23 )
          goto LABEL_80;
      }
    }
    v39 = *(_DWORD *)(a1 + 2792);
    if ( !v39 )
    {
LABEL_116:
      *(_WORD *)(a1 + 90) = v20 - 1;
      goto LABEL_41;
    }
    v40 = *(_WORD *)(a1 + 88);
    v41 = *(_QWORD *)(a1 + 2784) + 24LL * v39 - 24;
    while ( 1 )
    {
      if ( v40 == *(_WORD *)(v41 + 14) )
      {
        if ( *(_DWORD *)(v41 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_111;
      }
      else if ( v40 > *(_WORD *)(v41 + 14) )
      {
        goto LABEL_111;
      }
      if ( *(_WORD *)(v41 + 16) >= v20 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v41 + 18) )
        goto LABEL_116;
LABEL_111:
      --v39;
      v41 -= 24;
      *(_DWORD *)(a1 + 2792) = v39;
      if ( !v39 )
        goto LABEL_116;
    }
  }
  if ( v3 >= 0x40u )
    goto LABEL_25;
  if ( v3 == 22 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_QWORD *)(v14 + 2944);
    if ( v15 < *(unsigned int *)(v14 + 2912) )
    {
      if ( *(_WORD *)(*(_QWORD *)(v14 + 2904) + 24 * v15 + 16) != 23 )
        goto LABEL_8;
LABEL_34:
      ++*(_WORD *)(a1 + 88);
LABEL_55:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0((__int64 *)v14, v1);
      if ( *(_WORD *)(a1 + 32) == 22 )
      {
        ++*(_WORD *)(a1 + 88);
        goto LABEL_25;
      }
      v27 = *(_WORD *)(a1 + 88);
      if ( !v27 )
        goto LABEL_25;
      v28 = *(_DWORD *)(a1 + 2792);
      if ( !v28 )
      {
LABEL_65:
        *(_WORD *)(a1 + 88) = v27 - 1;
        goto LABEL_25;
      }
      v29 = *(_QWORD *)(a1 + 2784) + 24LL * v28 - 24;
      while ( 1 )
      {
        if ( v27 == *(_WORD *)(v29 + 14) )
        {
          if ( *(_DWORD *)(v29 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_60;
        }
        else if ( v27 > *(_WORD *)(v29 + 14) )
        {
          goto LABEL_60;
        }
        if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v29 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v29 + 18) )
          goto LABEL_65;
LABEL_60:
        --v28;
        v29 -= 24;
        *(_DWORD *)(a1 + 2792) = v28;
        if ( !v28 )
          goto LABEL_65;
      }
    }
    if ( *(_WORD *)(sub_14180A0(v14, 1u) + 16) != 23 )
      goto LABEL_17;
    v26 = *(_WORD *)(a1 + 88);
    v14 = *(_QWORD *)(a1 + 8);
    if ( *(_WORD *)(a1 + 32) == 22 )
      goto LABEL_34;
    if ( !v26 )
      goto LABEL_55;
    v34 = *(_DWORD *)(a1 + 2792);
    if ( !v34 )
    {
LABEL_97:
      *(_WORD *)(a1 + 88) = v26 - 1;
      goto LABEL_55;
    }
    v35 = *(_QWORD *)(a1 + 2784) + 24LL * v34 - 24;
    while ( 1 )
    {
      if ( *(_WORD *)(v35 + 14) == v26 )
      {
        if ( *(_DWORD *)(v35 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_92;
      }
      else if ( *(_WORD *)(v35 + 14) < v26 )
      {
        goto LABEL_92;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v35 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v35 + 18) )
        goto LABEL_97;
LABEL_92:
      --v34;
      v35 -= 24;
      *(_DWORD *)(a1 + 2792) = v34;
      if ( !v34 )
        goto LABEL_97;
    }
  }
  if ( v3 > 0x16u )
  {
    if ( (unsigned __int16)(v3 - 28) <= 0x20u )
      goto LABEL_25;
    goto LABEL_17;
  }
  if ( v3 != 20 )
    goto LABEL_17;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 2944);
  if ( v5 < *(unsigned int *)(v4 + 2912) )
  {
    if ( *(_WORD *)(*(_QWORD *)(v4 + 2904) + 24 * v5 + 16) != 21 )
      goto LABEL_8;
    goto LABEL_86;
  }
  if ( *(_WORD *)(sub_14180A0(v4, 1u) + 16) != 21 )
  {
LABEL_17:
    v9 = *(__int64 **)(a1 + 8);
    if ( (*(_BYTE *)(v9[7] + 1) & 0x10) == 0 )
      goto LABEL_8;
LABEL_18:
    v10 = *(_WORD *)(a1 + 32);
    if ( (unsigned __int16)(v10 - 14) <= 1u || (unsigned __int16)(v10 - 17) <= 2u )
    {
      v11 = 0;
      while ( 1 )
      {
        v11 |= (*(_WORD *)(a1 + 34) >> 5) & 1;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v9, v1);
        v12 = *(_WORD *)(a1 + 32);
        if ( (unsigned __int16)(v12 - 14) > 1u && (unsigned __int16)(v12 - 17) > 2u )
          break;
        v9 = *(__int64 **)(a1 + 8);
      }
      if ( (_BYTE)v11 )
        return 0;
      if ( v12 != 5 )
        return 3;
      goto LABEL_25;
    }
LABEL_8:
    for ( i = 0; ; i = 1 )
    {
      v7 = sub_155DB90(a1, 0, 1u, nullptr);
      if ( v7 == 3 )
        break;
      if ( v7 == 1 )
      {
        if ( !i )
          return 3;
        return sub_155D540(a1);
      }
      if ( (unsigned int)sub_155CFC0(a1) == 3 )
        return 3;
    }
    return 3;
  }
  if ( *(_WORD *)(a1 + 32) != 20 )
  {
    v30 = *(_WORD *)(a1 + 90);
    if ( !v30 )
    {
LABEL_69:
      v4 = *(_QWORD *)(a1 + 8);
      goto LABEL_70;
    }
    v36 = *(_DWORD *)(a1 + 2792);
    if ( !v36 )
    {
LABEL_106:
      *(_WORD *)(a1 + 90) = v30 - 1;
      goto LABEL_69;
    }
    v37 = *(_WORD *)(a1 + 88);
    v38 = *(_QWORD *)(a1 + 2784) + 24LL * v36 - 24;
    while ( 1 )
    {
      if ( v37 == *(_WORD *)(v38 + 14) )
      {
        if ( *(_DWORD *)(v38 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_101;
      }
      else if ( v37 > *(_WORD *)(v38 + 14) )
      {
        goto LABEL_101;
      }
      if ( v30 <= *(_WORD *)(v38 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v38 + 18) )
        goto LABEL_106;
LABEL_101:
      --v36;
      v38 -= 24;
      *(_DWORD *)(a1 + 2792) = v36;
      if ( !v36 )
        goto LABEL_106;
    }
  }
  v4 = *(_QWORD *)(a1 + 8);
LABEL_86:
  ++*(_WORD *)(a1 + 90);
LABEL_70:
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0((__int64 *)v4, v1);
  if ( *(_WORD *)(a1 + 32) == 20 )
    goto LABEL_87;
  v22 = *(_WORD *)(a1 + 90);
  if ( v22 )
  {
    v31 = *(_DWORD *)(a1 + 2792);
    if ( v31 )
    {
      v32 = *(_WORD *)(a1 + 88);
      v33 = *(_QWORD *)(a1 + 2784) + 24LL * v31 - 24;
      while ( 1 )
      {
        if ( v32 == *(_WORD *)(v33 + 14) )
        {
          if ( *(_DWORD *)(v33 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_75;
        }
        else if ( v32 > *(_WORD *)(v33 + 14) )
        {
          goto LABEL_75;
        }
        if ( v22 <= *(_WORD *)(v33 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v33 + 18) )
          goto LABEL_80;
LABEL_75:
        --v31;
        v33 -= 24;
        *(_DWORD *)(a1 + 2792) = v31;
        if ( !v31 )
          goto LABEL_80;
      }
    }
    goto LABEL_80;
  }
LABEL_25:
  v13 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v13, v1);
  return 0;
}
