__int64 __fastcall sub_3B5220(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  unsigned int v3; // ebx
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)sub_3DAC00(&v5) )
  {
    v2 = s1;
    if ( (_QWORD)v6 )
      v2 = v5;
    sub_259CC0(*(_QWORD *)(a2 + 32), a2 + 64, v2);
    sub_2B3570(
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL),
      **(_QWORD **)(a2 + 32),
      *(_QWORD *)(*(_QWORD *)(a2 + 32) + 72LL));
    sub_38B960(*(_QWORD *)(a2 + 32));
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}
