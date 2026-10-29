__int64 __fastcall sub_888800(__int64 a1, int a2)
{
  bool (__fastcall *v2)(__int64, int); // rax
  int v3; // eax

  v2 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 24LL);
  if ( v2 == sub_8884F0 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 <= a2 )
    {
      if ( *(_QWORD *)(a1 + 8) )
        goto LABEL_4;
      goto LABEL_10;
    }
    return 0;
  }
  if ( !((unsigned __int8 (*)(void))v2)() )
    return 0;
  v3 = *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 8) )
  {
LABEL_4:
    if ( v3 != 1 )
      goto LABEL_5;
    goto LABEL_9;
  }
LABEL_10:
  if ( v3 != 1 )
  {
LABEL_5:
    if ( (v3 & 0xFFFFFFFD) != 0 )
      sub_888740();
  }
LABEL_9:
  __fprintf_chk();
  return qvfprintf();
}

