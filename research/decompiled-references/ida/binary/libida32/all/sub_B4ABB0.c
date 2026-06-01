__int64 __fastcall sub_B4ABB0(_QWORD *a1, __int64 *a2)
{
  void **v3; // rax
  __int64 v4; // rax
  __int64 (*v5)(); // rax
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 (*v9)(); // rax
  __int64 v10; // rax
  __int64 (*v11)(); // rax
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
  void *v25[2]; // [rsp+B8h] [rbp-F0h] BYREF
  int v26; // [rsp+C8h] [rbp-E0h]
  char v27; // [rsp+CCh] [rbp-DCh]
  _QWORD v28[5]; // [rsp+D0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+F8h] [rbp-B0h]
  __int64 v30; // [rsp+100h] [rbp-A8h]
  _DWORD v31[26]; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+170h] [rbp-38h]
  __int16 v33; // [rsp+178h] [rbp-30h]
  char v34; // [rsp+17Ah] [rbp-2Eh]

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
  while ( v25 != v3 );
  v28[4] = 0;
  v25[0] = v28;
  ptr = v31;
  v30 = 0x400000000LL;
  v33 = 0;
  v4 = *a1;
  v31[24] = 0;
  v32 = 0;
  v34 = 0;
  v5 = *(__int64 (**)())(v4 + 32);
  v25[1] = &byte_4;
  v26 = 0;
  v27 = 1;
  if ( v5 == sub_9DD400 )
  {
    v6 = sub_B4CD20(a1);
    v7 = a2;
    v8 = v6;
    v9 = *(__int64 (**)())(*a2 + 32);
    if ( v9 == sub_9DD400 )
      goto LABEL_5;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, void **))v5)(a1, a2, v25);
    v7 = a2;
    v8 = v19;
    v9 = *(__int64 (**)())(*a2 + 32);
    if ( v9 == sub_9DD400 )
    {
LABEL_5:
      if ( v8 != sub_B4CD20(v7) )
        goto LABEL_6;
LABEL_27:
      v14 = 0;
      goto LABEL_12;
    }
  }
  if ( v8 == ((__int64 (__fastcall *)(__int64 *))v9)(v7) )
    goto LABEL_27;
LABEL_6:
  v10 = *a2;
  v21 = a1;
  v11 = *(__int64 (**)())(v10 + 32);
  if ( v11 == sub_9DD400 )
    v12 = sub_B4CD20(a2);
  else
    v12 = ((__int64 (__fastcall *)(__int64 *))v11)(a2);
  v20 = v12;
  v13 = sub_B685F0(a1);
  v14 = sub_B44540((__int64)&v21, v13, (__int64)a1, (__int64 *)sub_B47AF0, (__int64)&v20, 0);
  if ( (_BYTE)v14 )
  {
    if ( HIBYTE(v33) )
    {
      v14 = HIBYTE(v33);
      if ( (_BYTE)v33 )
        v14 = sub_B4AFD0(&v21);
    }
  }
LABEL_12:
  if ( ptr != v31 )
    free(ptr);
  if ( !v27 )
    free(v25[0]);
  if ( (v23 & 1) == 0 )
    operator delete();
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

