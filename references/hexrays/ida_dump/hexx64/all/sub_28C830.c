bool __fastcall sub_28C830(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r12
  bool result; // al
  __int64 *v7; // r15
  __int64 v8; // r14
  __int64 v9; // r11
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  unsigned int tinfo_size; // [rsp+4h] [rbp-64h]
  _QWORD *v15; // [rsp+8h] [rbp-60h]
  unsigned int tinfo_property; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 == 61 )
  {
    result = 0;
    if ( !v3 )
      return result;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 32);
    result = v5 != 0 && *(_DWORD *)(v5 + 8) == 61;
    if ( !result )
      return result;
    v7 = (__int64 *)(a2 + 24);
    if ( v5 != v3 )
    {
      result = 0;
      if ( v4 != 37 )
        return result;
      goto LABEL_6;
    }
  }
  v7 = (__int64 *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 24);
  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) != 37 )
    return result;
LABEL_6:
  v8 = *v7;
  v9 = *(_QWORD *)(*v7 + 24);
  if ( *(_DWORD *)(v9 + 8) == 61 )
  {
    if ( !v9 )
      return result;
    v10 = *(_QWORD *)(v8 + 32);
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 32);
    result = v10 != 0 && *(_DWORD *)(v10 + 8) == 61;
    if ( !result )
      return result;
    if ( v9 != v10 )
      goto LABEL_9;
  }
  v9 = v10;
  v10 = *(_QWORD *)(*v7 + 24);
LABEL_9:
  v11 = nullptr;
  if ( *(_QWORD *)v5 == -1 )
    v11 = (_QWORD *)v10;
  v17 = v9;
  v15 = v11;
  v12 = nullptr;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v5 + 48), 3);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
  if ( *(_DWORD *)(v5 + 8) != 61
    || (v12 = *(__int64 **)(v5 + 24), v18 = sub_255A30(v12, (_QWORD *)(v5 + 48)), *(_DWORD *)(v10 + 8) != 61) )
  {
    sub_27ECD0(v12);
  }
  v13 = sub_255A30(*(__int64 **)(v10 + 24), (_QWORD *)(v10 + 48));
  sub_240CD0(v5, *(_QWORD *)(a1 + 72), v13 * v18, tinfo_size, tinfo_property, v15);
  *v7 = v17;
  sub_254DA0(v8);
  if ( v8 )
  {
    sub_255630(v8);
    clear_tinfo_t(v8 + 48);
    j__qfree(v8);
  }
  sub_255630(v10);
  clear_tinfo_t(v10 + 48);
  j__qfree(v10);
  sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
