/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1EE24
// Address: 0x0001EE24

//----- (0001EE24) --------------------------------------------------------
int __fastcall sub_1EE24(int a1, int a2, int a3, unsigned int *a4, int a5, int a6)
{
  int v6; // r6
  int v7; // r5
  int *v8; // r4
  int v10; // r1
  int v11; // r5
  int v12; // r0
  int v13; // r4
  _DWORD *v14; // r0
  unsigned int *v15; // r4
  int v16; // r2
  int v17; // r7
  int v18; // r6
  unsigned int v19; // r0
  int v20; // r2
  unsigned int v21; // r0
  int i; // r1
  unsigned int *v24; // [sp+4h] [bp-28h]
  int v25; // [sp+8h] [bp-24h]
  int v26; // [sp+10h] [bp-1Ch]
  _DWORD *v28; // [sp+1Ch] [bp-10h]

  v6 = a1;
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 977) )
  {
    v8 = (int *)(a1 + 968);
    if ( *(_DWORD *)(a1 + 968) != -1 )
    {
      if ( a6 )
        sub_1CD58(a1, 0, 1);
      v10 = a5;
      if ( a2 == -1 )
        a2 = *v8;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v25 = v6;
      v24 = a4;
      if ( (unsigned int)a5 < 0xD )
        goto LABEL_9;
      while ( 1 )
      {
        v13 = 1;
LABEL_9:
        if ( v11 != v10 )
        {
          if ( v12 << 31 )
          {
            v10 = a5;
          }
          else
          {
            v11 = 0;
            v10 = a5;
            if ( a5 < 1 )
            {
              v12 = 1;
            }
            else
            {
              v26 = v13;
              v14 = (_DWORD *)_errno(v12);
              v10 = a5;
              v15 = a4;
              v11 = 0;
              v16 = a3;
              v28 = v14;
              while ( 1 )
              {
                *v14 = 0;
                v17 = v10 - v11;
                v18 = v16 & 3;
                if ( 4 - v18 <= v10 - v11 )
                  v17 = 4 - (v16 & 3);
                a3 = v16;
                v19 = ptrace(PTRACE_PEEKTEXT, a2, v16 - v18);
                if ( *v28 )
                  break;
                if ( v17 == 4 )
                {
                  *v15 = v19;
                  v20 = a3;
                }
                else
                {
                  v20 = a3;
                  if ( v17 >= 1 )
                  {
                    v21 = v19 >> (8 * v18);
                    for ( i = 0; i < v17; ++i )
                    {
                      *((_BYTE *)v15 + i) = v21;
                      v21 >>= 8;
                    }
                  }
                }
                v11 += v17;
                v16 = v17 + v20;
                v15 = (unsigned int *)((char *)v15 + v17);
                v10 = a5;
                v14 = v28;
                if ( v11 >= a5 )
                {
                  a3 = v16;
                  v12 = 1;
                  v6 = v25;
                  a4 = v24;
                  v13 = v26;
                  goto LABEL_26;
                }
              }
              v12 = 1;
              v6 = v25;
              a4 = v24;
              v10 = a5;
              v13 = v26;
            }
          }
        }
LABEL_26:
        if ( (~v13 & (v11 < v10)) == 0 )
          break;
        v10 = a5;
      }
      if ( a6 )
        sub_20908(v6, 0, 1);
      return v11 & ~(v11 >> 31);
    }
  }
  return v7;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
