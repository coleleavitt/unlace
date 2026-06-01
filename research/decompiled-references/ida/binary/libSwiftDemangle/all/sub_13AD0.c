unsigned __int64 __fastcall sub_13AD0(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // rax
  int v4; // ecx
  char v5; // r13
  __int16 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+8h] [rbp-40h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 >= *(_QWORD *)(a1 + 64) )
    return v1;
  *(_QWORD *)(a1 + 72) = v2 + 1;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v2) )
  {
    case 'a':
      v4 = *(_DWORD *)(a1 + 96);
      v5 = 1;
      v6 = 8;
      if ( v4 )
        goto LABEL_4;
      goto LABEL_32;
    case 'c':
      v4 = *(_DWORD *)(a1 + 96);
      if ( v4 )
      {
        v5 = 1;
        v6 = 25;
        goto LABEL_4;
      }
      v6 = 25;
      goto LABEL_59;
    case 'e':
      v4 = *(_DWORD *)(a1 + 96);
      if ( v4 )
      {
        v5 = 1;
        v6 = 69;
        goto LABEL_4;
      }
      v6 = 69;
      goto LABEL_59;
    case 'f':
      v19 = *(_DWORD *)(a1 + 96);
      if ( !v19 )
      {
        v28 = 0;
        v5 = 0;
        v10 = 0;
        v11 = 0;
        v6 = 71;
        goto LABEL_35;
      }
      v7 = *(_QWORD *)(a1 + 88);
      v20 = (unsigned int)(v19 - 1);
      v21 = v19 - 1;
      v10 = *(_QWORD *)(v7 + 8 * v20);
      if ( *(_WORD *)(v10 + 16) == 98 )
      {
        *(_DWORD *)(a1 + 96) = v20;
        if ( v19 == 1 )
        {
          v28 = 0;
          v5 = 0;
          v6 = 71;
          v11 = 0;
          goto LABEL_35;
        }
      }
      else
      {
        v21 = *(_DWORD *)(a1 + 96);
        v10 = 0;
      }
      v22 = (unsigned int)(v21 - 1);
      v11 = *(_QWORD *)(v7 + 8 * v22);
      v9 = v21 - 1;
      if ( *(_WORD *)(v11 + 16) == 165 )
      {
        *(_DWORD *)(a1 + 96) = v22;
        v5 = 0;
        v6 = 71;
        v28 = 0;
        goto LABEL_7;
      }
      v28 = 0;
      v9 = v21;
      v5 = 0;
      v11 = 0;
      v6 = 71;
      goto LABEL_8;
    case 'm':
      v4 = *(_DWORD *)(a1 + 96);
      if ( v4 )
      {
        v5 = 1;
        v6 = 132;
        goto LABEL_4;
      }
      v6 = 132;
      goto LABEL_59;
    case 'p':
      v4 = *(_DWORD *)(a1 + 96);
      if ( v4 )
      {
        v5 = 1;
        v6 = 162;
        goto LABEL_4;
      }
      v6 = 162;
      goto LABEL_59;
    case 'r':
      v4 = *(_DWORD *)(a1 + 96);
      if ( !v4 )
      {
        v6 = 133;
LABEL_59:
        v28 = 0;
        v5 = 1;
        v10 = 0;
        v11 = 0;
        goto LABEL_35;
      }
      v5 = 1;
      v6 = 133;
LABEL_4:
      v7 = *(_QWORD *)(a1 + 88);
      v8 = (unsigned int)(v4 - 1);
      v9 = v4 - 1;
      v10 = *(_QWORD *)(v7 + 8 * v8);
      if ( *(_WORD *)(v10 + 16) == 98 )
      {
        *(_DWORD *)(a1 + 96) = v8;
        if ( !v5 )
        {
LABEL_6:
          v28 = 0;
          v11 = 0;
          goto LABEL_7;
        }
        if ( v4 == 1 )
        {
LABEL_33:
          v28 = 0;
          v11 = 0;
          goto LABEL_35;
        }
      }
      else
      {
        v9 = v4;
        v10 = 0;
        if ( !v5 )
          goto LABEL_6;
      }
      v24 = *(_QWORD *)(v7 + 8LL * (unsigned int)--v9);
      v25 = *(unsigned __int16 *)(v24 + 16);
      v28 = v24;
      if ( (unsigned __int16)v25 <= 0x80u )
      {
        if ( (unsigned __int16)v25 <= 0x61u )
          goto LABEL_46;
        v27 = 1074790401;
        if ( !_bittest64(&v27, (unsigned int)(v25 - 98)) )
          goto LABEL_46;
      }
      else
      {
        LOWORD(v25) = v25 - 163;
        if ( (unsigned __int16)v25 > 0x3Bu || (v26 = 0x800000080000087LL, !_bittest64(&v26, v25)) )
        {
LABEL_46:
          v9 = *(_DWORD *)(a1 + 96);
          v5 = 1;
          goto LABEL_6;
        }
      }
      *(_DWORD *)(a1 + 96) = v9;
      v5 = 1;
      v11 = 0;
LABEL_7:
      if ( !v9 )
        goto LABEL_35;
LABEL_8:
      v12 = (unsigned int)(v9 - 1);
      v13 = *(_QWORD *)(v7 + 8 * v12);
      v14 = v12;
      v15 = *(unsigned __int16 *)(v13 + 16);
      if ( (unsigned __int16)v15 > 0x47u )
      {
        if ( (unsigned __int16)v15 > 0x85u )
        {
          if ( (_WORD)v15 == 162 )
            goto LABEL_11;
        }
        else if ( (unsigned __int16)v15 > 0x83u )
        {
          goto LABEL_11;
        }
LABEL_35:
        v13 = sub_132E0(a1);
        v16 = sub_D1F0((_QWORD *)a1);
        v17 = v16;
        if ( v5 )
          goto LABEL_13;
        goto LABEL_36;
      }
      if ( (unsigned __int16)v15 > 0x18u )
      {
        v23 = 0x500000000001LL;
        if ( _bittest64(&v23, (unsigned int)(v15 - 25)) )
          goto LABEL_11;
        goto LABEL_35;
      }
      if ( (_WORD)v15 != 8 )
        goto LABEL_35;
LABEL_11:
      *(_DWORD *)(a1 + 96) = v14;
      if ( !v13 )
        goto LABEL_35;
      v16 = sub_D1F0((_QWORD *)a1);
      v17 = v16;
      if ( v5 )
      {
LABEL_13:
        v1 = sub_CFE0((_QWORD *)a1, v6, v13, v28, v10, v16);
        goto LABEL_14;
      }
LABEL_36:
      v1 = sub_CEE0((_QWORD *)a1, v6, v13, v10, v17);
LABEL_14:
      if ( v11 )
        sub_C080(v1, v11, (_QWORD *)a1);
      return v1;
    case 'u':
      v4 = *(_DWORD *)(a1 + 96);
      v5 = 0;
      v6 = 130;
      if ( v4 )
        goto LABEL_4;
LABEL_32:
      v10 = 0;
      goto LABEL_33;
    default:
      return 0;
  }
}

