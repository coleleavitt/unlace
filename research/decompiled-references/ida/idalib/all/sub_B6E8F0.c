__int64 __fastcall sub_B6E8F0(_QWORD *a1, __int64 *a2)
{
  void **v3; // rax
  __int64 v4; // rax
  __int64 (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64 *); // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64 *); // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // r13d
  void **v15; // rbp
  void **v16; // rdi
  void **v17; // r12
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-1A0h] BYREF
  _QWORD *v21; // [rsp+10h] [rbp-198h] BYREF
  void *v22[3]; // [rsp+18h] [rbp-190h] BYREF
  __int64 v23; // [rsp+30h] [rbp-178h]
  __int64 v24; // [rsp+38h] [rbp-170h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-168h]
  void *v26[2]; // [rsp+B8h] [rbp-F0h] BYREF
  int v27; // [rsp+C8h] [rbp-E0h]
  char v28; // [rsp+CCh] [rbp-DCh]
  _QWORD v29[5]; // [rsp+D0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+F8h] [rbp-B0h]
  __int64 v31; // [rsp+100h] [rbp-A8h]
  _DWORD v32[26]; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+170h] [rbp-38h]
  __int16 v34; // [rsp+178h] [rbp-30h]
  char v35; // [rsp+17Ah] [rbp-2Eh]

  v21 = nullptr;
  v22[2] = nullptr;
  v23 = 1;
  v22[1] = v22;
  v22[0] = v22;
  v3 = (void **)&v24;
  do
  {
    *v3 = nullptr;
    v3 += 2;
  }
  while ( v26 != v3 );
  v29[4] = 0;
  v26[0] = v29;
  ptr = v32;
  v31 = 0x400000000LL;
  v34 = 0;
  v4 = *a1;
  v32[24] = 0;
  v33 = 0;
  v35 = 0;
  v5 = *(__int64 (__fastcall **)(_QWORD))(v4 + 32);
  v26[1] = &byte_4;
  v27 = 0;
  v28 = 1;
  if ( v5 == sub_A01140 )
  {
    v6 = sub_B70A60(a1);
    v7 = a2;
    v8 = v6;
    v9 = *(__int64 (__fastcall **)(__int64 *))(*a2 + 32);
    if ( (char *)v9 == (char *)sub_A01140 )
      goto LABEL_5;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, void **))v5)(a1, a2, v26);
    v7 = a2;
    v8 = v19;
    v9 = *(__int64 (__fastcall **)(__int64 *))(*a2 + 32);
    if ( (char *)v9 == (char *)sub_A01140 )
    {
LABEL_5:
      if ( v8 != sub_B70A60(v7) )
        goto LABEL_6;
LABEL_27:
      v14 = 0;
      goto LABEL_12;
    }
  }
  if ( v8 == v9(v7) )
    goto LABEL_27;
LABEL_6:
  v10 = *a2;
  v21 = a1;
  v11 = *(__int64 (__fastcall **)(__int64 *))(v10 + 32);
  if ( (char *)v11 == (char *)sub_A01140 )
    v12 = sub_B70A60(a2);
  else
    v12 = v11(a2);
  v20 = v12;
  v13 = sub_B8C330(a1);
  v14 = sub_B68280((__int64)&v21, v13, (__int64)a1, (__int64 *)sub_B6B830, (__int64)&v20, 0);
  if ( (_BYTE)v14 )
  {
    if ( HIBYTE(v34) )
    {
      v14 = HIBYTE(v34);
      if ( (_BYTE)v34 )
        v14 = sub_B6ED10(&v21);
    }
  }
LABEL_12:
  if ( ptr != v32 )
    free(ptr);
  if ( !v28 )
    free(v26[0]);
  if ( (v23 & 1) == 0 )
    operator delete(v24, 16LL * v25, 8);
  v15 = (void **)v22[0];
  if ( v22[0] != v22 )
  {
    while ( 1 )
    {
      v16 = (void **)v15[2];
      v17 = (void **)*v15;
      if ( v16 == v15 + 4 )
      {
        operator delete(v15);
        if ( v17 == v22 )
          return v14;
      }
      else
      {
        free(v16);
        operator delete(v15);
        if ( v17 == v22 )
          return v14;
      }
      v15 = v17;
    }
  }
  return v14;
}
