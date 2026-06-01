/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471967
// Address: 0x00471967

//----- (00471967) --------------------------------------------------------
char __thiscall sub_471967(int this, int a2, int a3, _WORD **a4, _DWORD *a5, unsigned __int8 a6)
{
  WCHAR WideCharStr; // [esp+8h] [ebp-8h] BYREF
  CHAR MultiByteStr; // [esp+Ch] [ebp-4h] BYREF
  char v10; // [esp+Dh] [ebp-3h]

  MultiByteStr = a6;
  v10 = 0;
  if ( *(__int16 *)(sub_478614(this, a6) + 2 * a6) < 0 )
    v10 = sub_470F7F((unsigned __int8 **)(this + 8));
  WideCharStr = 63;
  sub_47957F(&WideCharStr, &MultiByteStr, *(_DWORD *)(**(_DWORD **)(this + 104) + 4), *(_DWORD **)(this + 104));
  *(*a4)++ = (char)a6;
  --*a5;
  return 1;
}
