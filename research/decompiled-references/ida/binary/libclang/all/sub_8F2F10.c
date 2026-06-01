__int64 __fastcall sub_8F2F10(__int64 a1, int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax

  if ( a2 == 14 )
  {
    if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
      return 1;
    v9 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a5;
    v10 = sub_A1A4E0(v9, 24);
    *(_QWORD *)v10 = a3;
    *(_QWORD *)(v10 + 8) = 0;
    *(_BYTE *)(v10 + 16) = 0;
    return 1;
  }
  else if ( a2 == 15 )
  {
    if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
      return 1;
    *(_QWORD *)(a1 + 800) = *a5;
    v11 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
    *(_QWORD *)v11 = 0;
    *(_DWORD *)(v11 + 48) = 1;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 56) = 0;
    *(_DWORD *)(v11 + 64) = 0;
    *(_OWORD *)(v11 + 8) = 0;
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
      return 1;
    *(_QWORD *)(a1 + 800) = *a5;
    v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
    *(_QWORD *)v8 = 0;
    *(_DWORD *)(v8 + 48) = 1;
    *(_QWORD *)(v8 + 32) = a3;
    *(_QWORD *)(v8 + 24) = a4;
    *(_OWORD *)(v8 + 8) = 0;
    return 1;
  }
}

