_QWORD *__fastcall sub_7CFB40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = a2[274];
  a2[284] += 8LL;
  result = (_QWORD *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)(result + 1) && v2 )
  {
    a2[274] = result + 1;
    *result = 0;
  }
  else
  {
    result = (_QWORD *)sub_7CF9B0((__int64)(a2 + 274), 8, 3);
    *result = 0;
  }
  return result;
}

