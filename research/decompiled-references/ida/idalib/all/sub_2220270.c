__int64 __fastcall sub_2220270(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  _WORD *v11; // rcx

  v3 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v3 )
  {
    v4 = sub_227BF10(a2, "'", 1);
  }
  else
  {
    *v3 = 39;
    v4 = a2;
    ++*(_QWORD *)(a2 + 32);
  }
  v5 = sub_227BF10(v4, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  v6 = *(_QWORD *)(v5 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v6) > 2 )
  {
    *(_BYTE *)(v6 + 2) = 32;
    *(_WORD *)v6 = 14887;
    *(_QWORD *)(v5 + 32) += 3LL;
  }
  else
  {
    sub_227BF10(v5, "': ", 3);
  }
  if ( *(_BYTE *)(a1 + 48) )
  {
    v8 = *(_QWORD *)(a2 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v8) > 4 )
    {
      *(_DWORD *)v8 = 1701734764;
      v9 = a2;
      *(_BYTE *)(v8 + 4) = 32;
      *(_QWORD *)(a2 + 32) += 5LL;
    }
    else
    {
      v9 = sub_227BF10(a2, "line ", 5);
    }
    v10 = sub_227B910(v9, *(_QWORD *)(a1 + 40));
    v11 = *(_WORD **)(v10 + 32);
    if ( *(_QWORD *)(v10 + 24) - (_QWORD)v11 > 1u )
    {
      *v11 = 8250;
      *(_QWORD *)(v10 + 32) += 2LL;
    }
    else
    {
      sub_227BF10(v10, ": ", 2);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 16LL))(*(_QWORD *)(a1 + 56), a2);
}
