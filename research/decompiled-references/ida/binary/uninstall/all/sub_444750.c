__int64 __fastcall sub_444750(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char *a6,
        __int64 a7,
        int a8,
        char *a9,
        int *a10,
        char *a11)
{
  __int64 v11; // r13
  __int64 v12; // rdx
  char *v13; // r15
  char *v14; // rbp
  int *v15; // r12
  char *v16; // rbx
  __int64 result; // rax
  char v20; // [rsp+34h] [rbp-44h] BYREF
  char v21; // [rsp+38h] [rbp-40h] BYREF
  char v22; // [rsp+3Ch] [rbp-3Ch] BYREF
  char v23; // [rsp+40h] [rbp-38h] BYREF

  v11 = a2;
  if ( !a2 )
    v11 = qword_65A5A8;
  v12 = (unsigned int)a4;
  v13 = a6;
  v14 = a9;
  v15 = a10;
  v16 = a11;
  if ( !a3 )
  {
    v12 = 0;
    if ( a6 )
      goto LABEL_7;
    goto LABEL_15;
  }
  if ( a4 < 0 )
    v12 = (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(v11 + 48))(a3, a2, (unsigned int)a4);
  if ( !v13 )
  {
LABEL_15:
    a5 |= 3u;
    v13 = &v23;
  }
LABEL_7:
  if ( !a9 )
    v14 = &v22;
  if ( !a10 )
    v15 = (int *)&v21;
  if ( !a11 )
    v16 = &v20;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, char *, __int64, int, char *, int *, char *))(v11 + 8))(
             *(_QWORD *)(v11 + 40),
             a3,
             v12,
             a5,
             v13,
             a7,
             a8 - 1,
             v14,
             v15,
             v16);
  *(_BYTE *)(*v15 + a7) = 0;
  return result;
}

