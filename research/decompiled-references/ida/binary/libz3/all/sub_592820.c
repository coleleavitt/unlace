__int64 __fastcall sub_592820(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // edx
  char v9; // cl
  _DWORD *v10; // rdi
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v2 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(v4 + 4 * v5);
      v8 = *(_DWORD *)(a2 + 8 * v5++);
      v6 += v8 << v7;
    }
    while ( v2 != v5 );
    v9 = v6;
    v10 = (_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL * (v6 >> 5));
    result = (unsigned int)__ROL4__(-2, v9);
    *v10 &= result;
  }
  else
  {
    **(_DWORD **)(a1 + 48) &= ~1u;
    return 4294967294LL;
  }
  return result;
}

