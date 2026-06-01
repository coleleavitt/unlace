__int64 __fastcall sub_2116B0(__int64 a1, _DWORD *a2, int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // r13
  _DWORD *v7; // rbp
  _DWORD *v8; // r13
  __int64 result; // rax
  int v10; // r14d
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  _BYTE *v14; // r10
  int v15; // edi
  int v16; // edx
  __int64 v17; // rdx
  int v18; // r10d
  _BYTE *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+10h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 112);
  v21 = *(_QWORD *)(a1 + 48);
  v6 = 4LL * *(int *)(a1 + 240);
  v7 = (_DWORD *)(a4 + v6);
  v8 = (_DWORD *)(a4 + v6 + v6);
  if ( a3 <= 0 )
    return 0;
  v23 = (__int64)&a2[a3 - 1 + 1];
  result = 0;
  do
  {
    v10 = 1;
    v11 = 0;
    *v7 = *a2;
    *v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = v11;
        v13 = (int)v7[v12];
        v14 = (_BYTE *)(v5 + v13);
        if ( *(_BYTE *)(v5 + v13) == 1 )
          goto LABEL_9;
        v15 = v8[v11];
        v16 = *(_DWORD *)(v21 + 4 * v13);
        if ( *(_DWORD *)(v4 + 4LL * v16) == v15 )
          break;
        v17 = *(int *)(v4 + 4LL * (v15 + v16) + 4);
        v8[v11] = v15 + 1;
        v18 = v17;
        v19 = (_BYTE *)(v5 + v17);
        if ( !*v19 )
        {
          ++v10;
          v7[v12 + 1] = v18;
          *v19 = 2;
          v11 = v10 - 1;
          v8[v12 + 1] = 0;
        }
      }
      v20 = (int)result;
      result = (unsigned int)(result + 1);
      *(_DWORD *)(a4 + 4 * v20) = v7[v11];
      *v14 = 1;
LABEL_9:
      if ( !v11 )
        break;
      v10 = v11--;
    }
    ++a2;
  }
  while ( (_DWORD *)v23 != a2 );
  return result;
}

