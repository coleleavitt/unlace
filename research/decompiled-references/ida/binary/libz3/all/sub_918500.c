__int64 __fastcall sub_918500(_QWORD *a1, __int64 *a2)
{
  _DWORD *v2; // r12
  __int64 (__fastcall *v3)(); // rax
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = (_DWORD *)a1[1];
  v3 = *(__int64 (__fastcall **)())(*a2 + 56);
  if ( v3 != sub_919010 )
  {
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD))v3)(a2, a1[1]);
    if ( !(_BYTE)result )
      return result;
    goto LABEL_6;
  }
  if ( !(unsigned int)sub_8E7030(a2[1])
    || (result = a2[5], v5 = *v2 >> 5, result)
    && (unsigned int)v5 < *(_DWORD *)(result - 4)
    && (*(_DWORD *)(result + 4 * v5) & (1 << *v2)) != 0 )
  {
LABEL_6:
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, *(_QWORD *)(a1[1] + 32LL));
    result = sub_8E80A0((_QWORD *)a2[1], *(unsigned int **)(a1[1] + 32LL));
    if ( (_DWORD)result == -1 )
    {
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, a1[3]);
    }
    else if ( (_DWORD)result == 1 )
    {
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, a1[2]);
    }
  }
  return result;
}

