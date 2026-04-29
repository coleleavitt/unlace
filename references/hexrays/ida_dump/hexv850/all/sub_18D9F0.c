bool __fastcall sub_18D9F0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax

  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  if ( sub_18D870((_QWORD *)a1, a2, a3) )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v8 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(a1 + 88, v8, v7 + 1, 8);
      *(_QWORD *)(a1 + 88) = v10;
      v8 = v10;
      v7 = *(_QWORD *)(a1 + 96);
    }
    *(_QWORD *)(v8 + 8 * v7) = a2;
    ++*(_QWORD *)(a1 + 96);
    sub_18D670(a1, a2 + 64);
    return *(_QWORD *)(a1 + 96) != 0;
  }
  else
  {
    *(_QWORD *)(a1 + 160) = *(_QWORD *)a3;
    *(_BYTE *)(a1 + 168) = a3[8];
    sub_119D40(a2, a1);
    return *(_QWORD *)(a1 + 96) != 0;
  }
}
