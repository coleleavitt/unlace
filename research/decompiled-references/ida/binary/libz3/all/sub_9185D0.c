__int64 __fastcall sub_9185D0(_QWORD *a1, __int64 *a2)
{
  _DWORD *v2; // r13
  __int64 (__fastcall *v3)(); // rax
  _DWORD *v4; // r13
  __int64 (__fastcall *v5)(); // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = (_DWORD *)a1[1];
  v3 = *(__int64 (__fastcall **)())(*a2 + 56);
  if ( v3 != sub_919010 )
  {
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD))v3)(a2, a1[1]);
    if ( !(_BYTE)result )
      return result;
LABEL_3:
    v4 = (_DWORD *)a1[2];
    v5 = *(__int64 (__fastcall **)())(*a2 + 56);
    if ( v5 == sub_919010 )
    {
      if ( (unsigned int)sub_8E7030(a2[1]) )
      {
        result = a2[5];
        v7 = *v4 >> 5;
        if ( !result || (unsigned int)v7 >= *(_DWORD *)(result - 4) || (*(_DWORD *)(result + 4 * v7) & (1 << *v4)) == 0 )
          return result;
      }
    }
    else
    {
      result = ((__int64 (__fastcall *)(__int64 *, _QWORD))v5)(a2, a1[2]);
      if ( !(_BYTE)result )
        return result;
    }
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, a1[3]);
  }
  if ( !(unsigned int)sub_8E7030(a2[1]) )
    goto LABEL_3;
  result = a2[5];
  v8 = *v2 >> 5;
  if ( result )
  {
    if ( (unsigned int)v8 < *(_DWORD *)(result - 4) && (*(_DWORD *)(result + 4 * v8) & (1 << *v2)) != 0 )
      goto LABEL_3;
  }
  return result;
}

