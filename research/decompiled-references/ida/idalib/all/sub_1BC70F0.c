unsigned __int64 __fastcall sub_1BC70F0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)(a3 + 8);
  LODWORD(a3) = 0;
  v4 = *(_QWORD *)&byte_8[v3 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v4 & 8) != 0 )
    a3 = *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
  return sub_A70E70(a1, a2, (unsigned int)a3 >> 9);
}
