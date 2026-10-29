__int64 __fastcall sub_DE72F0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r12
  _QWORD *v6; // rdi
  void (*v7)(void); // rax
  _QWORD *v8; // rdi
  void (*v9)(void); // rdx
  _QWORD **v10; // rdi
  unsigned int v11; // eax
  void *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r14d
  __int64 v25; // r15
  char v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  __m128i v31; // [rsp+0h] [rbp-F8h] BYREF
  void *v32; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-E0h]
  char v34; // [rsp+1Ch] [rbp-DCh]
  int v35; // [rsp+20h] [rbp-D8h]
  void *v36; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-C0h]
  int v38; // [rsp+40h] [rbp-B8h]
  _BYTE v39[24]; // [rsp+50h] [rbp-A8h] BYREF
  int v40; // [rsp+68h] [rbp-90h]
  __int64 *v41; // [rsp+70h] [rbp-88h]
  unsigned int v42; // [rsp+80h] [rbp-78h] BYREF
  char v43; // [rsp+84h] [rbp-74h]
  void *v44; // [rsp+88h] [rbp-70h]
  unsigned int v45; // [rsp+90h] [rbp-68h]
  char v46; // [rsp+94h] [rbp-64h]
  int v47; // [rsp+98h] [rbp-60h]

  sub_E23170(v39, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 24);
  v33 = *(_DWORD *)(v5 + 8);
  if ( v33 > 0x40 )
    sub_2205510(&v32);
  else
    v32 = *(void **)v5;
  v6 = *(_QWORD **)(a1 + 24);
  v34 = *(_BYTE *)(v5 + 12);
  v35 = *(_DWORD *)(v5 + 16);
  v7 = *(void (**)(void))(*v6 + 104LL);
  if ( (char *)v7 != (char *)sub_D8A670 )
  {
LABEL_28:
    v7();
    goto LABEL_7;
  }
  v8 = (_QWORD *)v6[3];
  v9 = *(void (**)(void))(*v8 + 104LL);
  if ( v9 == v7 )
  {
    v10 = (_QWORD **)v8[3];
    v7 = (void (*)(void))(*v10)[13];
    if ( v7 == v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10[3] + 104LL))(v10[3]);
      goto LABEL_7;
    }
    goto LABEL_28;
  }
  v9();
LABEL_7:
  v11 = v33;
  v37 = v33;
  if ( v33 > 0x40 )
  {
    sub_2205510(&v36);
    v11 = v37;
    v12 = v36;
  }
  else
  {
    v12 = v32;
  }
  v45 = v11;
  v44 = v12;
  v38 = v35;
  v47 = v35;
  v43 &= ~1u;
  v46 = v34;
  v42 = 4;
  v13 = sub_B9B790(a3, 1);
  sub_A54D20(v13, (int *)&v42);
  if ( v40 == 1 )
  {
    v14 = v41;
  }
  else
  {
    if ( (unsigned int)(v40 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v41[4];
  }
  v15 = *v14;
  v16 = *(unsigned int *)(a1 + 452);
  v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  v18 = (v15 & 2) == 0;
  v19 = 0;
  if ( !v18 )
    v19 = v17;
  v31.m128i_i64[0] = v19;
  v20 = *(unsigned int *)(a1 + 448);
  v31.m128i_i64[0] = a3;
  v21 = (__m128i)_mm_loadh_ps((const double *)v31.m128i_i64);
  if ( v20 + 1 > v16 )
  {
    v31 = v21;
    sub_2237220(a1 + 440, a1 + 456, v20 + 1, 16);
    v20 = *(unsigned int *)(a1 + 448);
    v21 = _mm_load_si128(&v31);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v20) = v21;
  ++*(_DWORD *)(a1 + 448);
  v22 = *(_QWORD *)(a1 + 176);
  v23 = sub_E21760(v22, 24);
  v24 = *(_DWORD *)(v23 + 8);
  v25 = *(_QWORD *)v23;
  *(_DWORD *)(v23 + 8) = 0;
  v26 = *(_BYTE *)(v23 + 12);
  v38 = *(_DWORD *)(v23 + 16);
  sub_E21790(v22, 24);
  v27 = sub_D0F1C0((__int64)v39);
  v28 = v27;
  if ( *(_DWORD *)(v27 + 8) > 0x40u && *(_QWORD *)v27 )
    operator delete[](*(void **)v27);
  *(_QWORD *)v28 = v25;
  v29 = v38;
  *(_DWORD *)(v28 + 8) = v24;
  *(_BYTE *)(v28 + 12) = v26;
  *(_DWORD *)(v28 + 16) = v29;
  sub_E24D00(v39);
  if ( v42 > 1 )
    sub_A4F8E0((int *)&v42);
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  sub_E232A0(v39);
  return 1;
}
