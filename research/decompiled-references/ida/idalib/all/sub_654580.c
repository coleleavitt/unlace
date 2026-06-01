__int64 __fastcall sub_654580(_QWORD *a1, __int64 a2, unsigned int a3)
{
  void *idati; // rax
  const char *v6; // rsi
  unsigned int v7; // ebx
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  idati = (void *)*a1;
  v12 = __readfsqword(0x28u);
  WORD4(v11) = 257;
  v9 = 0;
  *(_QWORD *)&v11 = a3;
  if ( !idati )
    idati = (void *)get_idati(a1, a2);
  ptr = idati;
  create_tinfo(&v9, 61, 189, &ptr);
  if ( (get_tinfo_property(v9, 2) & 0x3F) == 0xD || (get_tinfo_property(v9, 2) & 0x3F) == 0x1D )
  {
    get_numbered_type_name(*a1, a3);
    v11 = 0;
    ptr = nullptr;
    sub_35A790((char **)&ptr);
    v6 = haystack;
    if ( (_QWORD)v11 )
      v6 = (const char *)ptr;
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 16LL))(a2, v6);
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  clear_tinfo_t(&v9);
  return v7;
}
