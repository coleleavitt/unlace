__int64 __fastcall sub_21871B0(__int64 a1, __int64 *a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rax
  size_t v5; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 552))(a2);
  if ( v2 == 164 )
  {
    sub_2186CB0((__int64)v6, a2);
    goto LABEL_6;
  }
  if ( v2 <= 0xA4u )
  {
    if ( v2 == 8 )
    {
      sub_2183230((__int64)v6, (__int64)a2);
      goto LABEL_6;
    }
    if ( v2 == 40 )
    {
      sub_2186500((__int64)v6, a2);
      goto LABEL_6;
    }
LABEL_12:
    v5 = j__strlen(&byte_22F0C30);
    sub_22B0340(v6, &byte_22F0C30, v5);
    goto LABEL_6;
  }
  if ( v2 != 243 )
  {
    if ( v2 == 258 )
    {
      sub_2183540((__int64)v6, (__int64)a2);
LABEL_6:
      v3 = v6[0];
      *(_BYTE *)(a1 + 24) &= ~1u;
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 8) = v6[1];
      *(_QWORD *)(a1 + 16) = v6[2];
      return a1;
    }
    goto LABEL_12;
  }
  sub_21843D0(a1, a2);
  return a1;
}
