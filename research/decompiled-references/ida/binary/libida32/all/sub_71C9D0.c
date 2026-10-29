void *__fastcall sub_71C9D0(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d

  sub_724A50(a1, 1);
  v6 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 1634) = 0;
  v7 = *(_QWORD *)(v6 + 8);
  byte_2CA26CA = 0;
  v8 = sub_71A680((int *)a1);
  *(_QWORD *)(a1 + 40) = v8;
  if ( !v8 )
    sub_722BC0((unsigned int)dword_2CA2738, 0, v9);
  sub_7253E0(a1, v8, 0, a3, a4);
  ***(_DWORD ***)(a1 + 40) = a2;
  v10 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 32) = -1;
  sub_71A620(a1, *(_QWORD *)(a1 + 40));
  sub_71BAE0(a1, 1, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 8) = v7;
  unk_2CA26C8 = 0;
  return &unk_2CA26C8;
}

