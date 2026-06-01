/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409338
// Address: 0x0000000000409338

//----- (0000000000409338) ----------------------------------------------------
__int64 __fastcall sub_409338(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x28
  __int64 v7; // x0
  __int64 v8; // x20
  unsigned __int64 v9; // x19
  unsigned __int64 v10; // x2
  __int64 v11; // x25
  __int64 v12; // x21
  __int64 v13; // x26
  __int64 v14; // x1
  int v15; // w0
  char *v16; // x3
  char *v18; // x27
  unsigned __int64 v19; // x28
  void *v20; // x0
  unsigned __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  unsigned __int64 v24; // x28
  void *v25; // x0
  char *v26; // x0
  __int64 v27; // x3
  char *v28; // x0
  __int64 v29; // x3
  __int64 v30; // [xsp+48h] [xbp-18h]
  __int64 v31; // [xsp+48h] [xbp-18h]

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(v7 + 96) = a3;
  *(_DWORD *)(v7 + 100) = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 24LL))(*(_QWORD *)(a1 + 664)) )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a1 + 664);
  v9 = 0;
  v10 = *(_QWORD *)(v8 + 24);
  if ( v10 )
  {
    v11 = a4 + 8;
    while ( 1 )
    {
      v12 = 32 * v9;
      if ( (*(unsigned __int8 *)(**(_QWORD **)(v8 + 8) + 32 * v9 + 12) & *(_DWORD *)(v8 + 96)) == 0 )
        goto LABEL_5;
      v13 = a4 + v12;
      v14 = *(_QWORD *)(v8 + 16) + 40 * v9;
      v15 = *(_DWORD *)v14;
      v16 = *(char **)(v14 + 16);
      if ( *(_DWORD *)v14 == 3 )
      {
        ++v9;
        ((void (__fastcall *)(__int64, __int64, _QWORD))v16)(v8, a4 + v12, *(_QWORD *)(v14 + 32));
        v10 = *(_QWORD *)(v8 + 24);
        if ( v10 <= v9 )
          return 1;
      }
      else
      {
        v18 = &v16[v8];
        switch ( v15 )
        {
          case 1:
            v31 = v4;
            v24 = *(_QWORD *)(v14 + 24);
            if ( *(int *)(a4 + 32 * v9) >= -1 )
            {
              v25 = *(void **)(v13 + 8);
              if ( v25 )
              {
                *(_QWORD *)(v13 + 16) = 0;
                j__free(v25);
              }
              *(_DWORD *)(a4 + 32 * v9) = -2;
            }
            *(_QWORD *)(v13 + 8) = 0;
            *(_QWORD *)(v13 + 16) = 0;
            *(_QWORD *)(v13 + 24) = 0;
            if ( v24 )
            {
              v26 = (char *)sub_491288(v11 + v12, nullptr, v24, 1u);
              v27 = *(_QWORD *)(v13 + 16);
              *(_QWORD *)(v13 + 8) = v26;
              memset(&v26[v27], 0, v24 - v27);
              *(_QWORD *)(v13 + 16) = v24;
              memcpy(*(void **)(v13 + 8), v18, v24);
            }
            *(_DWORD *)(a4 + 32 * v9) = -1;
            v4 = v31;
            v10 = *(_QWORD *)(v8 + 24);
            break;
          case 0:
            v21 = *(_QWORD *)(v14 + 24);
            if ( v21 == 2 )
            {
              v22 = *(unsigned __int16 *)&v16[v8];
              goto LABEL_25;
            }
            if ( v21 <= 2 )
            {
              if ( v21 == 1 )
              {
                v22 = (unsigned __int8)v16[v8];
                goto LABEL_25;
              }
            }
            else
            {
              if ( v21 == 4 )
              {
                v22 = *(unsigned int *)&v16[v8];
                goto LABEL_25;
              }
              if ( v21 == 8 )
              {
                v22 = *(_QWORD *)&v16[v8];
LABEL_25:
                v23 = *(_QWORD *)(v14 + 32);
                switch ( v23 )
                {
                  case 2LL:
                    v22 = (unsigned __int16)v22;
                    break;
                  case 4LL:
                    v22 = (unsigned int)v22;
                    break;
                  case 1LL:
                    v22 = (unsigned __int8)v22;
                    break;
                }
                *(_QWORD *)(v13 + 8) = v22;
                v10 = *(_QWORD *)(v8 + 24);
                break;
              }
            }
            v22 = 0;
            goto LABEL_25;
          case 2:
            v30 = v4;
            v19 = *(_QWORD *)(v14 + 24);
            if ( *(int *)(a4 + 32 * v9) >= -1 )
            {
              v20 = *(void **)(v13 + 8);
              if ( v20 )
              {
                *(_QWORD *)(v13 + 16) = 0;
                j__free(v20);
              }
              *(_DWORD *)(a4 + 32 * v9) = -2;
            }
            *(_QWORD *)(v13 + 8) = 0;
            *(_QWORD *)(v13 + 16) = 0;
            *(_QWORD *)(v13 + 24) = 0;
            if ( v19 )
            {
              v28 = (char *)sub_491288(v11 + v12, nullptr, v19, 1u);
              v29 = *(_QWORD *)(v13 + 16);
              *(_QWORD *)(v13 + 8) = v28;
              memset(&v28[v29], 0, v19 - v29);
              *(_QWORD *)(v13 + 16) = v19;
              memcpy(*(void **)(v13 + 8), v18, v19);
            }
            *(_DWORD *)(a4 + 32 * v9) = 0;
            v4 = v30;
            v10 = *(_QWORD *)(v8 + 24);
            break;
        }
LABEL_5:
        if ( v10 <= ++v9 )
          return 1;
      }
    }
  }
  return 1;
}
// 409338: could not find valid save-restore pair for x28
// 40944C: variable 'v4' is possibly undefined
