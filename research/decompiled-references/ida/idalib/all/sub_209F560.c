__int64 __fastcall sub_209F560(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  bool v6; // zf

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    v6 = *(_DWORD *)(a2 - 24) == 2;
    *(_QWORD *)a1 = **(_QWORD **)(a2 - 32);
    if ( v6 )
    {
      v3 = *(_QWORD **)(a2 - 32);
      goto LABEL_3;
    }
LABEL_6:
    v4 = 0;
    goto LABEL_4;
  }
  v3 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF) - 16);
  *(_QWORD *)a1 = *v3;
  if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xF) != 2 )
    goto LABEL_6;
LABEL_3:
  v4 = v3[1];
LABEL_4:
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16) & 0x1FFFFFFFFFFFFFFFLL | *(_QWORD *)(a1 + 16) & 0xE000000000000000LL;
  *(_BYTE *)(a1 + 23) = *(_BYTE *)(a2 + 23) & 0xE0 | *(_BYTE *)(a1 + 23) & 0x1F;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 4);
  *(_WORD *)(a1 + 28) = *(_WORD *)(a2 + 2);
  result = (unsigned __int8)BYTE1(*(_QWORD *)a2) >> 7;
  *(_BYTE *)(a1 + 30) = result;
  return result;
}
