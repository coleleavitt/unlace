void __fastcall sub_21FBE00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r13
  _BYTE *v6; // rax
  char v7; // r8
  char v8; // al
  __int64 *v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v2 > 0x40 )
    a2 = (__int64 *)*a2;
  v3 = *a2 & 0xFFFFFFFFFFFFFLL;
  v11 = v3;
  v4 = a2[(unsigned int)((unsigned __int64)(v2 + 63) >> 6) - 1];
  sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7D20);
  v5 = ((unsigned __int64)v4 >> 52) & 0x7FF;
  *(_BYTE *)(a1 + 20) = (8 * (v4 < 0)) | *(_BYTE *)(a1 + 20) & 0xF7;
  v6 = sub_21F8AA0(&v11, (__int64)v12);
  if ( v5 == 2047 && v6 == v12 )
  {
    sub_21FB4C0(a1, (v7 & 8) != 0);
  }
  else if ( v6 == v12 || v5 != 2047 )
  {
    if ( !(_DWORD)v5 && v6 == v12 )
    {
      sub_21FB9A0((__int64 *)a1, (*(_BYTE *)(a1 + 20) & 8) != 0);
    }
    else
    {
      v10 = (__int64 *)(a1 + 8);
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
      *(_DWORD *)(a1 + 16) = v5 - 1023;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v10 = *(__int64 **)(a1 + 8);
      *v10 = v3;
      if ( (_DWORD)v5 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
          **(_QWORD **)(a1 + 8) |= 0x10000000000000uLL;
        else
          *(_QWORD *)(a1 + 8) |= 0x10000000000000uLL;
      }
      else
      {
        *(_DWORD *)(a1 + 16) = -1022;
      }
    }
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = 1024;
    v9 = (__int64 *)(a1 + 8);
    *(_BYTE *)(a1 + 20) = v8 & 0xF8 | 1;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
      v9 = *(__int64 **)(a1 + 8);
    *v9 = v3;
  }
}
