_BYTE *__fastcall ClpModel::setInteger(ClpModel *this, int a2)
{
  __int64 v2; // rbx
  _BYTE *result; // rax
  int v4; // esi

  v2 = a2;
  result = *((_BYTE **)this + 34);
  if ( !result )
  {
    result = (_BYTE *)operator new[](*((int *)this + 27));
    v4 = *((_DWORD *)this + 27);
    *((_QWORD *)this + 34) = result;
    if ( v4 )
    {
      sub_8F680(result, v4);
      result = *((_BYTE **)this + 34);
    }
  }
  result[v2] = 1;
  return result;
}

