__int64 __fastcall sub_8172C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 400) = 1;
  *(_QWORD *)(a1 + 1528) = 0;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 64) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 56LL) = 0;
    *(_QWORD *)(a1 + 536) = 0;
    *(_QWORD *)(a1 + 504) = 0;
    *(_OWORD *)(a1 + 576) = 0;
  }
  result = *(_QWORD *)(a1 + 680);
  v3 = (_QWORD *)(a1 + 680);
  do
  {
    v4 = result;
    *v3++ = result;
    v3[3] = result;
    result = *(_QWORD *)(result + 24);
    *(_QWORD *)(v4 + 8) = 0;
    *(_QWORD *)(*(v3 - 1) + 24LL) = 0;
    *(_QWORD *)(v3[3] + 24LL) = 0;
    v3[3] = *(v3 - 1);
  }
  while ( v3 != (_QWORD *)(a1 + 712) );
  for ( ; result; *(_QWORD *)(a1 + 672) = v5 )
  {
    v5 = result;
    result = *(_QWORD *)(result + 24);
    *(_QWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(a1 + 672);
  }
  return result;
}
