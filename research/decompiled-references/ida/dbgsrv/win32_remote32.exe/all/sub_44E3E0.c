/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E3E0
// Address: 0x0044E3E0

//----- (0044E3E0) --------------------------------------------------------
void __usercall sub_44E3E0(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  void (__stdcall *v4)(int); // eax
  void *v5; // eax
  void *v6; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [esp-4h] [ebp-1Ch]

  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 )
  {
    v4 = (void (__stdcall *)(int))dword_4B70E8;
    if ( !dword_4B70E8 )
    {
      v4 = (void (__stdcall *)(int))sub_450400(a2, v3, 2u);
      dword_4B70E8 = (int)v4;
    }
    v4(v3);
    *(_DWORD *)(a1 + 12) = 0;
  }
  sub_456330(*(HANDLE *)(a1 + 20));
  v7 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 16);
  *(_DWORD *)(a1 + 20) = 0;
  sub_4562A0(v7);
  *(_DWORD *)(a1 + 16) = 0;
  v5 = *(void **)(a1 + 36);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    sub_453A20(v5);
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  v6 = *(void **)(a1 + 24);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_453A20(v6);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
}
// 4B70E8: using guessed type int dword_4B70E8;
