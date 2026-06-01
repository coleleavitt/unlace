__int64 __fastcall sub_4D89F0(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx

  if ( a2 != -1 )
  {
    v3 = a1 + 208;
    v4 = a1 + 48;
    if ( a3 )
      v4 = v3;
    return *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 80) + 4LL * a2) + 1))
         + ~*(_QWORD *)(*(_QWORD *)(v4 + 48) + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 80) + 4LL * a2));
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    return v5;
  return v5 - 1;
}
