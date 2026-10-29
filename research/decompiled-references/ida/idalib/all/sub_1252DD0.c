__int64 __fastcall sub_1252DD0(__int64 a1, char *a2, char *a3, char a4)
{
  char *v4; // r14
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64, unsigned int); // r8
  size_t v9; // rax
  size_t v10; // r10
  unsigned __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rcx
  char v14; // bl
  size_t v15; // rbp
  _QWORD *v16; // r13
  _UNKNOWN **v17; // rbx
  size_t i; // r14
  size_t v19; // rdx
  signed __int64 v20; // rax
  unsigned int v21; // ebx
  size_t v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  size_t v25; // [rsp+10h] [rbp-68h]
  void *s1; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  v6 = std::use_facet<std::ctype<char>>(a1);
  LOBYTE(v29[0]) = 0;
  n = 0;
  v7 = v6;
  s1 = v29;
  if ( a2 == a3 )
  {
    v16 = v29;
    v15 = 0;
  }
  else
  {
    do
    {
      v13 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, (unsigned int)*v4);
      v14 = v13;
      if ( *(_BYTE *)(v7 + v13 + 313) )
      {
        v14 = *(_BYTE *)(v7 + v13 + 313);
      }
      else
      {
        v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v7 + 64LL);
        if ( v8 != sub_124D710 )
        {
          v24 = v13;
          v12 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v8)(v7, (unsigned int)(char)v13, 0);
          v13 = v24;
          v14 = v12;
        }
        if ( v14 )
          *(_BYTE *)(v7 + v13 + 313) = v14;
      }
      v9 = n;
      v10 = n + 1;
      if ( s1 == v29 )
        v11 = 15;
      else
        v11 = v29[0];
      if ( v10 > v11 )
      {
        v25 = n + 1;
        v23 = n;
        sub_998B30((__int64)&s1, n, 0, nullptr, 1u);
        v9 = v23;
        v10 = v25;
        *((_BYTE *)s1 + v23) = v14;
      }
      else
      {
        *((_BYTE *)s1 + n) = v14;
      }
      ++v4;
      n = v10;
      *((_BYTE *)s1 + v9 + 1) = 0;
    }
    while ( a3 != v4 );
    v15 = n;
    v16 = s1;
  }
  v17 = &off_2BAF140;
  for ( i = 1; ; i = strlen((const char *)*v17) )
  {
    v19 = i;
    if ( v15 <= i )
      v19 = v15;
    if ( !v19 || !memcmp(v16, *v17, v19) )
    {
      v20 = v15 - i;
      if ( (__int64)(v15 - i) <= 0x7FFFFFFF && v20 >= (__int64)0xFFFFFFFF80000000LL && !(_DWORD)v20 )
        break;
    }
    v17 += 2;
    if ( &off_2BAF230 == v17 )
    {
      v21 = 0;
      goto LABEL_31;
    }
  }
  if ( a4 && ((_WORD)v17[1] & 0x300) != 0 )
    v21 = 1024;
  else
    v21 = *((_DWORD *)v17 + 2);
LABEL_31:
  if ( v16 != v29 )
    operator delete(v16);
  return v21;
}
