__int64 __fastcall sub_61E8C0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  __int64 *v5; // rdx

  v3 = a2[8];
  if ( !v3 || (result = sub_61B740(a1, v3, a2[9]), !(_BYTE)result) )
  {
    v5 = (__int64 *)a2[10];
    if ( ((unsigned int)a2[5] & 7) - 3 <= 2 && v5 )
      return sub_61B330(a1, *v5, (__int64)(v5 + 1));
    else
      return 0;
  }
  return result;
}

