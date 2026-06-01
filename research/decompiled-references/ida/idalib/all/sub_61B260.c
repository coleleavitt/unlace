__int64 __fastcall sub_61B260(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  const char *v6; // r12
  _BYTE *v7; // r15
  size_t v8; // rax
  unsigned int *v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  while ( 1 )
  {
    result = idt_get_next(a3, &v9);
    if ( (_DWORD)result )
      break;
    v5 = *a1;
    v6 = *((const char **)v9 + 1);
    v10[0] = *v9;
    if ( !v6 )
      v6 = &byte_22F0C30;
    sub_7BF4E0(a1 + 325, v5, v6, v10, 8, 72);
    sub_7BF4E0(a1 + 325, *a1, v6, v9 + 5, 4, 65);
    v7 = *((_BYTE **)v9 + 3);
    if ( v7 && *v7 )
    {
      v8 = strlen(*((const char **)v9 + 3));
      sub_7BF4E0(a1 + 325, *a1, v6, v7, v8, 83);
    }
  }
  if ( (_DWORD)result == 4 )
    return 0;
  return result;
}
