void __fastcall sub_F26F10(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int *v12; // rsi
  size_t v13; // rdx
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  void *v20[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  if ( (v3 & 8) != 0 )
  {
    v5 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)) | *(_QWORD *)(a2 + 48) & 7LL;
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    v5 = *(_QWORD *)(a2 + 48) & 7LL;
  }
  v6 = sub_227B9B0(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), a2);
  v7 = sub_995540(v6, " ");
  v8 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    BUG();
  v10 = *(_QWORD *)(v9 - 24);
  if ( (v10 & 7) != 0 || (v11 = v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v14 = &byte_22F0C30;
    v13 = j__strlen(&byte_22F0C30);
  }
  else
  {
    v12 = *(unsigned int **)(v11 + 16);
    v13 = *v12;
    v14 = (const char *)(v12 + 4);
  }
  v15 = sub_9954E0(v7, v14, v13);
  v16 = sub_995540(v15, "::");
  v17 = sub_B86360(v16, *(_QWORD *)(a2 + 40));
  v18 = sub_995540(v17, " '");
  sub_F783D0(v20, v4, v5, *(_QWORD *)a1 + 1144LL);
  v19 = sub_227BF10(v18, v20[0], v20[1]);
  sub_995540(v19, "'");
  if ( v20[0] != &v21 )
    operator delete(v20[0]);
}
