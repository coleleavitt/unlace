__int64 __fastcall sub_1F16AA0(__int64 **a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // r13
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rbp
  bool v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // cl
  __int64 v19; // rbx
  __int64 v21; // [rsp+0h] [rbp-118h]
  __int64 v22; // [rsp+8h] [rbp-110h]
  void *ptr[2]; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v24[248]; // [rsp+20h] [rbp-F8h] BYREF

  v21 = **a1;
  v2 = 0;
  v3 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v4 = *a1;
  v5 = v3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v2 = v3;
  v6 = *((unsigned int *)v4 + 6);
  v7 = v5 != 0;
  *((_DWORD *)v4 + 6) = v6 + 1;
  v22 = *(_QWORD *)(v4[4] + 8 * v6);
  v8 = sub_1EE1670((__int64)v4);
  v9 = *a1;
  ptr[1] = (void *)0x800000000LL;
  v10 = (__int64 *)v8;
  ptr[0] = v24;
  v11 = v8 != 0;
  v12 = sub_1F0BD10((__int64)v9, (unsigned int *)ptr);
  v14 = *a1;
  v15 = *((unsigned int *)*a1 + 6);
  *((_DWORD *)v14 + 6) = v15 + 1;
  v16 = *(_QWORD *)(v14[4] + 8 * v15);
  if ( !v11 )
    v10 = nullptr;
  v17 = (unsigned int)v16 > 1;
  v18 = (_DWORD)v16 != 0;
  if ( !v7 )
    v2 = 0;
  v19 = sub_AB5840(v21, v2, v22, v18, v17, v10, v12, v13);
  if ( ptr[0] != v24 )
    free(ptr[0]);
  return v19;
}
