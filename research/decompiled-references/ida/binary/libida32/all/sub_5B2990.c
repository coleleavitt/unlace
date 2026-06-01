__int64 __fastcall sub_5B2990(_QWORD *a1, __int64 a2)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rbx
  unsigned int v4; // r12d
  unsigned int v6; // r13d

  v2 = sub_4EE820((__int64)(a1 + 203), a2);
  v3 = v2;
  if ( v2 && *((char *)v2 + 9) < 0 )
    v3 = sub_4EE820((__int64)(a1 + 203), v2[4]);
  v4 = sub_5B2110(a1, (__int64)v3);
  if ( (_BYTE)v4 )
  {
    v6 = sub_3BD5D0((__int64)a1, a2);
    if ( (int)sub_5AEEA0(a1, (__int64)v3, v6) >= 0
      && (~((unsigned __int16)sub_3B9AA0((__int64)a1, v6, 4) >> 8) & 6) == 0 )
    {
      sub_3A1A90(a1, v6, v6 + 1, 0x28u);
    }
  }
  return v4;
}

