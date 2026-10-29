void __fastcall sub_2097AE0(__int64 a1, __int64 a2, const void *a3, size_t a4, int a5, double a6)
{
  __int64 v6; // rax
  _BYTE *v11; // rdi
  char *v12; // r15
  char *v13; // r12
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r12
  const void *v17; // rax
  size_t v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A0h]
  _BYTE v23[152]; // [rsp+20h] [rbp-98h] BYREF

  ptr = v23;
  v22 = 0xC00000000LL;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    sub_20974C0(v6, (__int64)&ptr, a2);
    if ( dword_2CFD4D8 > 3 )
    {
      if ( !(_DWORD)v22 )
        goto LABEL_6;
      v15 = sub_221A480(a6);
      v16 = sub_995540(v15, " -*- '");
      v17 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      sub_9954E0(v16, v17, v18);
      v19 = sub_221A480(a6);
      sub_995540(v19, "' is the last user of following pass instances.");
      v20 = sub_221A480(a6);
      sub_995540(v20, " Free these instances\n");
    }
    v11 = ptr;
    v12 = (char *)ptr + 8 * (unsigned int)v22;
    if ( ptr == v12 )
      goto LABEL_7;
    v13 = (char *)ptr;
    do
    {
      v14 = *(_QWORD **)v13;
      v13 += 8;
      sub_2096D30(a1, v14, a3, a4, a5, a6);
    }
    while ( v12 != v13 );
LABEL_6:
    v11 = ptr;
LABEL_7:
    if ( v11 != v23 )
      free(v11);
  }
}
