void __fastcall sub_EE3F90(_QWORD *a1, unsigned __int64 *a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  char v8; // al
  unsigned __int64 v9; // rax
  char *v10; // rbp
  size_t v11; // rax
  unsigned __int64 v12; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  char v16; // al
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  char v20; // r8
  unsigned __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  const void *v30; // rax
  size_t v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 *v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // r13
  _BYTE *v40; // rax
  unsigned int v41; // eax
  __int64 *v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // r13
  const char *v45; // rax
  __int64 *v46; // r14
  __int64 v47; // r15
  __int64 v48; // rdi
  const char *v49; // rax
  size_t v50; // rdx
  __int64 v51; // r13
  _BYTE *v52; // rax
  __int64 v53; // [rsp+0h] [rbp-58h] BYREF
  int v54; // [rsp+8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+10h] [rbp-48h]

  v7 = a2[2];
  v8 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( v8 == 44 )
  {
    v9 = sub_B4F900(a2[2]);
    v10 = (char *)sub_BD7B00(v9);
    v11 = j__strlen("\n");
    sub_EE3EC0(v10, *a1, 0, (const __m128i *)(a1 + 3), 0, 0, "\n", v11);
    return;
  }
  if ( v8 == 30 )
  {
    sub_B9C2C0(v7, (char *)*a1, (__int64)(a1 + 3), a3);
    return;
  }
  v12 = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    v14 = a2[4];
    if ( v14 )
    {
      sub_E6C510(v14, *a1, (const __m128i *)(a1 + 3), 0, 1);
      v12 = *a2;
    }
  }
  v15 = v12 >> 16;
  if ( (v15 & 0x10) != 0 && LODWORD(a2[2 * ((v15 & 8) != 0) + 5 + ((v15 & 0x20) != 0)]) )
    sub_971800(*a1, "template ");
  v16 = *((_BYTE *)a1 + 29);
  v17 = *((_DWORD *)a2 + 1);
  v18 = *(_QWORD *)(a2[2] + 40);
  v19 = *(_QWORD *)(a2[2] + 40) & 7LL;
  if ( (v16 & 1) == 0 )
  {
    v27 = a2[3];
    v53 = *(_QWORD *)(a2[2] + 40);
    v54 = v17;
    v28 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    v55 = v27;
    if ( (_DWORD)v19 )
      goto LABEL_25;
    goto LABEL_20;
  }
  v20 = *(_BYTE *)(v7 + 28);
  v21 = a2[3];
  v53 = *(_QWORD *)(a2[2] + 40);
  v54 = v17;
  a6 = v20 & 0x7F;
  v55 = v21;
  if ( (_DWORD)v19 )
  {
    if ( (_BYTE)a6 == 47 )
      goto LABEL_15;
LABEL_25:
    sub_B61F50(&v53, *a1, a1[3], a1[4], a6);
    goto LABEL_26;
  }
  if ( (_BYTE)a6 != 47 )
  {
    v28 = v18 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_20:
    if ( !v28 )
    {
      v22 = *a1;
      v37 = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( v37 == 46 )
      {
        v46 = (__int64 *)(v7 + 104);
        sub_971800(v22, "decomposition");
        v47 = v7 + 104 + 8LL * *(unsigned int *)(v7 + 100);
        if ( v47 != v7 + 104 )
        {
          do
          {
            v51 = *a1;
            v52 = *(_BYTE **)(*a1 + 32LL);
            if ( (unsigned __int64)v52 < *(_QWORD *)(*a1 + 24LL) )
            {
              *(_QWORD *)(v51 + 32) = v52 + 1;
              *v52 = 45;
            }
            else
            {
              v51 = sub_2257CD0(*a1, 45);
            }
            v48 = *v46++;
            v49 = sub_971A10(v48);
            sub_9717A0(v51, v49, v50);
          }
          while ( (__int64 *)v47 != v46 );
        }
        goto LABEL_26;
      }
      if ( v37 != 47 )
      {
        if ( v37 == 43 )
        {
          v38 = sub_971800(v22, "function-parameter-");
          if ( (*(_BYTE *)(v7 + 97) & 0x10) == 0 )
            v28 = (*(_DWORD *)(v7 + 96) >> 13) & 0x7F;
          v39 = sub_2257BD0(v38, v28);
          v40 = *(_BYTE **)(v39 + 32);
          if ( (unsigned __int64)v40 >= *(_QWORD *)(v39 + 24) )
          {
            v39 = sub_2257CD0(v39, 45);
          }
          else
          {
            *(_QWORD *)(v39 + 32) = v40 + 1;
            *v40 = 45;
          }
          v41 = (unsigned __int8)(*(_WORD *)(v7 + 98) >> 4);
          if ( v41 == 255 )
            v41 = sub_B50B40(v7);
          sub_2257BD0(v39, v41);
        }
        else
        {
          v44 = sub_971800(v22, "unhandled-anonymous-");
          v45 = (const char *)sub_B64350(v7);
          sub_971800(v44, v45);
        }
        goto LABEL_26;
      }
      goto LABEL_16;
    }
    if ( (v16 & 0x10) != 0 && (*(_BYTE *)(v7 + 28) & 0x7B) == 0x2B )
    {
      v29 = *a1;
      v30 = (const void *)sub_FBA480(v28);
      sub_9717A0(v29, v30, v31);
      goto LABEL_26;
    }
    goto LABEL_25;
  }
LABEL_15:
  v22 = *a1;
LABEL_16:
  v23 = sub_971800(v22, "value-parameter-");
  v24 = sub_2257BD0(v23, *(_DWORD *)(v7 + 68) & 0xFFFFF);
  v25 = *(_BYTE **)(v24 + 32);
  if ( (unsigned __int64)v25 >= *(_QWORD *)(v24 + 24) )
  {
    v24 = sub_2257CD0(v24, 45);
  }
  else
  {
    *(_QWORD *)(v24 + 32) = v25 + 1;
    *v25 = 45;
  }
  v26 = sub_2257BD0(v24, *(_WORD *)(v7 + 70) >> 4);
  sub_971800(v26, &byte_22CD811);
LABEL_26:
  v32 = *a2;
  if ( (*a2 & 0x100000) != 0 && LODWORD(a2[2 * ((*a2 & 0x80000) != 0) + 4 + ((*a2 & 0x200000) != 0)]) )
  {
    v33 = 0;
    if ( ((*a2 >> 16) & 0x40) == 0 && (*(_BYTE *)(v7 + 28) & 0x7Fu) - 68 <= 6 )
      v33 = *(_QWORD *)(v7 + 56);
    if ( (v32 & 0x100000) != 0 && (v43 = (v32 & 0x200000) != 0, LODWORD(a2[2 * ((v32 & 0x80000) != 0) + 4 + v43])) )
      v34 = (__int64 *)&a2[2 * ((v32 & 0x80000) != 0) + 4 + 2 * (unsigned __int64)((v32 & 0x100000) != 0) + v43];
    else
      v34 = nullptr;
    v35 = v32 >> 16;
    if ( (v35 & 0x10) != 0 && (v42 = (__int64 *)&a2[2 * ((v35 & 8) != 0) + ((v35 & 0x20) != 0)], *((_DWORD *)v42 + 8)) )
      v36 = *((unsigned int *)v42 + 11);
    else
      v36 = 0;
    sub_F55640(*a1, v34, v36, a1 + 3, v33);
  }
}

