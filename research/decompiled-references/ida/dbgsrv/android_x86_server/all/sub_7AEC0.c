/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AEC0
// Address: 0x0007AEC0

//----- (0007AEC0) --------------------------------------------------------
char __cdecl sub_7AEC0(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  void *v5; // [esp+8h] [ebp-24h] BYREF
  int v6; // [esp+Ch] [ebp-20h]
  int v7; // [esp+10h] [ebp-1Ch]
  unsigned int v8; // [esp+18h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v2 = a1[3];
  sub_7AC10((int)(a1 + 4), (int)&v5, v2 == 25);
  v3 = -1;
  if ( v2 != 25 )
    v3 = a1[5];
  sub_1F400(a2, "%s|%d|%d|%s", *a1, a1[3], v3, v5);
  if ( v5 )
  {
    v6 = 0;
    qfree(v5);
    v5 = nullptr;
    v7 = 0;
  }
  return 1;
}
