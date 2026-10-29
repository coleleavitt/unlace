/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807D930
// Address: 0x0807D930

//----- (0807D930) --------------------------------------------------------
int __cdecl sub_807D930(int a1, int a2)
{
  int v2; // eax
  __int64 v3; // xmm0_8
  int v5; // [esp+0h] [ebp-28h] BYREF
  __int64 v6; // [esp+4h] [ebp-24h]
  unsigned int v7; // [esp+Ch] [ebp-1Ch]

  v7 = __readgsdword(0x14u);
  v5 = 0;
  v6 = 0;
  sub_807C7A0((int (__cdecl *)(int, int))sub_807C5E0, (int)&v5, a1, a2);
  v2 = v5;
  v3 = v6;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v2;
  *(_QWORD *)(a2 + 8) = v3;
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
