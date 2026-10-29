__int64 __fastcall sub_AC4B80(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 112) + 429LL) )
    v4 = a2[a3 + 14];
  else
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8656) + 8LL * **(unsigned int **)(*a2 + 8LL * a3 + 32));
  result = sub_B39350(v4, *(unsigned int *)(a1 + 8));
  if ( (_DWORD)result == -1 )
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v4);
    sub_AB6BC0((__int64 *)a1, v6);
    return v6;
  }
  return result;
}

