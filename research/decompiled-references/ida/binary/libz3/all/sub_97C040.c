__int64 __fastcall sub_97C040(__int64 a1, unsigned int *a2)
{
  int v3; // edi
  __int64 v4; // rax
  _DWORD *v5; // rdx
  unsigned int v6; // ecx
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r8
  _DWORD *v10; // rax
  int v11; // ecx
  __int64 result; // rax
  int v13; // eax

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL) + 4LL * *a2);
  v4 = *(unsigned int *)(a1 + 864);
  v5 = *(_DWORD **)(a1 + 856);
  v6 = v4 - 1;
  v4 *= 16;
  v7 = (_DWORD *)((char *)v5 + v4);
  v8 = 16LL * (v3 & v6);
  v9 = &v5[(unsigned __int64)v8 / 4];
  if ( v8 == v4 )
  {
LABEL_9:
    while ( v9 != v5 )
    {
      v13 = v5[1];
      if ( v13 == 2 )
      {
        if ( v3 == *v5 && v3 == v5[2] )
        {
          v10 = v5;
          goto LABEL_8;
        }
      }
      else if ( !v13 )
      {
        break;
      }
      v5 += 4;
    }
LABEL_17:
    BUG();
  }
  v10 = &v5[(unsigned __int64)v8 / 4];
  while ( 1 )
  {
    v11 = v10[1];
    if ( v11 != 2 )
    {
      if ( !v11 )
        goto LABEL_17;
      goto LABEL_4;
    }
    if ( v3 == *v10 && v3 == v10[2] )
      break;
LABEL_4:
    v10 += 4;
    if ( v7 == v10 )
      goto LABEL_9;
  }
LABEL_8:
  result = (unsigned int)v10[3];
  *(_BYTE *)(*(_QWORD *)(a1 + 936) + result) = 0;
  return result;
}

