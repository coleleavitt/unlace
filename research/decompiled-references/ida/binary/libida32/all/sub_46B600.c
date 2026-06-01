__int64 __fastcall sub_46B600(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // rdx

  v3 = (_DWORD *)rangeset_t_lower_bound(*(_QWORD *)(a1 + 40), a2, a3);
  v4 = *(__int64 **)(a1 + 40);
  v5 = *v4;
  v6 = v3 == (_DWORD *)(*v4 + 8 * v4[1]);
  v7 = -1;
  if ( !v6 && (unsigned int)a2 >= *v3 && (unsigned int)a2 < v3[1] )
    return ((__int64)v3 - v5) >> 3;
  return v7;
}

