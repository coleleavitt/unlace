__int64 __fastcall sub_1FA11E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  __int64 result; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  _QWORD v14[6]; // [rsp+10h] [rbp-30h] BYREF

  sub_1F992F0(a1, a2, a3, a4, a5, a6, *(_QWORD *)a2, *(void **)(a2 + 8), *(_QWORD *)(a2 + 16));
  v10 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v10 != 8 )
    goto LABEL_2;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL;
  result = sub_9B9C90(a1[2], v13 == v12);
  if ( v13 != v12 )
  {
    v10 = *(_DWORD *)a2 & 0x7FFFFFFF;
LABEL_2:
    v14[0] = *(_QWORD *)(a2 + 24);
    return sub_1FA10D0((__int64)a1, v10, v14, v7, v8, v9);
  }
  return result;
}
