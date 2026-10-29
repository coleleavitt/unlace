/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418960
// Address: 0x00418960

//----- (00418960) --------------------------------------------------------
char __stdcall sub_418960(int a1, DWORD a2, unsigned int a3, int a4)
{
  char v4; // bl
  DWORD v6; // [esp+8h] [ebp-2Ch] BYREF
  void *v7; // [esp+Ch] [ebp-28h]
  int v8; // [esp+10h] [ebp-24h]
  int v9; // [esp+14h] [ebp-20h]
  void *v10; // [esp+1Ch] [ebp-18h]
  int v11; // [esp+20h] [ebp-14h]
  int v12; // [esp+24h] [ebp-10h]
  int v13; // [esp+30h] [ebp-4h]

  v7 = nullptr;
  v9 = 0;
  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  v6 = a2;
  v13 = 0;
  v8 = 0;
  v4 = sub_418D10(&v6, a3, a4);
  v13 = 1;
  if ( v10 )
    sub_453A20(v10);
  v13 = 2;
  if ( v7 )
    sub_453A20(v7);
  return v4;
}
