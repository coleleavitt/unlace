__int64 __fastcall clang_constructUSR_ObjCProtocol(
        char *src,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  size_t v6; // rax
  __int64 v7; // r14
  __int64 *v9; // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  void **vars28; // [rsp+30h] [rbp+28h]
  void *ptr[3]; // [rsp+40h] [rbp+38h] BYREF
  _WORD vars50[72]; // [rsp+58h] [rbp+50h] BYREF
  int *varsE0; // [rsp+E8h] [rbp+E0h]

  varsE0 = &vars0;
  vars50[0] = 14947;
  vars28 = ptr;
  ptr[0] = vars50;
  vars0 = 2;
  v9 = (__int64 *)&off_49DA340;
  ptr[2] = &qword_80;
  ptr[1] = &dword_0 + 2;
  vars20 = 0;
  vars24 = 1;
  vars18 = 0;
  vars8 = 0;
  sub_2623850(&v9, 0, 0, 0, a5, a6);
  v6 = 0;
  if ( src )
    v6 = strlen(src);
  sub_11189D0(src, v6);
  v7 = sub_6905C0(*vars28, (size_t)vars28[1]);
  v9 = &qword_4A6EA70[2];
  sub_2623770(&vars0);
  if ( ptr[0] != vars50 )
    free(ptr[0]);
  return v7;
}

