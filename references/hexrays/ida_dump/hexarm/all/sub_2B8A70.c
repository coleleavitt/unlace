__int64 __fastcall sub_2B8A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-48h] BYREF
  char v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 96);
  v9 = __readfsqword(0x28u);
  v6[1] = a3;
  v8 = a2;
  v7 = 118;
  v6[0] = &off_4DB878;
  v4 = sub_2B67B0(v3, (__int64)v6, 0);
  result = 0;
  if ( v4 )
  {
    nullsub_114();
    return 1;
  }
  return result;
}
