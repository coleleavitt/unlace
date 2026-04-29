__int64 __fastcall sub_17EF0(__int64 a1)
{
  unsigned __int64 v1; // rax
  char *v2; // rcx
  char v3; // dl
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int16 v17; // si
  unsigned __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r14
  unsigned __int64 v30; // r12
  __int64 v31; // rsi
  char v32; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 64) <= v1 )
    goto LABEL_18;
  v2 = (char *)(v1 + *(_QWORD *)(a1 + 56));
  v3 = *v2;
  if ( *v2 == 76 )
  {
    v8 = *(_DWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 72) = v1 + 1;
    if ( !v8 )
    {
      v11 = 0;
      v14 = 0;
      goto LABEL_16;
    }
    v9 = *(_QWORD *)(a1 + 88);
    v10 = (unsigned int)(v8 - 1);
    v11 = *(_QWORD *)(v9 + 8 * v10);
    v12 = *(unsigned __int16 *)(v11 + 16);
    if ( (_WORD)v12 == 98 )
    {
      *(_DWORD *)(a1 + 96) = v10;
      if ( v8 == 1 )
      {
LABEL_15:
        v14 = 0;
LABEL_16:
        v16 = v11;
        v17 = 165;
        return sub_CE00((_QWORD *)a1, v17, v16, v14);
      }
      v13 = (unsigned int)(v8 - 2);
      v14 = *(_QWORD *)(v9 + 8 * v13);
      LODWORD(v10) = v13;
      v12 = *(unsigned __int16 *)(v14 + 16);
    }
    else
    {
      v14 = *(_QWORD *)(v9 + 8 * v10);
      v11 = 0;
    }
    if ( (unsigned __int16)v12 <= 0x80u )
    {
      if ( (unsigned __int16)v12 <= 0x61u )
        goto LABEL_15;
      v31 = 1074790401;
      if ( !_bittest64(&v31, (unsigned int)(v12 - 98)) )
        goto LABEL_15;
    }
    else
    {
      LOWORD(v12) = v12 - 163;
      if ( (unsigned __int16)v12 > 0x3Bu )
        goto LABEL_15;
      v15 = 0x800000080000087LL;
      if ( !_bittest64(&v15, v12) )
        goto LABEL_15;
    }
    *(_DWORD *)(a1 + 96) = v10;
    goto LABEL_16;
  }
  if ( v3 != 108 )
  {
    if ( (unsigned __int8)((v3 & 0xDF) - 65) <= 9u )
    {
      *(_QWORD *)(a1 + 72) = v1 + 1;
      v32 = *v2;
      v25 = sub_BAC0((_QWORD *)a1, 98, &v32, 1u);
      v26 = *(_DWORD *)(a1 + 96);
      v27 = v25;
      if ( v26 )
      {
        v28 = (unsigned int)(v26 - 1);
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v28);
        *(_DWORD *)(a1 + 96) = v28;
      }
      else
      {
        v29 = 0;
      }
      v30 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v30 + 16) = 194;
      *(_BYTE *)(v30 + 18) = 0;
      sub_CCF0((_QWORD *)a1, v30, v27);
      return sub_CCF0((_QWORD *)a1, v30, v29);
    }
LABEL_18:
    v18 = sub_D1F0((_QWORD *)a1);
    v19 = *(_DWORD *)(a1 + 96);
    v16 = v18;
    if ( v19 )
    {
      v20 = (unsigned int)(v19 - 1);
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v20);
      v22 = *(unsigned __int16 *)(v21 + 16);
      if ( (unsigned __int16)v22 <= 0x80u )
      {
        if ( (unsigned __int16)v22 <= 0x61u )
          goto LABEL_22;
        v24 = 1074790401;
        if ( !_bittest64(&v24, (unsigned int)(v22 - 98)) )
          goto LABEL_22;
      }
      else
      {
        LOWORD(v22) = v22 - 163;
        if ( (unsigned __int16)v22 > 0x3Bu )
          goto LABEL_22;
        v23 = 0x800000080000087LL;
        if ( !_bittest64(&v23, v22) )
          goto LABEL_22;
      }
      *(_DWORD *)(a1 + 96) = v20;
      goto LABEL_23;
    }
LABEL_22:
    v21 = 0;
LABEL_23:
    v14 = v21;
    v17 = 128;
    return sub_CE00((_QWORD *)a1, v17, v16, v14);
  }
  *(_QWORD *)(a1 + 72) = v1 + 1;
  v4 = *(_DWORD *)(a1 + 96);
  if ( v4 && (v5 = (unsigned int)(v4 - 1), v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v5), *(_WORD *)(v6 + 16) == 98) )
    *(_DWORD *)(a1 + 96) = v5;
  else
    v6 = 0;
  return sub_CD20((_QWORD *)a1, 165, v6);
}
