/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CD50
// Address: 0x0001CD50

//----- (0001CD50) --------------------------------------------------------
int __fastcall sub_1CD50(int a1, int a2, int a3, char *a4, int a5, unsigned __int8 a6)
{
  unsigned int *v6; // r10
  int *v8; // r8
  int v9; // r5
  unsigned int v10; // r4
  int v11; // r6
  int v12; // r11
  int v13; // r4
  int v14; // r0
  int v15; // r4
  double v17; // [sp+0h] [bp-2Ch]
  int v18; // [sp+8h] [bp-24h]
  unsigned int v21; // [sp+20h] [bp-Ch] BYREF

  v6 = (unsigned int *)a4;
  if ( *(_BYTE *)(a1 + 412) )
  {
    LODWORD(v17) = a5;
    sub_1714C(a4, a5, (int)"WRITE MEMORY %a %d bytes:\n", v17, v18);
  }
  if ( a6 )
    sub_1BF74(a1, 0, 1);
  if ( a2 == -1 )
    a2 = *(_DWORD *)(a1 + 1068);
  v8 = _errno_location();
  *v8 = 0;
  if ( a5 > 0 )
  {
    v9 = a5;
    while ( 1 )
    {
      v13 = a3 & 3;
      if ( (a3 & 3) == 0 )
        break;
      v11 = 4 - v13;
      v12 = 4 - v13;
      if ( 4 - v13 > v9 )
        goto LABEL_18;
      _memcpy_chk(&v21, v6, 4 - v13, 4);
LABEL_16:
      v14 = ptrace(PTRACE_PEEKTEXT, a2, a3 - (a3 & 3), 0);
      if ( *v8 )
        goto LABEL_20;
      v10 = ((v21 << (8 * v13)) ^ v14) & (0xFFFFFFFF >> (32 - 8 * v11) << (8 * v13)) ^ v14;
      v21 = v10;
LABEL_11:
      *v8 = 0;
      ptrace(PTRACE_POKETEXT, *(_DWORD *)(a1 + 1068), a3 - (a3 & 3), v10);
      if ( *v8 )
      {
        *v8 = 0;
        ptrace(PTRACE_POKEDATA, *(_DWORD *)(a1 + 1068), a3 - (a3 & 3), v10);
        if ( *v8 )
        {
LABEL_20:
          v15 = 0;
          goto LABEL_21;
        }
      }
      v9 -= v12;
      v6 = (unsigned int *)((char *)v6 + v11);
      a3 += v11;
      if ( v9 <= 0 )
        goto LABEL_24;
    }
    if ( v9 > 3 )
    {
      v10 = *v6;
      v11 = 4;
      v12 = 4;
      v21 = *v6;
      goto LABEL_11;
    }
LABEL_18:
    _memcpy_chk(&v21, v6, v9, 4);
    v11 = v9;
    v12 = v9;
    goto LABEL_16;
  }
LABEL_24:
  v15 = a5;
LABEL_21:
  if ( a6 )
    sub_1C560(a1, 0, 1, a6);
  return v15;
}
// 1CEAC: variable 'v17' is possibly undefined
// 1CEAC: variable 'v18' is possibly undefined
// 14224: using guessed type int __fastcall _memcpy_chk(_DWORD, _DWORD, _DWORD, _DWORD);
