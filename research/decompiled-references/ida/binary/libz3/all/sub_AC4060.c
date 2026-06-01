__int64 __fastcall sub_AC4060(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // r11
  unsigned int *v3; // r8
  __int64 v4; // rsi
  int v5; // r9d
  __int64 v6; // rdx
  int *v7; // rax
  int *v8; // rdx
  int v9; // edi
  __int64 result; // rax
  __int64 v11; // r10
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rsi
  _DWORD *i; // rdi
  int v16; // r11d
  int v17; // edx

  v1 = *(_QWORD **)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = (unsigned int *)(4 * v2 + v1[2]);
  v4 = *v3;
  v5 = *v3;
  *(_DWORD *)(v1[3] + 4 * v4) -= *(_DWORD *)(v1[3] + 4 * v2);
  v6 = v1[4];
  *v3 = v2;
  v7 = (int *)(v6 + 4 * v4);
  v8 = (int *)(4 * v2 + v6);
  v9 = *v8;
  *v8 = *v7;
  *v7 = v9;
  result = *v1;
  v11 = *(_QWORD *)(*(_QWORD *)(*v1 + 528LL) + 8 * v4);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 - 4);
    if ( v12 )
    {
      v13 = *(_QWORD *)(result + 464);
      v14 = (unsigned int)(v12 - 1);
      for ( i = (_DWORD *)(v11 + 8 * v14); ; i -= 2 )
      {
        LODWORD(result) = *i;
        v16 = v12;
        v12 = v14;
        do
        {
          v17 = result;
          result = *(unsigned int *)(v13 + 4LL * (unsigned int)result);
        }
        while ( v17 != (_DWORD)result );
        if ( v5 == (_DWORD)result )
          break;
        if ( !(_DWORD)v14 )
        {
          *(_DWORD *)(v11 - 4) = 0;
          return result;
        }
        LODWORD(v14) = v14 - 1;
      }
      *(_DWORD *)(v11 - 4) = v16;
    }
  }
  return result;
}

