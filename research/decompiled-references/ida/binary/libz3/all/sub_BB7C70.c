__int64 __fastcall sub_BB7C70(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int *v9; // rsi
  unsigned int v10; // r10d
  __int64 i; // rax
  unsigned int *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r9
  unsigned int v15; // r10d
  __int64 j; // rdx
  unsigned int *v17; // rcx
  bool v18; // zf
  _DWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-30h] BYREF
  _QWORD *v22; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v23[4]; // [rsp+18h] [rbp-20h] BYREF

  result = *a3;
  v21 = 0;
  if ( result )
  {
    do
    {
      v6 = *(_DWORD *)(result - 4);
      if ( !v6 )
        break;
      v7 = *(_QWORD *)(a1 + 152);
      v8 = (unsigned int)(v6 - 1);
      v9 = *(unsigned int **)(result + 8 * v8);
      *(_DWORD *)(result - 4) = v8;
      if ( v7 )
      {
        v10 = *(_DWORD *)(v7 - 4);
        for ( i = *v9; (unsigned int)i < v10; i = *v12 )
        {
          v12 = *(unsigned int **)(v7 + 24 * i + 8);
          if ( !v12 )
            break;
          v9 = v12;
        }
        v13 = sub_BB1CC0(a1, (__int64)v9);
        for ( j = *(unsigned int *)v13; (unsigned int)j < v15; v13 = v17 )
        {
          v17 = *(unsigned int **)(v14 + 24 * j + 8);
          if ( !v17 )
            break;
          j = *v17;
        }
      }
      else
      {
        v13 = sub_BB1CC0(a1, (__int64)v9);
      }
      v18 = *((_WORD *)v13 + 2) == 0;
      v22 = v13;
      if ( v18
        && (v19 = *(_DWORD **)(v13[2] + 24LL)) != nullptr
        && *(_DWORD *)(a1 + 1744) == *v19
        && v19[1] == 2
        && *((_DWORD *)v13 + 6) == 2 )
      {
        v20 = v13[4];
        v21 = v13[5];
        v23[0] = v20;
        sub_BB70A0(a3, &v21);
        sub_BB70A0(a3, v23);
      }
      else
      {
        sub_BB70A0(a2, &v22);
      }
      result = *a3;
    }
    while ( *a3 );
  }
  return result;
}

