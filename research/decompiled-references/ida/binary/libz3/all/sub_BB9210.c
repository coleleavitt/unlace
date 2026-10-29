__int64 __fastcall sub_BB9210(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax

  v2 = *(unsigned int *)(a1 + 240);
  v3 = 4 * v2;
  if ( (_DWORD)v2 )
  {
    v4 = 0;
    do
    {
      v5 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + v4);
      v4 += 4;
      sub_BB9090(a1, a2, (_QWORD *)(*(_QWORD *)(a1 + 256) + 48 * v5));
    }
    while ( v3 != v4 );
  }
  return a2;
}

