_QWORD *__fastcall sub_E4ED0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  bool v5; // zf
  int v6; // ebx
  _BYTE *v7; // r15
  char v8; // al
  void (__fastcall ***v9)(_QWORD); // rdi
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  void (__fastcall ***v12)(_QWORD); // rdx
  __int64 v13; // rdi
  void (__fastcall ***v14)(_QWORD); // rdi
  _DWORD *v16; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v4 = 0;
  v5 = byte_245140 == 0;
  *a1 = 0;
  if ( v5 || !(_QWORD)xmmword_2525B8 )
    return a1;
  v6 = 0;
  while ( 1 )
  {
    v7 = *((_BYTE **)qword_2525B0 + v4);
    if ( (v7[16] & 4) != 0 )
    {
      (*(void (__fastcall **)(_DWORD **, _BYTE *, __int64))(*(_QWORD *)v7 + 64LL))(&v16, v7, a2);
      if ( v16 )
        break;
    }
LABEL_10:
    v4 = ++v6;
    if ( v6 >= (unsigned __int64)xmmword_2525B8 )
      return a1;
  }
  v8 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
  v9 = (void (__fastcall ***)(_QWORD))v16;
  if ( !v8 )
  {
    if ( v16 )
    {
      v5 = v16[2]-- == 1;
      if ( v5 )
        (**v9)(v9);
    }
    goto LABEL_10;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL);
  if ( v11 == sub_B7850 )
    (*(void (__fastcall **)(_QWORD *, _DWORD *))(*(_QWORD *)v16 + 24LL))(v17, v16);
  else
    v11((__int64)v17, (__int64)v16);
  v12 = (void (__fastcall ***)(_QWORD))*a1;
  if ( *a1 )
  {
    v5 = (*((_DWORD *)v12 + 2))-- == 1;
    if ( v5 )
      (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  }
  v13 = v17[0];
  *a1 = v17[0];
  if ( v13 && !*(_DWORD *)(v13 + 8) )
    (**(void (__fastcall ***)(__int64))v13)(v13);
  if ( a3 )
    *a3 = v7;
  v14 = (void (__fastcall ***)(_QWORD))v16;
  if ( v16 )
  {
    v5 = v16[2]-- == 1;
    if ( v5 )
      (**v14)(v14);
  }
  return a1;
}

