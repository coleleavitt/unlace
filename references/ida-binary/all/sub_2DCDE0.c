__int64 __fastcall sub_2DCDE0(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v4 = sub_2407B0(a3);
  v6[0] = v4;
  if ( v4 != -1 || !*a3 )
    goto LABEL_2;
  result = str2ea(v6, a3, xmmword_8CC810);
  if ( (_BYTE)result )
  {
    v4 = v6[0];
LABEL_2:
    *a2 = v4;
    return 1;
  }
  return result;
}
