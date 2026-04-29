__int64 __fastcall sub_36B00(_DWORD *a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  _DWORD *v10; // r14
  __int64 v11; // r13
  _DWORD *v12; // r15
  __int64 v13; // r9
  char v14; // al
  __int64 result; // rax
  int v16; // edx
  int v17; // [rsp+4h] [rbp-44h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v4 = a1[8];
  if ( a3 <= 15 )
  {
    if ( a3 != -1 )
    {
      v5 = 1 << a3;
      if ( ((1 << a3) & v4) != 0 )
        return 0;
      goto LABEL_4;
    }
  }
  else if ( (unsigned int)(a3 - 29) <= 5 )
  {
    v5 = 1 << (a3 - 13);
    if ( (v5 & v4) != 0 )
      return 0;
LABEL_4:
    if ( (a1[6] & v5) != 0 )
      return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v7 = *(unsigned __int16 *)(a2 + 24);
  v8 = *(_DWORD *)(v6 + 104);
  if ( v7 < v8 )
    return 0;
  if ( v7 >= *(_DWORD *)(v6 + 108) )
    return 0;
  v9 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v8) + 8);
  if ( !v9 )
    return 0;
  v10 = dword_95840;
  v11 = a2 + 40;
  v12 = &unk_95820;
  v13 = a2 + 240;
  while ( 1 )
  {
    if ( (*v10 & v9) == 0 && (*v12 & v9) == 0 )
      goto LABEL_14;
    v14 = *(_BYTE *)(v11 + 1);
    if ( v14 == 4 )
      break;
    if ( v14 == 2 )
    {
      if ( *(_BYTE *)(v11 + 32) )
        break;
    }
    else if ( v14 == 3 )
    {
      break;
    }
LABEL_14:
    v11 += 40;
    ++v10;
    ++v12;
    if ( v13 == v11 )
      return 0;
  }
  v18 = v13;
  v17 = v9;
  result = sub_6D5F0(a2, v11, (unsigned int)a3, 0);
  v9 = v17;
  v13 = v18;
  if ( !(_BYTE)result )
    goto LABEL_14;
  v16 = a1[2];
  if ( v16 > 2 )
  {
    if ( a3 <= 15 )
    {
      if ( a3 != -1 )
LABEL_26:
        a1[8] |= 1 << a3;
    }
    else if ( (unsigned int)(a3 - 29) <= 5 )
    {
      LOBYTE(a3) = a3 - 13;
      goto LABEL_26;
    }
    a1[2] = v16 - 3;
    return 0;
  }
  return result;
}
