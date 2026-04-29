__int64 __fastcall sub_1BE8B0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  __int64 *v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  char v13; // r9
  unsigned int v14; // esi
  int v15; // edx
  unsigned int v16; // esi
  int v17; // r8d
  int v19; // edx
  int v20; // r8d
  int v21; // r8d

  v6 = a3 + a4;
  if ( a5 < v6 )
    return 0xFFFFFFFFLL;
  v7 = a3;
  v8 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 3 )
  {
    if ( v8 > 3 )
    {
      if ( v8 == 4 )
        goto LABEL_13;
    }
    else
    {
      if ( v8 == 1 )
        return 0xFFFFFFFFLL;
      if ( v8 == 2 )
      {
        v10 = *(__int64 **)(a1 + 8);
        a1 = *v10;
        v11 = *v10 + 24 * v10[1];
        if ( v11 != *v10 )
        {
          while ( 1 )
          {
            v12 = *(unsigned __int16 *)(a1 + 16);
            a5 = *(unsigned __int16 *)(a1 + 18);
            if ( *(_WORD *)(a1 + 18) )
            {
              if ( v7 >= v12 && *(unsigned __int16 *)(a1 + 18) + v12 - 1 >= v7 )
                break;
            }
            a1 += 24;
            if ( a1 == v11 )
              return 0xFFFFFFFFLL;
          }
          if ( (unsigned int)(*(_DWORD *)a1 - 3) <= 1 )
          {
            v7 -= *(unsigned __int16 *)(a1 + 16);
            v6 = a4 + v7;
            if ( a5 >= a4 + v7 )
            {
              if ( *(_DWORD *)a1 == 3 )
              {
                v13 = *(_BYTE *)(a2 + 145);
                v19 = *(_DWORD *)(a1 + 8);
LABEL_20:
                v20 = a5 - v6;
                if ( v13 )
                  v7 = v20;
                return (unsigned int)(v19 + v7);
              }
LABEL_13:
              v13 = *(_BYTE *)(a2 + 145);
              v14 = *(_DWORD *)(a1 + 8);
              v15 = a5 / 2;
              if ( a5 / 2 < v7 )
              {
                v16 = HIWORD(v14);
                if ( v13 )
                  v17 = v15 + a5 - a4 - v7;
                else
                  v17 = v7 - v15;
                return v16 + v17;
              }
              v19 = (unsigned __int16)v14;
              goto LABEL_20;
            }
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
    if ( !under_debugger )
      sub_37DDE0(51282);
    BUG();
  }
  v21 = a5 - v6;
  if ( *(_BYTE *)(a2 + 145) )
    v7 = v21;
  return (unsigned int)(*(_DWORD *)(a1 + 8) + v7);
}
