__int64 __fastcall load_core_module(_QWORD *a1, const char *a2, const char *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = (unsigned int)sub_622890(a1, a2, a3);
  result = 1;
  if ( (_DWORD)v3 )
  {
    strarray(&unk_2B0CEA0, 9, v3);
    sub_365330();
  }
  return result;
}

