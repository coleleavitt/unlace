__int64 __fastcall sub_5B64E0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v2 = *(_DWORD *)(*(_QWORD *)a2 + 16LL);
  if ( v2 == -1 )
    return 0;
  if ( v2 < *(_DWORD *)*a1 || v2 >= *(_DWORD *)(*a1 + 4LL) )
  {
    v3 = (__int64 *)a1[1];
    v4 = v3[1];
    v5 = *v3;
    if ( v3[2] < (unsigned __int64)(v4 + 1) )
    {
      v8 = qvector_reserve(a1[1], v5, v4 + 1, 24);
      v4 = v3[1];
      *v3 = v8;
      v5 = v8;
    }
    v6 = v5 + 24 * v4;
    *(_QWORD *)v6 = 0;
    *(_OWORD *)(v6 + 8) = 0;
    ++v3[1];
    sub_3573A0((char **)v6);
    return 0;
  }
  return 0;
}

