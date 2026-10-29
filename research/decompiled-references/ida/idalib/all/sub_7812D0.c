__int64 __fastcall sub_7812D0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 376);
  v3 = *(_QWORD *)(a1 + 368);
  v4 = v1 + 1;
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v1 + 1) )
  {
    v7 = qvector_reserve(a1 + 368, v3, v1 + 1, 16);
    v1 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 368) = v7;
    v3 = v7;
    v4 = v1 + 1;
  }
  v5 = *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 376) = v4;
  *(_DWORD *)(v3 + 16 * v1) = v5;
  return 0;
}
