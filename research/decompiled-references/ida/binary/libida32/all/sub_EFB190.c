unsigned __int64 __fastcall sub_EFB190(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r15
  unsigned __int8 v9; // bp
  __int64 v11; // rdi
  char v12; // al
  unsigned int v13; // ecx
  unsigned __int64 result; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax

  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = a5;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_BYTE *)(v11 + 16);
  if ( v12 == 13 )
  {
    v13 = *(_DWORD *)a4;
    if ( (((*(_WORD *)(v11 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_3;
  }
  else if ( v12 == 47 )
  {
    v18 = sub_F3D1D0(v11, a2, a3, a4, a5);
    v13 = *(_DWORD *)a4;
    if ( (*(_BYTE *)(v18 + 74) & 1) == 0 && (*(_QWORD *)(v18 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_3;
  }
  else
  {
    v13 = *(_DWORD *)a4;
    if ( v12 != 10 )
      goto LABEL_3;
  }
  if ( v13 == 2 )
    return (unsigned __int64)sub_EFAE40(a1, a2, (void ***)(a4 + 8), a3, v9, a6);
LABEL_3:
  if ( v13 == 7 )
  {
    if ( (unsigned __int8)sub_A2D380(a4) )
      goto LABEL_32;
    v13 = *(_DWORD *)a4;
  }
  if ( v13 != 12 )
    goto LABEL_5;
  if ( !sub_A2D650(a4) )
  {
LABEL_32:
    v22 = *(_DWORD *)a1;
    *(_QWORD *)(a1 + 8) = a3;
    result = v22 & 0x80000000 | 3;
    *(_DWORD *)a1 = result;
    *(_BYTE *)(a1 + 3) = v9 << 7;
    return result;
  }
  v13 = *(_DWORD *)a4;
  if ( *(_DWORD *)a4 == 12 )
  {
    sub_A2D670(a4);
    if ( !v19 )
    {
      result = sub_A2D650(a4);
      goto LABEL_8;
    }
    v13 = *(_DWORD *)a4;
  }
LABEL_5:
  if ( v13 - 10 > 1 )
  {
    if ( v13 != 7 )
      goto LABEL_11;
    if ( !sub_A2D350(a4) )
      goto LABEL_11;
    sub_A2D360(a4);
    if ( v20 )
      goto LABEL_11;
    if ( sub_A2D330(a4) )
      goto LABEL_11;
    v21 = sub_A2D320(a4);
    if ( !v21 || (v21 & 3) != 0 )
      goto LABEL_11;
    result = v21 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_8:
    if ( result )
    {
      v15 = *(_DWORD *)a1;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = result;
      *(_DWORD *)a1 = v15 & 0x80000000 | 2;
      *(_BYTE *)(a1 + 3) = v9 << 7;
      return result;
    }
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 6) == 0 )
  {
    result = sub_A46360((__int64)a2, a3, (unsigned int *)a4);
    goto LABEL_8;
  }
LABEL_11:
  *(_DWORD *)a1 = *(_DWORD *)a1 & 0x80000000 | 5;
  *(_BYTE *)(a1 + 3) = v9 << 7;
  v16 = a2[294];
  a2[304] += 56LL;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= (unsigned __int64)(v17 + 56) && v16 )
    a2[294] = v17 + 56;
  else
    v17 = sub_962430((__int64)(a2 + 294), 56, 56, 3, a5, a6);
  sub_A2FF00(v17, (int *)a4);
  *(_QWORD *)(a1 + 8) = v17;
  result = (unsigned __int64)sub_A3B850((__int64)a2, (__int64)sub_B4CF80, v17);
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}

