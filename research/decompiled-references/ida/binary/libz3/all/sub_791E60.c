__int64 __fastcall sub_791E60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _DWORD *v3; // r12
  bool v4; // zf

  result = *a2;
  if ( *a2 )
    ++*(_DWORD *)(result + 16);
  v3 = *(_DWORD **)(a1 + 8400);
  if ( v3 && (v4 = v3[4] == 1, --v3[4], v4) )
  {
    (**(void (__fastcall ***)(_DWORD *))v3)(v3);
    sub_186B220(v3);
    result = *a2;
    *(_QWORD *)(a1 + 8400) = *a2;
  }
  else
  {
    *(_QWORD *)(a1 + 8400) = result;
  }
  return result;
}

