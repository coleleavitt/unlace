__int64 __fastcall sub_8331B0(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int8 *v6; // r15
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int8 *v15; // rax
  unsigned __int8 v16; // cl
  unsigned __int8 *v17; // rdi
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  int v20; // esi
  bool v23; // [rsp+Eh] [rbp-3Ah]
  char v24; // [rsp+Fh] [rbp-39h]

  v6 = a1;
  v23 = (int)a4 > 0;
  v24 = (a6 ^ 1) & 1;
  v10 = *a1;
  do
  {
    v15 = sub_833040(&v6[byte_239F9C0[v10]], 0);
    v16 = *v15;
    v17 = v15;
    if ( *v15 > 0x92u )
      return 0;
    if ( v16 <= 0x88u )
    {
      if ( v16 == 0x80 )
        goto LABEL_35;
      if ( v16 > 0x80u )
      {
        if ( v16 == 0x84 )
        {
LABEL_35:
          v11 = a6;
          v12 = 1;
          v13 = a4;
        }
        else
        {
          if ( v16 != 0x87 )
            return 0;
          v11 = a6;
          v12 = a5;
          v13 = a4 + 1;
        }
LABEL_7:
        result = sub_8331B0(v17, a2, a3, v13, v12, v11);
        if ( !(_DWORD)result )
          return result;
        goto LABEL_8;
      }
      if ( v16 > 0x56u )
      {
        if ( v16 != 94 )
          return 0;
LABEL_20:
        if ( v15[1] != 13 || (*(_DWORD *)(a3 + 276) & a2) != 0 || v23 || *(_DWORD *)(a3 + 324) | a5 || v24 )
          return 0;
        goto LABEL_8;
      }
      if ( v16 > 0x54u )
        goto LABEL_20;
      if ( (unsigned int)v16 - 1 > 1 && v16 != 27 )
        return 0;
    }
    else
    {
      v18 = 1LL << (v16 + 119);
      if ( (v18 & 0x18C) == 0 )
      {
        if ( (v18 & 0x63) == 0 && ((v18 & 0x210) == 0 || v17[(unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8)] != 121) )
          return 0;
        v11 = a6;
        v12 = a5;
        v13 = a4;
        goto LABEL_7;
      }
      v19 = __ROL2__(*(_WORD *)(v17 + 3), 8);
      v20 = 1 << v19;
      if ( v19 >= 0x20u )
        v20 = 1;
      result = sub_8331B0(v17, a2 | v20, a3, a4, a5, a6);
      if ( !(_DWORD)result )
        return result;
    }
LABEL_8:
    v6 += (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8);
    v10 = *v6;
  }
  while ( (_BYTE)v10 == 121 );
  return 1;
}

