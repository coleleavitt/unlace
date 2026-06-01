__int64 __fastcall sub_7AEBB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // r8d
  int v5; // r9d
  _QWORD *v6; // rbx
  void *v7; // rdi

  v2 = sub_7AE510();
  v3 = operator new(0x58u);
  *(_QWORD *)v3 = 88;
  v6 = (_QWORD *)v3;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(v3 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 4;
  *(_QWORD *)(v3 + 64) = 9;
  *(_QWORD *)(v3 + 72) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v3 + 80) = 0;
  if ( v2 )
    callui(1143, v2 + 32, v3, (int)&callui, v4, v5);
  free_idcv(a2);
  *(_BYTE *)a2 = 2;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v6 )
  {
    v7 = (void *)v6[1];
    if ( v7 )
    {
      v6[2] = 0;
      qfree(v7);
    }
    operator delete(v6, 0x58u);
  }
  return 0;
}

