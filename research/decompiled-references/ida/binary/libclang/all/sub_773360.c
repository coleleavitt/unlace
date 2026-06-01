__int64 __fastcall sub_773360(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rax
  __int64 v4; // r13
  __int64 (*v5)(); // rax
  __int64 v6; // rax
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r13d
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rbp
  __int64 v15; // [rsp+18h] [rbp-1B0h] BYREF
  _QWORD *v16; // [rsp+20h] [rbp-1A8h] BYREF
  void *v17[3]; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-188h]
  __int64 v19; // [rsp+48h] [rbp-180h]
  __int64 v20; // [rsp+58h] [rbp-170h]
  __int64 v21; // [rsp+68h] [rbp-160h]
  __int64 v22; // [rsp+78h] [rbp-150h]
  __int64 v23; // [rsp+88h] [rbp-140h]
  __int64 v24; // [rsp+98h] [rbp-130h]
  __int64 v25; // [rsp+A8h] [rbp-120h]
  __int64 v26; // [rsp+B8h] [rbp-110h]
  void *v27; // [rsp+C8h] [rbp-100h]
  __int64 v28; // [rsp+D0h] [rbp-F8h]
  int v29; // [rsp+D8h] [rbp-F0h]
  char v30; // [rsp+DCh] [rbp-ECh]
  char v31; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+100h] [rbp-C8h]
  void *ptr; // [rsp+108h] [rbp-C0h]
  __int64 v34; // [rsp+110h] [rbp-B8h]
  _BYTE v35[96]; // [rsp+118h] [rbp-B0h] BYREF
  int v36; // [rsp+178h] [rbp-50h]
  __int64 v37; // [rsp+180h] [rbp-48h]
  __int16 v38; // [rsp+188h] [rbp-40h]
  char v39; // [rsp+18Ah] [rbp-3Eh]

  v16 = nullptr;
  v27 = &v31;
  v17[1] = v17;
  v17[0] = v17;
  v17[2] = nullptr;
  v18 = 1;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 4;
  v29 = 0;
  v30 = 1;
  v32 = 0;
  ptr = v35;
  v36 = 0;
  v34 = 0x400000000LL;
  v38 = 0;
  v2 = *a1;
  v37 = 0;
  v39 = 0;
  v3 = *(__int64 (**)(void))(v2 + 32);
  if ( v3 == sub_6A41B0 )
    v4 = ((__int64 (*)(void))sub_777E10)();
  else
    v4 = v3();
  v5 = *(__int64 (**)())(*a2 + 32);
  if ( v5 == sub_6A41B0 )
  {
    if ( v4 != sub_777E10(a2) )
      goto LABEL_5;
LABEL_23:
    v10 = 0;
    goto LABEL_9;
  }
  if ( v4 == ((__int64 (__fastcall *)(__int64 *))v5)(a2) )
    goto LABEL_23;
LABEL_5:
  v6 = *a2;
  v16 = a1;
  v7 = *(__int64 (**)())(v6 + 32);
  if ( v7 == sub_6A41B0 )
    v8 = sub_777E10(a2);
  else
    v8 = ((__int64 (__fastcall *)(__int64 *))v7)(a2);
  v15 = v8;
  v9 = sub_798D40(a1);
  v10 = sub_76FAA0(
          (__int64)&v16,
          v9,
          (__int64)a1,
          (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))sub_777AF0,
          (__int64)&v15,
          0);
  if ( (_BYTE)v10 )
    v10 = sub_773780(&v16);
LABEL_9:
  if ( ptr != v35 )
    free(ptr);
  if ( !v30 )
    free(v27);
  if ( (v18 & 1) == 0 )
    operator delete();
  v11 = (void **)v17[0];
  if ( v17[0] != v17 )
  {
    while ( 1 )
    {
      v12 = (void **)v11[2];
      v13 = (void **)*v11;
      if ( v12 != v11 + 4 )
        free(v12);
      operator delete(v11, 0x90u);
      if ( v13 == v17 )
        break;
      v11 = v13;
    }
  }
  return v10;
}

