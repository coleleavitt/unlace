__int64 __fastcall sub_2EB8B0(_QWORD *a1, _DWORD **a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r12
  __int64 result; // rax

  v2 = (_DWORD *)a1[77];
  if ( v2 )
    ++v2[4];
  v3 = *a2;
  if ( *a2 )
  {
    if ( v3[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v3)(v3);
      sub_186B220(v3);
      v2 = (_DWORD *)a1[77];
    }
  }
  *a2 = v2;
  result = (*(__int64 (__fastcall **)(_QWORD *, _DWORD **))(*a1 + 176LL))(a1, a2);
  if ( *a2 )
    return sub_1360B80(*a2 + 32, 1);
  return result;
}

