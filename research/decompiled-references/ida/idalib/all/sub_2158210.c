__int64 __fastcall sub_2158210(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char *v4; // rbp
  char v5; // dl
  int v6; // esi
  _BYTE *v7; // rax
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  char *v15; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(char **)(a2 + 16);
  v5 = *v4;
  if ( ((*(_BYTE *)(v3 + 114) + 6) & 5) != 0 )
  {
    if ( v5 == 47 || (v6 = 47, v5 == 35) )
      v6 = 32;
  }
  else
  {
    v6 = 32;
    if ( v5 == 32 )
    {
      v16[3] = &v15;
      v15 = &v4[-sub_215DEC0(v3)];
      LOWORD(v17) = 2819;
      sub_2158040(
        v16,
        32,
        v10,
        v11,
        v12,
        v13,
        (char)"name contains a leading space for archive member header at offset ");
      v14 = v16[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v14;
      return a1;
    }
  }
  v7 = memchr(v4, v6, 0x10u);
  if ( v7 )
  {
    v8 = v7 - v4;
    if ( v8 == -1 )
      v8 = 16;
  }
  else
  {
    v8 = 16;
  }
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(a1 + 16) &= ~1u;
  return a1;
}
