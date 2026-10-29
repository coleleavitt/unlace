__int64 __fastcall sub_561580(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // esi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned int v12; // r11d
  unsigned int *v13; // r10
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r10
  __int16 v20; // bp
  bool v21; // r12
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  unsigned int v26; // r10d
  unsigned int v27; // ebx

  v3 = 1;
  v4 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a2 + 56) < v4 )
    return v3;
  v3 = -1;
  if ( *(_DWORD *)(a2 + 56) != v4 )
    return v3;
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 68);
  if ( *(_DWORD *)(a2 + 68) >= v8 )
  {
    v7 = -1;
    if ( *(_DWORD *)(a2 + 68) == v8 )
    {
      v9 = *(_DWORD *)(a1 + 64);
      v7 = 1;
      if ( *(_DWORD *)(a2 + 64) >= v9 )
      {
        v7 = -1;
        if ( *(_DWORD *)(a2 + 64) == v9 )
        {
          if ( (v9 & 0x80000000) != 0 )
          {
LABEL_23:
            v23 = 8LL * v9;
            while ( v9 < v4 )
            {
              v24 = *(_DWORD *)(*(_QWORD *)(a2 + v23 + 80) & 0xFFFFFFFFFFFFFFF8LL);
              v25 = *(_DWORD *)(*(_QWORD *)(a1 + v23 + 80) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v24 < v25 )
                return 1;
              if ( v25 != v24 )
                return (unsigned int)-1;
              v23 += 8;
              ++v9;
            }
            return 0;
          }
          else
          {
            v10 = *(_QWORD *)(a1 + 40);
            v11 = *(_QWORD *)(a2 + 40);
            v12 = -1;
            while ( 1 )
            {
              v13 = *(unsigned int **)(v11 + 16);
              v14 = **(_DWORD **)(v10 + 16);
              if ( *v13 < v14 )
                return 1;
              if ( *v13 != v14 )
                return (unsigned int)-1;
              v15 = *(unsigned int *)(v10 + 24);
              if ( (_DWORD)v15 )
              {
                v16 = 8 * v15 + 32;
                v17 = 32;
                do
                {
                  v18 = *(_QWORD *)(v10 + v17);
                  v19 = *(_QWORD *)(v11 + v17);
                  v20 = *(_WORD *)(v18 + 4);
                  v21 = *(_WORD *)(v19 + 4) == 1;
                  if ( (unsigned __int8)v21 < (unsigned __int8)(v20 == 1) )
                    return 1;
                  if ( (v20 == 1) != v21 )
                    return (unsigned int)-1;
                  if ( v20 == 1 )
                  {
                    v26 = *(_DWORD *)(v19 + 16);
                    v27 = *(_DWORD *)(v18 + 16);
                    if ( v26 < v27 )
                      return 1;
                    if ( v27 != v26 )
                      return (unsigned int)-1;
                  }
                  v17 += 8;
                }
                while ( v17 != v16 );
              }
              if ( v9 == ++v12 )
                goto LABEL_23;
              v22 = v12 + 10LL;
              v10 = *(_QWORD *)(a1 + 8 * v22) & 0xFFFFFFFFFFFFFFF8LL;
              v11 = *(_QWORD *)(a2 + 8 * v22) & 0xFFFFFFFFFFFFFFF8LL;
            }
          }
        }
      }
    }
  }
  return v7;
}

