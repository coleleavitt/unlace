/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BFA0
// Address: 0x0009BFA0

//----- (0009BFA0) --------------------------------------------------------
char __cdecl sub_9BFA0(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  __int16 *v4; // edx
  int *i; // esi
  unsigned int v6; // eax
  __int16 *v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch] BYREF
  int v10; // [esp+14h] [ebp-18h]
  unsigned int v11; // [esp+18h] [ebp-14h]

  v2 = a2;
  v11 = __readgsdword(0x14u);
  if ( a2 > 0x147 || *(unsigned __int16 *)((char *)&word_106E84 + 5 * a2) != 0xFFFF )
  {
    if ( !(_BYTE)under_debugger )
      interr(1473);
    BUG();
  }
  v3 = 0;
  v4 = &word_106E84;
  for ( i = dword_106448; ; i += 2 )
  {
    v6 = (unsigned __int16)*v4;
    if ( v6 == 0xFFFF )
      v6 = v3;
    if ( v6 != v2 )
      goto LABEL_9;
    v9 = 0;
    v10 = 0;
    if ( !v3 )
      break;
    v9 = *(i - 1);
    v10 = *i + 1;
    v8 = v4;
    rangeset_t_add(a1, &v9);
    v4 = v8;
    v2 = a2;
LABEL_9:
    ++v3;
    v4 = (__int16 *)((char *)v4 + 5);
    if ( v3 >= 0x148 )
      return 1;
  }
  return 0;
}
// 106448: using guessed type int dword_106448[];
// 106E84: using guessed type __int16 word_106E84;
// 13E34C: using guessed type int under_debugger;
