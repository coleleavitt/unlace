__int64 __fastcall sub_7C3240(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  __int64 v5; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v10[0] = *a2;
  v7 = v5;
  v8 = unpack_dq(v10, v5);
  v9 = v10[0];
  *a1 = v8;
  if ( v3 >= v9 )
    return 0;
  a1[1] = unpack_dq(v10, v7);
  if ( v9 >= v10[0] )
    return 0;
  *a2 = v10[0];
  return 1;
}

