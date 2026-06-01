unsigned __int64 __fastcall sub_491250(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 v5[52]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v6; // [rsp+1A0h] [rbp-38h]
  unsigned __int64 v7; // [rsp+1A8h] [rbp-30h]

  v2 = a1;
  v7 = __readfsqword(0x28u);
  sub_486910((__int64)v5, a1);
  v6 = a1[52];
  if ( !*(_QWORD *)(a2 + 16) )
LABEL_6:
    std::__throw_bad_function_call();
  while ( 1 )
  {
    v3 = (__int64)v2;
    v2 -= 53;
    if ( (*(int (__fastcall **)(__int64, __int64 *, __int64 *))(a2 + 24))(a2, v5, v2) >= 0 )
      break;
    sub_480260(v3, v2);
    *(_QWORD *)(v3 + 416) = *(_QWORD *)(v3 - 8);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_6;
  }
  sub_480260(v3, v5);
  *(_QWORD *)(v3 + 416) = v6;
  sub_481890((__int64)v5);
  return v7 - __readfsqword(0x28u);
}

