/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FD4
// Address: 0x0000000000040FD4

//----- (0000000000040FD4) ----------------------------------------------------
__int64 __fastcall sub_40FD4(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 *a4, int a5, char a6, double a7)
{
  int v7; // w19
  __int64 v9; // x20
  unsigned __int8 *v11; // x22
  __int64 v12; // x23
  _DWORD *v14; // x0
  _DWORD *v15; // x25
  int v16; // w29
  __int64 v17; // x27
  int v18; // w26
  __int64 v19; // x2
  __int64 v20; // x0
  char v21; // [xsp+4h] [xbp-7Ch]
  _QWORD v22[2]; // [xsp+10h] [xbp-70h] BYREF

  v22[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 1853) )
    return 0;
  v9 = a1;
  if ( *(_DWORD *)(a1 + 1844) == -1 )
  {
    return 0;
  }
  else
  {
    v7 = a5;
    v11 = a4;
    v12 = a3;
    if ( *(_BYTE *)(a1 + 664) )
      a1 = sub_411CC(a4, a5, (__int64)"WRITE MEMORY %a %d bytes:\n", a7, a3);
    if ( (a6 & 1) != 0 )
      a1 = sub_3B6B4(v9, 0, 1);
    if ( a2 == -1 )
      a2 = *(_DWORD *)(v9 + 1844);
    v14 = (_DWORD *)__errno(a1);
    *v14 = 0;
    if ( v7 >= 1 )
    {
      v15 = v14;
      v16 = v7;
      v21 = a6;
      while ( 1 )
      {
        v17 = v12 & 7;
        if ( 8 - (int)v17 <= v16 )
          v18 = 8 - v17;
        else
          v18 = v16;
        if ( (unsigned __int64)v18 >= 8 )
          v19 = 8;
        else
          v19 = v18;
        __memcpy_chk(v22, v11, v19, 8);
        if ( v18 != 8 )
        {
          v20 = ptrace(PTRACE_PEEKTEXT, a2, v12 - v17, 0);
          if ( *v15 )
            break;
          v22[0] = ((v22[0] & (0xFFFFFFFFFFFFFFFFLL >> (-8 * (unsigned __int8)v18))) << (8 * ((unsigned __int8)v12 & 7u)))
                 | v20 & ~(0xFFFFFFFFFFFFFFFFLL >> (-8 * (unsigned __int8)v18) << (8 * ((unsigned __int8)v12 & 7u)));
        }
        *v15 = 0;
        ptrace(PTRACE_POKETEXT, *(unsigned int *)(v9 + 1844), v12 - v17, v22[0]);
        if ( *v15 )
        {
          *v15 = 0;
          ptrace(PTRACE_POKEDATA, *(unsigned int *)(v9 + 1844), v12 - v17, v22[0]);
          if ( *v15 )
            break;
        }
        v16 -= v18;
        v11 += v18;
        v12 += v18;
        if ( v16 <= 0 )
          goto LABEL_27;
      }
      v7 = 0;
LABEL_27:
      a6 = v21;
    }
    if ( (a6 & 1) != 0 )
      sub_409C0(v9, 0, 1);
  }
  return (unsigned int)v7;
}
// 37290: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
