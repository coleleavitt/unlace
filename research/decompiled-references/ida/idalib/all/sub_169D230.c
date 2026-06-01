void __fastcall sub_169D230(__int64 a1)
{
  _QWORD *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  if ( !*(_BYTE *)(a1 + 163) )
  {
LABEL_10:
    if ( !*(_BYTE *)(a1 + 164) || *(_DWORD *)a1 != 5 )
      goto LABEL_5;
LABEL_15:
    sub_1A445B0(*(_QWORD *)(a1 + 112), a1);
    goto LABEL_5;
  }
  if ( *(_DWORD *)a1 == 5 )
  {
    if ( !*(_BYTE *)(a1 + 164) )
      goto LABEL_5;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 96) )
  {
    v2 = *(_QWORD **)(a1 + 112);
    if ( (*(_BYTE *)(v2[29] + 46LL) & 0x20) != 0 )
    {
      sub_1663B80(v2, a1);
      goto LABEL_10;
    }
  }
LABEL_5:
  v3 = *(void **)(a1 + 88);
  if ( v3 )
    sub_1A39780(v3);
  v4 = *(void **)(a1 + 8);
  if ( v4 != (void *)(a1 + 24) )
    free(v4);
}
