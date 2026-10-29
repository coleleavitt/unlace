__int64 __fastcall sub_7F5440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // ecx
  int v18; // eax

  v3 = *(_QWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(v3 + 16);
  v8 = *(unsigned int *)(a2 + 24);
  if ( v7 )
  {
    if ( (v7 & 7) == 1 )
      v9 = v7 >> 3;
    else
      LODWORD(v9) = *(_DWORD *)(v7 - 8);
  }
  else
  {
    LODWORD(v9) = -1640531495;
  }
  v10 = v8 - 1;
  v11 = 24 * v8;
  v12 = v6 + v11;
  v13 = 24LL * ((unsigned int)v9 & v10);
  v14 = v6 + v13;
  if ( v13 == v11 )
  {
LABEL_13:
    while ( v14 != v6 )
    {
      v18 = *(_DWORD *)(v6 + 4);
      if ( v18 == 2 )
      {
        if ( (_DWORD)v9 == *(_DWORD *)v6 && v7 == *(_QWORD *)(v6 + 8) )
        {
          v15 = v6;
          goto LABEL_11;
        }
      }
      else if ( !v18 )
      {
        break;
      }
      v6 += 24;
    }
LABEL_22:
    BUG();
  }
  v15 = v6 + v13;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v15 + 4);
    if ( v16 != 2 )
    {
      if ( !v16 )
        goto LABEL_22;
      goto LABEL_7;
    }
    if ( (_DWORD)v9 == *(_DWORD *)v15 && *(_QWORD *)(v15 + 8) == v7 )
      break;
LABEL_7:
    v15 += 24;
    if ( v12 == v15 )
      goto LABEL_13;
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)(v15 + 16) + 24LL))(a1, *(_QWORD *)(v15 + 16), a3);
  return a1;
}

