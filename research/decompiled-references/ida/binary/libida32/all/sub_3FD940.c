__int64 __fastcall sub_3FD940(
        __int64 a1,
        unsigned int *a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, __int64),
        __int64 a4)
{
  bool v5; // zf
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  char v9; // r14
  __int64 result; // rax
  unsigned int v11; // [rsp+10h] [rbp-48h] BYREF
  char v12; // [rsp+14h] [rbp-44h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v5 = *(_BYTE *)(a1 + 2233) == 0;
  v13 = __readfsqword(0x28u);
  if ( !v5 )
    return sub_3FC340(a1 + 1808, a2, a3, a4);
  v7 = *a2;
  if ( *a2 >= a2[1] )
    return 0;
  while ( 1 )
  {
    v12 = 0;
    v11 = -1;
    sub_3FD660((_QWORD *)a1, (__int64)&v11, v7);
    v8 = v11;
    v9 = v12;
    if ( v11 != -1 )
      break;
LABEL_8:
    if ( ++v7 >= a2[1] )
      return 0;
  }
  while ( 1 )
  {
    result = a3(v8, (unsigned int)v9, a4);
    if ( result )
      return result;
    v11 = v8;
    v12 = v9;
    sub_3FD7C0((_QWORD *)a1, &v11, v7);
    v8 = v11;
    v9 = v12;
    if ( v11 == -1 )
      goto LABEL_8;
  }
}

