__int64 __fastcall sub_A4D090(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, _BYTE *a5)
{
  __int64 v5; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  void *v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  char **exception; // rbx
  __int64 v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+8h] [rbp-60h]
  char v26[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v27[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2[2] + 112LL) + 540LL) > 1u )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v24, "multi-threaded optimization is not supported");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v24);
    sub_233E40((__int64)&v24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v5 = a2[87];
  *a5 = 0;
  if ( v5 && *(_DWORD *)(v5 - 4) )
  {
    v11 = *a2;
    *a5 = 1;
    (*(void (__fastcall **)(__int64 *))(v11 + 416))(&v24);
    v12 = *a4;
    v13 = v25;
    *a4 = v24;
    v24 = v12;
    sub_98B270(v12, v13);
    v14 = sub_999800((__int64)a2, a3);
    sub_894960((__int64)&v24, v14);
    sub_9D4F70(a1, (__int64)&v24);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v26);
    sub_182CBA0(v15, v27);
    sub_25A130((char *)&v24);
    return a1;
  }
  else if ( (unsigned int)sub_A4CD70((__int64)a2, a3, 1u, 1u, a5) )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*a2 + 416LL))(&v24, a2, a3);
    v20 = *a4;
    v21 = v25;
    *a4 = v24;
    v24 = v20;
    sub_98B270(v20, v21);
    v22 = sub_999800((__int64)a2, a3);
    sub_894960((__int64)&v24, v22);
    sub_9D4F70(a1, (__int64)&v24);
    sub_25A130(v26);
    sub_25A130((char *)&v24);
    return a1;
  }
  else
  {
    v17 = a2[3];
    *a5 = 0;
    v18 = *(_QWORD *)(v17 + 864);
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    sub_98B270(*a4, a4[1]);
    *a4 = v18;
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    v19 = qword_1C7F2C0;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    sub_27B950((__int64)v19, a1, &qword_1C7F280);
    sub_91F480(a1 + 32, (__int64)&qword_1C7F200);
    return a1;
  }
}

