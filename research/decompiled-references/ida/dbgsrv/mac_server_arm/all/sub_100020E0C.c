/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020E0C
// Address: 0x0000000100020E0C

//----- (0000000100020E0C) ----------------------------------------------------
__int64 __fastcall sub_100020E0C(_QWORD *a1, __int64 a2, std::error_code *a3)
{
  const std::__fs::filesystem::path *v5; // x0
  const std::__fs::filesystem::path *v6; // x1
  int v7; // w0

  if ( !a1[2] )
  {
    v5 = (const std::__fs::filesystem::path *)&byte_100075A30;
    if ( a1[6] )
      goto LABEL_3;
LABEL_5:
    v6 = (const std::__fs::filesystem::path *)&byte_100075A30;
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
// 100020E58: variable 'v7' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
