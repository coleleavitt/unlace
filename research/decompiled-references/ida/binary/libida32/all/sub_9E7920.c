__int64 __fastcall sub_9E7920(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // dl
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // r13d
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+10h] [rbp-88h] BYREF
  char v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+20h] [rbp-78h] BYREF
  char v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  char v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]

  while ( 1 )
  {
    if ( !*(_DWORD *)(a2 + 32) && *(_QWORD *)(a2 + 8) <= *(_QWORD *)(a2 + 16) )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      return a1;
    }
    sub_9E7620((__int64)&v36, a2, *(_DWORD *)(a2 + 36));
    v31 = v37 & 1 | v31 & 0xFE;
    v4 = v36;
    if ( (v37 & 1) != 0 )
    {
      v36 = 0;
      v30 = v4;
    }
    else
    {
      LODWORD(v30) = v36;
    }
    sub_9E7130(&v36);
    if ( (v31 & 1) != 0 )
    {
      v8 = v30;
      *(_BYTE *)(a1 + 8) |= 1u;
      v30 = 0;
      *(_QWORD *)a1 = v8;
      goto LABEL_12;
    }
    v5 = v30;
    if ( !(_DWORD)v30 )
    {
      v13 = *(unsigned int *)(a2 + 72);
      if ( (_DWORD)v13 )
      {
        v14 = *(_DWORD *)(a2 + 32);
        if ( v14 > 0x1F )
        {
          v5 = 32;
          *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v14 - 32;
        }
        *(_DWORD *)(a2 + 32) = v5;
        v15 = *(_QWORD *)(a2 + 64) + 32 * v13 - 32;
        *(_DWORD *)(a2 + 36) = *(_DWORD *)v15;
        v36 = *(_QWORD *)(a2 + 40);
        v16 = *(_QWORD *)(a2 + 48);
        *(_OWORD *)(a2 + 40) = 0;
        v37 = v16;
        v17 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = 0;
        v38 = v17;
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(v15 + 8);
        v18 = *(_QWORD *)(v15 + 16);
        *(_QWORD *)(v15 + 8) = 0;
        v19 = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 48) = v18;
        v20 = *(_QWORD *)(v15 + 24);
        *(_QWORD *)(v15 + 16) = v19;
        v21 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = v20;
        *(_QWORD *)(v15 + 24) = v21;
        sub_9E6FE0((__int64)&v36);
        v22 = (unsigned int)(*(_DWORD *)(a2 + 72) - 1);
        *(_DWORD *)(a2 + 72) = v22;
        sub_9E6FE0(*(_QWORD *)(a2 + 64) + 32 * v22 + 8);
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 1;
        *(_DWORD *)(a1 + 4) = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
      }
      goto LABEL_12;
    }
    if ( (_DWORD)v30 == 1 )
      break;
    if ( (_DWORD)v30 != 2 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 4) = v5;
      goto LABEL_12;
    }
    sub_2001570(&v36, a2);
    v6 = v36;
    if ( v36 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v6;
      goto LABEL_12;
    }
    sub_9E7150(&v30);
  }
  sub_9E7620((__int64)&v36, a2, 8u);
  v33 = v37 & 1 | v33 & 0xFE;
  v9 = v36;
  if ( (v37 & 1) != 0 )
  {
    v36 = 0;
    v32 = v9;
  }
  else
  {
    LODWORD(v32) = v36;
  }
  sub_9E7130(&v36);
  if ( (v33 & 1) != 0 )
  {
    v10 = v32;
    LOBYTE(v37) = v37 | 1;
    v32 = 0;
    v36 = v10;
  }
  else if ( (v32 & 0x80u) != 0LL )
  {
    v24 = v32 & 0x7F;
    v25 = 7;
    while ( 1 )
    {
      sub_9E7620((__int64)&v34, a2, 8u);
      LOBYTE(v37) = v35 & 1 | v37 & 0xFE;
      v26 = v34;
      if ( (v35 & 1) != 0 )
      {
        v34 = 0;
        v36 = v26;
      }
      else
      {
        LODWORD(v36) = v34;
      }
      sub_9E7150(&v32);
      v33 = v37 & 1 | v33 & 0xFE;
      if ( (v37 & 1) != 0 )
      {
        v27 = v36;
        v36 = 0;
        v32 = v27;
      }
      else
      {
        LODWORD(v32) = v36;
      }
      sub_9E7150(&v36);
      sub_9E7130(&v34);
      if ( (v33 & 1) != 0 )
      {
        v28 = v32;
        LOBYTE(v37) = v37 | 1;
        v32 = 0;
        v36 = v28;
        goto LABEL_22;
      }
      v24 |= (v32 & 0x7F) << v25;
      if ( (v32 & 0x80) == 0 )
        break;
      v25 += 7;
      if ( v25 == 35 )
      {
        v29 = std::_V2::generic_category((std::_V2 *)&v34);
        sub_9E6160((__int64)&v34, 0x54u, v29, "Unterminated VBR");
        LOBYTE(v37) = v37 | 1;
        v36 = v34;
        goto LABEL_22;
      }
    }
    LOBYTE(v37) = v37 & 0xFE;
    LODWORD(v36) = v24;
  }
  else
  {
    LOBYTE(v37) = v37 & 0xFE;
    LODWORD(v36) = v32;
  }
LABEL_22:
  sub_9E7150(&v32);
  v11 = v37 & 1;
  if ( (v37 & 1) != 0 )
  {
    v23 = v36;
    v36 = 0;
    *(_QWORD *)a1 = v23;
  }
  else
  {
    v12 = v36;
    *(_DWORD *)a1 = 2;
    *(_DWORD *)(a1 + 4) = v12;
  }
  *(_BYTE *)(a1 + 8) = v11 | *(_BYTE *)(a1 + 8) & 0xFE;
  sub_9E7150(&v36);
LABEL_12:
  sub_9E7150(&v30);
  return a1;
}

