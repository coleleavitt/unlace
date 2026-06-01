unsigned __int64 __fastcall sub_4441A0(__int64 a1, char a2)
{
  __int64 path; // rax
  __int64 v3; // rdi
  __int64 errdesc; // rsi
  _BYTE v6[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  path = get_path(1);
  set_file_ext(v6, 4096, path, "idb_ok");
  if ( a2 )
  {
    v3 = qfopen(v6, "w");
    if ( !v3 )
    {
      errdesc = get_errdesc(v6);
      sub_375320((__int64)&unk_22B285A, errdesc);
    }
    qfclose(v3);
  }
  else
  {
    qunlink(v6);
  }
  return v7 - __readfsqword(0x28u);
}

