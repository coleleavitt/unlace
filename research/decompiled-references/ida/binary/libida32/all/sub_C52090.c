__int64 __fastcall sub_C52090(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v7; // al
  __int64 result; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned __int8 v13; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v14; // [rsp+1Bh] [rbp-3Dh] BYREF
  int v15; // [rsp+1Ch] [rbp-3Ch] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]

  v7 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v7 == 7 )
  {
    result = sub_C448F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
    if ( !(_BYTE)result )
      return result;
    v9 = (_DWORD *)a1[1];
    if ( *v9 != 4 )
      return sub_BF05D0(*a1, a2);
    sub_21CE460(&v16, v9 + 2, &v15);
    if ( !(_BYTE)v15 || (result = sub_BF6DC0(*a1, a2, (__int64)&v16, *(_QWORD *)(a2 + 8)), (_BYTE)result) )
      result = sub_BEC6A0(a1 + 1, (__int64)&v16);
    goto LABEL_14;
  }
  if ( v7 != 9 )
  {
    if ( v7 == 6 )
      return sub_C448F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
    return sub_BF05D0(*a1, a2);
  }
  result = sub_C1BE30(*(_QWORD *)(a2 + 16), &v14, *a1, a4, a5);
  if ( (_BYTE)result )
  {
    v12 = v14 ^ 1u;
    v15 = sub_A8A3C0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8), v10, v11);
    sub_BF2D00((__int64)&v16, v12, &v15);
    result = sub_BEC6A0(a1 + 1, (__int64)&v16);
LABEL_14:
    if ( v17 > 0x40 )
    {
      if ( v16 )
      {
        v13 = result;
        operator delete[](v16);
        return v13;
      }
    }
  }
  return result;
}

