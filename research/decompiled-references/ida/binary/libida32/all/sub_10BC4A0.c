void __fastcall sub_10BC4A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 *v3[13]; // [rsp+0h] [rbp-68h] BYREF

  *(_DWORD *)(a1 + 40) = sub_10BC2A0(a1, a2, 0x38Eu, 0x4B6u);
  *(_DWORD *)(a1 + 44) = sub_10BC2A0(a1, a2, 0x5FAu, 0x4E3u);
  if ( (unsigned __int8)sub_2193B10(a2, 1557, 1263, 0) )
  {
    v2 = sub_10BA920(a2, 0x5FAu, 0x4E3u);
    if ( v2 && *(_DWORD *)(a1 + 44) != 1 )
    {
      sub_FA3370((__int64)v3, *(_QWORD *)a1, 0, 367);
      sub_AC84E0(v3, *(_BYTE **)(v2 + 24), *(_QWORD *)(v2 + 32));
      sub_10B4AF0(v3, (__int64)"-fopenmp-target-jit");
      sub_AC6300((__int64)v3);
      *(_DWORD *)(a1 + 44) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 44) = 1;
    }
  }
}

