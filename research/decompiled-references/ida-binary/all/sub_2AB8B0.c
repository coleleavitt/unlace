__int64 __fastcall sub_2AB8B0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v5; // ebp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12

  v5 = sub_2BE490();
  if ( !(_BYTE)v5 )
    return v5;
  v8 = unk_8CA458;
  sub_5399B0(a2, unk_8CA458, 0, 1);
  if ( !*(_QWORD *)(a1 + 200) )
    return v5;
  v11 = qword_8CD7E8;
  if ( (unsigned int)sub_1EB590(qword_8CD7E8, v8, v9, v10, a3) == 3 )
  {
    if ( *(_QWORD *)(v11 + 904) )
      return v5;
  }
  sub_5399B0(a2, unk_8CA510, 0, 1);
  sub_5399B0(a2, unk_8CA518, 0, 1);
  sub_5399B0(a2, unk_8CA520, 0, 1);
  sub_5399B0(a2, unk_8CA528, 0, 1);
  sub_5399B0(a2, unk_8CA530, 0, 1);
  return v5;
}
