__int64 __fastcall sub_103190(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // rax

  v1 = sub_F6B10(a1);
  if ( v1
    && (v2 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 664LL))(v1), !strcmp(v2, "hexview_t")) )
  {
    return a1;
  }
  else
  {
    return 0;
  }
}

