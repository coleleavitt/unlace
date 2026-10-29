/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70ED8
// Address: 0x00070ED8

//----- (00070ED8) --------------------------------------------------------
int __fastcall sub_70ED8(int a1, unsigned int a2)
{
  unsigned int v2; // r3
  int *v3; // r6
  unsigned int v4; // r5
  int *v5; // r7
  int v6; // r1
  unsigned int v7; // r4
  int result; // r0
  int v10; // [sp+10h] [bp-Ch] BYREF
  int v11; // [sp+14h] [bp-8h]

  if ( a2 >> 3 > 0x28
    || (v2 = a2,
        v3 = &dword_C5BBC,
        (*((unsigned __int8 *)&dword_C5BBC + 5 * a2 + 1) << 8) + *((unsigned __int8 *)&dword_C5BBC + 5 * a2) != 0xFFFF) )
  {
    if ( !under_debugger )
      interr(1473);
    __debugbreak();
  }
  v4 = 0;
  v5 = dword_C517C;
  while ( 1 )
  {
    v6 = v4;
    if ( (*((unsigned __int8 *)v3 + 1) << 8) + *(unsigned __int8 *)v3 != 0xFFFF )
      v6 = (*((unsigned __int8 *)v3 + 1) << 8) + *(unsigned __int8 *)v3;
    if ( v6 != v2 )
      goto LABEL_9;
    v11 = 0;
    v10 = 0;
    if ( !v4 )
      return 0;
    v10 = *v5;
    v11 = v5[1] + 1;
    v7 = v2;
    rangeset_t_add(a1, (int)&v10);
    v2 = v7;
LABEL_9:
    v5 += 2;
    v3 = (int *)((char *)v3 + 5);
    ++v4;
    result = 1;
    if ( v4 >= 0x148 )
      return result;
  }
}
// C517C: using guessed type int dword_C517C[2];
// C5BBC: using guessed type int dword_C5BBC;
// E0550: using guessed type char under_debugger;
