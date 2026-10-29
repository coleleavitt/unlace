__int64 __fastcall sub_15DC00(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rax

  if ( !*(_BYTE *)(a1 + 984) )
  {
    v3 = 0;
LABEL_5:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, a3);
    tag_remove();
    return (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
  }
  if ( *(_QWORD *)(a1 + 480) )
  {
    v3 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v3 = *(_QWORD *)(a1 + 848);
    goto LABEL_5;
  }
  sub_1582F0(a1);
  return sub_15DC70();
}

