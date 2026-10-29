__int64 __fastcall sub_817C00(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // r11
  unsigned int *v3; // r8
  __int64 v4; // rsi
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // r10
  int *v8; // rax
  int *v9; // rdx
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // esi
  int v14; // edi
  int v15; // edx

  v1 = *(__int64 **)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = (unsigned int *)(4 * v2 + v1[2]);
  v4 = *v3;
  v5 = *v3;
  *(_DWORD *)(v1[3] + 4 * v4) -= *(_DWORD *)(v1[3] + 4 * v2);
  v6 = v1[4];
  *v3 = v2;
  v7 = *v1;
  v8 = (int *)(v6 + 4 * v4);
  v9 = (int *)(4 * v2 + v6);
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
  result = *(_QWORD *)(v7 + 616);
  v12 = *(_QWORD *)(result + 8 * v4);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 - 4);
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = v13--;
        if ( !v14 )
          break;
        LODWORD(result) = *(_DWORD *)(v12 + 8LL * v13);
        do
        {
          v15 = result;
          result = *(unsigned int *)(*(_QWORD *)(v7 + 560) + 4LL * (unsigned int)result);
        }
        while ( v15 != (_DWORD)result );
        if ( v5 == (_DWORD)result )
        {
          *(_DWORD *)(v12 - 4) = v14;
          return result;
        }
      }
      *(_DWORD *)(v12 - 4) = 0;
    }
  }
  return result;
}

