__int64 __fastcall sub_769B20(__int64 a1, __int64 a2)
{
  int name_value; // edx
  __int64 result; // rax
  unsigned int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  name_value = get_name_value(&v4, *(unsigned int *)(a1 + 8), a2);
  result = 0xFFFFFFFFLL;
  if ( name_value )
    return v4;
  return result;
}

