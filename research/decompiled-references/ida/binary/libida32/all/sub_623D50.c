__int64 __fastcall sub_623D50(__int64 a1, __int64 a2)
{
  const char *file_ext; // rax

  file_ext = (const char *)get_file_ext(a2);
  if ( !strcasecmp(file_ext, "so") && sub_623CE0(a2) )
    return 0;
  else
    return (***(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8))(*(_QWORD *)(a1 + 8), a2);
}

