unsigned __int64 __fastcall sub_4DCE90(__int64 a1, __int64 a2, _BYTE *a3)
{
  void (__fastcall ***v5)(_QWORD); // rdi
  void (__fastcall ***v7)(_QWORD); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 16) )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(_QWORD *))(a2 + 24))(&v7);
  *a3 = 1;
  v5 = *(void (__fastcall ****)(_QWORD))(a1 + 8);
  *(_QWORD *)(a1 + 8) = v7;
  v7 = v5;
  if ( v5 )
    (**v5)(v5);
  return v8 - __readfsqword(0x28u);
}
