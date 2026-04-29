__int64 __fastcall sub_3F3DB0(__int64 a1, unsigned int a2, double a3)
{
  char v4; // al
  int v5; // r12d
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(_DWORD *, unsigned int); // rax
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  int dtype_size; // eax
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v4 = *(_BYTE *)(a1 + 40LL * (int)a2 + 65);
  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v4 - 2) <= 2u || (v5 = -1, (unsigned __int8)(v4 - 6) <= 1u) )
  {
    v5 = sub_3F3B40(a1, a2, a3);
    if ( a2 == 1 && (unsigned __int8)sub_3E5AC0(&v14, nullptr, *(unsigned __int16 *)(a1 + 48)) && (v14 & 2) != 0 )
    {
      v7 = *(_DWORD **)(a1 + 832);
      v8 = *(unsigned __int16 *)(a1 + 110);
      v9 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v7 + 168LL);
      if ( v9 == sub_3E59C0 )
      {
        v10 = sub_3E59C0(v7, v8);
      }
      else
      {
        v10 = v9(v7, v8);
        v7 = *(_DWORD **)(a1 + 832);
      }
      v11 = v10;
      v12 = 2;
      if ( v7[20] == 8 )
        v12 = 7;
      dtype_size = get_dtype_size(v12);
      sub_1D2710(a1, 4u, dtype_size, v5, 0x3BEA45E214ADDC55LL, v11, 0);
    }
  }
  return (unsigned int)v5;
}
