unsigned __int64 __fastcall sub_47FAE0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  bool v4; // zf
  unsigned __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = sub_3BD700((__int64)a1, 0);
  if ( !v2 || (v2 = sub_3BD580((__int64)a1, 0), v2 != -1) )
  {
    do
    {
      v6 = v2;
      v7 = 0;
      v3 = sub_3BD840(a1, v2);
      v4 = *(_QWORD *)(a2 + 16) == 0;
      v7 = v2 + v3;
      if ( v4 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, unsigned __int64 *))(a2 + 24))(a2, &v6);
      v2 = sub_3BD580((__int64)a1, v2);
    }
    while ( v2 != -1 );
  }
  return v8 - __readfsqword(0x28u);
}
