unsigned __int64 __fastcall sub_2218140(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // [rsp+8h] [rbp-30h]
  __int64 v4; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  result = sub_22103C0();
  v4 = a1;
  if ( (*(_BYTE *)(a1 + 11) & 0x20) != 0 )
  {
    v2 = *(unsigned int *)(result + 80);
    if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(result + 84) )
    {
      v3 = result;
      sub_2237220(result + 72, result + 88, v2 + 1, 8);
      result = v3;
      v2 = *(unsigned int *)(v3 + 80);
    }
    *(_QWORD *)(*(_QWORD *)(result + 72) + 8 * v2) = a1;
    ++*(_DWORD *)(result + 80);
    *(_BYTE *)(a1 + 11) |= 0x40u;
  }
  else
  {
    v5[0] = &v4;
    v5[1] = result;
    result = sub_2217FB0(result, a1, (__int64)sub_2217F90, (__int64)v5);
    *(_BYTE *)(a1 + 11) |= 0x40u;
  }
  return result;
}
