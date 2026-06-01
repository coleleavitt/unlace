void __fastcall sub_F0B870(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9; // eax

  v3 = *(_BYTE *)(a2 + 60);
  v4 = *(_QWORD *)(a1 + 1096);
  if ( (v3 & 4) == 0 || a2 == -80 )
  {
    if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
      sub_971800(v4, " class");
    else
      sub_971800(v4, " typename");
  }
  else
  {
    sub_971800(v4, " ");
    sub_F06990(a1, *(_QWORD *)(*(_QWORD *)(a2 + 88) + 56LL));
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 88) + 48LL) != *(_QWORD *)(*(_QWORD *)(a2 + 88) + 56LL) )
    {
      sub_971800(*(_QWORD *)(a1 + 1096), " (");
      sub_F06990(a1, *(_QWORD *)(*(_QWORD *)(a2 + 88) + 48LL));
      sub_971800(*(_QWORD *)(a1 + 1096), ")");
    }
  }
  v5 = sub_971800(*(_QWORD *)(a1 + 1096), " depth ");
  v6 = sub_B9A850(a2);
  v7 = sub_2257BD0(v5, v6);
  v8 = sub_971800(v7, " index ");
  v9 = sub_B9A870(a2);
  sub_2257BD0(v8, v9);
  if ( sub_B9A890(a2) )
    sub_971800(*(_QWORD *)(a1 + 1096), " ...");
  sub_F07020(a1, a2);
}

