unsigned __int64 __fastcall sub_278360(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  bool v6; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __int128 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 136) = a2;
  sub_4644B0();
  v6 = a2 == 1;
  v2 = sub_5313F0(unk_8CA670);
  if ( v2 )
    sub_537630(v2, 7, &v6);
  v3 = unk_8CA670;
  v8 = 0;
  v7 = 0;
  v7 = qvector_reserve(&v7, 0, 1, 16);
  v4 = 16 * v8 + v7;
  *(_QWORD *)v4 = v3;
  *(_BYTE *)(v4 + 8) = 0;
  *(_QWORD *)&v8 = v8 + 1;
  sub_531B30(1, 0, &v7);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, nullptr);
  }
  return v9 - __readfsqword(0x28u);
}
