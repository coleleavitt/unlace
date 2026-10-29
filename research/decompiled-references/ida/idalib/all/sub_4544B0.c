__int64 __fastcall sub_4544B0(__int64 *a1, __int64 a2, int *a3)
{
  int v3; // edx
  __int64 v4; // rax
  int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v3 = *a3;
  v7 = __readfsqword(0x28u);
  v4 = *a1;
  v6 = v3;
  if ( !*(_QWORD *)(v4 + 16) )
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, __int64, int *))(v4 + 24))(v4, a2, &v6);
}
