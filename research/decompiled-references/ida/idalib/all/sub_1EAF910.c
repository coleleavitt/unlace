__int64 __fastcall sub_1EAF910(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  int v8; // ebp
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // [rsp+14h] [rbp-74h]
  int v19; // [rsp+18h] [rbp-70h]
  int v20; // [rsp+1Ch] [rbp-6Ch]
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  char v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  char v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  char v26; // [rsp+48h] [rbp-40h]

  sub_A0B360((__int64)&v25, a2, a3);
  v22 = v26 & 1 | v22 & 0xFE;
  if ( (v26 & 1) != 0 )
  {
    v5 = &v25;
    v21 = v25;
    v25 = 0;
    sub_A0AE70(&v25);
    if ( (v22 & 1) != 0 )
      goto LABEL_3;
  }
  else
  {
    v5 = &v25;
    LODWORD(v21) = v25;
    sub_A0AE70(&v25);
    if ( (v22 & 1) != 0 )
    {
LABEL_3:
      v6 = v21;
      *(_BYTE *)(a1 + 8) |= 1u;
      v21 = 0;
      *(_QWORD *)a1 = v6;
      goto LABEL_4;
    }
  }
  v8 = v21;
  v18 = a3 - 1;
  v9 = 1LL << ((unsigned __int8)a3 - 1);
  v19 = v9;
  if ( ((unsigned int)v9 & (unsigned int)v21) == 0 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = v8;
    sub_A0AE90(&v21);
    return a1;
  }
  v10 = v9 - 1;
  v11 = v10 & v21;
  v20 = v10;
  if ( v18 > 0x1F )
  {
LABEL_21:
    v15 = std::_V2::generic_category((std::_V2 *)v5);
    sub_A09EA0((__int64)&v25, 0x54u, v15, "Unterminated VBR");
    v16 = v25;
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v16;
  }
  else
  {
    v12 = a3 - 1;
    while ( 1 )
    {
      sub_A0B360((__int64)&v23, a2, a3);
      v26 = v24 & 1 | v26 & 0xFE;
      v13 = v23;
      if ( (v24 & 1) != 0 )
      {
        v23 = 0;
        v25 = v13;
      }
      else
      {
        LODWORD(v25) = v23;
      }
      sub_A0AE90(&v21);
      v22 = v26 & 1 | v22 & 0xFE;
      if ( (v26 & 1) != 0 )
      {
        v14 = v25;
        v25 = 0;
        v21 = v14;
      }
      else
      {
        LODWORD(v21) = v25;
      }
      sub_A0AE90(&v25);
      v5 = &v23;
      sub_A0AE70(&v23);
      if ( (v22 & 1) != 0 )
        break;
      v11 |= ((unsigned int)v21 & v20) << v12;
      if ( ((unsigned int)v21 & v19) == 0 )
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = v11;
        goto LABEL_4;
      }
      v12 += v18;
      if ( v12 > 0x1F )
        goto LABEL_21;
    }
    v17 = v21;
    *(_BYTE *)(a1 + 8) |= 1u;
    v21 = 0;
    *(_QWORD *)a1 = v17;
  }
LABEL_4:
  sub_A0AE90(&v21);
  return a1;
}
