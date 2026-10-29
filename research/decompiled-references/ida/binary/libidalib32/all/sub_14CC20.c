unsigned __int64 __fastcall sub_14CC20(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // rdi
  const char *v6; // r12
  int v7; // r13d
  __int64 v9; // r12
  void (*v10)(); // rax
  _QWORD *v11; // rbp
  std::__detail::_List_node_base *v12; // rax
  void (*v13)(); // rax
  unsigned __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_F91A0(a1, a2);
  v5 = *(_QWORD *)(a3 + 112);
  *(_QWORD *)a1 = &off_2395B8;
  *(_QWORD *)(a1 + 72) = &off_2398A0;
  *(_QWORD *)(a1 + 104) = off_2398B8;
  *(_QWORD *)(a1 + 160) = off_2398E8;
  v6 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 120LL))(v5);
  v7 = 1;
  if ( strcmp(v6, "hexrays_place_t") && strcmp(v6, "microplace_t") )
    v7 = (strcmp(v6, "mbui_place_t") == 0) + 2;
  *(_DWORD *)(a1 + 1192) = v7;
  sub_161970(a1, a3);
  if ( *(_DWORD *)(a1 + 1192) == 1 )
  {
    v9 = *(_QWORD *)(a1 + 848);
    v10 = *(void (**)())(*(_QWORD *)(v9 + 24) + 16LL);
    if ( v10 != nullsub_1 )
      ((void (__fastcall *)(__int64))v10)(v9 + 24);
    v11 = (_QWORD *)operator new(0x20u);
    *v11 = off_233BD0;
    v11[1] = a1;
    v11[2] = sub_14CC00;
    v11[3] = 0;
    v12 = (std::__detail::_List_node_base *)operator new(0x18u);
    *((_QWORD *)v12 + 2) = v11;
    std::__detail::_List_node_base::_M_hook(v12, (std::__detail::_List_node_base *)(v9 + 32));
    v14 = v9 + 24;
    sub_99D80((_QWORD *)(a1 + 112), &v14);
    v13 = *(void (**)())(*(_QWORD *)(v9 + 24) + 24LL);
    if ( v13 != nullsub_2 )
      ((void (__fastcall *)(__int64))v13)(v9 + 24);
  }
  return v15 - __readfsqword(0x28u);
}

