unsigned __int64 __fastcall sub_14469E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r12
  __int64 v9; // r13
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdx
  char v19; // al
  unsigned __int64 result; // rax
  int v21; // edx
  int v22; // eax
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // r10d
  __int64 *v27; // r11
  int v28; // edi
  bool v29; // zf
  int v30; // edx
  __int64 v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-40h]
  __int64 v33; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v34; // [rsp+18h] [rbp-30h] BYREF

  v6 = (_QWORD *)a3;
  v9 = *(_QWORD *)(a1 + 1704);
  v33 = a2;
  v10 = *(_DWORD *)(v9 + 16);
  if ( !v10 )
  {
    v34 = nullptr;
    goto LABEL_47;
  }
  a6 = v10 - 1;
  v11 = a6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (__int64 *)(*(_QWORD *)v9 + 16LL * v11);
  v13 = *v12;
  if ( a2 == *v12 )
    goto LABEL_3;
  v26 = 1;
  v27 = nullptr;
  if ( v13 == -4096 )
  {
LABEL_28:
    v28 = *(_DWORD *)(v9 + 8);
    v34 = v12;
    a3 = (unsigned int)(v28 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * v10 )
    {
      a5 = a2;
      a6 = v10 >> 3;
      if ( v10 - *(_DWORD *)(v9 + 12) - (unsigned int)a3 > (unsigned int)a6 )
      {
LABEL_30:
        v29 = *v12 == -4096;
        *(_DWORD *)(v9 + 8) = a3;
        if ( !v29 )
          --*(_DWORD *)(v9 + 12);
        *v12 = a5;
        v12[1] = 0;
        goto LABEL_3;
      }
      v32 = a4;
LABEL_48:
      sub_12F12D0(v9, v10, a3, a4, a5, a6);
      sub_12EC520((__int64 *)v9, &v33, &v34);
      a5 = v33;
      a4 = v32;
      LODWORD(a3) = *(_DWORD *)(v9 + 8) + 1;
      v12 = v34;
      goto LABEL_30;
    }
LABEL_47:
    v32 = a4;
    v10 *= 2;
    goto LABEL_48;
  }
  while ( 1 )
  {
    if ( !v27 && v13 == -8192 )
      v27 = v12;
    v11 = a6 & (v26 + v11);
    v12 = (__int64 *)(*(_QWORD *)v9 + 16LL * v11);
    v13 = *v12;
    if ( a2 == *v12 )
      break;
    if ( v13 == -4096 )
    {
      if ( v27 )
        v12 = v27;
      goto LABEL_28;
    }
    ++v26;
  }
LABEL_3:
  v14 = (unsigned __int64 *)(v12 + 1);
  v15 = *v14;
  if ( *v14 )
  {
    v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v15 & 4) != 0 )
    {
      if ( !v16 )
        goto LABEL_12;
      v16 = (_QWORD *)*v16;
    }
    if ( v16 )
    {
      *v6 = v16;
      v17 = *v14;
      if ( *v14 )
      {
        if ( (v17 & 4) != 0 )
        {
          v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v18 )
          {
            *v18 = a4;
            goto LABEL_13;
          }
        }
      }
    }
  }
LABEL_12:
  *v14 = a4 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_13:
  v19 = *(_BYTE *)(a2 + 3);
  if ( (v19 & 2) == 0 )
    *(_BYTE *)(a2 + 3) = v19 | 0x86;
  result = (unsigned __int64)sub_13F1C60((__int64 *)a4);
  if ( v21 || !result )
  {
    v22 = *(_DWORD *)(a1 + 2096);
    v23 = *(_QWORD *)(a1 + 2080);
    if ( !v22 )
      goto LABEL_21;
    v24 = v22 - 1;
    result = (v22 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v25 = *(_QWORD *)(v23 + 16 * result);
    if ( a2 == v25 )
      return result;
    if ( v25 != -4096 )
    {
      v30 = 1;
      while ( 1 )
      {
        result = v24 & (unsigned int)(v30 + result);
        v31 = *(_QWORD *)(v23 + 16LL * (unsigned int)result);
        if ( a2 == v31 )
          break;
        ++v30;
        if ( v31 == -4096 )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      result = (*(_BYTE *)(a2 + 3) & 2) != 0;
      if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
      {
        *(_BYTE *)(a2 + 3) &= ~2u;
        if ( (*(_BYTE *)(a2 + 5) & 2) == 0 )
          *(_WORD *)(a2 + 4) &= 0xFE7Fu;
        if ( (*(_BYTE *)(a2 + 3) & 0x3A) == 0 )
          LOBYTE(result) = (*(_BYTE *)(a2 + 4) & 0x30) != 0;
        result = *(_BYTE *)(a2 + 3) & 0x7Fu | ((_DWORD)result << 7);
        *(_BYTE *)(a2 + 3) = result;
      }
    }
  }
  return result;
}
