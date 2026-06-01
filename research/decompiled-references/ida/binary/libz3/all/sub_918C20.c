__int64 __fastcall sub_918C20(__int64 *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64 *, _DWORD *); // r13
  _QWORD *v9; // rax

  result = sub_8E7030(a1[1]);
  if ( (_DWORD)result )
  {
    v5 = *(__int64 (__fastcall **)())(*a1 + 56);
    if ( v5 == sub_919010 )
    {
      if ( !(unsigned int)sub_8E7030(a1[1]) )
        return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, a3);
      v6 = a1[5];
      v7 = *a2 >> 5;
      if ( v6 )
      {
        if ( (unsigned int)v7 < *(_DWORD *)(v6 - 4) && (*(_DWORD *)(v6 + 4 * v7) & (1 << *a2)) != 0 )
          return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, a3);
      }
    }
    else if ( ((unsigned __int8 (__fastcall *)(__int64 *, _DWORD *))v5)(a1, a2) )
    {
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, a3);
    }
    v8 = *(__int64 (__fastcall **)(__int64 *, _DWORD *))(*a1 + 16);
    v9 = (_QWORD *)sub_180C100(a1[1] + 8400, 16);
    *v9 = off_1C55C60;
    v9[1] = a3;
    return v8(a1, a2);
  }
  return result;
}

