/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32FD8
// Address: 0x00032FD8

//----- (00032FD8) --------------------------------------------------------
int __fastcall sub_32FD8(int a1, _DWORD *a2, int *a3, int a4)
{
  int v4; // r4
  int v5; // r7
  unsigned int v6; // r3
  int v7; // r5
  int v8; // r1
  unsigned int v9; // r4
  int v10; // r2
  unsigned int v11; // r4
  int v12; // r2
  unsigned int v13; // r1
  int v14; // r3
  unsigned int v15; // r5
  unsigned int v16; // r0
  int v17; // r4
  int v18; // r2
  unsigned int v19; // r5
  size_t v20; // r3
  int v21; // r2
  _DWORD *v22; // r1
  unsigned int v23; // r6
  size_t v24; // r5
  const void *v25; // r4
  void *v26; // r0
  void **v27; // r6
  unsigned int v28; // r5
  size_t v29; // r4
  _BYTE *v30; // r1
  void *v31; // r0
  unsigned int v33; // [sp+8h] [bp-4Ch]
  _BYTE *v37; // [sp+18h] [bp-3Ch]
  unsigned int v38; // [sp+28h] [bp-2Ch]
  size_t v39; // [sp+28h] [bp-2Ch]
  size_t v40; // [sp+28h] [bp-2Ch]
  size_t v41; // [sp+28h] [bp-2Ch]
  int v43; // [sp+30h] [bp-24h]
  _BYTE *v44; // [sp+34h] [bp-20h] BYREF
  unsigned int v45; // [sp+38h] [bp-1Ch]
  int v46; // [sp+3Ch] [bp-18h]
  void *v47; // [sp+40h] [bp-14h] BYREF
  unsigned int v48; // [sp+44h] [bp-10h]
  int v49; // [sp+48h] [bp-Ch]
  char v50[4]; // [sp+4Ch] [bp-8h] BYREF

  v4 = *a2;
  v5 = 0;
  if ( *a2 <= 0xFFFFFFFB )
  {
    v6 = v4 + 4;
    v38 = a3[1];
    if ( v4 + 4 <= v38 )
    {
      v7 = *a3;
      v8 = *a2;
      v9 = *(_DWORD *)(*a3 + v4);
      v10 = (v9 << 24) + ((v9 << 8) & 0xFF0000) + ((v9 >> 8) & 0xFF00) + HIBYTE(v9);
      if ( !a4 )
        v10 = v9;
      v5 = 0;
      if ( v6 <= 0xFFFFFFFB )
      {
        v11 = v8 + 8;
        if ( v8 + 8 <= v38 )
        {
          v33 = v10;
          v12 = (*(_DWORD *)(v7 + v6) << 24)
              + ((*(_DWORD *)(v7 + v6) << 8) & 0xFF0000)
              + ((*(_DWORD *)(v7 + v6) >> 8) & 0xFF00)
              + HIBYTE(*(_DWORD *)(v7 + v6));
          if ( !a4 )
            v12 = *(_DWORD *)(v7 + v6);
          v5 = 0;
          if ( v11 <= 0xFFFFFFFB )
          {
            v13 = v8 + 12;
            if ( v13 <= v38 )
            {
              v14 = v7;
              v15 = v13;
              v39 = v12;
              v16 = *(_DWORD *)(v14 + v11);
              v48 = 0;
              v47 = nullptr;
              v49 = 0;
              v17 = (v16 << 24) + ((v16 << 8) & 0xFF0000) + ((v16 >> 8) & 0xFF00) + HIBYTE(v16);
              if ( !a4 )
                v17 = v16;
              if ( sub_32ED8((int)&v47, a3, v13, v33, 1) )
              {
                v43 = v17;
                v45 = 0;
                v44 = nullptr;
                v18 = 0;
                v46 = 0;
                v19 = ((v33 + 3) & 0xFFFFFFFC) + v15;
                if ( v39 <= ~v19 && v39 + v19 <= a3[1] )
                {
                  v45 = 0;
                  v50[0] = 0;
                  sub_37884((void **)&v44, v39 + 1, v50);
                  v44[v39] = 0;
                  qmemcpy(v44, (const void *)(*a3 + v19), v39);
                  v20 = ((v39 + 3) & 0xFFFFFFFC) + v19;
                  v21 = a1;
                  v22 = a2;
                  if ( a1 )
                  {
                    if ( (void **)a1 != &v47 )
                    {
                      v23 = v48;
                      v24 = v48 - 1;
                      if ( v48 < 2 )
                      {
                        *(_DWORD *)(a1 + 4) = 0;
                      }
                      else
                      {
                        v40 = v20;
                        v25 = v47;
                        if ( *(_DWORD *)(a1 + 8) >= v48 )
                        {
                          v26 = *(void **)a1;
                        }
                        else
                        {
                          v26 = qvector_reserve(a1, *(void **)a1, v48, 1u);
                          v21 = a1;
                          *(_DWORD *)a1 = v26;
                        }
                        *(_DWORD *)(v21 + 4) = v23;
                        memmove(v26, v25, v24);
                        v21 = a1;
                        *(_BYTE *)(*(_DWORD *)a1 + v24) = 0;
                        v22 = a2;
                        v20 = v40;
                      }
                    }
                    v27 = (void **)(v21 + 12);
                    if ( (_BYTE **)(v21 + 12) != &v44 )
                    {
                      v28 = v45;
                      v29 = v45 - 1;
                      if ( v45 < 2 )
                      {
                        *(_DWORD *)(v21 + 16) = 0;
                      }
                      else
                      {
                        v41 = v20;
                        v30 = v44;
                        if ( *(_DWORD *)(v21 + 20) >= v45 )
                        {
                          v31 = *v27;
                        }
                        else
                        {
                          v37 = v44;
                          v31 = qvector_reserve(v21 + 12, *v27, v45, 1u);
                          *v27 = v31;
                          v21 = a1;
                          v30 = v37;
                        }
                        *(_DWORD *)(v21 + 16) = v28;
                        memmove(v31, v30, v29);
                        v21 = a1;
                        *(_BYTE *)(*(_DWORD *)(a1 + 12) + v29) = 0;
                        v22 = a2;
                        v20 = v41;
                      }
                    }
                    *(_DWORD *)(v21 + 24) = v43;
                  }
                  *v22 = v20;
                  if ( v44 )
                  {
                    v45 = 0;
                    qfree(v44);
                    v46 = 0;
                    v44 = nullptr;
                  }
                  v18 = 1;
                }
                v5 = v18;
              }
              else
              {
                v5 = 0;
              }
              if ( v47 )
              {
                v48 = 0;
                qfree(v47);
                v49 = 0;
                v47 = nullptr;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
