/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52E80
// Address: 0x0000000000052E80

//----- (0000000000052E80) ----------------------------------------------------
unsigned __int64 __fastcall sub_52E80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbp
  int v6; // ebx
  const char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rbx
  const char *v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  char *v16; // rdi
  __int64 v17; // r15
  int v18; // ebp
  void (__fastcall *v19)(__int64, __int64, unsigned __int64, _QWORD, __int64); // r14
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-78h]
  void *ptr; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  void *v26[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-48h]
  unsigned __int64 v28; // [rsp+40h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20100);
    BUG();
  }
  v5 = *(_QWORD *)(a3 + 32);
  *(_OWORD *)v26 = 0;
  v27 = 0;
  v6 = *(_DWORD *)a3;
  v7 = sub_58370(a1, *(_DWORD *)a3);
  sub_37F60((__int64)&ptr, v7);
  if ( v24 > 1 || (sub_3BBA0((__int64)&ptr, "%08X", v6), v24) )
    v8 = (const char *)ptr;
  else
    v8 = s1;
  sub_3BBA0((__int64)v26, "Size of %s", v8);
  if ( ptr )
  {
    v24 = 0;
    qfree(ptr);
    ptr = nullptr;
    v25 = 0;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL);
  if ( v26[1] )
    v10 = (const char *)v26[0];
  else
    v10 = s1;
  v22 = a3;
  v11 = *(_QWORD *)(a3 + 8);
  if ( v11 == -1 )
    v11 = qlseek(v9, 0, 1);
  v12 = qlsize(v9);
  v13 = v12 - v11;
  if ( ((v12 - v11) | v11) < 0 )
  {
    v13 = 0;
  }
  else if ( v13 >= v5 )
  {
    v13 = v5;
    goto LABEL_17;
  }
  if ( (unsigned int)sub_5EC20(
                       1,
                       (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       v10,
                       v5,
                       v13,
                       ". Do you want to continue with the new value?",
                       v22,
                       ptr,
                       v24,
                       v25) != 1 )
    sub_5E5B0(0);
LABEL_17:
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v22;
  if ( v14 >= v13 )
  {
    if ( v14 != v13 )
    {
      LOBYTE(ptr) = 0;
      sub_5E330(a2, v13, (char *)&ptr);
      v15 = v22;
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) >= v13 )
    {
      v16 = *(char **)a2;
    }
    else
    {
      v16 = (char *)qvector_reserve(a2, *(char **)a2, v13, 1u);
      *(_QWORD *)a2 = v16;
      v14 = *(_QWORD *)(a2 + 8);
      v15 = v22;
    }
    memset(&v16[v14], 0, v13 - v14);
    *(_QWORD *)(a2 + 8) = v13;
  }
  qlseek(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), *(_QWORD *)(v15 + 8) + *(_QWORD *)(*(_QWORD *)(a1 + 64) + 480LL), 0);
  v17 = *(_QWORD *)(a1 + 64);
  v18 = lreadbytes(*(_QWORD *)(v17 + 472), *(void **)a2, v13, 0);
  if ( v18 < 0 )
  {
    v19 = *(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, __int64))(v17 + 496);
    v20 = qlseek(*(_QWORD *)(v17 + 472), 0, 1);
    v19(v17, 19, v13, v18, v20);
  }
  if ( v26[0] )
  {
    v26[1] = nullptr;
    qfree(v26[0]);
    v26[0] = nullptr;
    v27 = 0;
  }
  return __readfsqword(0x28u);
}
// 52FD9: variable 'v22' is possibly undefined
// 158B40: using guessed type __int64 under_debugger;
