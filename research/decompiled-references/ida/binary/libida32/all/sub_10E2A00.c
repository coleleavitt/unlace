__int64 __fastcall sub_10E2A00(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  __int64 v12; // rdi
  signed __int64 v13; // r13
  int v14; // eax
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  unsigned int v25; // ebp
  __int64 v27; // [rsp+0h] [rbp-498h]
  __int64 v28; // [rsp+0h] [rbp-498h]
  __int64 v29; // [rsp+8h] [rbp-490h] BYREF
  __int64 v30[2]; // [rsp+10h] [rbp-488h] BYREF
  unsigned int v31; // [rsp+20h] [rbp-478h]
  char v32; // [rsp+24h] [rbp-474h]
  _QWORD v33[4]; // [rsp+30h] [rbp-468h] BYREF
  void *ptr; // [rsp+50h] [rbp-448h] BYREF
  __int64 v35; // [rsp+58h] [rbp-440h]
  _QWORD v36[135]; // [rsp+60h] [rbp-438h] BYREF

  sub_10E28D0((_BYTE *)a1, a2, a3, a4, a5, a6, v27, v29, v30[0]);
  v10 = v36;
  v11 = *(_QWORD **)(a1 + 56);
  v12 = 1;
  v13 = 8LL * *(unsigned int *)(a1 + 64);
  v36[0] = *(_QWORD *)(a1 + 40);
  v35 = 0x8000000001LL;
  v14 = 1;
  v15 = v13 >> 3;
  ptr = v36;
  v16 = (v13 >> 3) + 1;
  if ( v16 > 0x80 )
  {
    sub_22134E0(&ptr, v36, v16, 8);
    v14 = v35;
    v10 = ptr;
    v12 = (unsigned int)v35;
  }
  if ( v13 )
  {
    v17 = &v10[v12];
    v10 = v11;
    memcpy(v17, v11, v13);
    v14 = v35;
  }
  v18 = HIDWORD(v35);
  LODWORD(v35) = v15 + v14;
  v19 = (unsigned int)(v15 + v14);
  if ( v19 + 1 > (unsigned __int64)HIDWORD(v35) )
  {
    v10 = v36;
    sub_22134E0(&ptr, v36, v19 + 1, 8);
    v19 = (unsigned int)v35;
  }
  v20 = ptr;
  *((_QWORD *)ptr + v19) = 0;
  if ( a2 )
    *a2 = 0;
  ((void (__fastcall *)(__int64 *, _QWORD *, void *, __int64, __int64, __int64, __int64, __int64))sub_21F5A30)(
    v30,
    v10,
    v20,
    v18,
    v8,
    v9,
    v28,
    v29);
  v32 = 1;
  v21 = sub_220FBC0();
  v22 = *(_QWORD *)(a1 + 16);
  v33[0] = (char *)&v29 + 4;
  HIDWORD(v29) = 0;
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL);
  v33[2] = &ptr;
  v33[1] = v23;
  v24 = sub_21F5BC0(v30, sub_10E2330, v33);
  v25 = HIDWORD(v29);
  if ( !v24 )
  {
    sub_220FBE0(v21);
    v25 = v31;
  }
  sub_21F5A50(v30);
  if ( ptr != v36 )
    free(ptr);
  return v25;
}

