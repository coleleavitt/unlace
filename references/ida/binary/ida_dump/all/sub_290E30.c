__int64 __fastcall sub_290E30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int tinfo_size; // r12d
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 48 && (*(_BYTE *)(a3 + 56) & 1) == 0 )
  {
    tinfo_size = get_tinfo_size();
    v6 = get_tinfo_size();
    v7 = *(_QWORD *)(a1 + 24);
    if ( tinfo_size == -1 || tinfo_size != v6 )
    {
      *(_QWORD *)(a1 + 24) = sub_247510(*(_QWORD *)(a2 + 112), v7);
      v8 = j__qalloc_or_throw();
      v9 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)v8 = -1;
      *(_QWORD *)(v8 + 24) = v9;
      *(_DWORD *)(v8 + 8) = 48;
      *(_QWORD *)(v8 + 12) = -1;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 48) = 0;
      *(_DWORD *)(v8 + 56) = 0;
      *(_QWORD *)(a1 + 24) = v8;
      sub_32C540(v10, *(_QWORD *)(a2 + 112), a1 + 48);
      copy_tinfo_t();
      clear_tinfo_t();
      *(_DWORD *)(a1 + 8) = 51;
      *(_DWORD *)(a1 + 40) = tinfo_size;
    }
    else
    {
      sub_255850((__int64 *)a1, v7);
    }
    return 1;
  }
  return result;
}
