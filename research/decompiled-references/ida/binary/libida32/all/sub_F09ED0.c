void __fastcall sub_F09ED0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  _BYTE *v5; // rax

  v3 = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " global");
    v3 = *a2;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " array");
    if ( !a2[2] )
      return;
  }
  else if ( !a2[2] )
  {
    return;
  }
  v4 = *(_QWORD *)(a1 + 1096);
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v5 + 1;
    *v5 = 32;
  }
  sub_F06990(a1, a2[2]);
}

