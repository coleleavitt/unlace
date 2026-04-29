__int64 __fastcall sub_235A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  create_data();
  v5 = *(_QWORD *)(a1 + 24);
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_22A50(v5, &v8, a3) )
    set_cmt();
  v6 = v8;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL);
  if ( v6 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return 0;
}
