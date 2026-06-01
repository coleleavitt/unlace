__int64 __fastcall get_frame_size(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebp
  __int64 v3; // rdx
  int v4; // eax
  int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  result = 0;
  if ( a1 )
  {
    v2 = *(unsigned __int16 *)(a1 + 24) + *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 28);
    v3 = sub_375980(0x3Cu, &v5, a1);
    v4 = v5;
    if ( v3 <= 0 )
      v4 = (1 << (get_func_bitness(a1) + 4)) / 8;
    return (unsigned int)(v2 + v4);
  }
  return result;
}

