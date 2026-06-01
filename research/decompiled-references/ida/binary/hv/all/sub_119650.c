__int64 __fastcall sub_119650(__int64 a1)
{
  unsigned __int64 *v1; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax

  v1 = *(unsigned __int64 **)(a1 + 40);
  v2 = (unsigned __int8)(*(_BYTE *)(a1 + 16) + 1);
  v3 = *(_QWORD *)a1 >> 1;
  *(_QWORD *)(a1 + 16) = (*(_DWORD *)(a1 + 16) + 1) & 7;
  v3 |= 0x8000000000000000LL;
  *(_QWORD *)a1 = v3;
  *v1 = v3 >> (64 - (unsigned __int8)v2);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 40) + (v2 >> 3);
  *(_QWORD *)(a1 + 40) = v5;
  if ( v5 <= v4 )
  {
    if ( v5 == v4 )
      return 0;
    else
      return (*(_BYTE *)(a1 + 16) != 0) + v5 - *(_QWORD *)(a1 + 32);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = v4;
    return 0;
  }
}

