__int64 __fastcall sub_F4240(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v9[1] = __readfsqword(0x28u);
  v2 = sub_120710();
  v7 = sub_18C660(1019, (unsigned int)v9, v3, v4, v5, v6, v2);
  result = 1;
  if ( v7 )
    return (unsigned __int8)sub_120E80(a2, v9[0], 0xFFFFFFFFLL, 1);
  return result;
}

