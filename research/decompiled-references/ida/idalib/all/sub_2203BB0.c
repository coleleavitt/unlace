__int64 __fastcall sub_2203BB0(__int64 a1, __int64 a2, char *a3, size_t a4, char a5)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // r12
  unsigned __int64 v13; // r13
  char *v14; // rdx
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v18[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v19; // [rsp+30h] [rbp-38h]

  if ( !a4 )
  {
    v19 = 259;
    v18[0] = "Invalid string length";
    v5 = sub_2220490();
    v7 = v6;
    v8 = v5;
    v9 = operator new(0x40u);
    sub_2220590(v9, v18, v8, v7);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v9;
    return a1;
  }
  v13 = a4;
  if ( (unsigned __int8)sub_21FB520((__int64 *)a2, a3, a4) )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 0;
    return a1;
  }
  v14 = a3;
  *(_BYTE *)(a2 + 20) = (8 * (*a3 == 45)) | *(_BYTE *)(a2 + 20) & 0xF7;
  if ( ((*a3 - 43) & 0xFD) == 0 )
  {
    if ( !--v13 )
    {
      v15 = "String has no digits";
      goto LABEL_16;
    }
    v14 = a3 + 1;
  }
  if ( v13 > 1 && *v14 == 48 && (v14[1] & 0xDF) == 0x58 )
  {
    if ( v13 != 2 )
    {
      sub_22035E0(a1, a2, (unsigned __int8 *)v14 + 2, v13 - 2, a5);
      return a1;
    }
    v15 = "Invalid string";
LABEL_16:
    v18[0] = v15;
    v19 = 259;
    sub_21F8CA0(&v17, (__int64)v18);
    v16 = v17;
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v16;
    return a1;
  }
  sub_2202E70(a1, (__int64 *)a2, v14, v13, a5);
  return a1;
}
