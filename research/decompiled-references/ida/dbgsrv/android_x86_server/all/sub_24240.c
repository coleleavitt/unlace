/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24240
// Address: 0x00024240

//----- (00024240) --------------------------------------------------------
int __cdecl sub_24240(int a1, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  _BYTE v12[56]; // [esp+0h] [ebp-5Ch] BYREF
  int v13; // [esp+38h] [ebp-24h]
  unsigned int v14; // [esp+48h] [ebp-14h]

  v2 = a2;
  v14 = __readgsdword(0x14u);
  result = -1;
  if ( a2 )
  {
    v4 = a1;
    v5 = *(_DWORD *)(a2 + 4);
    v6 = *(_DWORD *)(a1 + 572);
    if ( !v6 )
      goto LABEL_35;
    v7 = a1 + 572;
    do
    {
      if ( *(_DWORD *)(v6 + 16) >= v5 )
        v7 = v6;
      v6 = *(_DWORD *)(v6 + 4 * (*(_DWORD *)(v6 + 16) < v5));
    }
    while ( v6 );
    v4 = a1;
    v2 = a2;
    if ( v7 == a1 + 572 || *(_DWORD *)(v7 + 16) > v5 )
    {
LABEL_35:
      if ( v5 && (*(_DWORD *)(v2 + 16) & 0xFFFFFFF) != 4 && !*(_BYTE *)(v4 + 633) )
      {
        sub_24410(v4, "could not find thread %d!\n", v5);
        return -1;
      }
      goto LABEL_32;
    }
    v8 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
    if ( v8 > 9 || (v9 = 792, !_bittest(&v9, v8)) && (v8 != 7 || *(_BYTE *)(a2 + 12)) )
      *(_DWORD *)(v7 + 32) = 0;
    v10 = *(_DWORD *)(v7 + 40);
    if ( v10 == 3 )
    {
      sub_1FEB0(a1, *(_DWORD *)(a2 + 4));
    }
    else
    {
      if ( v10 != 2 )
      {
LABEL_23:
        if ( (*(_DWORD *)(v2 + 16) & 0xFFFFFFF) == 7
          && !*(_BYTE *)(v7 + 36)
          && *(_DWORD *)(v2 + 20) == 5
          && *(_BYTE *)(v2 + 12) )
        {
          v11 = *(_DWORD *)(v2 + 4);
          if ( ptrace(PTRACE_GETREGS, v11, 0, v12)
            || (v13 & 0x100) != 0 && (v13 &= ~0x100u, ptrace(PTRACE_SETREGS, v11, 0, v12)) )
          {
            sub_1C900();
          }
          v4 = a1;
        }
LABEL_32:
        *(_BYTE *)(v4 + 678) = 0;
        return 2 * sub_23870(v4, 0) - 1;
      }
      *(_DWORD *)(v7 + 24) = 0;
      *(_DWORD *)(v7 + 28) = 0;
      sub_23D70(a1, *(_DWORD *)(v7 + 20), 0);
    }
    v2 = a2;
    goto LABEL_23;
  }
  return result;
}
