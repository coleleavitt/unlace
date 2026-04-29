__int64 __fastcall sub_3E2810(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v5; // rsi
  int tinfo_size; // eax
  bool v8; // cc
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v5 = *a4;
  v12 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v5, 0);
  *a3 = tinfo_size;
  if ( tinfo_size == -1 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 80) < tinfo_size;
    v10 = 0;
    v11 = 0;
    if ( !v8 || tinfo_size == 8 )
    {
      cleanup_argloc(&v10);
      LODWORD(v10) = 3;
      LODWORD(v11) = 8;
    }
    *(_DWORD *)a1 = 0;
    copy_argloc(a1, &v10);
    cleanup_argloc(&v10);
  }
  return a1;
}
