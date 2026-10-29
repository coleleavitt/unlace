__int64 __fastcall sub_BE6E00(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r10
  _QWORD *v5; // r9
  _DWORD *v7; // rdx
  _DWORD *v8; // rax
  _QWORD *v9; // rcx
  _DWORD *v10; // rsi
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 i; // rax
  _QWORD *v24; // rdx
  _DWORD *v26; // rsi
  _QWORD *v27; // rax

  v4 = *(_QWORD **)(a2 + 8);
  v5 = *(_QWORD **)(a3 + 8);
  v7 = (_DWORD *)*v4;
  v8 = (_DWORD *)*v5;
  if ( *(_DWORD *)*v5 >= *(_DWORD *)*v4 )
  {
    v8 = (_DWORD *)*v4;
    v7 = (_DWORD *)*v5;
    v9 = v5;
    v5 = *(_QWORD **)(a2 + 8);
    v4 = v9;
  }
  if ( !*((_WORD *)v8 + 2) )
  {
    v10 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
    if ( v10 )
    {
      if ( *v10 == 5 && !v10[1] )
        return 0;
    }
  }
  if ( !*((_WORD *)v7 + 2) )
  {
    v26 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL);
    if ( v26 )
    {
      if ( *v26 == 5 && !v26[1] )
        return 0;
    }
  }
  v11 = v8[3];
  v12 = (v7[3] - v11) ^ (v11 << 8);
  v13 = (v11 - v12) << 10;
  v14 = v12 ^ ((v11 - v12) << 16);
  v15 = v12 - v11;
  v16 = *(_QWORD *)(a1 + 192);
  v17 = (v14 + v15) ^ v13;
  v18 = *(unsigned int *)(a1 + 200);
  v19 = v18 - 1;
  v18 *= 24;
  v20 = v16 + v18;
  v21 = 24LL * (v17 & v19);
  v22 = v16 + v21;
  if ( v21 != v18 )
  {
    for ( i = v16 + v21; v20 != i; i += 24 )
    {
      v24 = *(_QWORD **)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(i + 20) == v17 && v5 == v24 && v4 == *(_QWORD **)(i + 8) )
        {
          *a4 = *(_DWORD *)(i + 16);
          return 1;
        }
      }
      else if ( !v24 )
      {
        return 0;
      }
    }
  }
  if ( v16 == v22 )
    return 0;
  while ( 1 )
  {
    v27 = *(_QWORD **)v16;
    if ( *(_QWORD *)v16 > 1u )
      break;
    if ( !v27 )
      return 0;
LABEL_26:
    v16 += 24;
    if ( v22 == v16 )
      return 0;
  }
  if ( *(_DWORD *)(v16 + 20) != v17 || v5 != v27 || v4 != *(_QWORD **)(v16 + 8) )
    goto LABEL_26;
  *a4 = *(_DWORD *)(v16 + 16);
  return 1;
}

