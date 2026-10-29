__int64 __fastcall sub_39C500(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_2D1510(a1, (const char *)a2);
  v5 = *(_QWORD *)(a2 + 672);
  if ( v5 )
  {
    v6 = sub_1F3B50(v5, 1, v3, v4, 0.0);
    if ( v6 )
      sub_1F9890(*(__int64 **)(a2 + 672), a1, v6);
  }
  return a1;
}
