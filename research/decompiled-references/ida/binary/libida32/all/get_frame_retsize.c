__int64 __fastcall get_frame_retsize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = sub_375980(0x3Cu, &v3, a1);
  result = v3;
  if ( v1 <= 0 )
    return (unsigned int)((1 << (get_func_bitness(a1) + 4)) / 8);
  return result;
}

