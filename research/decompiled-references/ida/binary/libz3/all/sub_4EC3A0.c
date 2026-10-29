__int64 *__fastcall sub_4EC3A0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a1 = &off_1C4FC58;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3++);
      sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 48) );
  }
  v5 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 48) = 0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(void **)(a1 + 40);
  if ( v6 != (void *)(a1 + 56) && v6 )
    sub_186B220(v6);
  v7 = *(_QWORD *)(a1 + 16);
  result = qword_1C665B0;
  *(_QWORD *)a1 = qword_1C665B0;
  if ( v7 )
    return (__int64 *)sub_186B220((void *)(v7 - 8));
  return result;
}

