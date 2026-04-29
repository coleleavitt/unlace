__int64 *__fastcall sub_38CE20(__int64 a1, __int64 *a2, int *a3)
{
  __int64 *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  int tinfo_size; // r14d
  __int64 v8; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  int v12; // eax

  v4 = nullptr;
  sub_38B9D0(a1, 0);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 88);
    v6 = sub_385030(v5);
    v4 = (__int64 *)v6;
    if ( v6 )
    {
      if ( *(_DWORD *)(v5 + 8) == 77 )
      {
        v10 = *(_QWORD *)(v5 + 24);
        v11 = sub_255380(v10);
        if ( (unsigned int)verify_tinfo(*(_QWORD *)(v11 + 48)) )
          tinfo_size = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 80LL);
        else
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(v11 + 48), 0);
        v12 = *(_DWORD *)(a1 + 120);
        LODWORD(v8) = (2 * v12) >> 1;
        if ( (v12 & 0x20000000) == 0 )
          LODWORD(v8) = v12 & 0xBFFFFFFF;
        v8 = (int)v8;
        if ( (unsigned int)sub_288020((__int64 *)(v10 + 112), (int)v8) == -1 )
          v8 = **(_QWORD **)(*(_QWORD *)(v10 + 112) + 32LL);
      }
      else
      {
        tinfo_size = *(char *)(v6 + 15);
        if ( (unsigned int)verify_tinfo(*(_QWORD *)(v5 + 48)) )
          v8 = sub_32AEF0(*v4, tinfo_size, 1);
        else
          v8 = sub_255DF0(v4, (_QWORD *)(v5 + 48));
      }
      *a2 = v8;
      *a3 = tinfo_size;
    }
  }
  return v4;
}
