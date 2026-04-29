__int64 __fastcall sub_36B620(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r15d
  int v5; // r14d
  unsigned int v6; // ebx
  int tinfo_size; // r12d
  int v8; // eax
  char v10; // [rsp+Fh] [rbp-39h]

  v10 = HIBYTE(a4);
  v4 = (get_tinfo_property() & 0xF) == 9;
  v5 = (get_tinfo_property() & 0xF) == 9;
  v6 = sub_36B260();
  if ( v6 || v5 != v4 )
  {
    tinfo_size = get_tinfo_size();
    v8 = get_tinfo_size();
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    if ( (v10 & 4) == 0 )
      return 0;
    tinfo_size = get_tinfo_size();
    v8 = get_tinfo_size();
  }
  if ( tinfo_size < v8 )
  {
    v6 = -1;
LABEL_9:
    if ( (-*(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL)
        & ((tinfo_size + *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) - 1)
         ^ (*(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) - 1 + v8))) == 0 )
      return v6;
    return 0;
  }
  if ( tinfo_size > v8 )
  {
    v6 = 1;
    goto LABEL_9;
  }
  return (unsigned int)(v4 - v5);
}
