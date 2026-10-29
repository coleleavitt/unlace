__int64 __fastcall sub_10C79D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = operator new(0x58u);
  sub_10AF350(v2, a2, 67);
  v4[0] = v2;
  sub_10C7210(a1 + 88, v4);
  if ( v4[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4[0] + 8LL))(v4[0]);
  return v2;
}

