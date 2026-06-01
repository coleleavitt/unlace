/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64A38
// Address: 0x00064A38

//----- (00064A38) --------------------------------------------------------
int __fastcall sub_64A38(int a1, int a2, _BYTE *a3, int a4)
{
  int v6; // r0
  unsigned __int8 *v7; // r1

  v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 28))(a1, a2);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 12) )
      v7 = *(unsigned __int8 **)(v6 + 8);
    else
      v7 = (unsigned __int8 *)&byte_B3CBE;
    qstrncpy((unsigned int)a3, v7, a4);
    return 1;
  }
  else
  {
    qsnprintf(a3, a4, "%08X");
    return 0;
  }
}
// B3CBE: using guessed type char byte_B3CBE;
