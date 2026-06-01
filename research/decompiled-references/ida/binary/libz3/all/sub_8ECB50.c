__int64 __fastcall sub_8ECB50(__int64 a1, void (****a2)(void))
{
  __int64 result; // rax
  void (***v3)(void); // rbp
  bool v4; // zf
  __int64 v5; // r12
  void (***v6)(void); // rbp
  __int64 v7; // rax
  __int64 v8; // r13

  result = *(_QWORD *)(a1 + 8984);
  if ( qword_1C7EC50 != result || *(_BYTE *)(a1 + 2416) )
  {
    v3 = *a2;
    if ( *a2 )
    {
      v4 = (*((_DWORD *)v3 + 4))-- == 1;
      if ( v4 )
      {
        ((void (__fastcall *)(void (***)(void)))**v3)(v3);
        result = sub_186B220(v3);
      }
    }
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(a1 + 9320);
  if ( !v5 )
  {
    if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 104)) && *(_BYTE *)(a1 + 10440) )
    {
      sub_8EBAB0(a1);
      v5 = *(_QWORD *)(a1 + 9320);
      if ( !v5 )
      {
        if ( !*(_QWORD *)(a1 + 9312) )
          goto LABEL_16;
        v7 = sub_C05DF0();
        v8 = v7;
        if ( v7 )
          ++*(_DWORD *)(v7 + 16);
        sub_8E4DA0(*(void (****)(void))(a1 + 9320));
        *(_QWORD *)(a1 + 9320) = v8;
        sub_8ECA80(a1);
        if ( !*(_QWORD *)(a1 + 9320) )
          goto LABEL_16;
        v5 = *(_QWORD *)(a1 + 9320);
      }
      ++*(_DWORD *)(v5 + 16);
LABEL_16:
      result = sub_8E4DA0(*a2);
      goto LABEL_6;
    }
    result = sub_8E4DA0(*a2);
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v6 = *a2;
  ++*(_DWORD *)(v5 + 16);
  if ( v6 )
  {
    v4 = (*((_DWORD *)v6 + 4))-- == 1;
    if ( v4 )
    {
      ((void (__fastcall *)(void (***)(void)))**v6)(v6);
      result = sub_186B220(v6);
    }
  }
LABEL_6:
  *a2 = (void (***)(void))v5;
  return result;
}

