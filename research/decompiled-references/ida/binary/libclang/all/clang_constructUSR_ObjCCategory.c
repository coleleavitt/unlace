__int64 __fastcall clang_constructUSR_ObjCCategory(
        const char *src,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  size_t v6; // rax
  char *v7; // r10
  size_t v8; // r11
  char *v9; // r8
  size_t v10; // rax
  __int64 v11; // r12
  char *v13; // [rsp+18h] [rbp-128h]
  size_t v14; // [rsp+20h] [rbp-120h]
  __int64 *v15; // [rsp+28h] [rbp-118h] BYREF
  int v16; // [rsp+30h] [rbp-110h]
  __int128 v17; // [rsp+38h] [rbp-108h]
  __int64 v18; // [rsp+48h] [rbp-F8h]
  char v19; // [rsp+50h] [rbp-F0h]
  int v20; // [rsp+54h] [rbp-ECh]
  void **v21; // [rsp+58h] [rbp-E8h]
  void *ptr[3]; // [rsp+68h] [rbp-D8h] BYREF
  _WORD v23[96]; // [rsp+80h] [rbp-C0h] BYREF

  v23[0] = 14947;
  ptr[0] = v23;
  v15 = (__int64 *)&off_49DA340;
  v21 = ptr;
  ptr[2] = &qword_80;
  ptr[1] = &dword_0 + 2;
  v16 = 2;
  v19 = 0;
  v20 = 1;
  v18 = 0;
  v17 = 0;
  sub_2623850(&v15, 0, 0, 0, a5, a6);
  v6 = 0;
  v7 = (char *)a2;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = (char *)a2;
  }
  v8 = v6;
  v9 = (char *)src;
  v10 = 0;
  if ( src )
  {
    v13 = v7;
    v14 = v8;
    v10 = strlen(src);
    v7 = v13;
    v8 = v14;
    v9 = (char *)src;
  }
  sub_1118650(v9, v10, v7, v8, (void *)&byte_3B9466E, 0, (void *)&byte_3B9466E, 0);
  v11 = sub_6905C0(*v21, (size_t)v21[1]);
  v15 = &qword_4A6EA70[2];
  sub_2623770(&v15);
  if ( ptr[0] != v23 )
    free(ptr[0]);
  return v11;
}

