__int64 __fastcall sub_193990(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned int v3; // r13d
  void (*v6)(void); // rax
  int v7; // eax
  void (__fastcall *v8)(__int64, _DWORD *, unsigned __int64); // rax
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // eax
  __int64 (*v13)(); // rdx

  v6 = *(void (**)(void))(*(_QWORD *)a1 + 392LL);
  if ( v6 != nullsub_121 )
    v6();
  v7 = sub_193920(a1);
  LOBYTE(v3) = a3 < v7;
  if ( a3 < v7 )
  {
    a2[35] = *(_DWORD *)(*(_QWORD *)(a1 + 2520) + 72LL);
    v8 = *(void (__fastcall **)(__int64, _DWORD *, unsigned __int64))(*(_QWORD *)a1 + 472LL);
    if ( (char *)v8 == (char *)&loc_18DF60 )
    {
      v9 = a2[33];
      if ( *(_DWORD *)(a1 + 2512) == 2 )
        a2[33] = v9 | 0x80000000;
      else
        a2[33] = v9 & 0x7FFFFFFF;
    }
    else
    {
      v8(a1, a2 + 32, a3);
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *, _DWORD *, _DWORD *, unsigned __int64))(**(_QWORD **)(a1 + 2520) + 48LL))(
      *(_QWORD *)(a1 + 2520),
      a2,
      a2 + 35,
      a2 + 32,
      a3);
    v11 = *(_QWORD *)(a1 + 2520);
    v12 = *(_DWORD *)(v11 + 12);
    if ( (v12 & 0x2000000) != 0 )
    {
      v13 = *(__int64 (**)())(*(_QWORD *)a1 + 408LL);
      if ( v13 != sub_14C370 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64))v13)(a1) && (*(_BYTE *)(a1 + 1920) & 8) != 0 )
          a2[36] = sub_193850(a1, a3, 0);
        v11 = *(_QWORD *)(a1 + 2520);
        v12 = *(_DWORD *)(v11 + 12);
      }
    }
    if ( (v12 & 0x20) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(90, v11, a3, a2 + 32, &callui, v10);
  }
  return v3;
}

