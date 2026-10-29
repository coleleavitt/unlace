__int64 __fastcall sub_A59940(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, _BYTE *a5)
{
  __int64 v5; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 v20; // rdi
  __int64 v21; // rsi
  int *v22; // rax
  char **exception; // rbx
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(a2[2] + 112LL) + 540LL) > 1u )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v24, "multi-threaded optimization is not supported");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v24);
    sub_233E40((__int64)&v24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v5 = a2[103];
  *a5 = 0;
  if ( v5 && *(_DWORD *)(v5 - 4) )
  {
    v11 = *a2;
    *a5 = 1;
    (*(void (__fastcall **)(__int64 *))(v11 + 416))(&v24);
    v13 = v24;
    v24 = *a4;
    v12 = v24;
    *a4 = v13;
    if ( v12 )
    {
      v14 = v25;
      if ( (*(_DWORD *)(v12 + 8))-- == 1 )
        sub_15D7BC0(v14, v12);
    }
    goto LABEL_12;
  }
  if ( (unsigned int)sub_A59620((__int64)a2, a3, 1u, 1u, a5) )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*a2 + 416LL))(&v24, a2, a3);
    v20 = *a4;
    v21 = v25;
    *a4 = v24;
    v24 = v20;
    sub_98B270(v20, v21);
LABEL_12:
    v22 = sub_9AD4F0((__int64)a2, a3);
    sub_8A6550(a1, (__int64)v22);
    return a1;
  }
  v16 = a2[3];
  *a5 = 0;
  v17 = *(_QWORD *)(v16 + 864);
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  sub_98B270(*a4, a4[1]);
  *a4 = v17;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v18 = qword_1C7F2C0;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  sub_27B950((__int64)v18, a1, &qword_1C7F280);
  sub_91F480(a1 + 32, (__int64)&qword_1C7F200);
  return a1;
}

