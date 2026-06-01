__int64 __fastcall sub_694BB0(_QWORD *a1, __int64 a2, int a3, const char *a4)
{
  const char *v5; // r15
  size_t v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = a2;
  v11[1] = __readfsqword(0x28u);
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
      result = sub_7BE7C0(&v10, *a1, a3, v5, v8, 83);
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
    v11[0] = v10;
    while ( (unsigned __int8)sub_7BE850(v11, *a1, a3, 83) )
      a3 += 2;
    return 1;
  }
  return result;
}
