__int64 __fastcall clang_constructUSR_ObjCClass(char *s, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v6; // rax
  __int64 v7; // r14
  __int64 *v9; // [rsp+10h] [rbp-108h] BYREF
  int v10; // [rsp+18h] [rbp-100h]
  __int128 v11; // [rsp+20h] [rbp-F8h]
  __int64 v12; // [rsp+30h] [rbp-E8h]
  char v13; // [rsp+38h] [rbp-E0h]
  int v14; // [rsp+3Ch] [rbp-DCh]
  void **v15; // [rsp+40h] [rbp-D8h]
  void *ptr[3]; // [rsp+50h] [rbp-C8h] BYREF
  _WORD v17[88]; // [rsp+68h] [rbp-B0h] BYREF

  v17[0] = 14947;
  v15 = ptr;
  v9 = (__int64 *)&off_49DA340;
  ptr[0] = v17;
  ptr[2] = &qword_80;
  ptr[1] = &dword_0 + 2;
  v10 = 2;
  v13 = 0;
  v14 = 1;
  v12 = 0;
  v11 = 0;
  sub_2623850(&v9, 0, 0, 0, a5, a6);
  v6 = 0;
  if ( s )
    v6 = strlen(s);
  sub_11182A0(s, v6, &v9, &byte_3B9466E, 0, 0, &byte_3B9466E, 0);
  v7 = sub_6905C0(*v15, (size_t)v15[1]);
  v9 = &qword_4A6EA70[2];
  sub_2623770(&v9);
  if ( ptr[0] != v17 )
    free(ptr[0]);
  return v7;
}

