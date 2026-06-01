__int64 __fastcall sub_2EAF10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdi

  v3 = *(_QWORD *)(a1 + 232);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD *)(a1 + 736);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 136LL))(v4, a2);
  v5 = *(_QWORD *)(a1 + 416);
  v6 = v5 + 24LL * *(unsigned int *)(a1 + 424);
  if ( v5 != v6 )
  {
    while ( *(_DWORD *)(v5 + 4) != 2 )
    {
      v5 += 24;
      if ( v6 == v5 )
        goto LABEL_13;
    }
    while ( v6 != v5 )
    {
      sub_300700(*(_QWORD *)(v5 + 16), a2);
      v7 = v5 + 24;
      if ( v6 == v5 + 24 )
        break;
      while ( 1 )
      {
        v5 = v7;
        if ( *(_DWORD *)(v7 + 4) == 2 )
          break;
        v7 += 24;
        if ( v6 == v7 )
          goto LABEL_13;
      }
    }
  }
LABEL_13:
  sub_1818510(a2);
  result = sub_1818B90(*(_QWORD *)(a1 + 8), a2);
  v9 = *(_QWORD *)(a1 + 264);
  if ( v9 )
    return sub_7124C0(v9, a2);
  return result;
}

