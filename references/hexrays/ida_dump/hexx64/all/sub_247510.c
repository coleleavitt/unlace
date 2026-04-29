__int64 __fastcall sub_247510(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbp
  __int64 v6; // rdi
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(52643);
    BUG();
  }
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 51 )
  {
    sub_255850(a2, *(_QWORD *)(a2 + 24));
    return a2;
  }
  if ( v2 == 48 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v6 + 8) == 51 )
    {
      sub_255850(v6, *(_QWORD *)(v6 + 24));
      sub_32C540(v7, a1, a2 + 48);
      copy_tinfo_t(a2 + 48, v7);
    }
    else
    {
      *(_DWORD *)(a2 + 8) = 52;
      sub_32C540(v7, a1, a2 + 48);
      sub_246B40(a2, *(_QWORD *)(a1 + 96), v7);
    }
    clear_tinfo_t(v7);
    return a2;
  }
  v4 = j__qalloc_or_throw(64);
  *(_QWORD *)v4 = -1;
  *(_DWORD *)(v4 + 8) = 52;
  *(_QWORD *)(v4 + 12) = -1;
  *(_QWORD *)(v4 + 24) = a2;
  *(_QWORD *)(v4 + 32) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)v4 = *(_QWORD *)a2;
  sub_2441C0(v4, a1, 0);
  return v4;
}
