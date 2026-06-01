__int64 __fastcall sub_59D650(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = sub_375980(0x3Cu, &v4, a2);
  result = v4;
  if ( v2 <= 0 )
    return (unsigned int)((1 << (get_func_bitness(a2) + 4)) / 8);
  return result;
}

