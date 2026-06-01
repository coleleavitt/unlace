__int64 __fastcall sub_2EC980(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  bool v3; // zf
  __int64 result; // rax

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v2 = *(_DWORD **)(a1 + 736);
  if ( v2 && (v3 = v2[2] == 1, --v2[2], v3) )
  {
    (**(void (__fastcall ***)(_DWORD *))v2)(v2);
    result = sub_186B220(v2);
    *(_QWORD *)(a1 + 736) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 736) = a2;
  }
  return result;
}

