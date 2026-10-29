__int64 __fastcall sub_52A7C0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v4; // rbp
  unsigned int radix; // r13d
  __int64 v6; // rdi
  __int64 qword; // rdx
  unsigned __int8 v8; // al
  _QWORD v10[23]; // [rsp+0h] [rbp-B8h] BYREF

  v1 = a1[74];
  v2 = a1[73];
  v10[17] = __readfsqword(0x28u);
  v4 = (v1 == 0) + v1 - 1 - tag_strlen(v2);
  radix = get_radix(a1[90], 0);
  v6 = a1[2];
  if ( (unsigned __int8)getinf(9) == 8 )
    qword = get_qword(v6);
  else
    qword = (unsigned int)get_dword(v6);
  btoa64(v10, 136, qword, radix);
  v8 = getinf(40);
  return sub_35CEC0((__int64)a1, 0, (__int64)&unk_22D5BEA, (unsigned int)v4 + v8, v2, v10);
}
