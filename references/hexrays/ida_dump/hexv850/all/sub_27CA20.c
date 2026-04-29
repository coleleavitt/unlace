__int64 __fastcall sub_27CA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v6; // ebx
  int tinfo_size; // r14d
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v13[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v14 = __readfsqword(0x28u);
  sub_23E320(&v12, a2, a1, (_QWORD *)(v4 + 48), (_QWORD *)(v3 + 48), (_QWORD *)(*(_QWORD *)(a1 + 40) + 48LL), 0);
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 22) <= 9 || (unsigned __int8)((get_tinfo_property(v12, 2) & 0xF) - 10) <= 2u )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0);
    if ( tinfo_size <= 0 )
    {
      v6 = 0;
      goto LABEL_4;
    }
    v9 = sub_24FC40(*(_DWORD *)(a1 + 8));
    v10 = v9;
    v11 = *(_QWORD *)(a2 + 112);
    if ( !v9 )
      v10 = 1;
    sub_3269C0(v13, v11, (unsigned int)tinfo_size, v10);
    copy_tinfo_t(&v12, v13);
    clear_tinfo_t(v13);
  }
  sub_23FAB0(a3, &v12);
  v6 = 1;
LABEL_4:
  clear_tinfo_t(&v12);
  return v6;
}
