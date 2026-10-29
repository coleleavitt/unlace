__int64 **__fastcall sub_15BB0A0(__int64 **a1, const void *a2, size_t a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r14
  __int64 *v9; // rax
  bool v10; // zf
  __int64 v11; // rdi
  _QWORD *v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 *v27; // [rsp+18h] [rbp-60h] BYREF
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  int v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]

  v6 = a4;
  v9 = sub_15BAE70((__int64)a1, a5);
  v10 = a1[3] == nullptr;
  v27 = v9;
  if ( v10 )
    sub_15B91E0(a1);
  v11 = **a1;
  v12 = *(_QWORD **)(v11 + 248);
  v13 = sub_15BA330(v11, a2, a3);
  v14 = v12[2389];
  v15 = *(_DWORD *)(v13 + 24);
  v16 = *(_QWORD *)(v13 + 160);
  v28 = *(_QWORD *)(v13 + 40);
  v29 = v15;
  v30 = v16;
  v17 = sub_C0C310(v12, 0, 0, 0, v13, 0, (__int64)&v28, v14, 0, 0, 0, 0);
  v18 = sub_A70010((__int64)v12, *(_QWORD *)(v13 + 48));
  v20 = sub_C0A3E0(v12, v18, 61, v17, 0, 0, 0);
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 25;
    if ( (unsigned int)v25 > 1 )
      v6 = *(_QWORD *)(sub_F63050(v24, v20, v25, v19) + 24);
    else
      v6 = *(_QWORD *)(v24 + 24);
  }
  v21 = sub_C0BFD0(v12, v20, &v27, 1, v6, 0, 0, 0, 0, 0);
  v22 = *((unsigned int *)a1 + 28);
  if ( v22 + 1 > (unsigned __int64)*((unsigned int *)a1 + 29) )
  {
    v26 = v21;
    sub_2237220(a1 + 13, a1 + 15, v22 + 1, 8);
    v22 = *((unsigned int *)a1 + 28);
    v21 = v26;
  }
  a1[13][v22] = v21;
  ++*((_DWORD *)a1 + 28);
  return a1;
}
