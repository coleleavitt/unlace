__int64 __fastcall sub_1C4870(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rbx
  __int64 v3; // rax
  char tinfo_property; // al
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7[5]; // [rsp+0h] [rbp-58h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = 0;
  v9 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 440) )
    return 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 432) + 104 * v2;
    if ( *(_DWORD *)v3 == 2 )
      break;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v3 + 80), 2);
    v5 = *(_QWORD *)(a1 + 440);
    if ( (tinfo_property & 0x2F) != 0xD )
    {
      v2 = ++v1;
      if ( v1 < v5 )
        continue;
    }
    goto LABEL_4;
  }
  v5 = *(_QWORD *)(a1 + 440);
LABEL_4:
  if ( v5 == v2 )
    return 0;
  memset(&v7[1], 0, 32);
  v7[0] = (__int64)&off_4BEFE8;
  v8 = 0;
  sub_11B7E0(a1, v7);
  result = (unsigned int)v8;
  if ( v8 > 0 )
  {
    sub_62DA0(a1, 1u, (__int64)"unpacked scattered destination operand");
    return (unsigned int)v8;
  }
  return result;
}
