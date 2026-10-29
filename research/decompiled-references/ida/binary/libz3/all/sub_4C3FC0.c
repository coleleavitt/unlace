__int64 __fastcall sub_4C3FC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 i; // rax
  int v14; // ecx
  int v16; // eax

  v3 = *(unsigned int *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 56);
  v7 = a2;
  v8 = v3 - 1;
  v3 *= 24;
  v9 = 3LL * ((unsigned int)a2 & v8);
  v10 = v5 + v3;
  v11 = 8 * v9;
  v12 = v5 + v11;
  if ( v11 != v3 )
  {
    for ( i = v5 + v11; v10 != i; i += 24 )
    {
      v14 = *(_DWORD *)(i + 4);
      if ( v14 == 2 )
      {
        if ( v7 == *(_DWORD *)i && a2 == *(_QWORD *)(i + 8) )
        {
LABEL_8:
          *a3 = *(_QWORD *)(i + 16);
          return 1;
        }
      }
      else if ( !v14 )
      {
        return 0;
      }
    }
  }
  for ( ; v12 != v5; v5 += 24 )
  {
    v16 = *(_DWORD *)(v5 + 4);
    if ( v16 == 2 )
    {
      if ( v7 == *(_DWORD *)v5 && a2 == *(_QWORD *)(v5 + 8) )
      {
        i = v5;
        goto LABEL_8;
      }
    }
    else if ( !v16 )
    {
      return 0;
    }
  }
  return 0;
}

