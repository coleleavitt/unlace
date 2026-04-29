unsigned __int64 __fastcall sub_265050(__int64 **a1, void **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 module_data; // r12
  bool v8; // zf
  const char *v9; // rcx
  int v10; // edx
  __int64 v11; // r15
  __int64 v13; // rsi
  const char *v14; // rcx
  int v15; // eax
  __int64 *v17; // [rsp+28h] [rbp-58h]
  const char *v18; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]

  v5 = a4[5];
  v20 = __readfsqword(0x28u);
  if ( v5 )
    module_data = *(_QWORD *)(v5 + 216);
  else
    module_data = get_module_data((unsigned int)dword_4EF998);
  v8 = a1[1] == (__int64 *)&byte_1;
  v18 = nullptr;
  v19 = 0;
  if ( v8 )
  {
    v13 = **a1;
    if ( !(unsigned __int8)generate_disasm_line(&v18, v13, 4) )
      sub_6B870((__int64 *)&v18, (__int64)&unk_4190CD, v13);
    v14 = s1;
    if ( (_QWORD)v19 )
      v14 = v18;
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4)(a4, a3, &unk_419143, v14);
    v15 = 0;
    if ( (_QWORD)v19 )
      v15 = v19 - 1;
    sub_262740(a2, module_data, v15 + a3 + 8, 1u, byte_42C4A0, a4, 0x47u);
  }
  else
  {
    sub_262740(a2, module_data, 0, a3, byte_41915A, a4, 0x42u);
    sub_262740(a2, module_data, 0, a3, byte_42C4A8, a4, 0x46u);
    v17 = *a1;
    if ( 8LL * (_QWORD)a1[1] )
    {
      do
      {
        v11 = *v17;
        if ( !(unsigned __int8)generate_disasm_line(&v18, *v17, 4) )
          sub_6B870((__int64 *)&v18, (__int64)&unk_4190CD, v11);
        v9 = s1;
        if ( (_QWORD)v19 )
          v9 = v18;
        (*(void (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4)(
          a4,
          a3 + *(_DWORD *)(module_data + 592),
          &unk_419153,
          v9);
        v10 = a3 + *(_DWORD *)(module_data + 592);
        if ( (_QWORD)v19 )
          v10 = v10 + v19 - 1;
        sub_262740(a2, module_data, v10, 0, (char *)&unk_418793, a4, 0);
        ++v17;
      }
      while ( v17 != &(*a1)[(_QWORD)a1[1]] );
    }
    sub_262740(a2, module_data, 0, a3, byte_42C4A0, a4, 0x47u);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v20 - __readfsqword(0x28u);
}
