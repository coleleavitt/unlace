_QWORD *__fastcall sub_7EA750(char *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  int v4; // edx
  void **v5; // r14
  __int64 v6; // rbp
  void **v7; // r12
  __int64 i; // r13
  void *v9; // rdi
  bool (__fastcall *v10)(__int64, char **, __int64); // r8
  void (__fastcall *v11)(_QWORD *); // rax
  _QWORD *v13; // rdi
  char *v15; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+28h] [rbp-B0h]
  char *v18; // [rsp+40h] [rbp-98h] BYREF
  void *ptr; // [rsp+48h] [rbp-90h] BYREF
  __int128 v20; // [rsp+50h] [rbp-88h]
  __int64 v21; // [rsp+60h] [rbp-78h]
  __int128 v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+78h] [rbp-60h]
  __int128 v24; // [rsp+80h] [rbp-58h]
  __int64 v25; // [rsp+90h] [rbp-48h]
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v15 = a1;
  v26 = __readfsqword(0x28u);
  v16 = 0;
  v3 = (_QWORD *)operator new(0x68u);
  LODWORD(v18) = 0;
  ptr = nullptr;
  v17 = 0;
  v20 = 0;
  sub_7DFA40((__int64 *)&ptr, &v16);
  v4 = (int)v18;
  *((_BYTE *)v3 + 8) = 35;
  *((_OWORD *)v3 + 2) = 0;
  v5 = (void **)ptr;
  *v3 = &off_2B3BAD0;
  v6 = v20;
  *((_DWORD *)v3 + 4) = v4;
  v3[3] = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v22 = 0;
  v24 = 0;
  sub_7DFA40(v3 + 3, &ptr);
  v3[6] = 0;
  v3[9] = 0;
  v3[12] = 0;
  *(_OWORD *)(v3 + 7) = 0;
  *((_OWORD *)v3 + 5) = 0;
  if ( v5 )
  {
    if ( v6 )
    {
      v7 = v5;
      for ( i = 0; i != v6; ++i )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = nullptr;
          qfree(v9);
        }
        v7 += 3;
      }
    }
    qfree(v5);
  }
  if ( v15 )
  {
    v10 = *(bool (__fastcall **)(__int64, char **, __int64))(*v3 + 24LL);
    if ( v10 == sub_7E8F20 )
    {
      v18 = v15;
      if ( !__CFADD__(a2, v15) && sub_7E8B00((__int64)(v3 + 2), &v18, a2) )
        return v3;
    }
    else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, char **, __int64, _QWORD))v10)(v3, &v15, a2, a3) )
    {
      return v3;
    }
    if ( v3 )
    {
      v11 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
      if ( v11 != sub_7DEA30 )
      {
        v13 = v3;
        v3 = nullptr;
        v11(v13);
        return v3;
      }
      *v3 = &off_2B3BAD0;
      sub_7E3060(v3 + 2);
      operator delete(v3, 0x68u);
    }
    return nullptr;
  }
  return v3;
}
