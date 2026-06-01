bool __fastcall bookmarks_t_erase(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)bookmarks_t_mark(a1, a2, "Please select a mark to delete", &byte_22F0C30, a3) != -1;
}
