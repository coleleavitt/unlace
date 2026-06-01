__int64 __fastcall sub_89F220(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v6; // rbx
  size_t v7; // r13
  char v8; // r12
  size_t v9; // r13
  size_t v10; // r13
  size_t v11; // r13
  size_t v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // ebp
  void *v19; // rax
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax
  __int64 (__fastcall **v25)(); // [rsp+0h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+8h] [rbp-D0h]
  void *v27; // [rsp+10h] [rbp-C8h]
  __int128 v28; // [rsp+18h] [rbp-C0h]
  void *v29; // [rsp+28h] [rbp-B0h]
  __int128 v30; // [rsp+30h] [rbp-A8h]
  void *v31; // [rsp+40h] [rbp-98h]
  __int128 v32; // [rsp+48h] [rbp-90h]
  void *ptr; // [rsp+58h] [rbp-80h]
  __int128 v34; // [rsp+60h] [rbp-78h]
  void *v35; // [rsp+70h] [rbp-68h]
  __int128 v36; // [rsp+78h] [rbp-60h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  char v38; // [rsp+90h] [rbp-48h]
  char v39; // [rsp+98h] [rbp-40h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-30h]

  v6 = a2;
  v7 = *((_QWORD *)a2 + 1);
  v40 = __readfsqword(0x28u);
  v8 = a3;
  LOBYTE(v26) = 13;
  v28 = 0;
  v25 = &off_2B141B8;
  v27 = nullptr;
  if ( v7 )
  {
    v19 = (void *)qalloc_or_throw(v7, a2, a3, a4, a5, a6, v25, v26, v27, v28);
    a2 = *(const char **)a2;
    *((_QWORD *)&v28 + 1) = v7;
    v27 = v19;
    memcpy(v19, a2, v7);
    *(_QWORD *)&v28 = v7;
  }
  v9 = *((_QWORD *)v6 + 4);
  v29 = nullptr;
  v30 = 0;
  if ( v9 )
  {
    v24 = (void *)qalloc_or_throw(v9, a2);
    a2 = *((const char **)v6 + 3);
    v29 = v24;
    *((_QWORD *)&v30 + 1) = v9;
    memcpy(v24, a2, v9);
    *(_QWORD *)&v30 = v9;
  }
  v10 = *((_QWORD *)v6 + 7);
  v31 = nullptr;
  v32 = 0;
  if ( v10 )
  {
    v23 = (void *)qalloc_or_throw(v10, a2);
    a2 = *((const char **)v6 + 6);
    v31 = v23;
    *((_QWORD *)&v32 + 1) = v10;
    memcpy(v23, a2, v10);
    *(_QWORD *)&v32 = v10;
  }
  v11 = *((_QWORD *)v6 + 10);
  ptr = nullptr;
  v34 = 0;
  if ( v11 )
  {
    v22 = (void *)qalloc_or_throw(v11, a2);
    a2 = *((const char **)v6 + 9);
    ptr = v22;
    *((_QWORD *)&v34 + 1) = v11;
    memcpy(v22, a2, v11);
    *(_QWORD *)&v34 = v11;
  }
  v12 = *((_QWORD *)v6 + 13);
  v35 = nullptr;
  v36 = 0;
  if ( v12 )
  {
    v20 = (void *)qalloc_or_throw(v12, a2);
    v21 = *((const void **)v6 + 12);
    v35 = v20;
    *((_QWORD *)&v36 + 1) = v12;
    memcpy(v20, v21, v12);
    *(_QWORD *)&v36 = v12;
  }
  v13 = *((_QWORD *)v6 + 15);
  v39 = v8;
  v37 = v13;
  v38 = v6[128];
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v25);
  v17 = sub_89A5C0((_QWORD *)(a1 + 40), v14, 10, nullptr, v15, v16);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  sub_8BFBC0(&v25);
  return v17;
}

