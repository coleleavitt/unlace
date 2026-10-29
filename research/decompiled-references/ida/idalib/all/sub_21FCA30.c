__int64 __fastcall sub_21FCA30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // r12
  char v5; // al
  __int64 v6; // r13
  _BYTE *v7; // rax
  __int64 result; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v2 > 0x40 )
    a2 = (__int64 *)*a2;
  v4 = a2[(unsigned int)((unsigned __int64)(v2 + 63) >> 6) - 1];
  v11 = *a2 & 7;
  v3 = v11;
  sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7C80);
  v5 = (8 * ((unsigned __int8)v4 >> 7)) | *(_BYTE *)(a1 + 20) & 0xF7;
  v6 = (v4 >> 3) & 0xF;
  *(_BYTE *)(a1 + 20) = v5;
  if ( v3 != 7 || v6 != 15 )
  {
    v7 = sub_21F8AA0(&v11, (__int64)v12);
    if ( !v6 && v7 == v12 )
      return sub_21FB9A0((__int64 *)a1, (*(_BYTE *)(a1 + 20) & 8) != 0);
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
    *(_DWORD *)(a1 + 16) = v6 - 7;
    result = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64);
    if ( (unsigned int)result > 0x7F )
    {
      **(_QWORD **)(a1 + 8) = v3;
      if ( !v6 )
        goto LABEL_8;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v3;
      if ( !v6 )
      {
LABEL_8:
        *(_DWORD *)(a1 + 16) = -6;
        return result;
      }
    }
    v10 = (_QWORD *)(a1 + 8);
    result = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64);
    if ( (unsigned int)result > 0x7F )
      v10 = *(_QWORD **)(a1 + 8);
    *v10 |= 8uLL;
    return result;
  }
  *(_DWORD *)(a1 + 16) = 8;
  v9 = (_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 20) = v5 & 0xF8 | 1;
  result = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64);
  if ( (unsigned int)result > 0x7F )
    v9 = *(_QWORD **)(a1 + 8);
  *v9 = 7;
  return result;
}
