__int64 __fastcall sub_23D770(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  char *v4; // rcx
  _DWORD *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v4 = (char *)a1;
  v5 = qword_8CC600;
  v8 = __readfsqword(0x28u);
  if ( qword_8CC600 )
  {
    *(_QWORD *)qword_8CC600 = a2;
    v5[3] = (_DWORD)v4;
    v5[2] = a3;
    result = sub_23D480((__int64)v5, 9, a3, v4, a4);
    v7 = *((_DWORD *)qword_8CC600 + 4);
  }
  else
  {
    result = sub_20CEA0(dbg, 24, &v7, v4, a2, (unsigned int)a3);
  }
  if ( (_DWORD)result )
    return v7;
  return result;
}
