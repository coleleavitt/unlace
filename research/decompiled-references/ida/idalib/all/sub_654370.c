__int64 __fastcall sub_654370(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 numbered_type_name; // r13
  __int64 idati; // rax
  const char *v10; // rsi
  unsigned int v11; // ebx
  const char *v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-88h] BYREF
  void *v15; // [rsp+10h] [rbp-80h] BYREF
  __int128 v16; // [rsp+18h] [rbp-78h]
  void *ptr; // [rsp+30h] [rbp-60h] BYREF
  __int128 v18; // [rsp+38h] [rbp-58h]
  _QWORD v19[2]; // [rsp+50h] [rbp-40h] BYREF
  __int16 v20; // [rsp+60h] [rbp-30h]
  unsigned __int64 v21; // [rsp+68h] [rbp-28h]

  v5 = *a1;
  v21 = __readfsqword(0x28u);
  v15 = nullptr;
  v16 = 0;
  v7 = a3;
  numbered_type_name = get_numbered_type_name(v5, a3);
  if ( numbered_type_name )
  {
    idati = *a1;
    ptr = nullptr;
    v14 = 0;
    v20 = 257;
    v19[1] = a3;
    v18 = 0;
    if ( !idati )
      idati = get_idati(257, v7);
    v19[0] = idati;
    if ( (unsigned __int8)create_tinfo(&v14, 61, 189, v19) )
      print_tinfo((unsigned int)&ptr, 0, 2, 40, -2147483601, (unsigned int)&v14, numbered_type_name, 0);
    sub_35A790((char **)&v15);
    v10 = haystack;
    if ( (_QWORD)v16 )
      v10 = (const char *)v15;
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 16LL))(a2, v10);
    clear_tinfo_t(&v14);
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
    v11 = 1;
  }
  else
  {
    sub_35A790((char **)&v15);
    v13 = haystack;
    if ( (_QWORD)v16 )
      v13 = (const char *)v15;
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 16LL))(a2, v13);
    v11 = 0;
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v11;
}
