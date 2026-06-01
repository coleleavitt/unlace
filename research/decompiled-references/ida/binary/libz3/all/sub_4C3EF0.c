__int64 __fastcall sub_4C3EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  int v14; // eax

  v2 = *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v6 = v2 - 1;
  v2 *= 24;
  v7 = 3LL * ((unsigned int)a2 & v6);
  v8 = v3 + v2;
  v9 = 8 * v7;
  v10 = v3 + v9;
  if ( v9 == v2 )
  {
LABEL_9:
    while ( v10 != v3 )
    {
      v14 = *(_DWORD *)(v3 + 4);
      if ( v14 == 2 )
      {
        if ( v5 == *(_DWORD *)v3 && a2 == *(_QWORD *)(v3 + 8) )
        {
          v11 = v3;
          return *(_QWORD *)(v11 + 16);
        }
      }
      else if ( !v14 )
      {
        break;
      }
      v3 += 24;
    }
LABEL_17:
    sub_1872CE0("");
    sub_1873130(114, 285);
  }
  v11 = v3 + v9;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    if ( v12 != 2 )
    {
      if ( !v12 )
        goto LABEL_17;
      goto LABEL_4;
    }
    if ( v5 == *(_DWORD *)v11 && a2 == *(_QWORD *)(v11 + 8) )
      return *(_QWORD *)(v11 + 16);
LABEL_4:
    v11 += 24;
    if ( v8 == v11 )
      goto LABEL_9;
  }
}

