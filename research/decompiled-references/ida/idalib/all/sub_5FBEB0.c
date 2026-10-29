__int64 __fastcall sub_5FBEB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v7; // [rsp+0h] [rbp-428h] BYREF
  int v8; // [rsp+8h] [rbp-420h]
  int v9; // [rsp+10h] [rbp-418h]
  int v10; // [rsp+18h] [rbp-410h]
  int v11; // [rsp+20h] [rbp-408h]
  int v12; // [rsp+28h] [rbp-400h]
  __int64 v13; // [rsp+30h] [rbp-3F8h]
  unsigned __int64 v14; // [rsp+408h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_748250(&v7, 1024, a1, a3) && (unsigned __int8)sub_72B650((char *)&v7) )
    return 0;
  sub_747B60(
    a1,
    (unsigned int)"Unknown PACK_COMPRESSION_ALGORITHM value: \"%s\"",
    (unsigned int)&v7,
    v3,
    v4,
    v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  return 3;
}
