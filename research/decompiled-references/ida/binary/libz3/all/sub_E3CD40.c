__int64 __fastcall sub_E3CD40(__int64 a1, double a2)
{
  unsigned int v2; // ebp
  _QWORD *v3; // rsi
  bool v5; // r15
  void *v6; // rdi
  size_t v7; // rdx
  int v8; // r12d
  _BYTE *v9; // r15
  size_t v10; // r8
  size_t v11; // r12
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rdi
  void *v16; // [rsp+0h] [rbp-88h]
  void *s1; // [rsp+10h] [rbp-78h] BYREF
  size_t n; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v20; // [rsp+30h] [rbp-58h]
  size_t v21; // [rsp+38h] [rbp-50h]
  _QWORD s2[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 80);
  if ( !(_BYTE)v2 )
  {
    v3 = *(_QWORD **)(a1 + 56);
    v5 = 0;
    (*(void (__fastcall **)(void **))(*v3 + 48LL))(&s1);
    v20 = s2;
    v6 = s1;
    strcpy((char *)s2, "(incomplete");
    v21 = 11;
    if ( n )
    {
      v7 = 11;
      v3 = s2;
      if ( n <= 0xB )
        v7 = n;
      v8 = v7;
      v6 = s1;
      if ( !memcmp(s1, s2, v7) )
        v5 = v8 == 11;
    }
    *(_BYTE *)(a1 + 80) |= v5;
    if ( "(sat.giveup" < (char *)s2 || (char *)&s2[1] + 3 < "(sat.giveup" )
    {
      v9 = s2;
      qmemcpy(s2, "(sat.giveup", 11);
    }
    else
    {
      v3 = s2;
      std::string::_M_replace_cold();
      v6 = s1;
      v9 = v20;
    }
    v21 = 11;
    v9[11] = 0;
    v10 = v21;
    v11 = n;
    if ( v21 <= n )
      v11 = v21;
    if ( !v11 || (v3 = v9, v16 = (void *)v21, v12 = memcmp(v6, v9, v11), v10 = (size_t)v16, !v12) )
    {
      v13 = v11 - v10;
      if ( v13 <= 0x7FFFFFFF && v13 >= (__int64)0xFFFFFFFF80000000LL )
        LOBYTE(v2) = (_DWORD)v13 == 0;
    }
    LOBYTE(v2) = *(_BYTE *)(a1 + 80) | v2;
    *(_BYTE *)(a1 + 80) = v2;
    if ( (_BYTE)v2 )
    {
      sub_180B130(v6);
      if ( (unsigned __int8)sub_186A530(a2) )
      {
        sub_186A4C0(a2);
        sub_180B150(v6, v3);
        v14 = std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v14, "\n");
      }
      else
      {
        sub_180B150(v6, v3);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v2 = *(unsigned __int8 *)(a1 + 80);
      v9 = v20;
    }
    if ( v9 != (_BYTE *)s2 )
      operator delete(v9, s2[0] + 1LL);
    if ( s1 != &v19 )
      operator delete(s1, v19 + 1);
  }
  return v2;
}

