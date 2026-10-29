__int64 __fastcall sub_A646C0(__int64 *a1, unsigned int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-18h]

  v6 = *(_QWORD *)(a1[2] + 8832);
  if ( !v6
    || (result = *(unsigned int *)a2, (unsigned int)result >= *(_DWORD *)(v6 - 4))
    || *(_DWORD *)(v6 + 4 * result) == 0x7FFFFFFF )
  {
    sub_A63A20(a1, a2[4], v6, a4, a5, a6, v9);
    v8 = sub_99A610((__int64)a1, (unsigned int *)a2);
    (*(void (__fastcall **)(__int64 *, __int64))*a1)(a1, v8);
    result = sub_8E7030(a1[2]);
    if ( !(_DWORD)result )
      return sub_99B4A0((__int64)a1, a2);
  }
  return result;
}

