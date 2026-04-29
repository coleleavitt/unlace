__int64 __fastcall sub_3EA260(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  int v6; // r12d
  int dtype_size; // eax
  __int64 result; // rax
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp-10h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  v5 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  if ( v3 == v4 )
  {
    if ( v4 != v5 )
    {
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
      goto LABEL_6;
    }
  }
  else if ( v3 == -1 )
  {
    if ( v5 != -1 )
    {
      v4 = -1;
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
      goto LABEL_6;
    }
  }
  else if ( v5 != (v4 & v3) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
    goto LABEL_5;
  }
  v9 = *(_QWORD **)(a1 + 8);
  v10 = sub_32CB20(v9, v5);
  result = sub_32E510(v9 + 1, v10);
  if ( !(_BYTE)result )
  {
    v3 = *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
    if ( v3 == v4 )
      goto LABEL_6;
    if ( v3 == -1 )
    {
      v4 = -1;
      goto LABEL_6;
    }
LABEL_5:
    v4 &= v3;
LABEL_6:
    dtype_size = get_dtype_size(5 * (unsigned int)(v6 == 8) + 2);
    sub_1D2710(a1, 0x37u, dtype_size, v4, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v6);
    return v11;
  }
  return result;
}
