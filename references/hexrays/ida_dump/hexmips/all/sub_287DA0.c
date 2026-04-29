__int64 __fastcall sub_287DA0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r9
  unsigned int tinfo_size; // eax
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned int tinfo_property; // [rsp+10h] [rbp-48h]
  _QWORD *v23; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)(v3 + 8) != 61 )
  {
    if ( v5 != 61 )
      return 0;
    v5 = *(_DWORD *)(v3 + 8);
    v3 = *(_QWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 24);
  }
  if ( (unsigned int)(v5 - 35) > 1 )
    return 0;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 8) == 61 )
  {
    v9 = *(__int64 **)(v7 + 24);
    v18 = sub_2511B0(v9, (_QWORD *)(v7 + 48));
    v11 = *(_QWORD *)(v4 + 32);
    v12 = *(_QWORD *)(v4 + 24);
    v13 = v18;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 32);
    if ( *(_DWORD *)(v8 + 8) != 61 )
      return 0;
    v9 = *(__int64 **)(v8 + 24);
    v10 = sub_2511B0(v9, (_QWORD *)(v8 + 48));
    v11 = *(_QWORD *)(v4 + 24);
    v12 = *(_QWORD *)(v4 + 32);
    v13 = v10;
  }
  if ( *(_DWORD *)(v3 + 8) != 61 )
    sub_27A450(v9);
  v19 = v13;
  v14 = sub_2511B0(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48));
  v15 = v19;
  if ( *(_DWORD *)(v4 + 8) == 35 )
  {
    v20 = v14 - v19;
  }
  else
  {
    v20 = v19 - v14;
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) != 61 )
      v20 = v15 + v14;
  }
  v21 = v14;
  if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v11 + 48), 2) & 0xF) - 10) <= 2u )
  {
    if ( v20 )
      return 0;
    goto LABEL_15;
  }
  if ( v21 || (v16 = (_QWORD *)v12, !v20) )
LABEL_15:
    v16 = nullptr;
  v23 = v16;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v3 + 48), 3);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v3 + 48), 0);
  sub_23C450(v3, *(_QWORD *)(a1 + 72), v20, tinfo_size, tinfo_property, v23);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) == 61 )
    *(_QWORD *)(a2 + 32) = v11;
  else
    *(_QWORD *)(a2 + 24) = v11;
  sub_250520(v4);
  if ( v4 )
  {
    sub_250DB0(v4);
    clear_tinfo_t(v4 + 48);
    j__qfree(v4);
  }
  if ( v12 )
  {
    sub_250DB0(v12);
    clear_tinfo_t(v12 + 48);
    j__qfree(v12);
  }
  return 1;
}
