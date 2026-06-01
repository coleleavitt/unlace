__int64 __fastcall sub_DF2270(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rbp
  __int64 result; // rax

  v2 = sub_DEF440(a2, *(_DWORD **)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (_DWORD *)v2;
  if ( !v2 )
    return sub_DF84E0(a2, a1 + 24, v3);
  ++*(_DWORD *)(v2 + 8);
  result = sub_DF84E0(a2, a1 + 24, v3);
  if ( v4[2]-- == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v4)(v4);
    return sub_186B220(v4);
  }
  return result;
}

