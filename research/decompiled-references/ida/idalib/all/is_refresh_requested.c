bool __fastcall is_refresh_requested(__int64 a1)
{
  return (a1 & get_dirty_infos()) != 0;
}
