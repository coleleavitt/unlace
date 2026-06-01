/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20D78
// Address: 0x00020D78

//----- (00020D78) --------------------------------------------------------
int __fastcall sub_20D78(int a1, int a2, int a3, unsigned __int8 *a4, int a5, int a6)
{
  int v6; // r6
  int v7; // r5
  int v9; // r7
  int v10; // r7
  _DWORD *v11; // r0
  unsigned __int8 *v12; // r1
  int v13; // r4
  int v14; // r7
  int v15; // r6
  int v16; // r2
  int v17; // r0
  int v18; // r7
  int v19; // [sp+10h] [bp-30h]
  int v20; // [sp+1Ch] [bp-24h]
  _DWORD *v21; // [sp+28h] [bp-18h]
  _DWORD *v22; // [sp+2Ch] [bp-14h]
  unsigned __int8 *v25; // [sp+34h] [bp-Ch]
  unsigned int v26; // [sp+38h] [bp-8h] BYREF

  v6 = a1;
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 977) )
  {
    v21 = (_DWORD *)(a1 + 968);
    if ( *(_DWORD *)(a1 + 968) != -1 )
    {
      v7 = a5;
      if ( *(_BYTE *)(a1 + 348) )
      {
        v9 = a2;
        sub_20EE8(a4, a5, (int)"WRITE MEMORY %a %d bytes:\n");
        a2 = v9;
      }
      if ( a6 )
      {
        v10 = a2;
        sub_1CD58(v6, 0, 1);
        a2 = v10;
      }
      v11 = (_DWORD *)(a2 + 1);
      if ( a2 == -1 )
      {
        v11 = v21;
        a2 = *v21;
      }
      v20 = a2;
      v22 = (_DWORD *)_errno(v11);
      *v22 = 0;
      if ( a5 >= 1 )
      {
        v19 = v6;
        v12 = a4;
        v13 = a3;
        while ( 1 )
        {
          v14 = v13 & 3;
          v15 = v7;
          if ( 4 - v14 <= v7 )
            v15 = 4 - (v13 & 3);
          v25 = v12;
          _memcpy_chk(&v26);
          v16 = v13 - v14;
          if ( v15 != 4 )
          {
            v17 = ptrace(PTRACE_PEEKTEXT, v20);
            if ( *v22 )
              break;
            v26 = ((v26 & (0xFFFFFFFF >> (32 - 8 * v15))) << (8 * v14))
                | v17 & ~(0xFFFFFFFF >> (32 - 8 * v15) << (8 * v14));
            v16 = v13 - v14;
          }
          *v22 = 0;
          v18 = v16;
          ptrace(PTRACE_POKETEXT, *v21);
          if ( *v22 )
          {
            *v22 = 0;
            ptrace(PTRACE_POKEDATA, *v21, v18, v26);
            if ( *v22 )
              break;
          }
          v7 -= v15;
          v13 += v15;
          v12 = &v25[v15];
          if ( v7 <= 0 )
          {
            v7 = a5;
            goto LABEL_22;
          }
        }
        v7 = 0;
LABEL_22:
        v6 = v19;
      }
      if ( a6 )
        sub_20908(v6, 0, 1);
    }
  }
  return v7;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// 1943C: using guessed type int __fastcall _memcpy_chk(_DWORD);
