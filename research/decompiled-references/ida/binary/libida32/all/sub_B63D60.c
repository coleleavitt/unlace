__int64 __fastcall sub_B63D60(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v17[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1 + 40;
  v17[0] = a2;
  v15 = 0;
  ptr[0] = v17;
  ptr[1] = (void *)0x2000000002LL;
  v5 = sub_21FF620(a1 + 40, ptr, &v15, off_2B21380);
  if ( v5 )
  {
    v8 = v5 | 5;
  }
  else
  {
    v10 = *(_QWORD **)a1;
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 2352LL);
    v10[304] += 24LL;
    v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[295] >= v12 + 24 && v11 )
    {
      v10[294] = v12 + 24;
      v13 = (_QWORD *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v13 = (_QWORD *)sub_962430((__int64)(v10 + 294), 24, 24, 3, v6, v7);
      v12 = (unsigned __int64)v13;
    }
    *v13 = 0;
    v14 = v15;
    v8 = v12 | 5;
    v13[1] = a2;
    v13[2] = 0;
    sub_21FF4D0(v3, v13, v14, off_2B21380);
  }
  if ( ptr[0] != v17 )
    free(ptr[0]);
  return v8;
}

