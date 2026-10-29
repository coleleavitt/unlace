__int64 __fastcall sub_6CC570(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v3 = a1[274];
  a1[284] += 16LL;
  v4 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v4 + 16 && v3 )
    a1[274] = v4 + 16;
  else
    v4 = sub_6A76A0((__int64)(a1 + 274), 16, 3);
  *(_QWORD *)(v4 + 8) = a2;
  *(_DWORD *)v4 = 1;
  sub_B03940(&v6);
  return v6;
}

