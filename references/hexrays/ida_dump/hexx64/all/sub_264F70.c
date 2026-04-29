unsigned __int64 __fastcall sub_264F70(signed int *a1, void **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v8; // r14
  int v9; // r13d
  __int64 module_data; // rax
  _BYTE v12[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v13; // [rsp+408h] [rbp-40h]

  v6 = a4[5];
  v13 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 216);
  }
  else
  {
    module_data = get_module_data((unsigned int)dword_4EF998);
    v6 = a4[5];
    v8 = module_data;
  }
  v9 = sub_264D80(v6, (__int64)v12, 1024, *a1);
  (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _BYTE *))*a4)(a4, a3, &unk_419133, v12);
  sub_262740(a2, v8, a3 + v9 + 5, 0, byte_419246, a4, 0x45u);
  return v13 - __readfsqword(0x28u);
}
