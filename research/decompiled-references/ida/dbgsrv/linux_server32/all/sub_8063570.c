/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8063570
// Address: 0x08063570

//----- (08063570) --------------------------------------------------------
int __usercall sub_8063570@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, char a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int i; // eax
  int v11; // eax
  unsigned int v12; // ebp
  int *v14; // [esp+0h] [ebp-50h]
  int v16; // [esp+8h] [ebp-48h]
  int v17; // [esp+10h] [ebp-40h]
  unsigned int v20; // [esp+2Ch] [ebp-24h]
  unsigned int v21; // [esp+30h] [ebp-20h]

  v6 = a5;
  v21 = __readgsdword(0x14u);
  if ( *((_BYTE *)&off_811D190 + a1 - 135385076) )
    sub_8058240(a4, a5);
  if ( a6 )
  {
    sub_8061880(a1, 0, 1);
    if ( a2 == -1 )
      a2 = *(_DWORD *)(a1 + 724);
    v14 = __errno_location();
    *v14 = 0;
    if ( a5 <= 0 )
    {
LABEL_19:
      sub_8062200(a1, 0, 1);
      goto LABEL_23;
    }
  }
  else
  {
    if ( a2 == -1 )
      a2 = *(_DWORD *)(a1 + 724);
    v14 = __errno_location();
    *v14 = 0;
    if ( a5 <= 0 )
      goto LABEL_23;
  }
  v17 = a4;
  v7 = a5;
  while ( 1 )
  {
    v8 = a3 & 3;
    v9 = 4 - v8;
    if ( 4 - v8 > v7 )
      v9 = v7;
    if ( v9 )
    {
      for ( i = 0; i < v9; ++i )
        *((_BYTE *)&v20 + i) = *(_BYTE *)(v17 + i);
    }
    v16 = a3 - v8;
    if ( v9 == 4 )
    {
      v12 = v20;
    }
    else
    {
      v11 = ptrace(PTRACE_PEEKTEXT, a2, v16, 0);
      if ( *v14 )
        break;
      v12 = v11 ^ (0xFFFFFFFF >> (8 * (4 - v9)) << (8 * v8)) & (v11 ^ (v20 << (8 * v8)));
      v20 = v12;
    }
    *v14 = 0;
    ptrace(PTRACE_POKETEXT, *(_DWORD *)(a1 + 724), v16, v12);
    if ( *v14 )
    {
      *v14 = 0;
      ptrace(PTRACE_POKEDATA, *(_DWORD *)(a1 + 724), v16, v12);
      if ( *v14 )
        break;
    }
    v7 -= v9;
    v17 += v9;
    a3 += v9;
    if ( v7 <= 0 )
    {
      v6 = a5;
      if ( !a6 )
        goto LABEL_23;
      goto LABEL_19;
    }
  }
  v6 = 0;
  if ( a6 )
    goto LABEL_19;
LABEL_23:
  if ( v21 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
// 811D190: using guessed type _UNKNOWN *off_811D190;
