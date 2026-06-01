__int64 __fastcall sub_F3300(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // edx
  __int64 result; // rax
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v8 = sub_1201F0();
  v6 = sub_18BA90(1019, (unsigned int)&v8, v2, v3, v4, v5);
  result = 1;
  if ( v6 )
    return (unsigned __int8)sub_120900(a2, v8, 0xFFFFFFFFLL, 1);
  return result;
}

