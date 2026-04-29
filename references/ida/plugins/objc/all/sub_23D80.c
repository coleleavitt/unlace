unsigned __int64 __fastcall sub_23D80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = a1[43];
  v3 = *a1;
  v6 = __readfsqword(0x28u);
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(v3 + 136))(a1, &v5, a2 + v2) && v5 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 168LL))(a1);
  return v6 - __readfsqword(0x28u);
}
