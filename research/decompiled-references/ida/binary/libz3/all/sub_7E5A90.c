_QWORD *__fastcall sub_7E5A90(
        __int64 a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v14; // rdi
  __int64 (*v15)(void); // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  _QWORD v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v14 = *(_QWORD *)(a1 + 80);
  v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 432LL);
  if ( (char *)v15 == (char *)sub_79EFF0 )
    v16 = v14 + 2144;
  else
    v16 = v15();
  v17 = (_QWORD *)sub_180C100(v16, 4 * (a2 + 4LL * a4) + 64);
  *v17 = a1;
  v18 = v17 + 1;
  v20[0] = a7;
  v20[1] = a8;
  sub_7E59A0((__int64)(v17 + 1), a2, a3, a4, a5, a6, (__int64)v20, a9);
  return v18;
}

