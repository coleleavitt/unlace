/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33A56
// Address: 0x00033A56

//----- (00033A56) --------------------------------------------------------
int __fastcall sub_33A56(int a1, unsigned int a2)
{
  unsigned __int64 v2; // r4
  __int64 v3; // kr00_8
  __int64 v4; // r0
  unsigned int v5; // r2
  int v6; // r6
  int v7; // r3
  __int64 v8; // r2
  int v9; // r1
  int *v10; // r2
  int *v11; // r7
  unsigned int v12; // r0
  unsigned int v13; // r1
  int v14; // r4
  int v15; // r5
  int v16; // r5
  unsigned int v17; // r4
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int *ptr; // [sp+3Ch] [bp-34h]
  _QWORD *v23; // [sp+40h] [bp-30h]
  unsigned __int64 v24; // [sp+44h] [bp-2Ch]
  _QWORD *v25; // [sp+60h] [bp-10h]
  int v26; // [sp+60h] [bp-10h]
  int v27; // [sp+60h] [bp-10h]
  int v29; // [sp+68h] [bp-8h]

  v2 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v2 == 24 || (_DWORD)v2 == 12 )
  {
    HIDWORD(v2) = 0;
    v25 = (_QWORD *)(a1 + 40);
    if ( !*(_QWORD *)(a1 + 40) || 0xFFFFFFFFFFFFFFFFLL / v2 >= *(_QWORD *)(a1 + 40) )
    {
      if ( !a2 || (HIDWORD(v2) = 0, 0xFFFFFFFF / (unsigned int)v2 >= a2) )
      {
        LODWORD(v2) = *(_DWORD *)(a1 + 4);
        v3 = qlseek(*(_DWORD *)(v2 + 364), 0, 1);
        v4 = *v25 * *(unsigned int *)(a1 + 24);
        v26 = *(_DWORD *)v25 * *(_DWORD *)(a1 + 24);
        v5 = *(_DWORD *)(v2 + 372);
        LODWORD(v4) = *(_DWORD *)(v2 + 368);
        v24 = v3 - __PAIR64__(v5, v4);
        v23 = (_QWORD *)(v2 + 368);
        ptr = (int *)(v2 + 364);
        v6 = *(_DWORD *)(a1 + 8);
        v7 = (*(_QWORD *)(a1 + 8) + __PAIR64__(v5, v4)) >> 32;
        LODWORD(v8) = v6 + v4 + v26;
        HIDWORD(v8) = HIDWORD(v4) + __CFADD__(v6 + v4, v26) + v7;
        v2 = (unsigned int)v2;
        if ( qlseek(*(_DWORD *)(v2 + 364), v8, 0) != -1 )
        {
          LODWORD(v2) = *(_DWORD *)(a1 + 24) * a2;
          v2 = (unsigned int)v2;
          if ( qlread(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 364), *(void **)(a1 + 28), v2) == (_DWORD)v2 )
          {
            v27 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 480);
            if ( *(_DWORD *)(a1 + 24) == 12 )
            {
              HIDWORD(v2) = 0;
              if ( a2 )
              {
                v9 = *(_DWORD *)(a1 + 28);
                v10 = (int *)(v9 + 12 * (a2 - 1));
                v11 = (int *)(v9 + 24 * a2 - 8);
                v12 = a2;
                do
                {
                  v13 = v10[1];
                  if ( v27 )
                  {
                    v13 = (v13 << 24) + ((v13 << 8) & 0xFF0000) + ((v13 >> 8) & 0xFF00) + HIBYTE(v13);
                    v29 = (v10[2] << 24)
                        + ((v10[2] << 8) & 0xFF0000)
                        + (((unsigned int)v10[2] >> 8) & 0xFF00)
                        + HIBYTE(v10[2]);
                    v14 = (*v10 << 24) + ((*v10 << 8) & 0xFF0000) + (((unsigned int)*v10 >> 8) & 0xFF00) + HIBYTE(*v10);
                    v15 = 0;
                  }
                  else
                  {
                    v14 = *v10;
                    v29 = v10[2];
                    v15 = v29 >> 31;
                  }
                  *(v11 - 2) = v13;
                  *(v11 - 3) = 0;
                  *(v11 - 4) = v14;
                  *(v11 - 1) = 0;
                  *v11 = v29;
                  v11[1] = v15;
                  v11 -= 6;
                  v10 -= 3;
                  --v12;
                }
                while ( v12 );
                HIDWORD(v2) = a2;
              }
            }
            else
            {
              HIDWORD(v2) = 0;
              if ( !*(_BYTE *)(*(_DWORD *)(a1 + 4) + 480) )
                HIDWORD(v2) = a2;
              if ( a2 && *(_BYTE *)(*(_DWORD *)(a1 + 4) + 480) )
              {
                v16 = *(_DWORD *)(a1 + 28);
                v17 = 0;
                do
                {
                  *(_DWORD *)v16 = swap64(*(_DWORD *)v16, *(_DWORD *)(v16 + 4));
                  *(_DWORD *)(v16 + 4) = v18;
                  *(_DWORD *)(v16 + 8) = swap64(*(_DWORD *)(v16 + 8), *(_DWORD *)(v16 + 12));
                  *(_DWORD *)(v16 + 12) = v19;
                  *(_DWORD *)(v16 + 16) = swap64(*(_DWORD *)(v16 + 16), *(_DWORD *)(v16 + 20));
                  *(_DWORD *)(v16 + 20) = v20;
                  v16 += 24;
                  ++v17;
                }
                while ( v17 < a2 );
                HIDWORD(v2) = a2;
              }
            }
          }
        }
        qlseek(*ptr, *v23 + v24, 0);
      }
    }
  }
  return HIDWORD(v2);
}
// 33C4E: variable 'v18' is possibly undefined
// 33C5E: variable 'v19' is possibly undefined
// 33C6E: variable 'v20' is possibly undefined
