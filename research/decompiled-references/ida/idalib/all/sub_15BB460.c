__int64 **__fastcall sub_15BB460(__int64 **a1, const void *a2, size_t a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 *v10; // rax
  bool v11; // zf
  __int64 v12; // rdi
  _QWORD *v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  double v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  double v27[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]

  v7 = a4;
  *(_QWORD *)&v27[0] = a6;
  v10 = sub_15BAE70((__int64)a1, a5);
  v11 = a1[3] == nullptr;
  *(_QWORD *)&v27[1] = v10;
  v28 = _mm_loadh_ps(v27);
  if ( v11 )
    sub_15B91E0(a1);
  v12 = **a1;
  v13 = *(_QWORD **)(v12 + 248);
  v14 = sub_15BA330(v12, a2, a3);
  v15 = v13[2389];
  v16 = *(_DWORD *)(v14 + 24);
  v17 = *(_QWORD *)(v14 + 160);
  v29 = *(_QWORD *)(v14 + 40);
  v30 = v16;
  v31 = v17;
  v18 = sub_C0C310(v13, 0, 0, 0, v14, 0, (__int64)&v29, v15, 0, 0, 0, 0);
  v19 = sub_A70010((__int64)v13, *(_QWORD *)(v14 + 48));
  v21 = sub_C0A3E0(v13, v19, 61, v18, 0, 0, 0);
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v26 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 25;
    if ( (unsigned int)v26 > 1 )
    {
      *(_QWORD *)&v27[0] = v21;
      v25 = sub_F63050(v25, v21, v26, v20);
      v21 = *(_QWORD *)&v27[0];
    }
    v7 = *(_QWORD *)(v25 + 24);
  }
  v22 = COERCE_DOUBLE(sub_C0BFD0(v13, v21, &v28, 2, v7, 0, 0, 0, 0, 0));
  v23 = *((unsigned int *)a1 + 28);
  if ( v23 + 1 > (unsigned __int64)*((unsigned int *)a1 + 29) )
  {
    v27[0] = v22;
    sub_2237220(a1 + 13, a1 + 15, v23 + 1, 8);
    v23 = *((unsigned int *)a1 + 28);
    v22 = v27[0];
  }
  *(double *)&a1[13][v23] = v22;
  ++*((_DWORD *)a1 + 28);
  return a1;
}
