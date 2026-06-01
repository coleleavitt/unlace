__int64 __fastcall sub_152E10(TView *this)
{
  unsigned __int8 *v1; // rbp
  __int64 result; // rax

  v1 = (unsigned __int8 *)sub_15E0E0(this);
  sub_91990(v1);
  (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v1 + 328LL))(v1);
  result = sub_152DD0(this);
  *((_BYTE *)this + 953) = 0;
  return result;
}

