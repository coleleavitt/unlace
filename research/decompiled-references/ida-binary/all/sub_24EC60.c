__int64 __fastcall sub_24EC60(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  int v8; // r15d
  __int64 v9; // rax
  _DWORD *v10; // r12
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  char v16; // al
  int v17; // ebp
  unsigned int v18; // eax
  void (__fastcall ***v19)(_QWORD); // rdi
  bool v20; // zf
  __int64 (__fastcall *v21)(__int64, __int64); // rdx
  bool v24; // [rsp+15h] [rbp-73h]
  char v25; // [rsp+17h] [rbp-71h]
  __int64 v26; // [rsp+18h] [rbp-70h]
  _DWORD *v29; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+40h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( !byte_8BA544 )
    return 0;
  v26 = get_item_end(a2) - a2;
  v25 = a5 & 1;
  if ( !(_QWORD)xmmword_8CC458 )
    return 0;
  v24 = a1 != nullptr;
  v8 = 0;
  v9 = 0;
  while ( 2 )
  {
    v10 = *((_DWORD **)qword_8CC450 + v9);
    if ( v24 && v10 != a1 )
      goto LABEL_36;
    v11 = v10[4];
    if ( (v11 & 4) == 0 )
      goto LABEL_36;
    v12 = 1;
    if ( !v25 )
    {
      v12 = 0;
      if ( (v11 & 1) != 0 )
      {
        v12 = (unsigned int)dword_8CC428;
        if ( (_DWORD)dword_8CC428 )
        {
          v13 = qword_8CC430;
          v14 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
          if ( qword_8CC430 == v14 )
            goto LABEL_38;
          while ( (_DWORD)dword_8CC428 != *(_DWORD *)v13 )
          {
            v13 += 256;
            if ( v14 == v13 )
              goto LABEL_38;
          }
          if ( !v13 )
          {
LABEL_38:
            v12 = 0;
          }
          else
          {
            v12 = *(unsigned __int8 *)(v13 + 34);
            v25 = *(_BYTE *)(v13 + 34);
          }
        }
      }
    }
    (*(void (__fastcall **)(_DWORD **, _DWORD *, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v10 + 48LL))(
      &v29,
      v10,
      a2,
      v26,
      a3,
      v12);
    v15 = v29;
    v16 = v24 && v10 != a1;
    if ( v29 )
    {
      v16 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 8LL))(v29);
      v15 = v29;
    }
    v17 = 0;
    v5 = 0;
    while ( !v5 && v16 )
    {
      v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL);
      if ( v21 == sub_1992A0 )
      {
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v15 + 24LL))(v30);
        if ( !v30[0] )
          goto LABEL_29;
      }
      else
      {
        ((void (__fastcall *)(_QWORD *))v21)(v30);
        if ( !v30[0] )
        {
LABEL_29:
          v5 = 0;
          goto LABEL_24;
        }
      }
      ++v17;
      v18 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)a4 + 16LL))(a4, v10, v30);
      v19 = (void (__fastcall ***)(_QWORD))v30[0];
      v5 = v18;
      if ( v30[0] )
      {
        v20 = (*(_DWORD *)(v30[0] + 8LL))-- == 1;
        if ( v20 )
          (**v19)(v19);
      }
LABEL_24:
      v16 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 16LL))(v29);
      v15 = v29;
    }
    if ( (!v17 || (a5 & 2) == 0) && !v5 )
    {
      if ( v15 )
      {
        v20 = v15[2]-- == 1;
        if ( v20 )
          (**(void (__fastcall ***)(_DWORD *))v15)(v15);
      }
LABEL_36:
      v9 = ++v8;
      if ( v8 >= (unsigned __int64)xmmword_8CC458 )
        return 0;
      continue;
    }
    break;
  }
  if ( v15 )
  {
    v20 = v15[2]-- == 1;
    if ( v20 )
      (**(void (__fastcall ***)(_DWORD *))v15)(v15);
  }
  return v5;
}
