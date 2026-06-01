__int64 __fastcall sub_8C2AC0(__int64 a1, __int64 a2, char a3)
{
  size_t v4; // r13
  size_t v6; // r13
  size_t v7; // r13
  size_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // r9
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  const void *v22; // rsi
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rax
  const void *v26; // rsi
  __int64 (__fastcall **v27)(); // [rsp+0h] [rbp-B8h] BYREF
  int v28; // [rsp+8h] [rbp-B0h]
  void *v29; // [rsp+10h] [rbp-A8h]
  __int128 v30; // [rsp+18h] [rbp-A0h]
  void *v31; // [rsp+28h] [rbp-90h]
  __int128 v32; // [rsp+30h] [rbp-88h]
  void *ptr; // [rsp+40h] [rbp-78h]
  __int128 v34; // [rsp+48h] [rbp-70h]
  void *v35; // [rsp+58h] [rbp-60h]
  __int128 v36; // [rsp+60h] [rbp-58h]
  __int64 v37; // [rsp+70h] [rbp-48h]
  char v38; // [rsp+78h] [rbp-40h]
  unsigned __int64 v39; // [rsp+88h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8);
  v39 = __readfsqword(0x28u);
  LOBYTE(v28) = 34;
  v30 = 0;
  v27 = &off_2B3E548;
  v29 = nullptr;
  if ( v4 )
  {
    v19 = (void *)qalloc_or_throw(v4);
    v20 = *(const void **)a2;
    *((_QWORD *)&v30 + 1) = v4;
    v29 = v19;
    memcpy(v19, v20, v4);
    *(_QWORD *)&v30 = v4;
  }
  v6 = *(_QWORD *)(a2 + 32);
  v31 = nullptr;
  v32 = 0;
  if ( v6 )
  {
    v25 = (void *)qalloc_or_throw(v6);
    v26 = *(const void **)(a2 + 24);
    v31 = v25;
    *((_QWORD *)&v32 + 1) = v6;
    memcpy(v25, v26, v6);
    *(_QWORD *)&v32 = v6;
  }
  v7 = *(_QWORD *)(a2 + 56);
  ptr = nullptr;
  v34 = 0;
  if ( v7 )
  {
    v23 = (void *)qalloc_or_throw(v7);
    v24 = *(const void **)(a2 + 48);
    ptr = v23;
    *((_QWORD *)&v34 + 1) = v7;
    memcpy(v23, v24, v7);
    *(_QWORD *)&v34 = v7;
  }
  v8 = *(_QWORD *)(a2 + 80);
  v35 = nullptr;
  v36 = 0;
  if ( v8 )
  {
    v21 = (void *)qalloc_or_throw(v8);
    v22 = *(const void **)(a2 + 72);
    v35 = v21;
    *((_QWORD *)&v36 + 1) = v8;
    memcpy(v21, v22, v8);
    *(_QWORD *)&v36 = v8;
  }
  v9 = *(_QWORD *)(a2 + 96);
  v38 = a3;
  v37 = v9;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v27);
  v15 = sub_8BE300((_QWORD *)(a1 + 40), v10, 10, nullptr, v11, v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), int, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD, void *, _QWORD, _QWORD))(*(_QWORD *)v10 + 8LL))(
      v10,
      v10,
      v13,
      v14,
      v16,
      v17,
      v27,
      v28,
      v29,
      v30,
      *((_QWORD *)&v30 + 1),
      v31,
      v32,
      *((_QWORD *)&v32 + 1),
      ptr,
      v34,
      *((_QWORD *)&v34 + 1),
      v35,
      v36,
      *((_QWORD *)&v36 + 1));
  sub_8DEAE0(&v27);
  return v15;
}
