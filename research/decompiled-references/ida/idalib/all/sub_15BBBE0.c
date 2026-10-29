__int64 **__fastcall sub_15BBBE0(__int64 **a1, const void *a2, size_t a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // r14
  __int64 *v11; // rax
  bool v12; // zf
  __int64 v13; // rdi
  _QWORD *v14; // r12
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  _QWORD v29[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]

  v7 = a4;
  v29[0] = sub_15BAE70((__int64)a1, a5);
  v11 = sub_15BAE70((__int64)a1, a6);
  v12 = a1[3] == nullptr;
  v29[1] = v11;
  if ( v12 )
    sub_15B91E0(a1);
  v13 = **a1;
  v14 = *(_QWORD **)(v13 + 248);
  v15 = sub_15BA330(v13, a2, a3);
  v16 = v14[2389];
  v17 = *(_DWORD *)(v15 + 24);
  v18 = *(_QWORD *)(v15 + 160);
  v30 = *(_QWORD *)(v15 + 40);
  v31 = v17;
  v32 = v18;
  v19 = sub_C0C310(v14, 0, 0, 0, v15, 0, (__int64)&v30, v16, 0, 0, 0, 0);
  v20 = sub_A70010((__int64)v14, *(_QWORD *)(v15 + 48));
  v22 = sub_C0A3E0(v14, v20, 61, v19, 0, 0, 0);
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v27 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 25;
    if ( (unsigned int)v27 > 1 )
      v7 = *(_QWORD *)(sub_F63050(v26, v22, v27, v21) + 24);
    else
      v7 = *(_QWORD *)(v26 + 24);
  }
  v23 = sub_C0BFD0(v14, v22, v29, 2, v7, 0, 0, 0, 0, 0);
  v24 = *((unsigned int *)a1 + 28);
  if ( v24 + 1 > (unsigned __int64)*((unsigned int *)a1 + 29) )
  {
    v28 = v23;
    sub_2237220(a1 + 13, a1 + 15, v24 + 1, 8);
    v24 = *((unsigned int *)a1 + 28);
    v23 = v28;
  }
  a1[13][v24] = v23;
  ++*((_DWORD *)a1 + 28);
  return a1;
}
