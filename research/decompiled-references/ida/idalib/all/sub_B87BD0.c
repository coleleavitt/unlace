__int64 __fastcall sub_B87BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v18[21]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1 + 8;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = 0;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  ptr[0] = v18;
  v18[0] = v5;
  ptr[1] = (void *)0x2000000002LL;
  v6 = sub_2223360(a1 + 8, ptr, &v16, off_2B4B320);
  if ( v6 )
  {
    v9 = v6 | 3;
  }
  else
  {
    v11 = *(_QWORD **)a1;
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 2352LL);
    v11[304] += 24LL;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v11[295] >= v13 + 24 && v12 )
    {
      v11[294] = v13 + 24;
      v14 = (_QWORD *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v14 = (_QWORD *)sub_986170((__int64)(v11 + 294), 24, 24, 3, v7, v8);
      v13 = (unsigned __int64)v14;
    }
    *v14 = 0;
    v15 = v16;
    v9 = v13 | 3;
    v14[1] = v5;
    v14[2] = 0;
    sub_2223210(v2, v14, v15, off_2B4B320);
  }
  if ( ptr[0] != v18 )
    free(ptr[0]);
  return v9;
}
