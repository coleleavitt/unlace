__int64 __fastcall load_core_module(_QWORD *a1, const char *a2, const char *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = (unsigned int)sub_63FA90(a1, a2, a3);
  result = 1;
  if ( (_DWORD)v3 )
  {
    strarray(&unk_2B36E60, 9, v3);
    sub_368890();
  }
  return result;
}
