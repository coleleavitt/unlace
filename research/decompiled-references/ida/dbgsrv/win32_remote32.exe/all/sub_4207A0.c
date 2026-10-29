/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4207A0
// Address: 0x004207A0

//----- (004207A0) --------------------------------------------------------
char __userpurge sub_4207A0@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int *a3, unsigned int *a4, char **a5)
{
  int v6; // edi
  char *v7; // edi
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-4h]

  sub_41C640(a3, &v9, (int)a4);
  v6 = v10;
  if ( *(_BYTE *)(v10 + 13) || (unsigned __int8)sub_41D0A0((int)a4, v10 + 16) || v6 == *a3 )
    return sub_420480(a1, a2, (int)a3, a4, a5);
  v7 = (char *)(v6 + 32);
  sub_423670(*a5, v7);
  *a5 = v7;
  return 1;
}
