__int64 __fastcall sub_388550(__int64 a1, __int64 a2)
{
  const char *v2; // rdi
  char *v3; // rax
  char *file_ext; // rax

  v2 = *(const char **)(a1 + 72);
  if ( v2
    && (v3 = strchr(v2, 64)) != nullptr
    && v3[1]
    && (file_ext = (char *)get_file_ext(a2), !(unsigned __int8)is_database_ext(file_ext)) )
  {
    return qbasename(a2);
  }
  else
  {
    return a2;
  }
}
