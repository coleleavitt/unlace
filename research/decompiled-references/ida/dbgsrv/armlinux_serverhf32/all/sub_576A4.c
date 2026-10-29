/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_576A4
// Address: 0x000576A4

//----- (000576A4) --------------------------------------------------------
int __fastcall sub_576A4(int a1, int a2)
{
  __int64 v4; // r6
  __int64 v5; // [sp+0h] [bp-14h] BYREF

  if ( sub_57200(*(_DWORD *)(a1 + 8), (int)&v5, 8) != 8 )
    return sub_3774C((_BYTE *)a2, "read error");
  v4 = v5;
  sub_455C8((unsigned __int8 *)a2);
  *(_QWORD *)(a2 + 8) = v4;
  *(_BYTE *)a2 = 9;
  return 0;
}
