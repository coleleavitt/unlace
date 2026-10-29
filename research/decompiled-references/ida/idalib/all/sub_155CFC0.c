__int64 __fastcall sub_155CFC0(__int64 a1)
{
  __int16 v2; // ax
  int v3; // eax
  unsigned __int16 v4; // cx
  unsigned int v5; // eax
  unsigned __int16 v6; // si
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int *v12; // rbp
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  int *v16; // rbp
  __int64 *v17; // rdi
  __int16 v18; // ax
  int v19; // eax
  int v20; // eax
  __int64 *v21; // rdi
  __int64 v22; // rdi
  __int16 v23; // ax
  int v24; // eax
  __int64 *v25; // rdi
  int v26; // eax
  __int64 *v27; // rdi
  unsigned __int16 v28; // cx
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  unsigned __int16 v33; // si
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  int *v36; // rsi
  int v37; // eax
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 *v40; // rdi
  __int16 v41[13]; // [rsp+Eh] [rbp-1Ah] BYREF

  v2 = *(_WORD *)(a1 + 32);
  if ( v2 == 179 )
    goto LABEL_31;
  if ( (unsigned __int16)v2 <= 0xB3u )
  {
    if ( v2 != 106 )
    {
      if ( (unsigned __int16)v2 <= 0x6Au )
      {
        if ( v2 != 86 && v2 != 103 )
          goto LABEL_35;
      }
      else
      {
        if ( v2 == 113 )
        {
          v8 = *(_QWORD *)(a1 + 8);
          v9 = *(_QWORD *)(v8 + 2944);
          if ( *(unsigned int *)(v8 + 2912) <= v9 )
          {
            v10 = sub_14180A0(v8, 1u);
            v8 = *(_QWORD *)(a1 + 8);
          }
          else
          {
            v10 = *(_QWORD *)(v8 + 2904) + 24 * v9;
          }
          v11 = *(_DWORD *)(a1 + 16);
          v12 = (int *)(a1 + 16);
          if ( *(_WORD *)(v10 + 16) != 22 )
          {
            *(_DWORD *)(a1 + 40) = v11;
            sub_14634E0((__int64 *)v8, (int *)(a1 + 16));
            return 2;
          }
LABEL_32:
          *(_DWORD *)(a1 + 40) = v11;
          sub_14634E0((__int64 *)v8, v12);
          if ( *(_WORD *)(a1 + 32) == 22 )
          {
            v26 = *(_DWORD *)(a1 + 16);
            ++*(_WORD *)(a1 + 88);
            v27 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = v26;
            sub_14634E0(v27, v12);
            v41[0] = 23;
            if ( (unsigned __int8)sub_15680D0(a1, v41, 1, 0) )
              return 2;
          }
          return 3;
        }
        if ( v2 != 129 )
          goto LABEL_35;
      }
    }
LABEL_46:
    v20 = *(_DWORD *)(a1 + 16);
    v21 = *(__int64 **)(a1 + 8);
    v16 = (int *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v20;
    sub_14634E0(v21, (int *)(a1 + 16));
    if ( !(unsigned __int8)sub_155CC80(a1) )
      return 3;
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(_WORD *)(a1 + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v22 + 56) + 1LL) & 8) == 0 )
    {
LABEL_55:
      if ( v23 == 416 )
      {
        v24 = *(_DWORD *)(a1 + 20);
        v25 = *(__int64 **)(a1 + 8);
        if ( !v24 )
          v24 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = v24;
        sub_14634E0(v25, (int *)(a1 + 16));
        v23 = *(_WORD *)(a1 + 32);
      }
      if ( v23 == 5 )
        goto LABEL_43;
      if ( v23 != 418 )
        return 3;
LABEL_61:
      v19 = *(_DWORD *)(a1 + 20);
      if ( !v19 )
        v19 = *(_DWORD *)(a1 + 16);
      goto LABEL_63;
    }
    if ( v23 != 5 && v23 != 72 )
    {
      if ( v23 != 418 )
      {
LABEL_51:
        if ( v23 != 329 && v23 != 163 )
          goto LABEL_55;
        goto LABEL_53;
      }
      v35 = *(_QWORD *)(v22 + 2944);
      if ( v35 >= *(unsigned int *)(v22 + 2912) )
      {
        if ( *(_WORD *)(sub_14180A0(v22, 1u) + 16) != 72 )
        {
          v23 = *(_WORD *)(a1 + 32);
          goto LABEL_51;
        }
      }
      else if ( *(_WORD *)(*(_QWORD *)(v22 + 2904) + 24 * v35 + 16) != 72 )
      {
        goto LABEL_61;
      }
    }
LABEL_53:
    if ( (unsigned __int8)sub_1566C80(a1, 0) )
      return 3;
    v23 = *(_WORD *)(a1 + 32);
    goto LABEL_55;
  }
  if ( (unsigned __int16)v2 <= 0x111u )
  {
    if ( (unsigned __int16)v2 >= 0x102u || v2 == 189 )
    {
LABEL_31:
      v11 = *(_DWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 8);
      v12 = (int *)(a1 + 16);
      goto LABEL_32;
    }
LABEL_35:
    if ( v2 != 22 )
      goto LABEL_9;
LABEL_36:
    ++*(_WORD *)(a1 + 88);
    goto LABEL_37;
  }
  if ( v2 == 400 )
    goto LABEL_46;
  if ( v2 != 416 )
    goto LABEL_35;
  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    v3 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v3;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v2 = *(_WORD *)(a1 + 32);
  if ( v2 == 22 )
    goto LABEL_36;
LABEL_9:
  if ( v2 == 23 )
  {
    v28 = *(_WORD *)(a1 + 88);
    if ( !v28 )
      goto LABEL_37;
    v29 = *(_DWORD *)(a1 + 2792);
    if ( !v29 )
    {
LABEL_75:
      *(_WORD *)(a1 + 88) = v28 - 1;
      goto LABEL_37;
    }
    v30 = *(_QWORD *)(a1 + 2784) + 24LL * v29 - 24;
    while ( 1 )
    {
      if ( v28 == *(_WORD *)(v30 + 14) )
      {
        if ( *(_DWORD *)(v30 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_70;
      }
      else if ( v28 > *(_WORD *)(v30 + 14) )
      {
        goto LABEL_70;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v30 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v30 + 18) )
        goto LABEL_75;
LABEL_70:
      --v29;
      v30 -= 24;
      *(_DWORD *)(a1 + 2792) = v29;
      if ( !v29 )
        goto LABEL_75;
    }
  }
  if ( (unsigned __int16)(v2 - 20) <= 1u )
  {
    v4 = *(_WORD *)(a1 + 90);
    if ( v2 == 20 )
    {
      *(_WORD *)(a1 + 90) = v4 + 1;
    }
    else if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 2792);
      if ( v5 )
      {
        v6 = *(_WORD *)(a1 + 88);
        v7 = *(_QWORD *)(a1 + 2784) + 24LL * v5 - 24;
        do
        {
          if ( v6 == *(_WORD *)(v7 + 14) )
          {
            if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_16;
          }
          else if ( v6 > *(_WORD *)(v7 + 14) )
          {
            goto LABEL_16;
          }
          if ( *(_WORD *)(v7 + 16) >= v4 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v7 + 18) )
            break;
LABEL_16:
          --v5;
          v7 -= 24;
          *(_DWORD *)(a1 + 2792) = v5;
        }
        while ( v5 );
      }
      *(_WORD *)(a1 + 90) = v4 - 1;
    }
    goto LABEL_37;
  }
  if ( (unsigned __int16)(v2 - 24) > 1u )
  {
    if ( (unsigned __int16)(v2 - 14) > 1u && (unsigned __int16)(v2 - 17) > 2u )
    {
      if ( v2 == 3 )
      {
        sub_1566D30(a1);
      }
      else
      {
        v36 = (int *)(a1 + 16);
        if ( sub_10CCDE0(v2) )
        {
          v37 = *(_DWORD *)(a1 + 20);
          v38 = *(__int64 **)(a1 + 8);
          if ( !v37 )
            v37 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 40) = v37;
          sub_14634E0(v38, v36);
        }
        else
        {
          v40 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v40, v36);
        }
      }
      goto LABEL_38;
    }
  }
  else
  {
    v31 = *(_WORD *)(a1 + 92);
    if ( v2 == 24 )
    {
      *(_WORD *)(a1 + 92) = v31 + 1;
    }
    else if ( v31 )
    {
      v32 = *(_DWORD *)(a1 + 2792);
      if ( v32 )
      {
        v33 = *(_WORD *)(a1 + 88);
        v34 = *(_QWORD *)(a1 + 2784) + 24LL * v32 - 24;
        do
        {
          if ( v33 == *(_WORD *)(v34 + 14) )
          {
            if ( *(_DWORD *)(v34 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_83;
          }
          else if ( v33 > *(_WORD *)(v34 + 14) )
          {
            goto LABEL_83;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v34 + 16) && v31 <= *(_WORD *)(v34 + 18) )
            break;
LABEL_83:
          --v32;
          v34 -= 24;
          *(_DWORD *)(a1 + 2792) = v32;
        }
        while ( v32 );
      }
      *(_WORD *)(a1 + 92) = v31 - 1;
    }
  }
LABEL_37:
  v14 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v14, (int *)(a1 + 16));
LABEL_38:
  v15 = *(__int64 **)(a1 + 8);
  if ( (*(_BYTE *)(v15[7] + 2) & 4) == 0 || *(_WORD *)(a1 + 32) != 47 )
    return 2;
  v16 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v15, (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 5 )
    return 3;
  v17 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v17, (int *)(a1 + 16));
  v18 = *(_WORD *)(a1 + 32);
  if ( v18 == 66 )
  {
    v39 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v39, (int *)(a1 + 16));
    return 3;
  }
  if ( v18 != 52 )
    return 3;
LABEL_43:
  v19 = *(_DWORD *)(a1 + 16);
LABEL_63:
  *(_DWORD *)(a1 + 40) = v19;
  sub_14634E0(*(__int64 **)(a1 + 8), v16);
  return 2;
}
