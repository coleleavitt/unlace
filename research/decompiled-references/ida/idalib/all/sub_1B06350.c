__int64 __fastcall sub_1B06350(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 v4; // cl
  int v5; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v6[168]; // [rsp+10h] [rbp-A8h] BYREF

  result = sub_1E5F010(a3, 0);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( result & 7 | (result >> 3) & 1
    || *(_QWORD *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL] & 7LL
     | (*(__int64 *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1 )
  {
    sub_168B9F0((__int64)v6, a1, a2, 0x11F4u, 0);
    v5 = 0;
    goto LABEL_7;
  }
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL);
  if ( (unsigned int)v4 - 25 <= 1 )
  {
    sub_168B9F0((__int64)v6, a1, a2, 0x11F4u, 0);
    v5 = 1;
LABEL_7:
    sub_1587D10((__int64)v6, &v5);
    sub_15F7200(v6);
    return 0;
  }
  if ( (unsigned int)v4 - 43 <= 1 )
  {
    sub_168B9F0((__int64)v6, a1, a2, 0x11F4u, 0);
    v5 = 2;
    goto LABEL_7;
  }
  if ( (unsigned __int8)(v4 - 2) <= 4u )
  {
    sub_168B9F0((__int64)v6, a1, a2, 0x11F4u, 0);
    v5 = 3;
    goto LABEL_7;
  }
  return result;
}
