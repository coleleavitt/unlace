__int64 __fastcall sub_760F00(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  _QWORD *v6; // rsi
  int v7; // edx
  __int64 v8; // rax
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 384);
  v2 = *(_QWORD *)(a1 + 360) + 16LL * *(_QWORD *)(a1 + 368) - 16;
  v3 = *(_QWORD *)(a1 + 392);
  v4 = *(_QWORD *)v2;
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(a1 + 400) < (unsigned __int64)(v3 + 1) )
  {
    v10 = qvector_reserve(a1 + 384, v1, v3 + 1, 16);
    *(_QWORD *)(a1 + 384) = v10;
    v1 = v10;
    v3 = *(_QWORD *)(a1 + 392);
  }
  v6 = (_QWORD *)(16 * v3 + v1);
  *v6 = v4;
  v6[1] = v5;
  v7 = *(_DWORD *)(a1 + 200);
  ++*(_QWORD *)(a1 + 392);
  sub_76C240(*(_QWORD *)(a1 + 192), (unsigned int)(*(_DWORD *)(v2 + 4) - 4), (unsigned int)(v7 - *(_DWORD *)(v2 + 4)));
  v8 = *(_QWORD *)(a1 + 368);
  if ( v8 )
    *(_QWORD *)(a1 + 368) = v8 - 1;
  return 0;
}

