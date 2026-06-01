void __fastcall sub_5472E0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned int v4; // r13d
  _QWORD *v5; // rax
  __int64 v6; // rax

  if ( a3 != -1 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    v5 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), a2);
    v6 = sub_5467E0(v5, a2, v4, 1);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 100) == 13 )
        *(_QWORD *)(a1 + 16) = sub_540040(v6, -1, a3);
    }
  }
}

