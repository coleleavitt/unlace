__int64 __fastcall sub_56B930(__int64 a1, const void *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+10h] [rbp-28h] BYREF

  sub_644D80(v12, "add_fact", 10);
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 == 0xFFFFFFFFLL )
  {
    v8 = *(_QWORD *)(a1 + 80);
    v9 = *(unsigned int *)(a1 + 72);
    *(_QWORD *)(a1 + 152) = v8;
    sub_5716E0(a1 + 72, v8 + v9);
    v4 = *(_QWORD *)(a1 + 152);
  }
  memcpy((void *)(*(_QWORD *)(a1 + 88) + v4), a2, *(unsigned int *)(a1 + 72));
  v5 = *(_QWORD *)(a1 + 152);
  v10 = 0;
  v11 = v5;
  sub_568330(a1 + 96, &v11, &v10);
  v6 = 0;
  if ( *(_QWORD *)(v10 + 8) == *(_QWORD *)(a1 + 152) )
  {
    v6 = 1;
    *(_QWORD *)(a1 + 152) = 0xFFFFFFFFLL;
  }
  sub_644EE0(v12);
  return v6;
}

