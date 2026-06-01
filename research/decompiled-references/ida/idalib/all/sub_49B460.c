__int64 __fastcall sub_49B460(__int64 a1, __int64 *a2, int a3, signed int a4, char a5)
{
  __int64 v7; // rdi
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // ebx
  _QWORD *v14; // rdi
  unsigned int v15; // r12d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  char v22; // [rsp+13h] [rbp-45h] BYREF
  unsigned int v23; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v7 = *(int *)(a1 + 4LL * a3 + 16);
  v24 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(switch_dbctx(v7) + 1672);
  v10 = sub_6BD6E0(v9, *a2, 0, 0);
  if ( v10
    && ((v13 = v10, sub_60CC60(v9, *(_QWORD *)(v9 + 8), v10, &v22), (a5 & 1) != 0) || (v22 & 0x3F) != 0x2D)
    && ((a5 & 2) != 0 || (v22 & 0x2F) != 0xD)
    && (v14 = *(_QWORD **)(a1 + 8), v23 = v13, v11 = sub_49B3A0(v14, &v23, a3, a4, 1), (_BYTE)v11)
    && (v15 = v23,
        v16 = switch_dbctx(*(int *)(a1 + 4LL * a4 + 16)),
        v20 = sub_6BB440(*(_QWORD *)(v16 + 1672), *(_QWORD *)(*(_QWORD *)(v16 + 1672) + 8LL), v15, v17, v18, v19),
        v20 != -1) )
  {
    *a2 = v20;
  }
  else
  {
    return 0;
  }
  return v11;
}
