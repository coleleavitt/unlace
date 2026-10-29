_BYTE *__fastcall sub_5679E0(_QWORD *a1, _BYTE *a2)
{
  unsigned __int64 v2; // r15
  _BYTE *v3; // rbx
  char v4; // al
  void *ptr; // [rsp+10h] [rbp-70h]
  _BYTE *v7; // [rsp+18h] [rbp-68h] BYREF
  char *v8; // [rsp+28h] [rbp-58h] BYREF
  void *v9; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-38h]

  v2 = 0;
  v3 = a2;
  v7 = a2;
  v12 = __readfsqword(0x28u);
  v11 = 0;
  ptr = nullptr;
  while ( 1 )
  {
    v8 = v3 + 1;
    v9 = ptr;
    v10 = v2;
    v4 = sub_567540((__int64)&v9, &v8);
    v2 = v10;
    ptr = v9;
    if ( !v4 || v10 <= 1 || !(unsigned int)get_named_type(*a1, (_DWORD)v9, 1, (unsigned int)&v7, 0, 0, 0, 0, 0) )
      break;
    v3 = v7;
    if ( (*v7 & 0x3F) != 0x3D )
      goto LABEL_7;
  }
  v3 = nullptr;
LABEL_7:
  if ( ptr )
    qfree(ptr);
  return v3;
}
