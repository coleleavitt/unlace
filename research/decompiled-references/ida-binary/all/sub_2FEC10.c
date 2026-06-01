__int64 __fastcall sub_2FEC10(__int64 a1, __int64 *a2, __int64 a3)
{
  bool v3; // zf
  const char *v4; // rbp
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a3 + 8) == 0;
  v7[1] = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = sub_2407B0(&s1);
LABEL_3:
    *a2 = v5;
    return 1;
  }
  v4 = *(const char **)a3;
  v5 = sub_2407B0(*(const char **)a3);
  v7[0] = v5;
  if ( v5 != -1 || !*v4 )
    goto LABEL_3;
  result = str2ea(v7, v4, xmmword_8CC810);
  if ( (_BYTE)result )
  {
    v5 = v7[0];
    goto LABEL_3;
  }
  return result;
}
