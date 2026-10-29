int __fastcall sub_441FD0(const char ***a1, __int64 a2, __int64 a3)
{
  const char ***v5; // r12
  _QWORD *v6; // rbp
  const char *v7; // rdx
  const char *v8; // rsi
  char *v9; // rbx
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  const char *v14; // rsi
  int result; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  const char *v21; // r8
  __int64 v22; // rax
  const char *v23; // [rsp+8h] [rbp-40h]

  v5 = a1;
  v6 = *a1;
  v7 = (*a1)[1];
  v8 = **a1;
  if ( (*a1)[2] < v7 + 1 )
  {
    a1 = (const char ***)*a1;
    v20 = qvector_reserve(a1, v8, v7 + 1, 48);
    v7 = (const char *)v6[1];
    *v6 = v20;
    v8 = (const char *)v20;
  }
  v9 = (char *)&v8[48 * (_QWORD)v7];
  *((_QWORD *)v9 + 3) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v9 = 0;
  *((_QWORD *)v9 + 4) = 0xFFFFFFFCFFFFFFFCLL;
  v9[40] = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++v6[1];
  v10 = *((_DWORD *)v5 + 2);
  if ( (v10 & 1) != 0 && v9 != (char *)(a3 + 48) )
  {
    v19 = *(_QWORD *)(a3 + 56);
    if ( v19 > 1 )
    {
      v21 = *(const char **)(a3 + 48);
      a1 = *(const char ****)v9;
      if ( *((_QWORD *)v9 + 2) < v19 )
      {
        v23 = *(const char **)(a3 + 48);
        v22 = qvector_reserve(v9, *(_QWORD *)v9, *(_QWORD *)(a3 + 56), 1);
        v21 = v23;
        *(_QWORD *)v9 = v22;
        a1 = (const char ***)v22;
      }
      *((_QWORD *)v9 + 1) = v19;
      v8 = v21;
      memmove(a1, v21, v19 - 1);
      *(_BYTE *)(*(_QWORD *)v9 + v19 - 1) = 0;
      v10 = *((_DWORD *)v5 + 2);
    }
    else
    {
      *((_QWORD *)v9 + 1) = 0;
      v10 = *((_DWORD *)v5 + 2);
    }
  }
  if ( (v10 & 2) != 0 )
  {
    *((_DWORD *)v9 + 6) |= 2u;
    v10 = *((_DWORD *)v5 + 2);
  }
  if ( (v10 & 4) != 0 )
    *((_DWORD *)v9 + 6) |= 4u;
  v11 = sub_426230(a1, v8);
  v12 = sub_4170A0((__int64)v11);
  v13 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v12 + 8) )
  {
    v14 = *(const char **)v12;
    if ( !v13 )
    {
      result = strcmp(&s1, v14);
      if ( result )
        return result;
      goto LABEL_13;
    }
  }
  else
  {
    v14 = &s1;
    if ( !v13 )
      goto LABEL_13;
  }
  result = strcmp(*(const char **)a2, v14);
  if ( result )
    return result;
LABEL_13:
  result = *((_DWORD *)v5 + 2);
  if ( (result & 0x10) != 0 )
  {
    *((_DWORD *)v9 + 7) = *(_DWORD *)(a3 + 80);
    result = *((_DWORD *)v5 + 2);
  }
  if ( (result & 8) != 0 )
  {
    v16 = *((_DWORD *)v9 + 6);
    if ( *(_BYTE *)(a3 + 84) == 2 )
    {
      *((_DWORD *)v9 + 6) = v16 & 0xFFFFFFF7;
      result = *((_DWORD *)v5 + 2);
      if ( (result & 0x40) == 0 )
        goto LABEL_22;
      goto LABEL_19;
    }
    *((_DWORD *)v9 + 6) = v16 | 8;
    result = *((_DWORD *)v5 + 2);
  }
  if ( (result & 0x40) == 0 )
    goto LABEL_22;
LABEL_19:
  v17 = *(_DWORD *)(a3 + 72);
  v18 = *((_DWORD *)v9 + 6);
  if ( !v17 || v17 == *(_DWORD *)(a3 + 76) )
  {
    *((_DWORD *)v9 + 6) = v18 & 0xFFFFFFBF;
    result = *((_DWORD *)v5 + 2);
    if ( (result & 0x100) == 0 )
      return result;
    goto LABEL_23;
  }
  *((_DWORD *)v9 + 6) = v18 | 0x40;
  result = *((_DWORD *)v5 + 2);
LABEL_22:
  if ( (result & 0x100) == 0 )
    return result;
LABEL_23:
  result = *((_DWORD *)v9 + 6);
  if ( *(_BYTE *)(a3 + 84) == 3 )
    BYTE1(result) |= 1u;
  else
    BYTE1(result) &= ~1u;
  *((_DWORD *)v9 + 6) = result;
  return result;
}
