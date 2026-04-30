unsigned __int64 __fastcall sub_174A70(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5)
{
  char *v5; // r15
  char *v8; // rbp
  char *v9; // rax
  char *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17[2]; // [rsp+8h] [rbp-50h]
  char needle[3]; // [rsp+12h] [rbp-46h] BYREF
  char v19[3]; // [rsp+15h] [rbp-43h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v5 = (char *)&s1;
  v20 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 8) )
    v5 = *(char **)a3;
  needle[2] = 0;
  v8 = v5;
  needle[0] = 1;
  needle[1] = a4;
  v19[2] = 0;
  v19[0] = 2;
  v19[1] = a4;
  while ( v8 )
  {
    v9 = strstr(v8, needle);
    v10 = v9;
    if ( !v9 )
      break;
    v8 = strstr(v9, v19);
    if ( !v8 )
      break;
    v12 = a2[1];
    v13 = *a2;
    if ( a2[2] < (unsigned __int64)(v12 + 1) )
    {
      v16 = qvector_reserve(a2, v13, v12 + 1, 8);
      *a2 = v16;
      v13 = v16;
      v12 = a2[1];
    }
    *(_QWORD *)(v13 + 8 * v12) = -1;
    v14 = (_DWORD *)(v13 + 8 * v12);
    ++a2[1];
    if ( a5 )
    {
      *v14 = (_DWORD)v10 - (_DWORD)v5;
      v15 = (_DWORD)v8 - (_DWORD)v10;
    }
    else
    {
      *(_QWORD *)v17 = v13 + 8 * v12;
      *v14 = sub_173220(v5, (__int64)v10);
      v15 = sub_173220(v10, (__int64)v8);
      v14 = *(_DWORD **)v17;
    }
    v14[1] = v15;
  }
  return v20 - __readfsqword(0x28u);
}
