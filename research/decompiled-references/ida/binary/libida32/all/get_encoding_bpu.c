__int64 __fastcall get_encoding_bpu(__int64 a1)
{
  __int64 encoding_name; // rax

  encoding_name = get_encoding_name(a1);
  return get_encoding_bpu_by_name(encoding_name);
}

