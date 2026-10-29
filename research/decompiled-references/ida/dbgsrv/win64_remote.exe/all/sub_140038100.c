/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038100
// Address: 0x0000000140038100

//----- (0000000140038100) ----------------------------------------------------
__int64 __fastcall sub_140038100(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  char v5; // r12
  int v6; // r15d
  char v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // ebx
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  char *v12; // rdx
  char v13; // di
  __int64 *v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  void *v17; // rdx
  char v18; // bl
  __int64 v19; // rdi
  char v20; // di
  __int64 v21; // rbx
  char *v22; // rax
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rbx
  void **v26; // rax
  void *v27; // r9
  void *v28; // r8
  void *v29; // rdx
  __int128 v31; // [rsp+20h] [rbp-20h] BYREF
  void *v32; // [rsp+30h] [rbp-10h]

  v3 = a2;
  v4 = a1;
  v31 = 0;
  v32 = nullptr;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  *a3 = 1;
  while ( 1 )
  {
LABEL_2:
    v8 = sub_14003DCE0(a1);
    v9 = v8;
    if ( v8 == 34 )
    {
      v9 = sub_1400640B0(v5 != 0 ? 0x26 : 0);
      goto LABEL_49;
    }
    if ( v8 )
      goto LABEL_49;
    if ( !v5 )
      break;
    while ( 2 )
    {
      v12 = *(char **)(v4 + 8);
      v13 = *v12;
      switch ( *v12 )
      {
        case 0:
          goto LABEL_42;
        case 9:
        case 10:
        case 32:
          if ( v7 )
          {
            *(_QWORD *)(v4 + 8) = v12 + 1;
            continue;
          }
          v7 = 1;
          goto LABEL_39;
        case 34:
          if ( v13 )
          {
            v18 = *v12;
            do
            {
              *(_QWORD *)(v4 + 8) = v12 + 1;
              v19 = *((_QWORD *)&v31 + 1) - 1LL;
              if ( !*((_QWORD *)&v31 + 1) )
                v19 = 0;
              sub_140002F60((__int64)&v31, v19 + 2);
              *(_BYTE *)(v19 + v31) = v18;
              *(_BYTE *)(v19 + v31 + 1) = 0;
              if ( v18 == 92 )
              {
                v20 = **(_BYTE **)(v4 + 8);
                if ( v20 )
                {
                  v21 = *((_QWORD *)&v31 + 1) - 1LL;
                  if ( !*((_QWORD *)&v31 + 1) )
                    v21 = 0;
                  sub_140002F60((__int64)&v31, v21 + 2);
                  *(_BYTE *)(v21 + v31) = v20;
                  *(_BYTE *)(v21 + v31 + 1) = 0;
                  ++*(_QWORD *)(v4 + 8);
                }
              }
              v22 = *(char **)(v4 + 8);
              v18 = *v22;
              if ( *v22 == 34 )
                break;
              v12 = *(char **)(v4 + 8);
            }
            while ( v18 );
            v3 = a2;
            if ( *v22 )
            {
              v12 = *(char **)(v4 + 8);
              v13 = *v22;
LABEL_39:
              *(_QWORD *)(v4 + 8) = v12 + 1;
              v24 = *((_QWORD *)&v31 + 1) - 1LL;
              if ( !*((_QWORD *)&v31 + 1) )
                v24 = 0;
              sub_140002F60((__int64)&v31, v24 + 2);
              *(_BYTE *)(v24 + v31) = v13;
              *(_BYTE *)(v24 + v31 + 1) = 0;
              continue;
            }
          }
LABEL_42:
          v25 = *((_QWORD *)&v31 + 1) - 1LL;
          if ( !*((_QWORD *)&v31 + 1) )
            v25 = 0;
          sub_140002F60((__int64)&v31, v25 + 2);
          *(_BYTE *)(v25 + v31) = 32;
          *(_BYTE *)(v25 + v31 + 1) = 0;
          v7 = 1;
LABEL_45:
          a1 = v4;
          break;
        case 40:
          if ( (*(_BYTE *)(v4 + 724) & 2) != 0 && v12[1] == 42 )
            goto LABEL_45;
          ++v6;
          goto LABEL_39;
        case 41:
          if ( !v6 )
          {
            v26 = (void **)sub_140019560(v3);
            v27 = *v26;
            v28 = v26[1];
            v29 = v26[2];
            *(_OWORD *)v26 = v31;
            v26[2] = v32;
            *(_QWORD *)&v31 = v27;
            *((_QWORD *)&v31 + 1) = v28;
            v32 = v29;
            ++*(_QWORD *)(v4 + 8);
            v9 = 0;
            goto LABEL_50;
          }
          --v6;
          goto LABEL_39;
        case 44:
          if ( v6 )
            goto LABEL_39;
          v14 = sub_140019560(v3);
          v15 = *v14;
          v16 = v14[1];
          v17 = (void *)v14[2];
          *(_OWORD *)v14 = v31;
          v14[2] = (__int64)v32;
          *(_QWORD *)&v31 = v15;
          *((_QWORD *)&v31 + 1) = v16;
          v32 = v17;
          ++*(_QWORD *)(v4 + 8);
          a1 = v4;
          goto LABEL_2;
        case 47:
          v23 = *(_DWORD *)(v4 + 724);
          if ( (v23 & 1) != 0 && v12[1] == 42 || (v23 & 4) != 0 && v12[1] == 47 )
            goto LABEL_45;
          goto LABEL_38;
        case 59:
          if ( (*(_BYTE *)(v4 + 724) & 8) != 0 )
            goto LABEL_45;
          goto LABEL_38;
        default:
LABEL_38:
          v7 = 0;
          goto LABEL_39;
      }
      break;
    }
  }
  v10 = *(_BYTE **)(v4 + 8);
  if ( *v10 == 40 )
  {
    v5 = 1;
    v11 = v10 + 1;
    *(_QWORD *)(v4 + 8) = v11;
    if ( *v11 != 41 )
      goto LABEL_45;
    *(_QWORD *)(v4 + 8) = v11 + 1;
    v9 = 0;
  }
  else
  {
    *a3 = 0;
    v9 = 0;
  }
LABEL_49:
  v27 = (void *)v31;
LABEL_50:
  if ( v27 )
  {
    *((_QWORD *)&v31 + 1) = 0;
    j_free(v27);
  }
  return v9;
}
