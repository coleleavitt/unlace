__int64 __fastcall sub_1C37710(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int16 v5; // dx
  __int64 v6; // [rsp+8h] [rbp-B0h]
  _BYTE v7[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( a3 )
  {
    while ( (*((_BYTE *)a3 + 10) & 8) == 0 )
    {
      a3 = (__int64 *)*a3;
      if ( !a3 )
        goto LABEL_11;
    }
    v3 = *(unsigned int *)(a1 + 11176);
    if ( (_DWORD)v3 && *((_WORD *)a3 + 6) < *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 11168) + 8 * v3 - 8) + 12LL) )
    {
      sub_168B9F0((__int64)v7, (__int64 *)(a1 + 8), a2, 0x1B9Cu, 0);
      sub_15F7200(v7);
    }
    result = sub_EEE9A0(16, *(_QWORD **)(a1 + 248), 8u);
    v5 = *(_WORD *)result & 0xFE00;
    LOBYTE(v5) = -120;
    *(_WORD *)result = v5;
    if ( unk_2CD7484 )
    {
      v6 = result;
      sub_EE9B50(136);
      result = v6;
    }
    *(_DWORD *)(result + 8) = a2;
  }
  else
  {
LABEL_11:
    sub_168B9F0((__int64)v7, (__int64 *)(a1 + 8), a2, 0x107Au, 0);
    sub_15F7200(v7);
    return 1;
  }
  return result;
}
