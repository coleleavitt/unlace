__int64 __fastcall sub_48EED0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 result; // rax
  _DWORD *v11; // rdx
  int v12; // esi
  int v13; // esi
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  __int64 v16; // r11
  __int64 v17; // rdx

  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_QWORD *)a2 + 40LL * a3;
  v5 = *(unsigned int *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 36);
  *(_DWORD *)(v4 + 32) = -1;
  *(_DWORD *)(v4 + 36) = v3;
  *(_DWORD *)(a2 + 12) = a3;
  v7 = 3 * v5;
  v8 = *(_QWORD *)(a1 + 24);
  --*(_DWORD *)(a2 + 8);
  v9 = (__int64 *)(v8 + 8 * v7);
  result = *v9;
  v11 = (_DWORD *)(*v9 + 8LL * v6);
  v11[1] = *((_DWORD *)v9 + 3);
  v12 = *((_DWORD *)v9 + 2);
  *v11 = -1;
  v13 = v12 - 1;
  *((_DWORD *)v9 + 3) = v6;
  *((_DWORD *)v9 + 2) = v13;
  if ( result )
  {
    v14 = *(_DWORD *)(result - 4);
    if ( 2 * v13 < v14 )
    {
      v15 = *((_DWORD *)v9 + 4);
      if ( !v15 )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = 0;
        do
        {
          if ( *(_DWORD *)(result + 8 * v17) != -1 )
          {
            if ( v15 != (_DWORD)v17 )
            {
              *(_QWORD *)(result + 8LL * v15) = *(_QWORD *)(result + 8 * v17);
              *(_DWORD *)(*(_QWORD *)(v16 + 16LL * *(unsigned int *)(result + 8 * v17))
                        + 40LL * *(unsigned int *)(result + 8 * v17 + 4)
                        + 36) = v15;
            }
            ++v15;
          }
          ++v17;
        }
        while ( v14 != v17 );
        *(_DWORD *)(result - 4) = v13;
        *((_DWORD *)v9 + 3) = -1;
      }
    }
  }
  return result;
}

