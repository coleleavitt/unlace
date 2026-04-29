__int64 __fastcall sub_23E00(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 i; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  for ( i = *a2; i < a2[1]; i += a1[100] )
  {
    create_data();
    v3 = *a1;
    v4 = a1[108];
    v6[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, unsigned __int64))(v3 + 136))(a1, v6, i + v4) && v6[0] )
      create_data();
  }
  return 1;
}
