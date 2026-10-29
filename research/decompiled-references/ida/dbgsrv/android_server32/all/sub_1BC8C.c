/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BC8C
// Address: 0x0001BC8C

//----- (0001BC8C) --------------------------------------------------------
int __fastcall sub_1BC8C(int a1, int a2)
{
  unsigned __int8 *v3; // r0
  int v4; // r0
  size_t v5; // r5
  unsigned int v6; // r6
  void *v7; // r0
  char v9[4100]; // [sp+14h] [bp-1004h] BYREF

  if ( *(_DWORD *)(a2 + 4) )
    v3 = *(unsigned __int8 **)a2;
  else
    v3 = (unsigned __int8 *)&byte_B3CBE;
  if ( !qisabspath(v3) )
  {
    qmakepath(v9, 4096, "/system/lib");
    if ( qfileexist(v9) )
    {
      v4 = _strlen_chk(v9, 4096);
      if ( v4 )
      {
        v5 = v4;
        v6 = v4 + 1;
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v4 + 1) )
        {
          v7 = *(void **)a2;
        }
        else
        {
          v7 = qvector_reserve(a2, *(void **)a2, v6, 1u);
          *(_DWORD *)a2 = v7;
        }
        *(_DWORD *)(a2 + 4) = v6;
        memmove(v7, v9, v5);
        *(_BYTE *)(*(_DWORD *)a2 + v5) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 0;
      }
    }
  }
  return 4116;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
