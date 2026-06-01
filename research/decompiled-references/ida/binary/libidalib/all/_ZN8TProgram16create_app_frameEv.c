TView *__fastcall TProgram::create_app_frame(TProgram *this)
{
  TView *result; // rax

  result = *(TView **)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 16);
  if ( result )
  {
    result = (TView *)((__int64 (__fastcall *)(_QWORD, _QWORD))result)(0, 0);
    TProgram::deskTop = result;
  }
  return result;
}

