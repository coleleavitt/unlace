unsigned __int64 __fastcall strings_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 *v8; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 224);
  v6 = *a2;
  v13 = __readfsqword(0x28u);
  v8 = (__int64 *)(16 * a5 + *(_QWORD *)(v5 + 16));
  sub_396E40(v6, *v8);
  if ( (unsigned __int8)is_loaded(*v8) )
  {
    sub_169A50(*a2 + 3, (__int64)"%08X", *((_DWORD *)v8 + 2));
    print_strlit_type(*a2 + 6, *((unsigned int *)v8 + 3), 0, 9);
    v10 = *a2;
    v11 = *((unsigned int *)v8 + 3);
    v12 = 1023;
    get_strlit_contents(v10 + 9, *v8, *((int *)v8 + 2), v11, &v12, 1);
  }
  *a3 = 80;
  return v13 - __readfsqword(0x28u);
}
