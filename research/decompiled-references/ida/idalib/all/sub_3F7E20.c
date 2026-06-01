__int64 __fastcall sub_3F7E20(
        _QWORD *a1,
        void *a2,
        char a3,
        unsigned __int64 a4,
        unsigned int *a5,
        __int64 a6,
        char **a7)
{
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 i; // rax
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rcx
  const char *v19; // rdx
  __int64 v20; // r12
  const char *v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r15
  unsigned __int64 v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned int v28; // r13d
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v34; // [rsp+28h] [rbp-E8h]
  __int64 v35; // [rsp+38h] [rbp-D8h] BYREF
  void *v36; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C8h] BYREF
  void *v38; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+58h] [rbp-B8h]
  void *ptr; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+78h] [rbp-98h]
  __int64 v42; // [rsp+88h] [rbp-88h]
  void *v43; // [rsp+90h] [rbp-80h]
  __int128 v44; // [rsp+98h] [rbp-78h]
  char v45; // [rsp+B0h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+D8h] [rbp-38h]

  v10 = (_QWORD *)a1[8];
  v46 = __readfsqword(0x28u);
  v11 = sub_3BDE50(v10, (__int64)a2);
  v12 = a1[9];
  if ( a3 == 83 )
  {
    switch ( a4 )
    {
      case 9uLL:
      case 0xAuLL:
      case 0xBuLL:
        v28 = a4 - 9;
        break;
      case 0xCuLL:
      case 0xDuLL:
      case 0xEuLL:
        v28 = a4 - 12;
        break;
      case 0x15uLL:
      case 0x16uLL:
      case 0x17uLL:
        v28 = a4 - 18;
        break;
      case 0x18uLL:
      case 0x19uLL:
      case 0x1AuLL:
        v28 = a4 - 21;
        break;
      case 0x21uLL:
      case 0x22uLL:
        v28 = a4 - 27;
        break;
      case 0x23uLL:
      case 0x24uLL:
        v28 = a4 - 29;
        break;
      default:
        if ( (v11 < v12 || v11 >= a1[10]) && a4 == 0x8000 )
        {
          v27 = a1[3];
          ptr = nullptr;
          v38 = a2;
          v41 = 0;
          if ( sub_7BEED0(&v38, v27, &ptr, 1, 0x8000, 83) > 0 )
            sub_7BEF30(&v38, v27, ptr, v41, 0x8000, 83);
          if ( ptr )
          {
            *(_QWORD *)&v41 = 0;
            qfree(ptr);
          }
        }
        return 0;
    }
    if ( v11 >= v12 && v11 < a1[10] )
      return 0;
    v29 = sub_3BE900((_QWORD *)a1[8], v11, 0);
    if ( (v29 & 0x400) != 0 && ((~BYTE1(v29) & 6) == 0 || !v28) && (unsigned __int8)is_off(v29, v28) )
      sub_368890();
    v30 = 0x1E07E07E00LL;
    return _bittest64(&v30, a4) != 0;
  }
  if ( v11 >= v12 && v11 < a1[10] )
    return 0;
  if ( a3 == 103 )
  {
    if ( (_WORD)a4 )
      return 0;
    v24 = a4 >> 16;
    v25 = a1[8];
    ptr = &word_38;
    v44 = 0;
    *(_QWORD *)&v41 = -1;
    DWORD2(v41) = 0;
    v42 = -1;
    v43 = nullptr;
    if ( !(unsigned __int8)sub_5DAE70(v25, &ptr, v11, (unsigned int)v24) )
    {
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
      }
      return 0;
    }
    sub_5DB0C0(a1[8], v11, (unsigned int)v24, &ptr, 31);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    return 1;
  }
  if ( a4 != 0xFFFFFFFF || a3 != 112 )
    return 0;
  v14 = a1[3];
  v38 = nullptr;
  ptr = a2;
  v39 = 0;
  for ( i = sub_7BF580(&ptr, v14, &v38, 112); i > 0; i = sub_7BF600(&ptr, a1[3], &v38, v18, 112) )
  {
    v19 = haystack;
    ptr = a2;
    if ( (_QWORD)v39 )
      v19 = (const char *)v38;
    v20 = sub_7BF490(&ptr, a1[3], v19, 112);
    v21 = haystack;
    ptr = a2;
    if ( (_QWORD)v39 )
      v21 = (const char *)v38;
    v22 = a1[3];
    v35 = v20;
    sub_7BF4E0(&ptr, v22, v21, &v35, 8, 112);
    v23 = a1[3];
    ptr = nullptr;
    v41 = 0;
    v36 = a2;
    if ( sub_7BEED0(&v36, v23, &ptr, 1, v20, 108) > 0 )
      sub_7BEF30(&v36, v23, ptr, v41, v20, 108);
    if ( ptr )
    {
      *(_QWORD *)&v41 = 0;
      qfree(ptr);
    }
    v18 = haystack;
    ptr = a2;
    if ( (_QWORD)v39 )
      v18 = (const char *)v38;
  }
  qsnprintf((unsigned int)&v45, 32, (unsigned int)"%a", -1, v16, v17);
  if ( a6 == 4 )
  {
    v26 = a1[3];
    ptr = a2;
    v37 = *a5;
    sub_7BE7C0(&ptr, v26, -1, &v37, 8, 112);
    result = 1;
  }
  else
  {
    sub_35A790(a7);
    result = 0;
  }
  if ( v38 )
  {
    v34 = result;
    *(_QWORD *)&v39 = 0;
    qfree(v38);
    return v34;
  }
  return result;
}
