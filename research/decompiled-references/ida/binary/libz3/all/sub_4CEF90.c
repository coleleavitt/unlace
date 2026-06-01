void __fastcall sub_4CEF90(__int64 a1, __int64 *a2)
{
  _DWORD *v2; // r8
  int v3; // ecx
  __int64 v4; // r9
  unsigned int v6; // esi
  unsigned int v7; // eax
  _QWORD *v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // r10d
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 *v13; // rdi
  __int64 v14; // r10
  __int64 v15; // r8

  v2 = *(_DWORD **)(a1 - 8);
  if ( v2 )
  {
    v3 = *(v2 - 1);
    if ( v3 )
    {
      v4 = *a2;
      if ( *a2 )
      {
        v6 = *(_DWORD *)(v4 - 4);
        v7 = *v2 + 1;
        if ( v7 < v6 )
        {
          v8 = (_QWORD *)(v4 + 8LL * v7);
          v9 = 1;
          if ( v3 != 1 && v2[1] == v7 )
            goto LABEL_11;
          while ( 1 )
          {
            v10 = v7++;
            *(_QWORD *)(v4 + 8LL * (v10 - v9)) = *v8;
            if ( v7 >= v6 )
              break;
            if ( v3 == v9 )
            {
              v11 = v7;
              v12 = v7 - v3;
              v13 = (__int64 *)(v4 + 8 * v11);
              do
              {
                v14 = *v13;
                v15 = v12++;
                ++v13;
                *(_QWORD *)(v4 + 8 * v15) = v14;
              }
              while ( v9 + v12 < v6 );
              break;
            }
            while ( 1 )
            {
              ++v8;
              if ( v3 == v9 || v2[v9] != v7 )
                break;
LABEL_11:
              ++v7;
              ++v9;
              if ( v7 >= v6 )
                goto LABEL_17;
            }
          }
        }
      }
      else
      {
        v6 = 0;
      }
LABEL_17:
      sub_4CED80(a2, v6 - v3);
    }
  }
}

