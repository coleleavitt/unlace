/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423210
// Address: 0x00423210

//----- (00423210) --------------------------------------------------------
char __usercall sub_423210@<al>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int *v3; // edi
  char v4; // bl
  void *v6; // [esp+10h] [ebp-18h] BYREF
  int v7; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+24h] [ebp-4h]

  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = (int *)sub_4208A0(a1, (int *)&v6);
  if ( v3 )
  {
    sub_423380(a1);
    v4 = sub_4232D0((_DWORD **)a1, a2, v3, (unsigned int *)&v6, (char *)(a1[3] + 24 * a1[4] - 24));
  }
  else
  {
    sub_41FBD0((LPVOID *)a1, a2);
    v4 = 0;
  }
  v9 = 2;
  if ( v6 )
  {
    v7 = 0;
    sub_453A20(v6);
  }
  return v4;
}
