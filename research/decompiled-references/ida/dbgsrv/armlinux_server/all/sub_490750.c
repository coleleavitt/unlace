/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490750
// Address: 0x0000000000490750

//----- (0000000000490750) ----------------------------------------------------
__int64 __fastcall sub_490750(const char *a1, const char *a2)
{
  unsigned int v2; // w19

  v2 = rename(a1, a2);
  if ( v2 )
    sub_4869C8(1);
  return v2;
}
