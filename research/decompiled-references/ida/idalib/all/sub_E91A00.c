_QWORD *__fastcall sub_E91A00(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v12[23]; // [rsp+20h] [rbp-B8h] BYREF

  v12[1] = a3;
  v12[0] = a2 & 0xFFFFFFFFFFFFFFF9LL | 4;
  ptr[0] = v12;
  ptr[1] = (void *)0x2000000004LL;
  v10 = 0;
  v6 = (_QWORD *)sub_2223360(a1 + 131, ptr, &v10, off_2B4BAF0);
  if ( !v6 )
  {
    v8 = a1[294];
    a1[304] += 24LL;
    v6 = (_QWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)(v6 + 3) && v8 )
      a1[294] = v6 + 3;
    else
      v6 = (_QWORD *)sub_986170((__int64)(a1 + 294), 24, 24, 3, v4, v5);
    *v6 = 0;
    v9 = v10;
    v6[1] = a2 & 0xFFFFFFFFFFFFFFF9LL | 4;
    v6[2] = a3;
    sub_2223210(a1 + 131, v6, v9, off_2B4BAF0);
  }
  if ( ptr[0] != v12 )
    free(ptr[0]);
  return v6;
}
