_QWORD *__fastcall sub_18067E0(_QWORD *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v5; // rax
  __int64 v8; // rcx
  char v9; // [rsp+7h] [rbp-31h] BYREF
  char v10; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v11[4]; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a2 + 248) + 17448LL) + 260LL);
  if ( (unsigned int)v5 <= 0x1F && (v8 = 4160750114LL, _bittest64(&v8, v5)) )
  {
    v12[0] = 0;
    v12[1] = 0;
    v13[0] = 0;
    v13[1] = 0;
    sub_21177C0(
      (_DWORD)a1,
      a3,
      a4,
      (unsigned int)v12,
      (unsigned int)v13,
      (unsigned int)&v10,
      (__int64)&v9,
      (__int64)v11);
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
