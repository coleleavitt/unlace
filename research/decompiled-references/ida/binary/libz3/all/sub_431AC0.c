__int64 __fastcall sub_431AC0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 )
    return 0;
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 || (result = 0, *v6 == -1) )
  {
    v8 = *(_QWORD *)(a1 + 128);
    if ( v8 )
      v3 = *(_DWORD *)(v8 - 4);
    v9 = 72LL * v3 - 72;
    while ( v3 > 0 )
    {
      --v3;
      v10 = v9 + *(_QWORD *)(a1 + 128);
      v9 -= 72;
      result = sub_431700(v10, a2, a3);
      if ( (_BYTE)result )
        return result;
    }
    return sub_431700(a1 + 136, a2, a3);
  }
  return result;
}

