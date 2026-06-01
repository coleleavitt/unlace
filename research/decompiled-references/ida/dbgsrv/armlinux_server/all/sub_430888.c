/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430888
// Address: 0x0000000000430888

//----- (0000000000430888) ----------------------------------------------------
__int64 __fastcall sub_430888(__int64 a1, __int64 a2)
{
  const char *v3; // x0

  if ( *(_QWORD *)(a1 + 16) )
  {
    v3 = *(const char **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 48) )
    {
LABEL_3:
      *(_QWORD *)(a2 + 8) = (int)sub_490750(v3, *(const char **)(a1 + 40));
      return 0;
    }
  }
  else
  {
    v3 = (const char *)&qword_4B2D48;
    if ( *(_QWORD *)(a1 + 48) )
      goto LABEL_3;
  }
  *(_QWORD *)(a2 + 8) = (int)sub_490750(v3, (const char *)&qword_4B2D48);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
