/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C160
// Address: 0x000000000009C160

//----- (000000000009C160) ----------------------------------------------------
__int64 __fastcall sub_9C160(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  bool v8; // r14
  bool v9; // r12
  bool v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r14
  int v14; // r14d
  void *v15; // rax
  char *v16; // rdx
  char *v17; // rbp
  __int64 v18; // rbx
  unsigned int v19; // ebp
  __int64 v20; // r15
  __int64 v21; // r14
  int v22; // ebp
  __int64 v23; // rbx
  char *v24; // r12
  __int64 v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  char *v28; // rax
  __int64 v29; // rcx
  int v30; // esi
  unsigned int v31; // edi
  int v32; // edx
  __int64 v33; // rdx
  unsigned int v34; // edx
  int v35; // esi
  int v36; // edi
  __int64 v37; // r14
  unsigned int v38; // r12d
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  bool v42; // zf
  _QWORD *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v47; // [rsp+0h] [rbp-98h]
  int v48; // [rsp+Ch] [rbp-8Ch]
  int v49; // [rsp+Ch] [rbp-8Ch]
  char **v50; // [rsp+10h] [rbp-88h]
  bool v51; // [rsp+18h] [rbp-80h]
  unsigned int v52; // [rsp+1Ch] [rbp-7Ch]
  int v54; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+38h] [rbp-60h]
  void *ptr[2]; // [rsp+40h] [rbp-58h] BYREF
  char *v58; // [rsp+50h] [rbp-48h]
  unsigned __int64 v59; // [rsp+60h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)ptr = 0;
  v58 = nullptr;
  v5 = *(_DWORD *)(a1 + 128);
  v47 = a1;
  LODWORD(v6) = a4;
  v7 = a3;
  v8 = v5 == *(_DWORD *)(a1 + 132);
  v9 = v5 < 0x1000;
  qlseek(a2, a3, 0);
  if ( v7 == -1 )
    v7 = qlseek(a2, 0, 1);
  v10 = v8 && v9;
  v11 = qlsize(a2) - v7;
  v12 = (int)v6;
  if ( ((v11 | v7) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    if ( !(_DWORD)v6 )
    {
      v13 = 0;
      LODWORD(v6) = 0;
      if ( v10 )
        goto LABEL_29;
LABEL_28:
      v48 = 512;
      if ( *(_DWORD *)(v47 + 72) != 23126 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( (v6 & 0x80000000) == 0LL && v11 >= 40LL * (int)v6 )
      goto LABEL_13;
    v6 = v11 / 0x28;
  }
  if ( (unsigned int)sub_5EC20(
                       1,
                       (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "Number of sections",
                       v12,
                       (int)v6,
                       ". Do you want to continue with the new value?",
                       a1) != 1 )
    sub_5E5B0(0);
  if ( (int)v6 > 0 )
  {
LABEL_13:
    v14 = 0;
    do
    {
      v15 = ptr[1];
      v16 = (char *)ptr[1] + 1;
      if ( v58 >= (char *)ptr[1] + 1 )
      {
        v17 = (char *)ptr[0];
      }
      else
      {
        v17 = (char *)qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v16, 0x28u);
        ptr[0] = v17;
        v15 = ptr[1];
        v16 = (char *)ptr[1] + 1;
      }
      ptr[1] = v16;
      v18 = 5LL * (_QWORD)v15;
      if ( qlread(a2, &v17[40 * (_QWORD)v15], 40) != 40 )
      {
        v19 = -1;
        goto LABEL_72;
      }
      if ( *(_DWORD *)&v17[8 * v18 + 12] != *(_DWORD *)&v17[8 * v18 + 20]
        || *(_DWORD *)&v17[8 * v18 + 8] > *(_DWORD *)&v17[8 * v18 + 16] )
      {
        v10 = 0;
      }
      ++v14;
    }
    while ( v14 < (int)v6 );
    v13 = 1;
    if ( !v10 )
      goto LABEL_28;
    goto LABEL_29;
  }
  v13 = 0;
  if ( !v10 )
    goto LABEL_28;
LABEL_29:
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  if ( v19 )
    goto LABEL_72;
  v48 = 512;
  if ( v10 )
    v48 = *(_DWORD *)(v47 + 132);
LABEL_32:
  if ( (unsigned __int16)(*(_WORD *)(v47 + 164) - 10) < 4u || *(_DWORD *)(v47 + 72) == 23126 )
    v48 = 1;
  v51 = v10;
  v50 = (char **)(v47 + 8);
  v54 = v6;
  if ( v13 )
  {
    v49 = -v48;
    v56 = (int)v6;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = v47;
    while ( 1 )
    {
      v24 = (char *)ptr[0];
      v25 = (unsigned int)v49 & *(_DWORD *)((_BYTE *)ptr[0] + v20 + 20);
      v26 = *(_QWORD *)(v47 + 16);
      v27 = v26 + 1;
      v52 = v22;
      if ( *(_QWORD *)(v47 + 24) >= (unsigned __int64)(v26 + 1) )
      {
        v28 = *v50;
      }
      else
      {
        v28 = (char *)qvector_reserve((__int64)v50, *v50, v27, 0x20u);
        *(_QWORD *)(v47 + 8) = v28;
        v26 = *(_QWORD *)(v47 + 16);
        v27 = v26 + 1;
      }
      *(_QWORD *)(v47 + 16) = v27;
      v29 = 32 * v26;
      *(_QWORD *)&v28[v29] = *(unsigned int *)&v24[v20 + 12];
      v30 = *(_DWORD *)&v24[v20 + 8];
      v31 = *(_DWORD *)&v24[v20 + 16];
      if ( !v30 )
        v30 = *(_DWORD *)&v24[v20 + 16];
      v32 = *(_DWORD *)(v47 + 128);
      if ( !v32 )
        v32 = 1;
      v33 = (v30 + v32 - 1) & (unsigned int)-v32;
      if ( (unsigned int)v33 > v31 )
        v33 = v31;
      *(_QWORD *)&v28[v29 + 24] = v33;
      v34 = *(_DWORD *)&v24[v20 + 12] + v33;
      if ( (unsigned __int16)(*(_WORD *)(v47 + 164) - 10) >= 4u )
      {
        v35 = 511;
        if ( *(_DWORD *)(v47 + 128) != 4096 )
        {
          v36 = *(_DWORD *)(v47 + 132);
          v35 = v36 - 1;
          if ( !v36 )
            v35 = 511;
        }
        v34 = (v35 + v34) & ~v35;
      }
      *(_QWORD *)&v28[v29 + 8] = v34;
      *(_QWORD *)&v28[v29 + 16] = v25;
      if ( *(_DWORD *)(v47 + 72) == 23126 )
        *(_QWORD *)&v28[v29 + 16] = v25 + 40 - *(unsigned __int16 *)(v47 + 38);
      v19 = (**(__int64 (__fastcall ***)(__int64, char *, __int64))a5)(a5, &v24[v20], v25);
      if ( v19 )
        break;
      v22 = v52;
      if ( v52 < *(_DWORD *)&v24[v20 + 12] + *(_DWORD *)&v24[v20 + 8] )
        v22 = *(_DWORD *)&v24[v20 + 12] + *(_DWORD *)&v24[v20 + 8];
      ++v21;
      v20 += 40;
      if ( v21 >= v56 )
      {
        if ( *(_DWORD *)(v47 + 72) != 23126 )
          goto LABEL_59;
        goto LABEL_58;
      }
    }
  }
  else
  {
    v22 = 0;
    v23 = v47;
    if ( *(_DWORD *)(v47 + 72) == 23126 )
LABEL_58:
      *(_DWORD *)(v23 + 152) = v22;
LABEL_59:
    v19 = 0;
    if ( !v54 || v51 )
    {
      v37 = qlsize(a2);
      v38 = *(_DWORD *)(v47 + 152);
      if ( (unsigned __int16)(*(_WORD *)(v47 + 164) - 10) >= 4u )
      {
        v39 = 511;
        if ( *(_DWORD *)(v47 + 128) != 4096 )
        {
          v40 = *(_DWORD *)(v47 + 132);
          v41 = v40 - 1;
          v42 = v40 == 0;
          v39 = 511;
          if ( !v42 )
            v39 = v41;
        }
        v38 = ~v39 & (v39 + v38);
      }
      v43 = *(_QWORD **)(v47 + 8);
      v44 = *(_QWORD *)(v47 + 16);
      if ( *(_QWORD *)(v47 + 24) >= (unsigned __int64)(v44 + 1) )
      {
        v45 = v47;
      }
      else
      {
        v43 = qvector_reserve((__int64)v50, *(char **)(v47 + 8), v44 + 1, 0x20u);
        v45 = v47;
        *(_QWORD *)(v47 + 8) = v43;
        v44 = *(_QWORD *)(v47 + 16);
      }
      memmove(v43 + 4, v43, 32 * v44);
      *v43 = 0;
      v43[1] = v38;
      v43[2] = 0;
      v43[3] = v37;
      ++*(_QWORD *)(v45 + 16);
    }
  }
LABEL_72:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v58 = nullptr;
  }
  return v19;
}
// 9C355: variable 'v47' is possibly undefined
