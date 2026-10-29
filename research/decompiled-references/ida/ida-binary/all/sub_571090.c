unsigned __int64 __fastcall sub_571090(
        unsigned __int16 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        FILE *a5)
{
  unsigned __int16 v5; // r14
  unsigned __int64 v10; // rdi
  unsigned __int16 v11; // ax
  char *v12; // rax
  int v13; // edi
  char *v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  int v19; // r10d
  int v20; // r11d
  _BOOL4 v21; // eax
  int v22; // r9d
  int v23; // r8d
  unsigned __int64 v24; // rax
  unsigned __int64 result; // rax
  unsigned int v26; // edx
  __int64 v27; // r15
  __int64 v28; // rax
  unsigned __int64 *v29; // r14
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  int v37; // [rsp+18h] [rbp-50h]

  v5 = a4;
  v10 = *(_QWORD *)a1;
  if ( (v10 & 1) != 0 )
    v11 = BYTE1(v10);
  else
    v11 = *(_WORD *)(v10 + 40);
  if ( !a4 )
    v5 = v11;
  v37 = sub_55C590(v10);
  fprintf(a5, "tree_%p [label=\"", a1);
  v12 = sub_563060(a3, v5);
  v13 = *v12;
  v14 = v12;
  if ( *v12 )
  {
    while ( (_BYTE)v13 != 10 )
    {
      if ( (char)v13 <= 10 )
      {
        if ( (_BYTE)v13 != 9 )
          goto LABEL_29;
        fwrite("\\t", 1u, 2u, a5);
LABEL_9:
        v13 = *++v14;
        if ( !(_BYTE)v13 )
          goto LABEL_15;
      }
      else
      {
        if ( (_BYTE)v13 != 34 && (_BYTE)v13 != 92 )
        {
LABEL_29:
          fputc(v13, a5);
          goto LABEL_9;
        }
        ++v14;
        fputc(92, a5);
        fputc(*(v14 - 1), a5);
        v13 = *v14;
        if ( !*v14 )
          goto LABEL_15;
      }
    }
    fwrite("\\n", 1u, 2u, a5);
    goto LABEL_9;
  }
LABEL_15:
  fputc(34, a5);
  if ( (*(_QWORD *)a1 & 1) != 0 || !*(_DWORD *)(*(_QWORD *)a1 + 36LL) )
  {
    fwrite(", shape=plaintext", 1u, 0x11u, a5);
    v15 = *(_QWORD *)a1;
    if ( (*(_QWORD *)a1 & 1) != 0 )
    {
LABEL_18:
      if ( (v15 & 8) == 0 )
        goto LABEL_19;
      goto LABEL_32;
    }
  }
  else
  {
    v15 = *(_QWORD *)a1;
    if ( (*(_QWORD *)a1 & 1) != 0 )
      goto LABEL_18;
  }
  if ( (*(_BYTE *)(v15 + 44) & 4) == 0 )
  {
LABEL_19:
    if ( (v15 & 1) != 0 )
      goto LABEL_20;
    goto LABEL_33;
  }
LABEL_32:
  fwrite(", fontcolor=gray", 1u, 0x10u, a5);
  v15 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
LABEL_20:
    if ( (v15 & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_34;
  }
LABEL_33:
  if ( (*(_BYTE *)(v15 + 44) & 0x20) == 0 )
  {
LABEL_21:
    if ( (v15 & 1) != 0 )
      goto LABEL_22;
LABEL_35:
    v16 = *(_QWORD *)a1;
    LODWORD(v17) = *(_DWORD *)(v15 + 28);
    if ( (*(_QWORD *)a1 & 1) == 0 )
      goto LABEL_23;
LABEL_36:
    v21 = (*(_BYTE *)a1 & 0x10) != 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    if ( (v16 & 0x20) != 0 )
      v22 = 610;
    else
      v22 = 0;
    goto LABEL_38;
  }
LABEL_34:
  fwrite(", color=green, penwidth=2", 1u, 0x19u, a5);
  v15 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) == 0 )
    goto LABEL_35;
LABEL_22:
  v16 = *(_QWORD *)a1;
  v17 = (v15 >> 44) & 0xF;
  if ( (*(_QWORD *)a1 & 1) != 0 )
    goto LABEL_36;
LABEL_23:
  v18 = *(_DWORD *)(v16 + 36);
  v19 = *(unsigned __int16 *)(v16 + 64);
  if ( v18 )
    v18 = *(_DWORD *)(v16 + 56);
  v20 = *(_BYTE *)(v16 + 45) & 1;
  if ( (v15 & 1) != 0 )
  {
    v21 = (*(_BYTE *)a1 & 0x10) != 0;
    if ( (*(_BYTE *)(v16 + 45) & 2) == 0 )
      goto LABEL_27;
  }
  else
  {
    v21 = (*(_BYTE *)(v16 + 44) & 0x20) != 0;
    if ( (*(_BYTE *)(v16 + 45) & 2) == 0 )
    {
LABEL_27:
      v22 = *(_DWORD *)(v16 + 32);
      goto LABEL_38;
    }
  }
  v22 = 610;
LABEL_38:
  v23 = a1[1];
  if ( (v15 & 1) == 0 )
    v23 = *(unsigned __int16 *)(v16 + 42);
  fprintf(
    a5,
    ", tooltip=\"range: %u - %u\n"
    "state: %d\n"
    "error-cost: %u\n"
    "has-changes: %u\n"
    "depends-on-column: %u\n"
    "descendant-count: %u\n"
    "repeat-depth: %u\n"
    "lookahead-bytes: %u",
    a2,
    a2 + v37,
    v23,
    v22,
    v21,
    v20,
    v18,
    v19,
    v17);
  v24 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) == 0 && *(_WORD *)(v24 + 40) == 0xFFFF && !*(_DWORD *)(v24 + 36) )
  {
    v34 = *(unsigned int *)(v24 + 48);
    if ( (_DWORD)v34 )
      fprintf(a5, "\ncharacter: '%c'", v34);
  }
  fwrite("\"]\n", 1u, 3u, a5);
  result = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) == 0 )
  {
    v26 = *(_DWORD *)(result + 36);
    if ( v26 )
    {
      v35 = v26;
      v36 = *(unsigned __int16 *)(result + 66) * *(unsigned __int16 *)(a3 + 36);
      v27 = 0;
      do
      {
        v28 = 0;
        if ( (*(_BYTE *)a1 & 1) == 0 )
          v28 = *(_QWORD *)a1 - 8LL * *(unsigned int *)(*(_QWORD *)a1 + 36LL);
        v29 = (unsigned __int64 *)(v28 + 8 * v27);
        v30 = *v29;
        if ( (*v29 & 1) != 0 )
          v30 = (v30 >> 3) & 1;
        else
          LOBYTE(v30) = (*(_BYTE *)(v30 + 44) & 4) != 0;
        v31 = 0;
        if ( !(_BYTE)v30 )
        {
          v32 = v36;
          if ( v36 )
          {
            ++v36;
            v31 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 128) + 2LL * v32);
          }
        }
        sub_571090(v29, a2, a3, v31, a5);
        v33 = v27++;
        fprintf(a5, "tree_%p -> tree_%p [tooltip=%u]\n", a1, v29, v33);
        result = sub_55C590(*v29);
        a2 += result;
      }
      while ( v35 != v27 );
    }
  }
  return result;
}
