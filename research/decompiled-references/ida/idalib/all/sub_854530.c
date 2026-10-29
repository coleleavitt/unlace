unsigned __int64 __fastcall sub_854530(__int64 a1, const char *a2, const char *a3, int a4)
{
  int v5; // r12d
  char *v6; // rbp
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx

  LOBYTE(v5) = a4;
  v6 = (char *)qword_2CD6F58;
  *(_QWORD *)a1 = qword_2CD6F58;
  *(_DWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 12) = 0;
  if ( !v6 )
  {
    v6 = (char *)operator new(0x1668u);
    sub_850DD0(v6, nullptr, 0);
    qword_2CD6F58 = (__int64)v6;
    v5 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v6;
  }
  qmutex_lock(*(_QWORD *)v6);
  sub_8540D0((__int64)v6, v5 & 1);
  v8 = *(_QWORD *)a1;
  ++*((_DWORD *)v6 + 1432);
  sub_850670(v8, a2, 0);
  v9 = *(_DWORD *)(a1 + 8);
  if ( (v9 & 4) != 0 )
  {
    if ( !a3 || !*a3 )
    {
      sub_850CF0(*(_QWORD *)a1);
      if ( !under_debugger )
        interr(2716);
      BUG();
    }
    if ( (v9 & 8) != 0 )
    {
      sub_851FD0((unsigned __int8 *)a1, a3, 1);
      v10 = *(_QWORD *)a1;
      *(_BYTE *)(v10 + 5384) = 0;
      v11 = v10;
      if ( !*a3 )
        return sub_8527E0(v11, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
      goto LABEL_14;
    }
    v10 = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 5384LL) = 0;
LABEL_8:
    v11 = v10;
    if ( !*a3 )
      return sub_8527E0(v11, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
LABEL_14:
    sub_850670(v10, a3, 1u);
    v11 = *(_QWORD *)a1;
    return sub_8527E0(v11, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
  }
  if ( (v9 & 8) != 0 )
    sub_851FD0((unsigned __int8 *)a1, a3, 1);
  v10 = *(_QWORD *)a1;
  *(_BYTE *)(v10 + 5384) = 0;
  v11 = v10;
  if ( a3 )
    goto LABEL_8;
  return sub_8527E0(v11, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
}
