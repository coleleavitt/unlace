/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: StartAddress
// Address: 0x00405850

//----- (00405850) --------------------------------------------------------
void __userpurge __noreturn StartAddress(__m128i a1@<xmm0>, LPVOID lpThreadParameter)
{
  int v2; // esi
  bool v3; // al
  void *v4; // [esp-4h] [ebp-8h]

  while ( 1 )
  {
    sub_456350(hHandle);
    sub_456370(hSemaphore, 0xFFFFFFFF);
    v2 = dword_4B69C0;
    v3 = sub_406DE0((_DWORD *)dword_4B69C0, a1);
    v4 = *(void **)(v2 + 200);
    *(_BYTE *)(v2 + 92) = v3;
    sub_456350(v4);
  }
}
// 4B69C0: using guessed type int dword_4B69C0;
