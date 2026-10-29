void __fastcall sub_209D620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h]
  _BYTE v26[72]; // [rsp+20h] [rbp-48h] BYREF

  v7 = (__int64 *)a3;
  v23 = a2;
  v10 = *(_QWORD *)sub_209D410(a1 + 416, &v23, a3, a4, a5, a6);
  if ( v10 )
  {
    v13 = v10 + 416;
  }
  else
  {
    v18 = operator new(0x450u);
    sub_2097270(v18);
    v13 = v18 + 416;
    *(_QWORD *)(v18 + 40) = v18 + 416;
    *(_QWORD *)sub_209D410(a1 + 416, &v23, v19, v20, v21, v22) = v18;
  }
  v14 = sub_2099960(*(_QWORD *)(a1 + 40), v7[2], v8, v9, v11, v12);
  if ( v14 && *(_BYTE *)(v14 + 41) && (v17 = sub_2097D10(v13, v7[2])) != 0 )
    v7 = (__int64 *)v17;
  else
    sub_209CA70(v13, v7, a7);
  v25 = 0x100000000LL;
  ptr = v26;
  sub_20962E0((__int64)&ptr, (__int64)v7);
  sub_209BA30(v13, (__int64 *)ptr, (unsigned int)v25, v23, v15, v16);
  if ( ptr != v26 )
    free(ptr);
}
