_QWORD *__fastcall sub_255E20(_QWORD *a1, char *a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 v7; // rax
  __int64 v8; // r13
  void (__fastcall ***v9)(_QWORD); // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // r15
  char v13; // al
  void (__fastcall ***v14)(_QWORD); // rdi
  __int64 (__fastcall *v15)(__int64, __int64); // rdx
  __int64 v16; // rdx
  __int64 v17; // rdi
  void (__fastcall ***v18)(_QWORD); // rdi
  _DWORD *v19; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = byte_8BA544 == 0;
  v20[1] = __readfsqword(0x28u);
  *a1 = 0;
  if ( v3 )
    return a1;
  v7 = sub_383ED0(a2);
  v8 = v7;
  if ( v7 )
  {
    if ( a3 )
      *a3 = *(_QWORD *)(v7 + 40);
    v9 = (void (__fastcall ***)(_QWORD))*a1;
    if ( *a1 )
    {
      v3 = (*((_DWORD *)v9 + 2))-- == 1;
      if ( v3 )
        (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
    }
    v10 = *(_QWORD *)(v8 + 48);
    *a1 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    return a1;
  }
  v11 = 0;
  if ( !(_QWORD)xmmword_8CC458 )
    return a1;
  while ( 1 )
  {
    v12 = *((_BYTE **)qword_8CC450 + v11);
    if ( (v12[16] & 4) != 0 )
    {
      (*(void (__fastcall **)(_DWORD **, _BYTE *, char *))(*(_QWORD *)v12 + 64LL))(&v19, v12, a2);
      if ( v19 )
        break;
    }
LABEL_16:
    LODWORD(v8) = v8 + 1;
    v11 = (int)v8;
    if ( (int)v8 >= (unsigned __int64)xmmword_8CC458 )
      return a1;
  }
  v13 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
  v14 = (void (__fastcall ***)(_QWORD))v19;
  if ( !v13 )
  {
    if ( v19 )
    {
      v3 = v19[2]-- == 1;
      if ( v3 )
        (**v14)(v14);
    }
    goto LABEL_16;
  }
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL);
  if ( v15 == sub_226CE0 )
    (*(void (__fastcall **)(_QWORD *, _DWORD *))(*(_QWORD *)v19 + 24LL))(v20, v19);
  else
    v15((__int64)v20, (__int64)v19);
  v16 = *a1;
  if ( *a1 )
  {
    v3 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v3 )
      (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  }
  v17 = v20[0];
  *a1 = v20[0];
  if ( v17 && !*(_DWORD *)(v17 + 8) )
    (**(void (__fastcall ***)(__int64))v17)(v17);
  if ( a3 )
    *a3 = v12;
  v18 = (void (__fastcall ***)(_QWORD))v19;
  if ( v19 )
  {
    v3 = v19[2]-- == 1;
    if ( v3 )
      (**v18)(v18);
  }
  return a1;
}
