__int64 __fastcall clang_constructUSR_ObjCProperty(
        char *src,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *CString; // rax
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // rax
  __int64 v11; // r14
  size_t v13; // r14
  const void *v14; // rsi
  __int64 *v15; // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  void *dest; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  void **vars28; // [rsp+30h] [rbp+28h]
  void *ptr[3]; // [rsp+40h] [rbp+38h] BYREF
  _WORD vars50[76]; // [rsp+58h] [rbp+50h] BYREF
  int *varsE8; // [rsp+F0h] [rbp+E8h]

  varsE8 = &vars0;
  vars50[0] = 14947;
  ptr[2] = &qword_80;
  ptr[0] = vars50;
  vars0 = 2;
  v15 = (__int64 *)&off_49DA340;
  ptr[1] = &dword_0 + 2;
  vars20 = 0;
  vars24 = 1;
  dest = nullptr;
  vars28 = ptr;
  vars8 = 0;
  sub_2623850(&v15, 0, 0, 0, a5, a6);
  CString = (const char *)clang_getCString(a2, a3);
  if ( CString )
  {
    v8 = CString;
    v9 = strlen(CString);
    if ( v9 > 1 && *(_WORD *)v8 == 14947 )
    {
      v13 = v9 - 2;
      v14 = v8 + 2;
      if ( *((_QWORD *)&vars8 + 1) - (_QWORD)dest >= v9 - 2 )
      {
        if ( v9 != 2 )
        {
          memcpy(dest, v14, v13);
          dest = (char *)dest + v13;
        }
      }
      else
      {
        sub_26240F0(&v15, v14, v13);
      }
    }
  }
  v10 = 0;
  if ( src )
    v10 = strlen(src);
  sub_11188F0(src, v10);
  v11 = sub_6905C0(*vars28, (size_t)vars28[1]);
  v15 = &qword_4A6EA70[2];
  sub_2623770(&vars0);
  if ( ptr[0] != vars50 )
    free(ptr[0]);
  return v11;
}

