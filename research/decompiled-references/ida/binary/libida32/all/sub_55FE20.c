unsigned __int64 __fastcall sub_55FE20(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v2 = *a2;
  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v5 = 0;
  get_ea_name(&ptr, v2, 21, 0);
  sub_37CA70(a1, (__int64)"End of function %s", (const char *)ptr);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  if ( ptr )
  {
    *(_QWORD *)&v5 = 0;
    qfree(ptr);
  }
  return v6 - __readfsqword(0x28u);
}

