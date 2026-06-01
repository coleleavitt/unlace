unsigned __int64 __fastcall sub_265050(__int64 *a1, void **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 module_data; // r12
  bool v8; // zf
  const char *v9; // rcx
  int v10; // edx
  const char *v12; // rcx
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-58h]
  const char *v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+38h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v5 = a4[5];
  v17 = __readfsqword(0x28u);
  if ( v5 )
    module_data = *(_QWORD *)(v5 + 216);
  else
    module_data = get_module_data();
  v8 = a1[1] == 1;
  v15 = nullptr;
  v16 = 0;
  if ( v8 )
  {
    if ( !(unsigned __int8)generate_disasm_line() )
      sub_6B870((__int64 *)&v15);
    v12 = s1;
    if ( (_QWORD)v16 )
      v12 = v15;
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4)(a4, a3, &unk_419143, v12);
    v13 = 0;
    if ( (_QWORD)v16 )
      v13 = v16 - 1;
    sub_262740(a2, module_data, v13 + a3 + 8, 1u, byte_42C4A0, a4, 0x47u);
  }
  else
  {
    sub_262740(a2, module_data, 0, a3, byte_41915A, a4, 0x42u);
    sub_262740(a2, module_data, 0, a3, byte_42C4A8, a4, 0x46u);
    v14 = *a1;
    if ( 8 * a1[1] )
    {
      do
      {
        if ( !(unsigned __int8)generate_disasm_line() )
          sub_6B870((__int64 *)&v15);
        v9 = s1;
        if ( (_QWORD)v16 )
          v9 = v15;
        (*(void (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4)(
          a4,
          a3 + *(_DWORD *)(module_data + 592),
          &unk_419153,
          v9);
        v10 = a3 + *(_DWORD *)(module_data + 592);
        if ( (_QWORD)v16 )
          v10 = v10 + v16 - 1;
        sub_262740(a2, module_data, v10, 0, (char *)&unk_418793, a4, 0);
        v14 += 8;
      }
      while ( v14 != *a1 + 8 * a1[1] );
    }
    sub_262740(a2, module_data, 0, a3, byte_42C4A0, a4, 0x47u);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}
