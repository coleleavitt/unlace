__int64 __fastcall sub_777CB0(_QWORD *a1, char a2)
{
  bool v2; // zf
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 i; // r14
  unsigned int v6; // eax
  void (*v7)(); // rax
  __int64 v8; // rbp
  int v9; // eax
  void (*v10)(); // rcx
  void (*v11)(); // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64); // rax
  void (*v15)(); // rdx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v2 = a1[7] == 0;
  v19 = __readfsqword(0x28u);
  if ( v2 )
  {
    v12 = -1;
    goto LABEL_18;
  }
  v3 = 0;
  v4 = 0;
  for ( i = 0; ; i += (__int64)&stru_10000 )
  {
    v8 = v3 + a1[6];
    if ( a2 )
      goto LABEL_3;
    sub_777860((__int64)a1, 0x2E8BA2E8BA2E8BA3LL * (v3 >> 4), v3 + a1[6], nullptr);
    v9 = *(_DWORD *)(v8 + 168);
    if ( (v9 & 1) == 0 )
      goto LABEL_7;
    v6 = v9 & 0xFFFFFFFE;
    *(_DWORD *)(v8 + 168) = v6;
    v10 = *(void (**)())(*a1 + 152LL);
    if ( v10 != nullsub_240 )
    {
      ((void (__fastcall *)(_QWORD *, unsigned __int64))v10)(a1, v4);
LABEL_3:
      v6 = *(_DWORD *)(v8 + 168);
    }
    if ( (v6 & 2) != 0 )
    {
      v7 = *(void (**)())(*a1 + 16LL);
      if ( v7 != nullsub_232 )
        ((void (__fastcall *)(_QWORD *, __int64))v7)(a1, i);
    }
    else
    {
      ptr = nullptr;
      v18 = 0;
      sub_7753D0((__int64 *)&ptr, v8);
      v11 = *(void (**)())(*a1 + 24LL);
      if ( v11 != nullsub_233 )
        ((void (__fastcall *)(_QWORD *, __int64, void **))v11)(a1, i, &ptr);
      if ( ptr )
      {
        *(_QWORD *)&v18 = 0;
        qfree(ptr);
      }
    }
LABEL_7:
    ++v4;
    v3 += 176;
    if ( v4 >= a1[7] )
      break;
  }
  v12 = i + 0xFFFF;
LABEL_18:
  v13 = *a1;
LABEL_19:
  v14 = *(__int64 (__fastcall **)(__int64))(v13 + 48);
  if ( v14 == sub_773550 )
  {
LABEL_20:
    v12 = a1[17];
    if ( v12 != -1 )
      goto LABEL_21;
  }
  else
  {
    while ( 1 )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD *, __int64))v14)(a1, v12);
      if ( v12 == -1 )
        break;
LABEL_21:
      v13 = *a1;
      v15 = *(void (**)())(*a1 + 16LL);
      if ( v15 == nullsub_232 )
        goto LABEL_19;
      ((void (__fastcall *)(_QWORD *, __int64))v15)(a1, v12);
      v14 = *(__int64 (__fastcall **)(__int64))(*a1 + 48LL);
      if ( v14 == sub_773550 )
        goto LABEL_20;
    }
  }
  return 1;
}
