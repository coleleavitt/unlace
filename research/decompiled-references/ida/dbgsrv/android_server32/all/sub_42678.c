/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42678
// Address: 0x00042678

//----- (00042678) --------------------------------------------------------
int __fastcall sub_42678(_DWORD *a1, const char *a2, int *a3)
{
  void **v5; // r0
  int v6; // r1
  void *v7; // r0
  int v8; // r4
  unsigned int *v9; // r5
  size_t v10; // r0
  size_t v11; // r7
  unsigned int v12; // r2
  unsigned int v13; // r6
  void *v14; // r0
  int *v15; // r6
  const char *v16; // r0
  _DWORD *v17; // r7
  const char *v18; // r5
  int v19; // r7
  int *v20; // r4
  int *v21; // r1
  int v22; // r2
  int v23; // r6
  int **v24; // r0
  unsigned int v25; // r1
  int *v26; // r1
  signed int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r2
  _DWORD *v31; // [sp+Ch] [bp-34h]
  int ***v33; // [sp+18h] [bp-28h]
  int v34; // [sp+1Ch] [bp-24h]
  int *v35; // [sp+20h] [bp-20h]
  int **v36; // [sp+24h] [bp-1Ch]
  int **v37; // [sp+28h] [bp-18h]
  int **v38; // [sp+2Ch] [bp-14h]
  const char *v39; // [sp+30h] [bp-10h]
  unsigned int v40; // [sp+30h] [bp-10h]
  const char *v41; // [sp+34h] [bp-Ch] BYREF
  int v42[2]; // [sp+38h] [bp-8h] BYREF

  v5 = (void **)(a1 + 2);
  v6 = a1[3];
  if ( a1[4] >= (unsigned int)(v6 + 1) )
  {
    v7 = *v5;
  }
  else
  {
    v7 = qvector_reserve((int)v5, (void *)a1[2], v6 + 1, 0xCu);
    a1[2] = v7;
    v6 = a1[3];
  }
  v8 = (int)v7 + 12 * v6;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)v8 = 0;
  v9 = (unsigned int *)(v8 + 4);
  *(_DWORD *)(v8 + 4) = 0;
  v31 = a1;
  ++a1[3];
  if ( a2 && (v10 = strlen(a2)) != 0 )
  {
    v39 = a2;
    v11 = v10;
    v12 = v10 + 1;
    if ( *(_DWORD *)(v8 + 8) >= v10 + 1 )
    {
      v14 = *(void **)v8;
    }
    else
    {
      v13 = v10 + 1;
      v14 = qvector_reserve(v8, *(void **)v8, v12, 1u);
      v12 = v13;
      *(_DWORD *)v8 = v14;
    }
    v15 = a3;
    *v9 = v12;
    memmove(v14, v39, v11);
    *(_BYTE *)(*(_DWORD *)v8 + v11) = 0;
  }
  else
  {
    *v9 = 0;
    v15 = a3;
  }
  v16 = qstrtok(*(char **)v8, "|", &v41);
  v17 = v31;
  if ( v16 )
  {
    v18 = v16;
    v33 = (int ***)(v31 + 5);
    do
    {
      v40 = v17[6];
      if ( v40 )
      {
        v38 = *v33;
        v19 = 0;
        while ( 1 )
        {
          v37 = &v38[4 * v19];
          v20 = *v37;
          v36 = v37 + 1;
          v21 = v37[1];
          v22 = (int)&(*v37)[(_DWORD)v21];
          v35 = v21;
          if ( 4 * (_DWORD)v21 )
          {
            v34 = (int)&v20[(_DWORD)v21];
            v23 = 4 * (_DWORD)v21;
            while ( strcmp((const char *)*v20, v18) )
            {
              v23 -= 4;
              ++v20;
              if ( !v23 )
                goto LABEL_22;
            }
            v22 = v34;
          }
          if ( v20 != (int *)v22 )
            break;
LABEL_22:
          if ( ++v19 >= v40 )
          {
            v15 = a3;
            v17 = v31;
            v24 = *v33;
            v25 = 0;
            while ( 1 )
            {
              ++v25;
              if ( v24[3] == a3 )
                goto LABEL_37;
              v24 += 4;
              if ( v25 >= v40 )
                goto LABEL_38;
            }
          }
        }
        v15 = a3;
        v17 = v31;
        if ( v37[3] == a3 )
          goto LABEL_40;
        v26 = v35;
        if ( v22 - (int)v20 >= 5 )
        {
          v27 = ((unsigned int)(v22 - (_DWORD)v20) >> 2) - 2;
          do
          {
            *v20 = v20[1];
            --v27;
            ++v20;
          }
          while ( v27 >= 0 );
          v26 = *v36;
        }
        *v36 = (int *)((char *)v26 - 1);
        v28 = v31[6];
        if ( !v28 )
          goto LABEL_38;
        v24 = *v33;
        v29 = 0;
        while ( 1 )
        {
          ++v29;
          if ( v24[3] == a3 )
            break;
          v24 += 4;
          if ( v29 >= v28 )
            goto LABEL_38;
        }
LABEL_37:
        if ( v24 )
          goto LABEL_39;
      }
LABEL_38:
      v24 = (int **)sub_42A6C(v33);
      v24[3] = v15;
LABEL_39:
      v42[0] = (int)v18;
      sub_429B0(v24, v42);
LABEL_40:
      v18 = qstrtok(nullptr, "|", &v41);
    }
    while ( v18 );
  }
  return _stack_chk_guard - v42[1];
}
// 4278E: conditional instruction was optimized away because %var_10.4!=0
