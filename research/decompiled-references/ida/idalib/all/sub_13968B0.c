__int64 __fastcall sub_13968B0(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  _BYTE *v4; // rax
  char *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _WORD *v9; // rdx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  void (__fastcall *v12)(_QWORD *); // rax
  _QWORD v14[3]; // [rsp+0h] [rbp-108h] BYREF
  int v15; // [rsp+18h] [rbp-F0h]
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  char v19; // [rsp+44h] [rbp-C4h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  __int64 v23; // [rsp+D8h] [rbp-30h]

  sub_1019CF0(a1[9]);
  sub_1019D10((__int64)&ptr, a1[9]);
  v2 = ptr;
  ptr = nullptr;
  v14[1] = v2;
  LOWORD(v14[0]) = 7;
  v14[2] = v17;
  v17 = 0;
  v15 = v18;
  v18 = 0;
  operator delete(0, 0, 8);
  v3 = a1[2];
  v4 = *(_BYTE **)(v3 + 32);
  if ( v4 == *(_BYTE **)(v3 + 24) )
  {
    v3 = sub_227BF10(a1[2], "\n", 1);
  }
  else
  {
    *v4 = 10;
    ++*(_QWORD *)(v3 + 32);
  }
  v19 = 0;
  v5 = (char *)v14;
  ptr = &v18;
  v20 = 0;
  v21 = 0;
  v22 = v3;
  v23 = 0;
  v17 = 0x1000000001LL;
  v18 = 0;
  sub_222CAC0(&ptr, v14);
  if ( ptr != &v18 )
    free(ptr);
  v9 = *(_WORD **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v9 > 1u )
  {
    *v9 = 2570;
    *(_QWORD *)(v3 + 32) += 2LL;
  }
  else
  {
    v5 = "\n\n";
    sub_227BF10(v3, "\n\n", 2);
  }
  v10 = a1[2];
  if ( *(_QWORD *)(v10 + 32) != *(_QWORD *)(v10 + 16) )
    sub_227B9F0(v10, v5, v9, v6, v7, v8, v14[0]);
  v11 = (_QWORD *)a1[4];
  a1[4] = 0;
  if ( v11 )
  {
    v12 = *(void (__fastcall **)(_QWORD *))(*v11 + 8LL);
    if ( v12 == sub_1393170 )
    {
      *v11 = &off_2BB2510;
      nullsub_646();
      operator delete(v11, 0x30u);
    }
    else
    {
      v12(v11);
    }
  }
  return sub_222B2A0(v14);
}
