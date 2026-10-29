__int64 __fastcall sub_7C3CF0(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  _QWORD *v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  const char *v14; // rdx
  __int64 result; // rax
  int v16; // r12d
  __int64 v17; // rdi
  _BYTE *v18; // rdx
  _BYTE *v19; // rcx
  unsigned int *v20; // rdx
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r14
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdi
  __int64 v30; // rdi
  _QWORD *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // [rsp-10h] [rbp-88h]
  unsigned __int64 v35; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v36[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v37; // [rsp+30h] [rbp-48h]

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 68) & 2) == 0 )
    {
      if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
        goto LABEL_4;
      goto LABEL_36;
    }
    v30 = *(_QWORD *)a1;
    v31 = *(_QWORD **)(v30 + 32);
    if ( *(_QWORD *)(v30 + 24) - (_QWORD)v31 <= 7u )
    {
      sub_26240F0(v30, "mutable ", 8);
    }
    else
    {
      *v31 = 0x20656C626174756DLL;
      *(_QWORD *)(v30 + 32) += 8LL;
    }
    if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
    {
LABEL_36:
      v32 = *(_QWORD *)a1;
      v33 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
      if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v33) <= 0x12 )
      {
        sub_26240F0(v32, "__module_private__ ", 19);
      }
      else
      {
        *(__m128i *)v33 = _mm_load_si128((const __m128i *)&xmmword_3C7E8C0);
        *(_DWORD *)(v33 + 15) = 543121253;
        *(_QWORD *)(v32 + 32) += 19LL;
      }
    }
  }
LABEL_4:
  v4 = *(_QWORD *)a1;
  v5 = sub_798D40(a2);
  v6 = *(_QWORD *)(a2 + 48);
  v7 = (_QWORD *)v5;
  v8 = v6;
  v9 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(v9 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v21 = *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v21 & 8) != 0 )
    {
      v22 = v6 | v21;
      v23 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | v22 & 7;
      if ( (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          & 0x1C0) != 0 )
      {
        v24 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            & 0xFFFFFFFFFFFFFE3FLL
            | v22 & 7;
        if ( (v10 & 7) != 0 || (v10 & 8) != 0 )
        {
          v25 = sub_B0CF30(v6, v9) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v24 <= 7 )
            goto LABEL_23;
        }
        else
        {
          v25 = v9 & 0xFFFFFFFFFFFFFFF0LL;
          if ( v24 <= 7 )
          {
LABEL_23:
            v8 = v25 | (unsigned int)v23 & 0xFFFFFE3F;
            goto LABEL_5;
          }
        }
        v8 = sub_6C3980(v7, v25, v23 & 0xFFFFFFFFFFFFFE3FLL);
      }
    }
  }
LABEL_5:
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(unsigned int *)(a1 + 32);
  v35 = v8;
  v13 = 0;
  v14 = &byte_3B9466E;
  if ( (v11 & 7) == 0 )
  {
    v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v20 = *(unsigned int **)(v13 + 16);
      v13 = *v20;
      v14 = (const char *)(v20 + 4);
    }
  }
  v36[0] = v14;
  v37 = 261;
  v36[1] = v13;
  sub_B2AEC0(&v35, v4, a1 + 8, v36, v12);
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
  {
    v26 = *(_QWORD *)a1;
    v27 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v27) <= 2 )
    {
      sub_26240F0(v26, " : ", 3);
    }
    else
    {
      *(_BYTE *)(v27 + 2) = 32;
      *(_WORD *)v27 = 14880;
      *(_QWORD *)(v26 + 32) += 3LL;
    }
    v28 = *(_BYTE *)(a2 + 68);
    if ( (v28 & 1) != 0 )
    {
      v29 = *(_QWORD *)(a2 + 72);
      if ( (~v28 & 0xC) != 0 && (v28 & 0xC) != 0 )
        v29 = *(_QWORD *)(v29 + 8);
    }
    else
    {
      LODWORD(v29) = 0;
    }
    sub_AE6C50(v29, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), "\n", 1u);
  }
  result = sub_781770(a2);
  v16 = result;
  if ( (*(_BYTE *)(a1 + 10) & 1) == 0 && result )
  {
    v17 = *(_QWORD *)a1;
    v18 = *(_BYTE **)(*(_QWORD *)a1 + 24LL);
    v19 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (~*(_BYTE *)(a2 + 68) & 0xC) != 0 && ((*(_BYTE *)(a2 + 68) >> 2) & 3) == 2 )
    {
      if ( v19 == v18 )
      {
        sub_26240F0(v17, " ", 1);
      }
      else
      {
        *v19 = 32;
        ++*(_QWORD *)(v17 + 32);
      }
    }
    else if ( (unsigned __int64)(v18 - v19) <= 2 )
    {
      sub_26240F0(v17, " = ", 3);
    }
    else
    {
      v19[2] = 32;
      *(_WORD *)v19 = 15648;
      *(_QWORD *)(v17 + 32) += 3LL;
    }
    sub_AE6C50(v16, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), "\n", 1u);
    result = v34;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    return sub_7C2320(a1, a2, 0);
  return result;
}

