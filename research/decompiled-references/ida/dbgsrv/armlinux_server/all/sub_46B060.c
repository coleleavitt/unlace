/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B060
// Address: 0x000000000046B060

//----- (000000000046B060) ----------------------------------------------------
__int64 __fastcall sub_46B060(__int64 a1, __int64 a2)
{
  int v4; // w3
  const char *v5; // x5
  int v6; // w4
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v9; // [xsp+28h] [xbp-18h]
  __int64 v10; // [xsp+30h] [xbp-10h]

  v4 = *(_DWORD *)(a1 + 24);
  ptr = nullptr;
  v9 = 0;
  v10 = 0;
  if ( v4 == 25 )
  {
    v5 = nullptr;
    v6 = -1;
  }
  else
  {
    sub_46AF10(a1 + 28, &ptr);
    v4 = *(_DWORD *)(a1 + 24);
    v6 = *(_DWORD *)(a1 + 32);
    v5 = (const char *)ptr;
  }
  sub_40CD68(a2, "%s|%d|%d|%s", *(const char **)a1, v4, v6, v5);
  if ( ptr )
  {
    v9 = 0;
    j__free(ptr);
  }
  return 1;
}
