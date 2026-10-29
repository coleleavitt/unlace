__int64 __fastcall clang_constructUSR_ObjCMethod(char *src, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *CString; // rax
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // rax
  __int64 v12; // r14
  size_t v14; // r15
  const void *v15; // rsi
  __int64 *v16; // [rsp+8h] [rbp-118h] BYREF
  int v17; // [rsp+10h] [rbp-110h]
  __int128 v18; // [rsp+18h] [rbp-108h]
  void *dest; // [rsp+28h] [rbp-F8h]
  char v20; // [rsp+30h] [rbp-F0h]
  int v21; // [rsp+34h] [rbp-ECh]
  void **v22; // [rsp+38h] [rbp-E8h]
  void *ptr[3]; // [rsp+48h] [rbp-D8h] BYREF
  _WORD v24[96]; // [rsp+60h] [rbp-C0h] BYREF

  v24[0] = 14947;
  ptr[0] = v24;
  v16 = (__int64 *)&off_49DA340;
  ptr[2] = &qword_80;
  ptr[1] = &dword_0 + 2;
  v17 = 2;
  v20 = 0;
  v21 = 1;
  dest = nullptr;
  v22 = ptr;
  v18 = 0;
  sub_2623850(&v16, 0, 0, 0, a5, a6);
  CString = (const char *)clang_getCString(a3, a4);
  if ( CString )
  {
    v9 = CString;
    v10 = strlen(CString);
    if ( v10 > 1 && *(_WORD *)v9 == 14947 )
    {
      v14 = v10 - 2;
      v15 = v9 + 2;
      if ( *((_QWORD *)&v18 + 1) - (_QWORD)dest >= v10 - 2 )
      {
        if ( v10 != 2 )
        {
          memcpy(dest, v15, v14);
          dest = (char *)dest + v14;
        }
      }
      else
      {
        sub_26240F0(&v16, v15, v14);
      }
    }
  }
  v11 = 0;
  if ( src )
    v11 = strlen(src);
  sub_1118840(src, v11);
  v12 = sub_6905C0(*v22, (size_t)v22[1]);
  v16 = &qword_4A6EA70[2];
  sub_2623770(&v16);
  if ( ptr[0] != v24 )
    free(ptr[0]);
  return v12;
}

