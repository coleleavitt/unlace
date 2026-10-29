/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E70C
// Address: 0x0001E70C

//----- (0001E70C) --------------------------------------------------------
int __fastcall sub_1E70C(_DWORD *a1, int a2, const char *a3)
{
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r3
  _DWORD *v7; // r2
  int v8; // r4
  int v9; // r5
  _DWORD *v10; // r6
  _DWORD *v11; // r7
  int result; // r0
  int v13; // r1
  unsigned int v14; // r0
  const char *v15; // r0
  _DWORD *v16; // [sp+0h] [bp-24h]
  unsigned int v18; // [sp+Ch] [bp-18h]
  _DWORD *v19; // [sp+Ch] [bp-18h]
  unsigned int v20; // [sp+10h] [bp-14h]
  int v22; // [sp+18h] [bp-Ch] BYREF

  v4 = a1[18];
  v5 = v4 / 0x5D;
  v6 = v4;
  v7 = a1;
  v8 = a1[15];
  v9 = v7[16];
  v10 = (_DWORD *)(v8 + 4 * v5);
  v16 = v7 + 14;
  v11 = nullptr;
  if ( v9 != v8 )
    v11 = (_DWORD *)(*v10 + 44 * (v6 - 93 * v5));
  v18 = v7[19] + v6;
  v20 = v18 % 0x5D;
  v19 = (_DWORD *)(v8 + 4 * (v18 / 0x5D));
  while ( 1 )
  {
    result = 0;
    v13 = 0;
    if ( v9 != v8 )
      v13 = *v19 + 44 * v20;
    if ( (_DWORD *)v13 == v11 )
      break;
    v14 = v11[4] & 0xFFFFFFF;
    if ( v14 == a2 )
    {
      if ( v14 > 0xB || ((1 << *((_BYTE *)v11 + 16)) & 0x902) == 0 )
      {
        if ( !under_debugger )
          interr(3295);
        __debugbreak();
      }
      v15 = v11[6] ? (const char *)v11[5] : &byte_B3CBE;
      if ( !strcmp(v15, a3) )
      {
        sub_1E820(&v22, v16, v10, (int)v11);
        return 1;
      }
    }
    v11 += 11;
    if ( (unsigned __int8 *)((char *)v11 - *v10) == &stru_FF0.st_info )
    {
      v11 = (_DWORD *)v10[1];
      ++v10;
    }
  }
  return result;
}
// FF0: using guessed type Elf32_Sym;
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
