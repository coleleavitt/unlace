__int64 __fastcall sub_674ED0(_QWORD *a1, int a2, unsigned int a3, const char *a4)
{
  const char *v5; // r15
  size_t v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 result; // rax
  int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  int v11; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v10 = a2;
  v12 = __readfsqword(0x28u);
  if ( a4 )
  {
    v5 = a4;
    v6 = strlen(a4);
    v7 = (v6 < 0x400) + v6;
    while ( 1 )
    {
      v8 = 1024;
      if ( v7 <= 0x400 )
        v8 = v7;
      result = sub_79B440(&v10, *a1, a3, v5, v8, 83);
      if ( !(_BYTE)result )
        break;
      v5 += v8;
      a3 += 2;
      v7 -= v8;
      if ( !v7 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v11 = v10;
    while ( (unsigned __int8)sub_79B4D0(&v11, *a1, a3, 83) )
      a3 += 2;
    return 1;
  }
  return result;
}

