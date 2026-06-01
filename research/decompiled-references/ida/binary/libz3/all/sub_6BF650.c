void __fastcall sub_6BF650(__int64 a1, __int64 a2, __int64 *a3)
{
  _BYTE *v3; // rax
  __int64 (__fastcall *v4)(__int64, unsigned int, __int64 *, __int64 *, __int64, char, __int64); // r10
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF
  __int64 v6; // [rsp+10h] [rbp-8h] BYREF

  v3 = *(_BYTE **)(a1 + 56);
  v5 = a2;
  v4 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64 *, __int64 *, __int64, char, __int64))(*(_QWORD *)v3 + 16LL);
  if ( v4 == sub_6BF550 )
  {
    if ( v3[56] )
    {
      sub_6BF010((__int64)v3, 1u, &v5, a3, a1 + 360, 0, 0);
    }
    else if ( !(unsigned int)sub_6BF010((__int64)v3, 1u, &v5, a3, a1 + 360, 0, 0) )
    {
      sub_6B2860(a1 + 360, 0, &v6);
    }
  }
  else
  {
    v4((__int64)v3, 1u, &v5, a3, a1 + 360, 0, 0);
  }
}

