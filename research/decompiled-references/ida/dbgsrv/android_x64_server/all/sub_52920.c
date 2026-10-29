/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52920
// Address: 0x0000000000052920

//----- (0000000000052920) ----------------------------------------------------
unsigned __int64 __fastcall sub_52920(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  const char *v5; // rdx
  __int64 v6; // rbx
  const char *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // r15
  int v14; // ebp
  void (__fastcall *v15)(__int64, __int64, unsigned __int64, _QWORD, __int64); // r14
  __int64 v16; // rax
  void *ptr[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h]
  void *v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  char v24; // [rsp+4Fh] [rbp-39h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 32);
  sub_37F60((__int64)&v21, "?");
  if ( a1[22] > 0 && a1[24] )
    sub_57CE0(a1[20], (__int64)&v21, a1 + 22, *(_DWORD *)a3);
  *(_OWORD *)ptr = 0;
  v20 = 0;
  if ( v22 )
    v5 = (const char *)v21;
  else
    v5 = s1;
  sub_3BBA0((__int64)ptr, "Size of %s", v5);
  v6 = *(_QWORD *)(a1[20] + 472);
  if ( ptr[1] )
    v7 = (const char *)ptr[0];
  else
    v7 = s1;
  v8 = *(_QWORD *)(a3 + 24);
  if ( v8 == -1 )
    v8 = qlseek(v6, 0, 1);
  v9 = qlsize(v6);
  v10 = v9 - v8;
  if ( ((v9 - v8) | v8) < 0 )
  {
    v10 = 0;
  }
  else if ( v10 >= v4 )
  {
    v10 = v4;
    goto LABEL_17;
  }
  if ( (unsigned int)sub_5EC20(
                       1,
                       (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       v7,
                       v4,
                       v10,
                       ". Do you want to continue with the new value?") != 1 )
    sub_5E5B0(0);
LABEL_17:
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 >= v10 )
  {
    if ( v11 != v10 )
    {
      v24 = 0;
      sub_5E330(a2, v10, &v24);
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) >= v10 )
    {
      v12 = *(char **)a2;
    }
    else
    {
      v12 = (char *)qvector_reserve(a2, *(char **)a2, v10, 1u);
      *(_QWORD *)a2 = v12;
      v11 = *(_QWORD *)(a2 + 8);
    }
    memset(&v12[v11], 0, v10 - v11);
    *(_QWORD *)(a2 + 8) = v10;
  }
  qlseek(*(_QWORD *)(a1[20] + 472), *(_QWORD *)(a3 + 24) + *(_QWORD *)(a1[20] + 480), 0);
  v13 = a1[20];
  v14 = lreadbytes(*(_QWORD *)(v13 + 472), *(void **)a2, v10, 0);
  if ( v14 < 0 )
  {
    v15 = *(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, __int64))(v13 + 496);
    v16 = qlseek(*(_QWORD *)(v13 + 472), 0, 1);
    v15(v13, 19, v10, v14, v16);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v20 = 0;
  }
  if ( v21 )
  {
    v22 = 0;
    qfree(v21);
    v21 = nullptr;
    v23 = 0;
  }
  return __readfsqword(0x28u);
}
