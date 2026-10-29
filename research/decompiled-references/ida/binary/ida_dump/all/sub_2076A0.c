__int64 __fastcall sub_2076A0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int8 v7; // al
  unsigned __int8 v8; // [rsp+Fh] [rbp-39h]
  __int64 v9; // [rsp+18h] [rbp-30h] BYREF
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v3 = *(_DWORD **)(a1 + 32);
  if ( *v3 != 12 )
    return 0;
  if ( (unsigned int)(**(_DWORD **)(a1 + 24) - 1) > 1 )
    return 0;
  v5 = sub_11C8A0((__int64)v3, nullptr);
  if ( !v5 )
    return 0;
  v6 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1);
  v9 = v6 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL);
  if ( v9 != v6 || (get_tinfo_property() & 0xF) != 0xA )
    return 0;
  v10[0] = get_tinfo_property();
  if ( (get_tinfo_property() & 0x3F) != 1
    && (unsigned __int8)sub_A8580(v10, (unsigned __int64 *)&v9, *(_DWORD *)(a2 + 4), 1u)
    && v9
    && *(int *)(a2 + 4) < (unsigned __int64)get_tinfo_size() )
  {
    v7 = sub_AB6D0(*(_QWORD *)(a1 + 16), *(unsigned int **)(a1 + 24), a2, 1u);
  }
  else
  {
    v7 = 0;
  }
  v8 = v7;
  clear_tinfo_t();
  return v8;
}
