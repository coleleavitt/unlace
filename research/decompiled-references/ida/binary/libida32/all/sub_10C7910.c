__int64 __fastcall sub_10C7910(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = operator new(0x58u);
  sub_10AF850(v4, a2, a3);
  v6[0] = v4;
  sub_10C7210(a1 + 88, v6);
  if ( v6[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6[0] + 8LL))(v6[0]);
  return v4;
}

