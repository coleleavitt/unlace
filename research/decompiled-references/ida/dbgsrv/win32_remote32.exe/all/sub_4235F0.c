/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4235F0
// Address: 0x004235F0

//----- (004235F0) --------------------------------------------------------
char __userpurge sub_4235F0@<al>(int a1@<ebx>, char *a2, char *a3, char *a4, int a5, int a6, int a7)
{
  char v7; // bl
  _DWORD v9[23]; // [esp+8h] [ebp-5Ch] BYREF

  sub_41C8A0((char *)v9, a7, 0);
  v9[22] = 0;
  v7 = sub_4230A0(v9, a1, a3, 0, a5, a4, a2, a6);
  sub_41CD20(v9);
  return v7;
}
