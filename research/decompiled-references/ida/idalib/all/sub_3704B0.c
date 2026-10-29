__int64 __fastcall sub_3704B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v6; // [rsp+20h] [rbp-28h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v7 = __readfsqword(0x28u);
  v6 = 257;
  v4 = 0;
  v5[1] = (unsigned int)v2;
  v5[0] = get_idati();
  create_tinfo(&v4, 61, 189, v5);
  *(_QWORD *)(a2 + 8) = get_tinfo_tid(&v4, 0);
  clear_tinfo_t(&v4);
  return 0;
}
