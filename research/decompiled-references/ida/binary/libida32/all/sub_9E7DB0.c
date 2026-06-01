__int64 *__fastcall sub_9E7DB0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // r13d
  int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  std::_V2 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  char v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  char v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  char v29; // [rsp+38h] [rbp-40h]

  sub_9E7620((__int64)&v28, a2, 4u);
  v25 = v29 & 1 | v25 & 0xFE;
  if ( (v29 & 1) != 0 )
  {
    v24 = v28;
    v28 = 0;
    sub_9E7130(&v28);
    if ( (v25 & 1) != 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v24) = v28;
    sub_9E7130(&v28);
    if ( (v25 & 1) != 0 )
    {
LABEL_3:
      v4 = v24;
      v29 |= 1u;
      v24 = 0;
      v28 = v4;
      goto LABEL_4;
    }
  }
  if ( (v24 & 8) != 0 )
  {
    v7 = v24 & 7;
    v8 = 3;
    while ( 1 )
    {
      sub_9E7620((__int64)&v28, a2, 4u);
      v27 = v29 & 1 | v27 & 0xFE;
      v9 = v28;
      if ( (v29 & 1) != 0 )
      {
        v28 = 0;
        v26 = v9;
      }
      else
      {
        LODWORD(v26) = v28;
      }
      sub_9E7150(&v24);
      v25 = v27 & 1 | v25 & 0xFE;
      if ( (v27 & 1) != 0 )
      {
        v18 = v26;
        v26 = 0;
        v24 = v18;
      }
      else
      {
        LODWORD(v24) = v26;
      }
      sub_9E7150(&v26);
      sub_9E7130(&v28);
      if ( (v25 & 1) != 0 )
        break;
      v7 |= (v24 & 7) << v8;
      if ( (v24 & 8) == 0 )
      {
        v29 &= ~1u;
        LODWORD(v28) = v7;
        goto LABEL_4;
      }
      v8 += 3;
      if ( v8 == 33 )
      {
        v21 = std::_V2::generic_category((std::_V2 *)&v28);
        sub_9E6160((__int64)&v26, 0x54u, v21, "Unterminated VBR");
        v29 |= 1u;
        v28 = v26;
        goto LABEL_4;
      }
    }
    v22 = v24;
    v29 |= 1u;
    v24 = 0;
    v28 = v22;
  }
  else
  {
    v29 &= ~1u;
    LODWORD(v28) = v24;
  }
LABEL_4:
  sub_9E7150(&v24);
  if ( (v29 & 1) == 0 )
  {
    sub_9E7150(&v28);
    v10 = *(_DWORD *)(a2 + 32);
    v11 = 0;
    if ( v10 > 0x1F )
    {
      v11 = 32;
      *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v10 - 32;
    }
    *(_DWORD *)(a2 + 32) = v11;
    sub_9E7620((__int64)&v28, a2, 0x20u);
    v27 = v29 & 1 | v27 & 0xFE;
    if ( (v29 & 1) != 0 )
    {
      v26 = v28;
      v28 = 0;
      sub_9E7130(&v28);
      if ( (v27 & 1) != 0 )
      {
LABEL_22:
        v12 = v26;
        v26 = 0;
        *a1 = v12;
        goto LABEL_23;
      }
    }
    else
    {
      LODWORD(v26) = v28;
      sub_9E7130(&v28);
      if ( (v27 & 1) != 0 )
        goto LABEL_22;
    }
    v13 = *(_QWORD *)(a2 + 16);
    v14 = *(std::_V2 **)(a2 + 8);
    v15 = *(unsigned int *)(a2 + 32);
    v16 = 8 * v13 - v15 + 32LL * (unsigned int)v26;
    v24 = v16;
    if ( (_DWORD)v15 || v13 < (unsigned __int64)v14 )
    {
      if ( v16 >> 3 <= (unsigned __int64)v14 )
      {
        *(_DWORD *)(a2 + 32) = 0;
        *(_QWORD *)(a2 + 16) = (v16 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
        v20 = v16 & 0x3F;
        if ( v20 )
        {
          sub_9E7620((__int64)&v28, a2, v20);
          if ( (v29 & 1) != 0 )
          {
            v23 = v28;
            v28 = 0;
            sub_9E7130(&v28);
            if ( v23 )
            {
              *a1 = v23;
              goto LABEL_23;
            }
          }
          else
          {
            sub_9E7130(&v28);
          }
        }
        *a1 = 0;
      }
      else
      {
        v28 = 8 * v13 - v15;
        v19 = std::_V2::generic_category(v14);
        sub_9E74D0(a1, 0x54u, v19, (__int64)"can't skip to bit %zu from %lu", (const double *)&v24);
      }
    }
    else
    {
      v17 = std::_V2::generic_category(v14);
      sub_9E6160((__int64)a1, 0x54u, v17, "can't skip block: already at end of stream");
    }
LABEL_23:
    sub_9E7150(&v26);
    return a1;
  }
  v5 = v28;
  v28 = 0;
  *a1 = v5;
  sub_9E7150(&v28);
  return a1;
}

