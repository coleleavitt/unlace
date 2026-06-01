/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8081BC0
// Address: 0x08081BC0

//----- (08081BC0) --------------------------------------------------------
int __cdecl sub_8081BC0(unsigned __int8 *a1, const char *a2, void **a3, int a4)
{
  int v4; // esi
  int v5; // eax
  char v6; // bp
  unsigned __int8 v7; // al
  int result; // eax
  unsigned __int8 v9; // [esp+10h] [ebp-4Ch]
  char v10[16]; // [esp+2Ch] [ebp-30h] BYREF
  unsigned int v11; // [esp+3Ch] [ebp-20h]

  v11 = __readgsdword(0x14u);
  v4 = sub_807F510();
  v5 = sub_807F680(v4);
  v6 = v5;
  sub_80D3B60(v10, 16, "___idcexec%d", v5);
  v7 = sub_80816C0((int)v10, a2, a3, a4, 0);
  if ( v7 )
    v7 = sub_808FF10(a1, v10, nullptr, 0, (int)a3, a4);
  v9 = v7;
  sub_807F740(v4, v6);
  result = v9;
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
