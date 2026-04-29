__int64 __fastcall sub_1358E0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4[0] = (__int64)&off_4B15A0;
  memset(&v4[1], 0, 32);
  v5 = 0;
  if ( (unsigned int)sub_11AE20(a1, v4) )
    return 0xFFFFFFFFLL;
  result = v5;
  if ( v5 )
  {
    v2 = *(_DWORD *)a1 & 0x100000;
    if ( v2 )
    {
      v2 = 0x100000;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 784);
      if ( v3 )
      {
        *(_DWORD *)(v3 + 48) = 63;
        v2 = *(_DWORD *)a1 & 0x100000;
      }
    }
    sub_62520(a1, v2 >> 20, (__int64)"deleted dest pairs");
    return v5;
  }
  return result;
}
