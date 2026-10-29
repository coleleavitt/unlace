__int64 __fastcall sub_1258400(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  _BYTE *v6; // rbp
  __int64 (__fastcall *v7)(__int64, unsigned int); // r8
  size_t v8; // r13
  _QWORD *v9; // rdx
  size_t v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int8 v13; // bl
  const char **v14; // r15
  const char *v15; // r13
  size_t v16; // rax
  size_t v17; // rdx
  size_t v18; // r14
  signed __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // bl
  char v22; // r12
  __int64 (__fastcall *v24)(__int64, unsigned int); // rax
  size_t v25; // rbx
  _QWORD *s1; // [rsp+10h] [rbp-68h]
  _QWORD *v27; // [rsp+20h] [rbp-58h] BYREF
  size_t v28; // [rsp+28h] [rbp-50h]
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v27 = v29;
  v6 = (_BYTE *)std::use_facet<std::ctype<char>>(a2);
  LOBYTE(v29[0]) = 0;
  v28 = 0;
  if ( a3 == a4 )
  {
    s1 = v29;
    v25 = 0;
  }
  else
  {
    do
    {
      v12 = *a3;
      v13 = *a3;
      if ( v6[v12 + 313] )
      {
        v13 = v6[v12 + 313];
      }
      else
      {
        v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 64LL);
        if ( v7 != sub_124D710 )
          v13 = ((__int64 (__fastcall *)(_BYTE *, _QWORD, _QWORD))v7)(v6, (unsigned int)(char)v12, 0);
        if ( v13 )
          v6[v12 + 313] = v13;
      }
      v8 = v28;
      v9 = v27;
      v10 = v28 + 1;
      if ( v27 == v29 )
        v11 = 15;
      else
        v11 = v29[0];
      if ( v10 > v11 )
      {
        sub_998B30((__int64)&v27, v28, 0, nullptr, 1u);
        v9 = v27;
      }
      *((_BYTE *)v9 + v8) = v13;
      ++a3;
      v28 = v10;
      *((_BYTE *)v27 + v8 + 1) = 0;
    }
    while ( a4 != a3 );
    v25 = v28;
    s1 = v27;
  }
  v14 = (const char **)off_2C863C0;
  while ( 1 )
  {
    v15 = *v14;
    v16 = strlen(*v14);
    v17 = v25;
    v18 = v16;
    if ( v16 <= v25 )
      v17 = v16;
    if ( !v17 || !memcmp(s1, v15, v17) )
    {
      v19 = v25 - v18;
      if ( (__int64)(v25 - v18) <= 0x7FFFFFFF && v19 >= (__int64)0xFFFFFFFF80000000LL && !(_DWORD)v19 )
        break;
    }
    if ( &off_2C867C0 == (_UNKNOWN **)++v14 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a1 + 16;
      *(_BYTE *)(a1 + 16) = 0;
      goto LABEL_28;
    }
  }
  v20 = ((char *)v14 - (char *)off_2C863C0) >> 3;
  v21 = v20;
  if ( v6[56] )
  {
    v22 = v6[(unsigned __int8)v20 + 57];
  }
  else
  {
    v22 = v20;
    std::ctype<char>::_M_widen_init(v6);
    v24 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 48LL);
    if ( v24 != sub_124D700 )
      v22 = v24((__int64)v6, v21);
    s1 = v27;
  }
  *(_BYTE *)(a1 + 16) = v22;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 17) = 0;
LABEL_28:
  if ( s1 != v29 )
    operator delete(s1);
  return a1;
}
