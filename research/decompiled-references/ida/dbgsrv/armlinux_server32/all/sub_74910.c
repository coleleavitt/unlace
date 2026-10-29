/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74910
// Address: 0x00074910

//----- (00074910) --------------------------------------------------------
int __fastcall sub_74910(int a1, void *a2, int a3)
{
  size_t v3; // r9
  __int64 v4; // r6
  __int64 v6; // kr00_8
  unsigned int v7; // r4
  __int64 v9; // r2
  int v10; // r8
  int v11; // r11
  int v12; // r4
  int v13; // r3
  int v14; // r6
  int v15; // r12
  int v16; // r6
  unsigned int v17; // r2
  int v18; // r3
  int result; // r0

  v3 = a3;
  if ( a3 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(int *)(a1 + 28) < 0 )
    return 0;
  v6 = v4 + (unsigned int)a3;
  if ( __OFSUB__(v6, v4) )
    return 0;
  v7 = *(_DWORD *)(a1 + 40);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 >= v6 )
    {
LABEL_8:
      v10 = (v7 - 1LL + v6) / v7;
      v11 = v4 / (unsigned __int64)v7;
      if ( v10 >= v11 )
      {
        v12 = -1;
        while ( 1 )
        {
          if ( v10 == v11
            || (((int)*(unsigned __int8 *)(*(_DWORD *)(a1 + 32) + ((unsigned int)v11 >> 3)) >> (v11 & 7)) & 1) != 0 )
          {
            if ( v12 != -1 )
            {
              v13 = *(_DWORD *)(a1 + 40);
              v14 = v11 * v13;
              v15 = v12 * v13;
              if ( *(_QWORD *)(a1 + 16) < (__int64)(unsigned int)(v11 * v13) )
                v14 = *(_DWORD *)(a1 + 16);
              v16 = v14 - v15;
              if ( v16 < 0
                || v16 != (***(int (__fastcall ****)(_DWORD, _DWORD, int, _DWORD, int, int))(a1 + 8))(
                            *(_DWORD *)(a1 + 8),
                            ***(_DWORD ***)(a1 + 8),
                            v15,
                            0,
                            *(_DWORD *)(a1 + 36) + v15,
                            v16) )
              {
                return -1;
              }
              if ( v12 < v11 )
              {
                do
                {
                  v17 = (unsigned int)v12 >> 3;
                  v18 = 1 << (v12++ & 7);
                  *(_BYTE *)(*(_DWORD *)(a1 + 32) + v17) |= v18;
                }
                while ( v11 != v12 );
              }
            }
            v12 = -1;
          }
          else if ( v12 == -1 )
          {
            v12 = v11;
          }
          if ( v10 < ++v11 )
          {
            v4 = *(_QWORD *)(a1 + 24);
            break;
          }
        }
      }
      memcpy(a2, (const void *)(*(_DWORD *)(a1 + 36) + v4), v3);
LABEL_29:
      *(_QWORD *)(a1 + 24) += v3;
      return v3;
    }
    if ( v4 < v9 )
    {
      v3 = v9 - v4;
      v6 = v9;
      goto LABEL_8;
    }
    return 0;
  }
  result = (***(int (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD, void *, int))(a1 + 8))(
             *(_DWORD *)(a1 + 8),
             ***(_DWORD ***)(a1 + 8),
             v4,
             HIDWORD(v4),
             a2,
             a3);
  if ( result >= 0 )
  {
    v3 = result;
    goto LABEL_29;
  }
  return result;
}
// D6C20: using guessed type char under_debugger;
