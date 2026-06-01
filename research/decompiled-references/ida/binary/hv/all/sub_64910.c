__int64 __fastcall sub_64910(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, char a5, double a6)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v11; // r8
  void *v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 (*v15)(); // rax
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(_QWORD *, unsigned __int8, __int64); // rax
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  unsigned int v20; // [rsp+8h] [rbp-E0h]
  unsigned int v22; // [rsp+18h] [rbp-D0h]
  __int64 v23; // [rsp+18h] [rbp-D0h]
  __int64 v24; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+38h] [rbp-B0h]
  _BYTE v28[88]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp-40h]

  v8 = *a1;
  v29 = __readfsqword(0x28u);
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(v8 + 32))(a1, &v24, a3, 1);
  if ( v9 )
    return v9;
  memset(v28, 0, sizeof(v28));
  sub_92BC0(v28, a6);
  ptr = nullptr;
  v27 = 0;
  if ( byte_165A12 )
  {
    v11 = 4096;
    goto LABEL_22;
  }
  v11 = qword_165658;
  v12 = nullptr;
  if ( qword_165658 )
  {
LABEL_22:
    v23 = v11;
    ptr = (void *)sub_96080(&ptr, 0, v11, 1);
    v11 = v23;
    v12 = ptr;
  }
  *(_QWORD *)&v27 = v11;
  v13 = 0;
  while ( 1 )
  {
    v25 = v11;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, void *))(*(_QWORD *)v24 + 16LL))(v24, &v25, v12);
    if ( v16 || !v25 )
      break;
    sub_932D0(v28, ptr, v25);
    v17 = v25;
    if ( !a5 )
      goto LABEL_8;
    v18 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
    if ( v18 != sub_34880 )
    {
      v18(a1, 1u, v25);
LABEL_14:
      v17 = v25;
      goto LABEL_8;
    }
    v14 = a1[3];
    if ( v14 )
    {
      v15 = *(__int64 (**)())(*(_QWORD *)v14 + 8LL);
      if ( v15 != sub_34740 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64))v15)(v14, 1, v25);
        goto LABEL_14;
      }
    }
LABEL_8:
    v13 += v17;
    v11 = v27;
    v12 = ptr;
  }
  v22 = v16;
  sub_93510(a2, v28);
  if ( a4 )
    *a4 = v13;
  v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL);
  if ( v22 )
  {
    v19(v24, 0);
    v9 = v22;
  }
  else
  {
    v9 = v19(v24, 1);
  }
  if ( ptr )
  {
    v20 = v9;
    *(_QWORD *)&v27 = 0;
    j__free(ptr);
    return v20;
  }
  return v9;
}

