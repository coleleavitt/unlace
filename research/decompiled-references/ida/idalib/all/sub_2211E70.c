__int64 __fastcall sub_2211E70(
        unsigned __int8 (__fastcall ***a1)(_QWORD, _QWORD),
        __int64 a2,
        unsigned __int8 (__fastcall ***a3)(_QWORD, __int64),
        unsigned __int8 (__fastcall ***a4)(_QWORD, __int64),
        int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int8 (__fastcall ***v15)(_QWORD, _QWORD); // rdi
  int v16; // eax
  int v17; // r14d
  unsigned int v18; // ebp
  unsigned __int8 (__fastcall *v19)(_QWORD, __int64); // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  const void *v25; // rax
  size_t v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // ebp
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned int v32; // ebp
  __int64 v33; // rax
  unsigned __int8 (__fastcall *v34)(_QWORD, __int64); // r12
  __int64 v35; // rax
  unsigned __int8 (__fastcall ***v36)(_QWORD, _QWORD); // rdi
  __int64 v37; // rax
  __int64 v38; // r12
  const void *v39; // rax
  size_t v40; // rdx
  _QWORD v41[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = sub_227D600(a1);
  v10 = sub_995540(v9, "  ");
  v11 = *(_QWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 24);
  v41[2] = 2;
  v13 = v10;
  v41[0] = v11;
  v41[1] = v12;
  sub_2211550(v10, (__int64)v41);
  v14 = sub_227D600(v13);
  sub_227D090(v14, (unsigned int)(a5 - *(_DWORD *)(a2 + 24)));
  v15 = a1;
  v16 = ((__int64 (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD, _QWORD)))(*a1)[2])(a1);
  if ( v16 )
  {
    v17 = v16;
    v18 = 0;
    while ( 1 )
    {
      v19 = **a3;
      v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD))(*a1)[6])(a1, v18);
      v15 = a3;
      if ( v19(a3, v20) )
        break;
      if ( v17 == ++v18 )
        goto LABEL_5;
    }
    v23 = sub_227D600(a3);
    v24 = sub_995540(v23, "= ");
    v25 = (const void *)((__int64 (__fastcall *)(_QWORD, _QWORD))(*a1)[3])(a1, v18);
    sub_9954E0(v24, v25, v26);
    v27 = v18;
    v28 = 0;
    (*a1)[3](a1, v27);
    if ( v29 < 8 )
      v28 = 8 - v29;
    v30 = sub_227D600(a1);
    v31 = v28;
    v32 = 0;
    v33 = sub_227D090(v30, v31);
    sub_995540(v33, " (default: ");
    while ( 1 )
    {
      v34 = **a4;
      v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD))(*a1)[6])(a1, v32);
      v36 = a4;
      if ( v34(a4, v35) )
        break;
      if ( v17 == ++v32 )
        goto LABEL_11;
    }
    v38 = sub_227D600(a4);
    v39 = (const void *)((__int64 (__fastcall *)(_QWORD, _QWORD))(*a1)[3])(a1, v32);
    v36 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))v38;
    sub_9954E0(v38, v39, v40);
LABEL_11:
    v37 = sub_227D600(v36);
    return sub_995540(v37, ")\n");
  }
  else
  {
LABEL_5:
    v21 = sub_227D600(v15);
    return sub_995540(v21, "= *unknown option value*\n");
  }
}
