/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808FF10
// Address: 0x0808FF10

//----- (0808FF10) --------------------------------------------------------
int __cdecl sub_808FF10(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, int a5, int a6)
{
  int v6; // ebx
  _DWORD v8[20]; // [esp-70h] [ebp-70h] BYREF
  unsigned int v9; // [esp-20h] [ebp-20h]

  v9 = __readgsdword(0x14u);
  sub_808ACA0((int)v8, a6, 0);
  v6 = sub_808EDA0(v8, a2, 0, a4, a3, a1, a5);
  sub_808AE30((int)v8);
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
