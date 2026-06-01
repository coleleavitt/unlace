__int64 __fastcall sub_B2820(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r13d
  int v9; // ecx
  unsigned __int64 v10; // r8
  int v11; // r9d
  char v12; // al
  char v13; // r12
  char v14; // al
  unsigned __int64 v15; // rax
  char v16; // r15
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  char v20; // al
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD v24[9]; // [rsp+0h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 153) )
    return 0;
  v7 = sub_D0EB0(&qword_2511A0);
  v8 = v7;
  if ( (dword_2440D8 & 4) != 0 )
  {
    if ( (unsigned __int8)sub_A1A40((__int64)xmmword_250E60, v7) )
      return 0;
  }
  if ( !getseg() )
  {
    sub_D0730(1);
    if ( !(unsigned __int8)is_mapped() )
      return 0;
  }
  v12 = dword_2440D8;
  if ( (dword_2440D8 & 2) != 0 )
  {
    v13 = sub_D11C0(&qword_2511A0);
    if ( v13 )
    {
      if ( !*(_BYTE *)(a1 + 152) )
        goto LABEL_23;
      goto LABEL_22;
    }
    v12 = dword_2440D8;
  }
  if ( (v12 & 1) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 152) )
      *(_BYTE *)(a1 + 152) = 1;
    goto LABEL_10;
  }
  v14 = sub_D1160(&qword_2511A0);
  v13 = v14;
  if ( !*(_BYTE *)(a1 + 152) )
  {
    *(_BYTE *)(a1 + 152) = v14 ^ 1;
    if ( !v14 )
    {
      v12 = dword_2440D8;
LABEL_10:
      v13 = 0;
      goto LABEL_11;
    }
LABEL_23:
    v13 = *(_BYTE *)(a1 + 156) | a3;
    if ( v13 )
    {
      if ( (dword_2440D8 & 3) == 0 )
        goto LABEL_34;
      v15 = *(_QWORD *)(a1 + 128);
      v16 = *(_BYTE *)(a1 + 156) | a3;
      v17 = v15 - 1;
      if ( (__int64)(v15 - 1) < 0 )
        goto LABEL_34;
LABEL_26:
      v18 = *(_QWORD *)(a1 + 120);
      while ( *(_DWORD *)(v18 + 8 * v17) != v8 )
      {
        if ( v17-- == 0 )
          goto LABEL_32;
      }
      if ( v17 != v15 )
      {
        LODWORD(v24[0]) = -1;
        WORD2(v24[0]) = 0;
        if ( v17 >= v15 )
        {
          v22 = *(_QWORD *)(a1 + 136);
          if ( (unsigned __int64)v24 < v18 || (v10 = v18 + 8 * v22, (unsigned __int64)v24 >= v10) )
          {
            if ( v22 < v17 )
            {
              *(_QWORD *)(a1 + 120) = qvector_reserve();
              v15 = *(_QWORD *)(a1 + 128);
            }
            if ( v15 < v17 )
            {
              do
              {
                v9 = v24[0];
                *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v15++) = v24[0];
              }
              while ( v17 != v15 );
            }
          }
          else
          {
            if ( v22 < v17 )
            {
              *(_QWORD *)(a1 + 120) = qvector_reserve();
              v15 = *(_QWORD *)(a1 + 128);
            }
            if ( v15 < v17 )
            {
              do
              {
                v9 = 0;
                v23 = *(_QWORD *)(a1 + 120) + 8 * v15++;
                *(_DWORD *)v23 = -1;
                *(_WORD *)(v23 + 4) = 0;
              }
              while ( v17 != v15 );
            }
          }
        }
        *(_QWORD *)(a1 + 128) = v17;
      }
LABEL_32:
      v20 = v13;
      v13 = v16;
      if ( *(_BYTE *)(a1 + 153) && !v20 )
      {
LABEL_50:
        if ( !(unsigned int)sub_C73B0(13, *(_DWORD *)(a2 + 4), v8, v9, v10, v11) )
        {
          sub_B1900(a1, v8);
          sub_B25C0(a1, v8);
          sub_B27F0(a1, v8);
        }
      }
LABEL_34:
      if ( *(_BYTE *)(a1 + 156) && v13 )
        sub_A2DA0(a1);
      goto LABEL_14;
    }
    v13 = 1;
LABEL_49:
    v16 = 1;
    sub_A2DA0(a1);
    v21 = dword_2440D8;
LABEL_57:
    if ( (v21 & 3) == 0 )
      goto LABEL_32;
    v15 = *(_QWORD *)(a1 + 128);
    v17 = v15 - 1;
    if ( (__int64)(v15 - 1) < 0 )
      goto LABEL_32;
    goto LABEL_26;
  }
LABEL_22:
  v12 = dword_2440D8;
LABEL_11:
  if ( (v12 & 2) != 0 )
  {
    if ( (unsigned __int8)sub_D11C0(&qword_2511A0) && !*(_BYTE *)(a1 + 155) )
    {
LABEL_45:
      v16 = *(_BYTE *)(a1 + 156) | a3;
      if ( v16 )
      {
        v21 = dword_2440D8;
        goto LABEL_57;
      }
      if ( *(_BYTE *)(a1 + 152) && (*(_BYTE *)(a1 + 153) & 4) != 0 )
        sub_B2460((unsigned int *)a1, v8, 2, dword_2440D4);
      goto LABEL_49;
    }
    v21 = dword_2440D8;
    if ( (dword_2440D8 & 1) == 0 )
      goto LABEL_56;
LABEL_52:
    if ( !(unsigned __int8)sub_D1160(&qword_2511A0) || *(_BYTE *)(a1 + 154) )
    {
      v21 = dword_2440D8;
LABEL_56:
      v16 = 0;
      goto LABEL_57;
    }
    goto LABEL_45;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_52;
  v13 |= *(_BYTE *)(a1 + 153) == 0;
  if ( !v13 )
    goto LABEL_50;
LABEL_14:
  if ( *(_BYTE *)(a1 + 153) && n > 1 && (unsigned __int8)sub_98E70((__int64)&qword_250AC0, v8, "trace", v24) )
  {
    sub_CD080();
    if ( !LOBYTE(v24[0]) )
      sub_8F660((__int64)"%a: trace condition validated, suspending the process\n", a4);
  }
  return 1;
}

