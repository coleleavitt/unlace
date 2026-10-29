__int64 __fastcall sub_605D10(__int64 a1, __int64 a2)
{
  const char *file_ext; // rax
  void *v3; // rbx
  unsigned int v4; // ebp

  file_ext = (const char *)get_file_ext(a2);
  if ( file_ext && !strcasecmp(file_ext, "exe") )
    return 0;
  v3 = (void *)open_linput(a2, 0);
  if ( !v3 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(v3, *(_QWORD *)(a1 + 8));
  close_linput(v3);
  return v4;
}

