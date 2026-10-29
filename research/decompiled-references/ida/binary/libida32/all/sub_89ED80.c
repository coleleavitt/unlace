__int64 __fastcall sub_89ED80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  size_t v7; // r13
  char v8; // r12
  size_t v9; // r13
  size_t v10; // r13
  size_t v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // ebp
  void *v18; // rax
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  void *v22; // rax
  __int64 (__fastcall **v23)(); // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-B0h]
  void *v25; // [rsp+10h] [rbp-A8h]
  __int128 v26; // [rsp+18h] [rbp-A0h]
  void *v27; // [rsp+28h] [rbp-90h]
  __int128 v28; // [rsp+30h] [rbp-88h]
  void *ptr; // [rsp+40h] [rbp-78h]
  __int128 v30; // [rsp+48h] [rbp-70h]
  void *v31; // [rsp+58h] [rbp-60h]
  __int128 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+70h] [rbp-48h]
  char v34; // [rsp+78h] [rbp-40h]
  unsigned __int64 v35; // [rsp+88h] [rbp-30h]

  v6 = a2;
  v7 = a2[1];
  v35 = __readfsqword(0x28u);
  v8 = a3;
  LOBYTE(v24) = 34;
  v26 = 0;
  v23 = &off_2B145A8;
  v25 = nullptr;
  if ( v7 )
  {
    v18 = (void *)qalloc_or_throw(v7, (const char *)a2, a3, a4, a5, a6, v23, v24, v25, v26);
    a2 = (_QWORD *)*a2;
    *((_QWORD *)&v26 + 1) = v7;
    v25 = v18;
    memcpy(v18, a2, v7);
    *(_QWORD *)&v26 = v7;
  }
  v9 = v6[4];
  v27 = nullptr;
  v28 = 0;
  if ( v9 )
  {
    v22 = (void *)qalloc_or_throw(v9, (const char *)a2);
    a2 = (_QWORD *)v6[3];
    v27 = v22;
    *((_QWORD *)&v28 + 1) = v9;
    memcpy(v22, a2, v9);
    *(_QWORD *)&v28 = v9;
  }
  v10 = v6[7];
  ptr = nullptr;
  v30 = 0;
  if ( v10 )
  {
    v21 = (void *)qalloc_or_throw(v10, (const char *)a2);
    a2 = (_QWORD *)v6[6];
    ptr = v21;
    *((_QWORD *)&v30 + 1) = v10;
    memcpy(v21, a2, v10);
    *(_QWORD *)&v30 = v10;
  }
  v11 = v6[10];
  v31 = nullptr;
  v32 = 0;
  if ( v11 )
  {
    v19 = (void *)qalloc_or_throw(v11, (const char *)a2);
    v20 = (const void *)v6[9];
    v31 = v19;
    *((_QWORD *)&v32 + 1) = v11;
    memcpy(v19, v20, v11);
    *(_QWORD *)&v32 = v11;
  }
  v12 = v6[12];
  v34 = v8;
  v33 = v12;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v23);
  v16 = sub_89A5C0((_QWORD *)(a1 + 40), v13, 10, nullptr, v14, v15);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  sub_8BADA0(&v23);
  return v16;
}

