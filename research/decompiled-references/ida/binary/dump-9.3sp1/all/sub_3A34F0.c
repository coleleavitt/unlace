__int64 *__fastcall sub_3A34F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 32) == 2 )
  {
    v2 = operator new(0x38u);
    v4 = *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)v2 = &off_4E6CD0;
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 16) = v4;
    *(_QWORD *)(v2 + 24) = 0;
    *(_DWORD *)(v2 + 48) = -1;
    *(_OWORD *)(v2 + 32) = 0;
    v6 = qvector_reserve(v2 + 24, 0, 1, 8);
    v7 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 24) = v6;
    *(_QWORD *)(v6 + 8 * v7) = v5;
    ++*(_QWORD *)(v2 + 32);
  }
  *a1 = v2;
  return a1;
}
