__int64 __fastcall sub_4EC9F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rdx

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = sub_4EF930(v3, a2);
  v5 = *(_QWORD **)(a1 + 24);
  if ( v4 == *v5 + 16LL * v5[1]
    || (unsigned int)a2 < **(_DWORD **)v4
    || (unsigned int)a2 >= *(_DWORD *)(*(_QWORD *)v4 + 4LL) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return (v4 - *v5) >> 4;
  }
}

