__int64 __fastcall sub_3FD1A0(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned int v5; // r15d
  unsigned __int8 v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // r12
  int dtype_size; // eax
  __int64 v10; // rax
  int v12; // [rsp+Ch] [rbp-3Ch]

  if ( (*(_DWORD *)(a1 + 52) & 0xC00) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 52) & 0xC00) != 0xC00 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC89Eu, a2, a4);
      BUG();
    }
    v5 = 2;
    v6 = 2;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 69);
    v5 = v6;
  }
  v7 = sub_3FB520(a1, 2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a4);
  v8 = sub_3F9450(a1, v6, *(_BYTE *)(a1 + 69), v7, a2, a4);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  dtype_size = get_dtype_size(v5);
  sub_3F68B0(a1, v7, dtype_size, v12);
  v10 = sub_3F9450(a1, v6, *(_BYTE *)(a1 + 69), v7, a3, a4);
  if ( v8 && v10 )
  {
    *(_DWORD *)(v8 + 4) |= 0x10000u;
    *(_DWORD *)(v10 + 4) |= 0x10000u;
  }
  return sub_3F9F40(a1, a1 + 144, v7, a4);
}
