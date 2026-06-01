void __fastcall hexplace_t__adjust(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r13
  unsigned int v4; // eax

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 != -1 )
  {
    v3 = *(_QWORD *)(qword_2CA1698 + 1480);
    if ( sub_3B8910(v3, v2) )
    {
LABEL_3:
      sub_4116C0(a1, v2, a2);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 16);
      return;
    }
    v4 = sub_3B87D0(v3, v2);
    if ( v4 != -1 )
    {
      v2 = v4;
      goto LABEL_3;
    }
    v2 = sub_3B8820(v3, v2);
    if ( v2 != -1 )
      goto LABEL_3;
  }
}

