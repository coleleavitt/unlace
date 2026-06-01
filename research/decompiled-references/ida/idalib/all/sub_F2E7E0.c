void __fastcall sub_F2E7E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE **)(v3 + 32);
  if ( *(_BYTE **)(v3 + 24) == v4 )
  {
    sub_227BF10(v3, " ", 1);
  }
  else
  {
    *v4 = 32;
    ++*(_QWORD *)(v3 + 32);
  }
  sub_F2A6D0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL));
}
