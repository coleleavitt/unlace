/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025F10
// Address: 0x0000000100025F10

//----- (0000000100025F10) ----------------------------------------------------
__int64 __fastcall sub_100025F10(_QWORD *a1, __int64 a2, std::error_code *a3)
{
  const std::__fs::filesystem::path *v5; // rsi
  bool v6; // zf
  const std::__fs::filesystem::path *v7; // rdi
  int v8; // eax

  v5 = (const std::__fs::filesystem::path *)_s1;
  v6 = a1[2] == 0;
  v7 = (const std::__fs::filesystem::path *)_s1;
  if ( !v6 )
    v7 = (const std::__fs::filesystem::path *)a1[1];
  if ( a1[6] )
    v5 = (const std::__fs::filesystem::path *)a1[5];
  qrename(v7, v5, a3);
  *(_QWORD *)(a2 + 8) = v8;
  return 0;
}
// 100025F41: variable 'v8' is possibly undefined
