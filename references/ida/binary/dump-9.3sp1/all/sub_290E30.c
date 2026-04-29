__int64 __fastcall sub_290E30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int tinfo_size; // r12d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 48 && (*(_BYTE *)(a3 + 56) & 1) == 0 )
  {
    tinfo_size = get_tinfo_size();
    v6 = get_tinfo_size();
    v9 = *(_QWORD *)(a1 + 24);
    if ( tinfo_size == -1 || tinfo_size != v6 )
    {
      *(_QWORD *)(a1 + 24) = sub_247510(*(_QWORD *)(a2 + 112), v9, v7, v8);
      v12 = j__qalloc_or_throw(64, v9, v10, v11);
      v13 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)v12 = -1;
      *(_QWORD *)(v12 + 24) = v13;
      *(_DWORD *)(v12 + 8) = 48;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 32) = 0;
      *(_QWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      *(_QWORD *)(a1 + 24) = v12;
      sub_32C540(v14, *(_QWORD *)(a2 + 112), a1 + 48);
      copy_tinfo_t();
      clear_tinfo_t();
      *(_DWORD *)(a1 + 8) = 51;
      *(_DWORD *)(a1 + 40) = tinfo_size;
    }
    else
    {
      sub_255850((__int64 *)a1, v9);
    }
    return 1;
  }
  return result;
}
