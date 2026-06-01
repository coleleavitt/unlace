void __fastcall sub_1668D50(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+18h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 2008);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 8);
    v5 = *(_DWORD **)(v3 + 16);
    LODWORD(v9) = -1;
    HIDWORD(v9) = a3;
    if ( v5 != v4 )
    {
      *v4 = -1;
      v6 = v4 + 2;
      *(v6 - 1) = a3;
      *(_QWORD *)(v3 + 8) = v6;
      return;
    }
    v7 = v3;
    v3 = (__int64)v5;
  }
  else
  {
    v7 = operator new(0x18u);
    LODWORD(v9) = -1;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(a1 + 2008) = v7;
    HIDWORD(v9) = a3;
    *(_OWORD *)v7 = 0;
  }
  sub_1668B00(v7, (char *)v3, &v9);
}
