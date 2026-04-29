__int64 __fastcall sub_202E20(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // al
  unsigned __int8 v10; // [rsp+Fh] [rbp-39h]
  __int64 v11; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  v4 = *(_DWORD **)(a1 + 32);
  if ( *v4 != 12 )
    return 0;
  if ( (unsigned int)(**(_DWORD **)(a1 + 24) - 1) > 1 )
    return 0;
  v7 = sub_1186A0((__int64)v4, nullptr);
  if ( !v7 )
    return 0;
  v8 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL), *(unsigned int *)(v7 + 4), 1);
  v11 = v8 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL);
  if ( v11 != v8 || (get_tinfo_property(*(_QWORD *)(a3 + 80), 2) & 0xF) != 0xA )
    return 0;
  v12[0] = get_tinfo_property(*(_QWORD *)(a3 + 80), 9);
  if ( (get_tinfo_property(v12[0], 2) & 0x3F) != 1
    && (unsigned __int8)sub_A4380(v12, (unsigned __int64 *)&v11, *(_DWORD *)(a2 + 4), 1u)
    && v11
    && *(int *)(a2 + 4) < (unsigned __int64)get_tinfo_size(0, v12[0], 0) )
  {
    v9 = sub_A74D0(*(_QWORD *)(a1 + 16), *(unsigned int **)(a1 + 24), a2, 1u);
  }
  else
  {
    v9 = 0;
  }
  v10 = v9;
  clear_tinfo_t(v12);
  return v10;
}
