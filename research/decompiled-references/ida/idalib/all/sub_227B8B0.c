void __fastcall sub_227B8B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v5; // rdi
  __int64 v6; // [rsp+10h] [rbp-18h]
  int v7; // [rsp+1Ch] [rbp-Ch]

  if ( *(_DWORD *)(a1 + 44) == 1 )
  {
    v5 = *(void **)(a1 + 16);
    if ( v5 )
    {
      v7 = a4;
      v6 = a3;
      operator delete[](v5);
      a4 = v7;
      a3 = v6;
    }
  }
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a2 + a3;
  *(_QWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 44) = a4;
}
