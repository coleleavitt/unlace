__int64 __fastcall sub_1F4DBC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  int v6[26]; // [rsp+0h] [rbp-68h] BYREF

  v2 = a1[2];
  result = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = result + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * result);
  if ( v4 )
  {
    v5 = sub_B7BED0(a2);
    *(_BYTE *)v5 = ((v4 & 8) != 0)
                 | (8 * ((v4 & 4) != 0)) & 0xBE
                 | (4 * ((v4 & 2) != 0)) & 0xBE
                 | *(_BYTE *)v5 & 0xB2
                 | (((v4 & 0x10) != 0) << 6)
                 | 0x80;
    if ( (v4 & 8) != 0 )
    {
      sub_1F0A560((__int64)v6, a1[2]);
      sub_A4FD20(v5 + 16, (__int64)v6);
      if ( v6[0] > 1u )
        sub_A4F8E0(v6);
      if ( sub_A4FD90(v5 + 16) )
        sub_A5F590(*(_QWORD *)(*a1 + 144), (__int64)sub_B70CC0, v5 + 16);
    }
    result = *(_QWORD *)(a1[3] + 432) + 8LL * *(_QWORD *)(a1[3] + 2720) - *(unsigned int *)(a1[3] + 2736);
    if ( result )
    {
      result = 2 * result + 1;
      *(_QWORD *)(v5 + 8) = result;
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0;
    }
  }
  return result;
}
