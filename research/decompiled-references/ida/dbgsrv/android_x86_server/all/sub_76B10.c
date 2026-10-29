/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76B10
// Address: 0x00076B10

//----- (00076B10) --------------------------------------------------------
_DWORD *__userpurge sub_76B10@<eax>(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  void *v4; // eax
  int v6; // [esp+18h] [ebp-24h] BYREF
  char v7; // [esp+20h] [ebp-1Ch]
  unsigned int v8; // [esp+28h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  *a1 = *a3;
  sub_76BE0((int)&v6, a2, a3);
  v3 = v6;
  v6 = 0;
  if ( v3 )
  {
    if ( v7 )
    {
      v4 = *(void **)(v3 + 20);
      if ( v4 )
      {
        *(_DWORD *)(v3 + 24) = 0;
        qfree(v4);
        *(_DWORD *)(v3 + 20) = 0;
        *(_DWORD *)(v3 + 28) = 0;
      }
      if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        operator delete(*(void **)(v3 + 16));
    }
    operator delete((void *)v3);
  }
  return a1;
}
