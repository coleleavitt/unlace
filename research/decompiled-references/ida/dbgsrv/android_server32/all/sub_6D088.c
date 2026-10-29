/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D088
// Address: 0x0006D088

//----- (0006D088) --------------------------------------------------------
int __fastcall sub_6D088(int a1, int a2, unsigned int a3)
{
  unsigned int v5; // r2
  int v6; // r2
  int *v7; // r5
  int v8; // r6
  int **v9; // r4
  int **v10; // r7
  int *v11; // r0
  int *v12; // r0
  int *v13; // r1
  int v14; // r1
  int v15; // r2
  int v16; // r1
  _DWORD *v17; // r0
  char *v18; // r0
  int v19; // r1
  void **v21; // [sp+4h] [bp-38h]
  _DWORD *v22; // [sp+8h] [bp-34h]
  int v23; // [sp+Ch] [bp-30h]
  int v25; // [sp+1Ch] [bp-20h]
  int **v26; // [sp+20h] [bp-1Ch] BYREF
  int **v27; // [sp+24h] [bp-18h] BYREF
  int v28; // [sp+28h] [bp-14h]
  int v29; // [sp+2Ch] [bp-10h]
  int v30; // [sp+30h] [bp-Ch]
  int v31; // [sp+34h] [bp-8h]
  int v32; // [sp+38h] [bp-4h]

  v28 = 0;
  v27 = nullptr;
  v26 = (int **)&v27;
  v5 = *(_DWORD *)(a1 + 44) + a3;
  if ( *(_DWORD *)(a1 + 48) < v5 )
    *(_DWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(void **)(a1 + 40), v5, 0xCu);
  if ( a3 )
  {
    v6 = 0;
    v23 = a2;
    v22 = (_DWORD *)a1;
    v21 = (void **)(a1 + 40);
    while ( 1 )
    {
      v7 = (int *)(a2 + 12 * v6);
      if ( !v7[1] )
        break;
      v8 = *(unsigned __int8 *)(a2 + 12 * v6);
      v9 = v27;
      if ( v27 )
      {
        v10 = (int **)&v27;
        while ( 1 )
        {
          v11 = v9[4];
          if ( (int)v11 <= v8 )
          {
            if ( (int)v11 >= v8 )
              goto LABEL_16;
            v12 = v9[1];
            v10 = v9 + 1;
            if ( !v12 )
              goto LABEL_16;
            ++v9;
          }
          else
          {
            v12 = *v9;
            if ( !*v9 )
            {
              v10 = v9;
              goto LABEL_16;
            }
          }
          v10 = v9;
          v9 = (int **)v12;
        }
      }
      v10 = (int **)&v27;
      v9 = (int **)&v27;
LABEL_16:
      v25 = v6;
      if ( *v10 )
      {
        if ( !under_debugger )
          interr(1620);
        goto LABEL_28;
      }
      v13 = (int *)operator new(0x14u);
      v13[4] = v8;
      *v13 = 0;
      v13[1] = 0;
      v13[2] = (int)v9;
      *v10 = v13;
      if ( *v26 )
      {
        v26 = (int **)*v26;
        v13 = *v10;
      }
      a2 = v23;
      sub_261FA((int *)v27, v13);
      ++v28;
      v14 = v7[1];
      v15 = v7[2];
      v29 = *v7;
      v30 = v14;
      v31 = v15;
      v16 = v22[11];
      if ( v22[12] >= (unsigned int)(v16 + 1) )
      {
        v17 = *v21;
      }
      else
      {
        v17 = qvector_reserve((int)v21, *v21, v16 + 1, 0xCu);
        v22[10] = v17;
        v16 = v22[11];
      }
      v17[3 * v16] = v29;
      v18 = (char *)&v17[3 * v16];
      v19 = v31;
      *((_DWORD *)v18 + 1) = v30;
      *((_DWORD *)v18 + 2) = v19;
      ++v22[11];
      v6 = v25 + 1;
      if ( v25 + 1 >= a3 )
        goto LABEL_23;
    }
    if ( !under_debugger )
      interr(1619);
LABEL_28:
    __debugbreak();
  }
LABEL_23:
  sub_6DA36((int)&v26, v27);
  return _stack_chk_guard - v32;
}
// E0550: using guessed type char under_debugger;
