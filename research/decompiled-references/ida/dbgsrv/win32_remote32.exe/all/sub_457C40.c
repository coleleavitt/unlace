/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457C40
// Address: 0x00457C40

//----- (00457C40) --------------------------------------------------------
int __stdcall sub_457C40(LPCCH lpMultiByteStr, int a2)
{
  int v2; // esi
  LPCWSTR lpPathName; // [esp+8h] [ebp-18h] BYREF
  unsigned int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+1Ch] [ebp-4h]

  sub_4579C0((LPWSTR *)&lpPathName, lpMultiByteStr);
  v6 = 0;
  if ( v5 <= 1 )
  {
    v2 = -1;
  }
  else
  {
    v2 = sub_472647(lpPathName);
    if ( v2 != -1 )
      goto LABEL_6;
  }
  sub_45CC20(1);
LABEL_6:
  v6 = 1;
  if ( lpPathName )
  {
    v5 = 0;
    sub_453A20((void *)lpPathName);
  }
  return v2;
}
// 457C87: conditional instruction was optimized away because %var_14.4>=2u
