__int64 __fastcall sub_622970(_QWORD *a1, const char *a2, const char *a3)
{
  __int64 result; // rax
  const char *v4; // rax

  result = sub_622890(a1, a2, a3);
  if ( (_DWORD)result )
  {
    v4 = (const char *)strarray(&unk_2B0CEA0, 9, (unsigned int)result);
    sub_375320((__int64)"%s: %s", a2, v4);
  }
  return result;
}

