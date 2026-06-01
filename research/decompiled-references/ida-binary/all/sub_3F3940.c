__int64 __fastcall sub_3F3940(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // rbx
  unsigned __int8 isChecked; // al

  result = *(unsigned int *)(a1 + 328);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 312);
    v5 = *(_QWORD *)(a1 + 304);
    if ( v5 != v3 )
    {
      v6 = (v3 - v5) >> 3;
      if ( a2 )
        v7 = ((int)result + 1) % (int)v6;
      else
        v7 = ((int)result + (int)v6 - 1) % (int)v6;
      *(_DWORD *)(a1 + 328) = v7;
      v8 = *(_QWORD *)(v5 + 8LL * v7);
      isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 264));
      return sub_192AA0(0, v8, -1, isChecked);
    }
  }
  return result;
}
