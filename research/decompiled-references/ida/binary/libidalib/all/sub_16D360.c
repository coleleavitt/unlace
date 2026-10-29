__int64 __fastcall sub_16D360(__int64 a1, char a2, int a3)
{
  int v4; // ecx
  __int64 *v5; // rdi
  __int64 v7; // rax

  v4 = a3;
  v5 = (__int64 *)qword_2544C8;
  if ( !qword_2544C8 )
  {
    v7 = operator new(0x18u);
    v4 = a3;
    *(_QWORD *)v7 = 0;
    v5 = (__int64 *)v7;
    qword_2544C8 = v7;
    *(_OWORD *)(v7 + 8) = 0;
  }
  return sub_16CC80(v5, *(_QWORD *)(a1 + 96), a2, v4);
}

