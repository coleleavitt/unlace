__int64 __fastcall sub_F0C410(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _BYTE *v3; // rax
  __int64 v4; // rax
  char v6; // si

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( *(_BYTE **)(v2 + 24) == v3 )
  {
    v4 = sub_22581D0(v2, " ", 1);
    return sub_EE1160(v4, *(_BYTE *)(a2 + 8));
  }
  else
  {
    *v3 = 32;
    v6 = *(_BYTE *)(a2 + 8);
    ++*(_QWORD *)(v2 + 32);
    return sub_EE1160(v2, v6);
  }
}

