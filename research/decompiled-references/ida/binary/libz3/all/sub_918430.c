__int64 __fastcall sub_918430(__int64 a1, __int64 *a2)
{
  _DWORD *v2; // r12
  __int64 (__fastcall *v3)(); // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp

  v2 = *(_DWORD **)(a1 + 8);
  v3 = *(__int64 (__fastcall **)())(*a2 + 56);
  if ( v3 != sub_919010 )
  {
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD))v3)(a2, *(_QWORD *)(a1 + 8));
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
    v6 = *(_QWORD *)(a1 + 8);
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, *(_QWORD *)(v6 + 32));
    result = sub_8E8110((_QWORD *)a2[1], *(unsigned int **)(v6 + 32));
    if ( (_DWORD)result == -1 )
    {
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, *(_QWORD *)(v6 + 48));
    }
    else if ( (_DWORD)result == 1 )
    {
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(a2, *(_QWORD *)(v6 + 40));
    }
  }
  return result;
}

