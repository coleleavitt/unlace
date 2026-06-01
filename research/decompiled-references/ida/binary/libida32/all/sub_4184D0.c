unsigned __int64 __fastcall sub_4184D0(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  _QWORD *v5; // rax
  int v6; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD **)(a2 + 1480);
  v6 = *(_DWORD *)(a2 + 1332);
  v13 = __readfsqword(0x28u);
  v8 = v6 - sub_614FB0(*v5, 29);
  if ( v8 >= *a3 && v8 < a3[1] )
    v6 = sub_614FB0(**(_QWORD **)(a2 + 1480), 29) + a4 + v8;
  *(_DWORD *)(a2 + 1332) = v6;
  v9 = sub_614FB0(a2, 94);
  v10 = v9 - sub_614FB0(**(_QWORD **)(a2 + 1480), 29);
  if ( v10 >= *a3 && v10 < a3[1] )
    v9 = v10 + a4 + sub_614FB0(**(_QWORD **)(a2 + 1480), 29);
  sub_615AB0(a2, 94, v9);
  sub_79BBF0(&v12, a2, "$ nmSerN", 0, 0);
  *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 2332LL) = v12;
  sub_79BBF0(&v12, a2, "$ nmSerEA", 0, 0);
  *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 2328LL) = v12;
  return v13 - __readfsqword(0x28u);
}

