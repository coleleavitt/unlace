__int64 __fastcall dyld4::dyld_map_with_linking_np(__int64 a1, unsigned int a2)
{
  int v3; // w10
  int v4; // w8
  int v5; // w9
  __int64 v6; // x8
  _DWORD *v8; // x10
  unsigned int v9; // w8
  unsigned __int64 v10; // x24
  _DWORD *v11; // x11
  __int64 v12; // x9
  char *v13; // x27
  unsigned int v14; // w28
  __int64 v15; // x26
  __int64 v16; // x11
  __int64 v17; // x8
  __int64 v18; // x9
  unsigned __int64 v19; // x20
  __int64 v20; // x11
  __int64 v21; // x21
  unsigned __int64 v22; // x12
  unsigned __int64 v23; // x13
  unsigned __int64 v24; // x3
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x4
  int v33; // w8
  __int64 v34; // x9
  __int64 v35; // x22
  unsigned int v36; // w25
  __int16 v37; // w23
  _DWORD *v38; // [xsp+20h] [xbp-60h]
  _DWORD *v39; // [xsp+28h] [xbp-58h]

  if ( *(_DWORD *)a1 != 7 )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(a1 + 6) == 3 )
    v3 = 4;
  else
    v3 = 8;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v4 + v3 * v5 > a2 )
  {
    fprintf(__stderrp, "bind table extends past blob, blobSize=%d, offset=%d, count=%d\n", a2, v4, v5);
    return 0xFFFFFFFFLL;
  }
  v6 = *(unsigned int *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) + (int)v6 > a2 )
    return 0xFFFFFFFFLL;
  v8 = (_DWORD *)(a1 + v6);
  v9 = *(_DWORD *)(a1 + v6);
  if ( v9 )
  {
    v10 = 0;
    v11 = v8 + 1;
    v38 = v8 + 1;
    v39 = v8;
    do
    {
      v12 = (unsigned int)v11[v10];
      if ( (_DWORD)v12 )
      {
        v13 = (char *)v8 + v12;
        if ( *(_WORD *)((char *)v8 + v12 + 20) )
        {
          v14 = 0;
          v15 = *((_QWORD *)v13 + 1) + *(_QWORD *)(a1 + 32);
          do
          {
            v16 = *(unsigned int *)(a1 + 16);
            v17 = a1 + v16;
            v18 = *(unsigned int *)(a1 + v16);
            if ( !(_DWORD)v18 )
LABEL_38:
              dyld4::dyld_map_with_linking_np();
            v19 = v15 + v14 * *(unsigned __int16 *)(a1 + 4);
            v20 = v16 + 4;
            while ( 1 )
            {
              v21 = v17 + *(unsigned int *)(a1 + v20);
              v22 = *(_QWORD *)(v21 + 8) + *(_QWORD *)(a1 + 32);
              if ( v22 <= v19 )
              {
                v23 = *(unsigned __int16 *)(v21 + 4);
                if ( v22 + *(unsigned __int16 *)(v21 + 20) * v23 > v19 )
                  break;
              }
              v20 += 4;
              if ( !--v18 )
                goto LABEL_38;
            }
            if ( (unsigned int)*(unsigned __int16 *)(a1 + 6) - 1 <= 0xB )
            {
              v24 = (v19 - v22) / v23;
              switch ( *(_WORD *)(a1 + 6) )
              {
                case 1:
                  v25 = v15 + v14 * *(unsigned __int16 *)(a1 + 4);
                  v26 = a1;
                  v27 = v17 + *(unsigned int *)(a1 + v20);
                  v28 = 0;
                  goto LABEL_24;
                case 2:
                  v29 = v15 + v14 * *(unsigned __int16 *)(a1 + 4);
                  v30 = a1;
                  v31 = v17 + *(unsigned int *)(a1 + v20);
                  v32 = 0;
                  goto LABEL_30;
                case 3:
                  v33 = *(unsigned __int16 *)(v21 + 2LL * (unsigned int)v24 + 22);
                  if ( v33 != 0xFFFF )
                  {
                    v34 = *(unsigned int *)(a1 + 8);
                    v35 = a1 + v34;
                    if ( (v33 & 0x8000) != 0 )
                    {
                      v36 = v33 & 0x7FFF;
                      do
                      {
                        v37 = *(_WORD *)(v21 + 2LL * v36 + 22);
                        dyld4::fixupChain32(v19 + (v37 & 0x7FFF), a1, v21, v35);
                        ++v36;
                      }
                      while ( (v37 & 0x8000) == 0 );
                    }
                    else
                    {
                      dyld4::fixupChain32(
                        v19 + *(unsigned __int16 *)(v21 + 2LL * (unsigned int)v24 + 22),
                        a1,
                        v21,
                        a1 + v34);
                    }
                  }
                  break;
                case 6:
                  v29 = v15 + v14 * *(unsigned __int16 *)(a1 + 4);
                  v30 = a1;
                  v31 = v17 + *(unsigned int *)(a1 + v20);
                  v32 = 1;
LABEL_30:
                  dyld4::fixupPage64(v29, v30, v31, v24, v32);
                  break;
                case 9:
                case 0xC:
                  v25 = v15 + v14 * *(unsigned __int16 *)(a1 + 4);
                  v26 = a1;
                  v27 = v17 + *(unsigned int *)(a1 + v20);
                  v28 = 1;
LABEL_24:
                  dyld4::fixupPageAuth64(v25, v26, v27, v24, v28);
                  break;
                default:
                  break;
              }
            }
            ++v14;
          }
          while ( v14 < *((unsigned __int16 *)v13 + 10) );
          v11 = v38;
          v8 = v39;
          v9 = *v39;
        }
      }
      ++v10;
    }
    while ( v10 < v9 );
  }
  return 0;
}
