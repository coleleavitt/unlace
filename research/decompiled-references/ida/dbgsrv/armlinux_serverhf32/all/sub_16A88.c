/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16A88
// Address: 0x00016A88

//----- (00016A88) --------------------------------------------------------
int __fastcall sub_16A88(int a1, char *s)
{
  int v4; // r6
  size_t v5; // r0
  size_t v6; // r8
  __int64 v7; // kr00_8
  unsigned int v9; // r9
  void *v10; // r0

  v4 = *(_DWORD *)(a1 + 12);
  if ( s && (v5 = strlen(s), (v6 = v5) != 0) )
  {
    v9 = v5 + 1;
    v10 = *(void **)(v4 + 56);
    if ( v9 > *(_DWORD *)(v4 + 64) )
    {
      v10 = sub_77EB0(v4 + 56, *(void **)(v4 + 56), v9, 1u);
      *(_DWORD *)(v4 + 56) = v10;
    }
    *(_DWORD *)(v4 + 60) = v9;
    memmove(v10, s, v6);
    *(_BYTE *)(*(_DWORD *)(v4 + 56) + v6) = 0;
    v7 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    *(_DWORD *)(v4 + 60) = 0;
    v7 = *(_QWORD *)(a1 + 8);
  }
  sub_53D50(v7, "Build ID '%s' of '%s'\n", s, (const char *)HIDWORD(v7));
  return 0;
}
