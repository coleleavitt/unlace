_QWORD *__fastcall sub_E6DBA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v12[23]; // [rsp+20h] [rbp-B8h] BYREF

  v12[0] = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v12[1] = a3;
  ptr[0] = v12;
  ptr[1] = (void *)0x2000000004LL;
  v10 = 0;
  v4 = (_QWORD *)sub_21FF620(a1 + 131, ptr, &v10, off_2B21B50);
  if ( !v4 )
  {
    v8 = a1[294];
    a1[304] += 24LL;
    v4 = (_QWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)(v4 + 3) && v8 )
      a1[294] = v4 + 3;
    else
      v4 = (_QWORD *)sub_962430((__int64)(a1 + 294), 24, 24, 3, v5, v6);
    *v4 = 0;
    v9 = v10;
    v4[1] = a2 & 0xFFFFFFFFFFFFFFF9LL;
    v4[2] = a3;
    sub_21FF4D0(a1 + 131, v4, v9, off_2B21B50);
  }
  if ( ptr[0] != v12 )
    free(ptr[0]);
  return v4;
}

