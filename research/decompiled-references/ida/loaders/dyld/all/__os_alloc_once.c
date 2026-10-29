atomic_ullong __fastcall _os_alloc_once(atomic_ullong *a1)
{
  _os_once(a1);
  return a1[1];
}
