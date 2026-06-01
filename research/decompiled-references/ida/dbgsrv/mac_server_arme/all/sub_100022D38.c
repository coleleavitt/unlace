/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022D38
// Address: 0x0000000100022D38

//----- (0000000100022D38) ----------------------------------------------------
__int64 __fastcall sub_100022D38(_QWORD *a1, __int64 a2, std::error_code *a3)
{
  const std::__fs::filesystem::path *v5; // x0
  const std::__fs::filesystem::path *v6; // x1
  int v7; // w0

  if ( !a1[2] )
  {
    v5 = (const std::__fs::filesystem::path *)&byte_10007AE40;
    if ( a1[6] )
      goto LABEL_3;
LABEL_5:
    v6 = (const std::__fs::filesystem::path *)&byte_10007AE40;
    goto LABEL_6;
  }
  v5 = (const std::__fs::filesystem::path *)a1[1];
  if ( !a1[6] )
    goto LABEL_5;
LABEL_3:
  v6 = (const std::__fs::filesystem::path *)a1[5];
LABEL_6:
  qrename(v5, v6, a3);
  *(_QWORD *)(a2 + 8) = v7;
  return 0;
}
// 100022D88: variable 'v7' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
