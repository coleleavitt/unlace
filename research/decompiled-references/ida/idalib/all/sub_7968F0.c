__int64 __fastcall sub_7968F0(__int64 a1, int a2)
{
  __int64 v2; // rax
  char v3; // dl

  v2 = deref_idcv(a1, 0);
  if ( v2 )
  {
    v3 = *(_BYTE *)v2;
    if ( *(_BYTE *)v2 == 2 || v3 == 9 )
    {
      *(_QWORD *)(v2 + 8) += a2;
      return 1;
    }
    if ( v3 == 3 )
    {
      eadd(v2 + 8, &unk_23BDAA0, v2 + 8, a2 == -1);
      return 1;
    }
    set_qerrno(61);
  }
  return 0;
}
