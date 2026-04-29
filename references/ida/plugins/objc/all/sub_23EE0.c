unsigned __int64 __fastcall sub_23EE0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = a1[111];
  v3 = *a1;
  v6 = __readfsqword(0x28u);
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v3 + 136))(a1, &v5, a2 + v2) && v5 )
    create_data();
  return v6 - __readfsqword(0x28u);
}
