__int64 __fastcall sub_80FD0(__int64 a1)
{
  int v1; // r15d
  int v2; // r14d
  int v3; // r13d
  __int64 v4; // rbp
  unsigned __int8 byte; // al
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  __int64 v9; // rbx
  int v10; // r15d
  unsigned __int8 *v11; // rbx
  unsigned __int8 *v12; // r12
  unsigned __int8 v13; // bp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v22; // rax
  _BYTE *v23; // rax
  char v24; // al
  unsigned int v25; // [rsp+8h] [rbp-80h]
  int v26; // [rsp+Ch] [rbp-7Ch]
  unsigned int v27; // [rsp+10h] [rbp-78h]
  int v28; // [rsp+10h] [rbp-78h]
  int v29; // [rsp+14h] [rbp-74h]
  int v30; // [rsp+18h] [rbp-70h]
  int v31; // [rsp+18h] [rbp-70h]
  int v32; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int64 v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  _BYTE v35[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v36 = __readfsqword(0x28u);
  v29 = 0;
  v27 = 0;
  v30 = 0;
  v25 = 0;
  v26 = 0;
  while ( 1 )
  {
    byte = get_byte();
    if ( byte == 103 )
    {
      ++v25;
      goto LABEL_9;
    }
    if ( byte <= 0x67u )
      break;
    if ( byte == 0xF0 )
    {
      ++v3;
      goto LABEL_9;
    }
    if ( byte > 0xF0u )
    {
      if ( (unsigned __int8)(byte + 14) > 1u )
        goto LABEL_40;
      ++v1;
      ++v30;
      v35[v4] = byte;
      if ( v1 == 16 )
        goto LABEL_17;
LABEL_10:
      v4 = v1;
    }
    else
    {
      if ( byte != 0x9B )
        goto LABEL_40;
      ++v2;
    }
  }
  if ( byte == 102 )
  {
    ++v26;
LABEL_9:
    ++v1;
    v35[v4] = byte;
    if ( v1 == 16 )
      goto LABEL_17;
    goto LABEL_10;
  }
  if ( byte <= 0x2Du )
  {
    if ( byte != 38 )
      goto LABEL_40;
    goto LABEL_8;
  }
  v6 = 1LL << (byte - 46);
  if ( (v6 & 0x3FFFC0000LL) == 0 )
  {
    if ( (v6 & 0xC0000000010101LL) == 0 )
      goto LABEL_40;
LABEL_8:
    ++v27;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 252) & 0x10) != 0 )
  {
    ++v29;
    goto LABEL_9;
  }
LABEL_40:
  if ( !v1 )
    return v36 - __readfsqword(0x28u);
LABEL_17:
  v7 = *(_DWORD *)(a1 + 252);
  v28 = (__PAIR64__(v27, (unsigned __int8)v7 & 0x80) - 1) >> 32;
  v8 = *(_WORD *)(a1 + 248);
  if ( (v26 & 1) == 0 || (v7 & 0x100) != 0 || v8 == 86 && (v24 = sub_80BC0(a1), v8 = *(_WORD *)(a1 + 248), v24 == -23) )
  {
LABEL_19:
    if ( (v25 & 1) == 0 )
    {
LABEL_20:
      v31 = v30 - 1;
      v32 = v3 - 1;
      if ( ((v8 - 43) & 0xFFFD) == 0 || (unsigned __int16)(v8 - 132) <= 1u )
        goto LABEL_22;
      goto LABEL_73;
    }
LABEL_64:
    v25 = (__PAIR64__(v25, *(_DWORD *)(a1 + 252) & 0x200) - 1) >> 32;
    goto LABEL_20;
  }
  if ( v8 != 60 )
  {
    --v26;
    goto LABEL_19;
  }
  if ( (v25 & 1) != 0 )
    goto LABEL_64;
  v31 = v30 - 1;
  v32 = v3 - 1;
LABEL_73:
  v23 = (_BYTE *)(a1 + 265);
  while ( *v23 != 11 )
  {
    v23 += 40;
    if ( v23 == (_BYTE *)(a1 + 585) )
    {
      if ( (unsigned __int16)(v8 - 97) > 1u && v8 != 60 && v8 != 349 && v8 != 142 && v8 != 1171 )
        v29 -= v8 != 553;
      break;
    }
  }
LABEL_22:
  if ( v1 <= 0 )
    return v36 - __readfsqword(0x28u);
  v9 = v1;
  v10 = 0;
  v11 = &v35[v9];
  v12 = v35;
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = *v12;
      if ( *v12 == 103 )
      {
        if ( (--v25 & 0x80000000) == 0 )
          goto LABEL_34;
        goto LABEL_26;
      }
      if ( v13 <= 0x67u )
      {
        if ( v13 > 0x4Fu )
        {
          if ( v13 == 102 )
          {
            if ( --v26 >= 0 )
              goto LABEL_34;
          }
          else
          {
            if ( v13 <= 0x63u )
              goto LABEL_34;
LABEL_33:
            if ( --v28 >= 0 )
              goto LABEL_34;
          }
        }
        else
        {
          if ( v13 <= 0x25u )
            goto LABEL_34;
          v14 = 1LL << (v13 - 38);
          if ( (v14 & 0x3FFFC000000LL) != 0 )
          {
            if ( --v29 >= 0 )
              goto LABEL_34;
          }
          else
          {
            if ( (v14 & 0x1010101) != 0 )
              goto LABEL_33;
LABEL_34:
            v15 = *(_QWORD *)a1;
            if ( v10 )
            {
              (*(void (__fastcall **)(__int64, __int64))(v15 + 32))(a1, 44);
              v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
              if ( v16 == sub_7D640 )
              {
                v17 = *(_QWORD *)(a1 + 32);
                if ( v17 )
                {
                  v18 = v17 + 1;
                  v19 = *(_QWORD *)(a1 + 32);
                  v20 = *(_QWORD *)(a1 + 24);
                  --v17;
                  if ( *(_QWORD *)(a1 + 40) >= v18 )
                    goto LABEL_38;
LABEL_52:
                  v34 = v17;
                  v33 = v18;
                  v22 = qvector_reserve();
                  v17 = v34;
                  v18 = v33;
                  *(_QWORD *)(a1 + 24) = v22;
                  v20 = v22;
                }
                else
                {
                  v20 = *(_QWORD *)(a1 + 24);
                  v19 = 1;
                  v18 = 2;
                  if ( *(_QWORD *)(a1 + 40) < 2u )
                    goto LABEL_52;
                }
LABEL_38:
                *(_QWORD *)(a1 + 32) = v18;
                *(_BYTE *)(v20 + v17) = 32;
                *(_BYTE *)(*(_QWORD *)(a1 + 24) + v19) = 0;
              }
              else
              {
                v16((_QWORD *)a1, 32);
              }
            }
            else
            {
              (*(void (__fastcall **)(__int64, void *, _QWORD))(v15 + 56))(a1, &unk_91972, 0);
            }
            ++v10;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, v13, 16);
          }
        }
LABEL_26:
        if ( ++v12 == v11 )
          goto LABEL_46;
        continue;
      }
      break;
    }
    if ( v13 == 0xF0 )
    {
      if ( --v32 >= 0 )
        goto LABEL_34;
      goto LABEL_26;
    }
    if ( (unsigned __int8)(v13 + 14) > 1u )
      goto LABEL_34;
    if ( --v31 >= 0 )
      goto LABEL_34;
    if ( ++v12 != v11 )
      continue;
    break;
  }
LABEL_46:
  if ( !v10 )
    return v36 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFF);
}
