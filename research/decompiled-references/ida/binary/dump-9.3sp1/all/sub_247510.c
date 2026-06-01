__int64 __fastcall sub_247510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rbp
  __int64 v8; // rdi
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(52643);
    BUG();
  }
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 == 51 )
  {
    sub_255850(a2, *(_QWORD *)(a2 + 24));
    return a2;
  }
  if ( v4 == 48 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v8 + 8) == 51 )
    {
      sub_255850(v8, *(_QWORD *)(v8 + 24));
      sub_32C540(v9, a1, a2 + 48);
      copy_tinfo_t();
    }
    else
    {
      *(_DWORD *)(a2 + 8) = 52;
      sub_32C540(v9, a1, a2 + 48);
      sub_246B40(a2, *(_QWORD *)(a1 + 96), v9);
    }
    clear_tinfo_t();
    return a2;
  }
  v6 = j__qalloc_or_throw(64, a2, a3, a4);
  *(_QWORD *)v6 = -1;
  *(_DWORD *)(v6 + 8) = 52;
  *(_QWORD *)(v6 + 12) = -1;
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  sub_2441C0(v6, a1, 0);
  return v6;
}
