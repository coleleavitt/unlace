/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C68C
// Address: 0x0001C68C

//----- (0001C68C) --------------------------------------------------------
int __fastcall sub_1C68C(int a1, int a2, int a3, unsigned int *a4, int a5, unsigned __int8 a6)
{
  int v8; // r3
  char v9; // r5
  char v10; // r4
  int v11; // r6
  int v12; // r3
  unsigned int *v13; // r9
  int *v14; // r10
  int v15; // r5
  int v16; // r4
  unsigned int v17; // r0
  unsigned int v18; // r0
  _DWORD *v19; // r3
  int v20; // r3
  int v23; // r0
  int v24; // r9
  char v25; // [sp+8h] [bp-64h]
  char v28; // [sp+1Ch] [bp-50h]
  char v29[64]; // [sp+24h] [bp-48h] BYREF

  v8 = _stack_chk_guard;
  if ( a6 )
    sub_1BF74(a1, 0, 1);
  v9 = 0;
  if ( a2 == -1 )
    v8 = a1;
  v10 = 1;
  if ( a2 == -1 )
    a2 = *(_DWORD *)(v8 + 1068);
  if ( (unsigned int)a5 > 0xC )
  {
    v11 = 0;
    goto LABEL_35;
  }
  v25 = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( a5 == v11 )
      v12 = 0;
    else
      v12 = v10 & 1;
    v28 = v12;
    if ( v12 )
    {
      v11 = 0;
      if ( a5 <= 0 )
      {
LABEL_28:
        v20 = a6;
        if ( !a6 )
          return v11;
        goto LABEL_39;
      }
      v13 = a4;
      v14 = _errno_location();
      while ( 1 )
      {
        v15 = a3 & 3;
        if ( (a3 & 3) != 0 )
          v16 = 4 - v15;
        else
          v16 = 4;
        *v14 = 0;
        if ( v16 >= a5 - v11 )
          v16 = a5 - v11;
        v17 = ptrace(PTRACE_PEEKTEXT, a2, a3 - v15, 0);
        if ( *v14 )
          break;
        if ( v16 == 4 )
        {
          *v13 = v17;
        }
        else
        {
          v18 = v17 >> (8 * v15);
          if ( v16 > 0 )
          {
            v19 = (unsigned int *)((char *)v13 - 1);
            do
            {
              *((_BYTE *)v19 + 1) = v18;
              v19 = (_DWORD *)((char *)v19 + 1);
              v18 >>= 8;
            }
            while ( (unsigned int *)((char *)v13 + v16 - 1) != v19 );
          }
        }
        v11 += v16;
        v13 = (unsigned int *)((char *)v13 + v16);
        a3 += v16;
        if ( a5 <= v11 )
          goto LABEL_28;
      }
      v9 = v28;
    }
    v10 = v9 ^ 1;
    if ( a5 <= v11 || !(((unsigned __int8)v25 ^ 1) & 1) )
      break;
LABEL_35:
    sub_7EBB4(v29, 64, "/proc/%d/mem", a2);
    v23 = open(v29, 0x20000);
    v24 = v23;
    if ( v23 != -1 )
    {
      v11 = pread64(v23, a4, a5, 0, a3, 0);
      close(v24);
    }
    v25 = 1;
  }
  v20 = a6;
  v11 &= ~(v11 >> 31);
  if ( !a6 )
    return v11;
LABEL_39:
  sub_1C560(a1, 0, 1, v20);
  return v11;
}
// 1C6CC: variable 'v8' is possibly undefined
// 14254: using guessed type int __fastcall pread64(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
