__int64 __fastcall sub_A7A1D0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  _BOOL8 v5; // rdx
  _DWORD *v6; // rax

  result = sub_FF9FB0(a1[63], a2);
  if ( (_DWORD)result == -1 )
  {
    v3 = a1[63];
    v4 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8LL * (unsigned int)a2));
    v5 = 0;
    v6 = *(_DWORD **)(v4 + 24);
    if ( v6 )
    {
      if ( *v6 == 5 )
        v5 = v6[1] == 1;
    }
    return sub_1006C00(v3, (unsigned int)a2, v5);
  }
  return result;
}

