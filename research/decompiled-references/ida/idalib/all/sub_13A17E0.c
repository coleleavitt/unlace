__int64 __fastcall sub_13A17E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  unsigned int v4; // r13d
  char v6; // r15
  std::_V2 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  unsigned int v10; // [rsp+14h] [rbp-94h] BYREF
  _QWORD *v11; // [rsp+18h] [rbp-90h] BYREF
  _QWORD *v12; // [rsp+20h] [rbp-88h] BYREF
  char v13; // [rsp+28h] [rbp-80h]
  _QWORD *v14[4]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h]
  _BYTE v17[72]; // [rsp+60h] [rbp-48h] BYREF

  sub_202A150(&v12, a2, 8, 0);
  v2 = v12;
  if ( v12 )
  {
    v12 = nullptr;
    v14[0] = v2;
    sub_A05760(&ptr, v14);
    if ( v14[0] )
      (*(void (__fastcall **)(_QWORD *))(*v14[0] + 8LL))(v14[0]);
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v3 = v12;
    v4 = 7;
    if ( v12 )
LABEL_7:
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (std::_V2 *)v14;
      v10 = 0;
      sub_13A0390((unsigned __int64)v14, a2, &v10);
      if ( LODWORD(v14[0]) == 2 )
        goto LABEL_19;
      if ( LODWORD(v14[0]) == 3 )
        break;
      ptr = v17;
      v16 = 0x100000000LL;
      sub_2027F10(&v12, a2, v10, &ptr, 0);
      if ( (v13 & 1) != 0 )
      {
        v9 = v12;
        v12 = nullptr;
        v11 = v9;
        v4 = sub_2220DB0(&v11);
        if ( v11 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
        goto LABEL_33;
      }
      if ( (_DWORD)v12 == 1 )
      {
        if ( !(_DWORD)v16 )
        {
          if ( !qword_2CD8AA0 )
            sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
          v4 = 10;
          goto LABEL_33;
        }
        if ( *(_QWORD *)ptr > 2u )
        {
          if ( !qword_2CD8AA0 )
            sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
          v4 = 11;
LABEL_33:
          sub_A0AE90((__int64 *)&v12);
          if ( ptr != v17 )
            free(ptr);
          return v4;
        }
        v6 = 1;
      }
      sub_A0AE90((__int64 *)&v12);
      if ( ptr != v17 )
        free(ptr);
    }
    v7 = (std::_V2 *)&v11;
    sub_A0BAF0((__int64 *)&v11, a2);
    v8 = v11;
    if ( !v11 )
    {
LABEL_19:
      if ( v6 )
      {
        v4 = 0;
        std::_V2::system_category(v7);
      }
      else
      {
        if ( !qword_2CD8AA0 )
          sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
        return 10;
      }
      return v4;
    }
    v11 = nullptr;
    v12 = v8;
    sub_A05760(&ptr, &v12);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v3 = v11;
    v4 = 7;
    if ( v11 )
      goto LABEL_7;
  }
  return v4;
}
