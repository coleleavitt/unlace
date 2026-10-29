__int64 __fastcall sub_7E65D0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  v7[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v7[0] = *a2;
  v5 = unpack_dq(v7);
  v6 = v7[0];
  *a1 = v5;
  if ( v3 >= v6 )
    return 0;
  a1[1] = unpack_dq(v7);
  if ( v6 >= v7[0] )
    return 0;
  *a2 = v7[0];
  return 1;
}
