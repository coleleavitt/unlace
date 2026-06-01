__int64 __fastcall sub_21FAF40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 result; // rax

  sub_21F9140((_QWORD *)a1, a2);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF0 | 2;
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64;
  if ( v5 > 0x7F )
  {
    v7 = v5 >> 6;
    v6 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v6 = a1 + 8;
    v7 = 1;
  }
  sub_22096E0(v6, 0, v7);
  v8 = (_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 8) - 1;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
    v8 = *(_QWORD **)(a1 + 8);
  *v8 = a3;
  result = *(unsigned __int8 *)(a1 + 20);
  if ( (result & 6) != 0 )
  {
    result &= 7u;
    if ( (_BYTE)result != 3 )
      return sub_21FAC20(a1, 1, 0);
  }
  return result;
}
