__int64 __fastcall sel_chooser_t__::vfunc_18(__int64 a1, unsigned int a2)
{
  char v2; // dl
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = getn_selector(v4, 0, a2);
  result = v4[0];
  if ( !v2 )
    return -1;
  return result;
}
