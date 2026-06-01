_QWORD *__fastcall sub_7E5EA0(__int64 a1, unsigned int a2, const void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int128 v17[4]; // [rsp+0h] [rbp-48h] BYREF

  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 432LL);
  if ( (char *)v12 == (char *)sub_79EFF0 )
    v13 = v11 + 2144;
  else
    v13 = v12();
  v14 = (_QWORD *)sub_180C100(v13, 4 * (a2 + 4LL * a4) + 64);
  *v14 = a1;
  v15 = v14 + 1;
  v17[0] = 0;
  sub_7E59A0((__int64)(v14 + 1), a2, a3, a4, a5, -2, (__int64)v17, a6);
  return v15;
}

