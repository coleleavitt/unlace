__int64 __fastcall sub_8EBEE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // [rsp+0h] [rbp-18h]
  char v6; // [rsp+8h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v6 = 0;
  v4 = a1 + 384;
  *(_QWORD *)(v4 + 416) = *a3;
  return sub_9E3ED0(v4, *(_QWORD *)(v4 + 408), a2, v5, v6);
}

