/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: callback
// Address: 0x00000000000E998C

//----- (00000000000E998C) ----------------------------------------------------
__int64 __fastcall callback(struct dl_phdr_info *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  const Elf64_Phdr *dlpi_phdr; // r8
  Elf64_Addr dlpi_addr; // rax
  unsigned __int64 dlpi_adds; // rsi
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 *v8; // rsi
  unsigned __int64 *i; // r9
  const Elf64_Phdr *v10; // rdi
  unsigned __int64 v11; // rcx
  bool v12; // zf
  __int64 dlpi_phnum; // r13
  Elf64_Xword v14; // r11
  Elf64_Addr v15; // rbx
  __int64 v16; // r12
  const Elf64_Phdr *v17; // rbp
  Elf64_Word p_type; // r9d
  Elf64_Addr v19; // r14
  __int64 v21; // rsi
  Elf64_Addr *v22; // rcx
  char *v23; // rax
  char *v24; // rbp
  char v25; // r12
  char *v27; // rax
  char *v28; // rax
  char v29; // r12
  char *v30; // r13
  char *v31; // rax
  _BYTE *v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  int *v37; // r14
  __int64 v38; // r12
  char v39; // r13
  unsigned int v40; // eax
  char *v41; // rbp
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned int *v44; // rax
  char v45; // bp
  char *v46; // rax
  bool v47; // [rsp+Fh] [rbp-79h]
  unsigned int *v48; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v50[13]; // [rsp+20h] [rbp-68h] BYREF

  dlpi_phdr = a1->dlpi_phdr;
  dlpi_addr = a1->dlpi_addr;
  v47 = a2 > 0x2F;
  if ( a2 > 0x2F && *((_DWORD *)a3 + 10) )
  {
    dlpi_adds = a1->dlpi_adds;
    if ( *(_OWORD *)&a1->dlpi_adds == __PAIR128__(qword_159110, qword_1556E8) )
    {
      v6 = qword_159118;
      v7 = 0;
      v8 = nullptr;
      for ( i = (unsigned __int64 *)qword_159118; i; i = (unsigned __int64 *)i[5] )
      {
        if ( *a3 >= *i && *a3 < i[1] )
        {
          dlpi_addr = i[2];
          v10 = (const Elf64_Phdr *)i[3];
          if ( i != (unsigned __int64 *)qword_159118 )
          {
            v11 = i[5];
            qword_159118 = (__int64)i;
            v8[5] = v11;
            i[5] = v6;
          }
          goto LABEL_41;
        }
        if ( *(_OWORD *)i == 0 )
        {
          v7 = (__int64)i;
          break;
        }
        v7 = (__int64)i;
        if ( i[5] )
          v8 = i;
      }
LABEL_21:
      dlpi_phnum = a1->dlpi_phnum;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = nullptr;
      v10 = nullptr;
      while ( --dlpi_phnum != -1 )
      {
        p_type = dlpi_phdr->__p_type;
        if ( dlpi_phdr->__p_type == 1 )
        {
          v19 = dlpi_phdr->p_vaddr + dlpi_addr;
          if ( *a3 >= v19 && *a3 < dlpi_phdr->p_memsz + v19 )
          {
            v14 = dlpi_phdr->p_memsz + v19;
            v15 = dlpi_phdr->p_vaddr + dlpi_addr;
            v16 = 1;
          }
        }
        else if ( p_type == 1685382480 )
        {
          v10 = dlpi_phdr;
        }
        else if ( p_type == 2 )
        {
          v17 = dlpi_phdr;
        }
        ++dlpi_phdr;
      }
      if ( !v16 )
        return 0;
      if ( v47 )
      {
        if ( v8 && v7 )
        {
          v8[5] = *(_QWORD *)(v7 + 40);
          v21 = qword_159118;
          qword_159118 = v7;
          *(_QWORD *)(v7 + 40) = v21;
        }
        v22 = (Elf64_Addr *)qword_159118;
        *(_QWORD *)(qword_159118 + 16) = dlpi_addr;
        v22[3] = (Elf64_Addr)v10;
        v22[4] = (Elf64_Addr)v17;
        *v22 = v15;
        v22[1] = v14;
      }
LABEL_41:
      if ( !v10 )
        return 0;
      v23 = (char *)(v10->p_vaddr + dlpi_addr);
      v24 = v23;
      if ( *v23 != 1 )
        return 1;
      v25 = v23[1];
      v27 = (char *)sub_E95DC(v25, (__int64)a3);
      v28 = sub_E961A(v25, v27, v24 + 4, (unsigned __int64 *)&v48);
      v29 = v24[2];
      v30 = v28;
      if ( v29 != -1 && v24[3] == 59 )
      {
        v31 = (char *)sub_E95DC(v24[2], (__int64)a3);
        v32 = sub_E961A(v29, v31, v30, &v49);
        if ( !v49 )
          return 1;
        if ( ((unsigned __int8)v32 & 3) == 0 )
        {
          v33 = *a3;
          if ( *a3 >= (unsigned __int64)&v24[*(int *)v32] )
          {
            v34 = v49 - 1;
            if ( v33 < (unsigned __int64)&v24[*(int *)&v32[8 * v49 - 8]] )
            {
              v35 = v49 - 1;
              v36 = 0;
              do
              {
                while ( 1 )
                {
                  if ( v36 >= v35 )
                    abort();
                  v34 = (v35 + v36) >> 1;
                  if ( v33 >= (unsigned __int64)&v24[*(int *)&v32[8 * v34]] )
                    break;
                  v35 = (v35 + v36) >> 1;
                }
                v36 = v34 + 1;
              }
              while ( v33 >= (unsigned __int64)&v24[*(int *)&v32[8 * v34 + 8]] );
            }
            v37 = (int *)&v32[8 * v34];
            v38 = (__int64)&v24[v37[1]];
            v39 = sub_E9979(v38);
            v40 = sub_E955D(v39);
            sub_E961A(v39 & 0xF, nullptr, (char *)(v38 + v40 + 8), v50);
            v41 = &v24[*v37];
            if ( *a3 < (unsigned __int64)&v41[v50[0]] )
              a3[4] = v38;
            a3[3] = (unsigned __int64)v41;
          }
          return 1;
        }
      }
      v42 = *a3;
      v50[1] = a3[1];
      v43 = a3[2];
      v50[4] = 4;
      v50[0] = 0;
      v50[3] = (unsigned __int64)v48;
      v50[2] = v43;
      v44 = sub_E9839((__int64)v50, v48, v42);
      a3[4] = (unsigned __int64)v44;
      if ( v44 )
      {
        v45 = sub_E9979((__int64)v44);
        v46 = (char *)sub_E95DC(v45, (__int64)a3);
        sub_E961A(v45, v46, (char *)(a3[4] + 8), &v49);
        a3[3] = v49;
      }
      return 1;
    }
    qword_159110 = a1->dlpi_subs;
    qword_1556E8 = dlpi_adds;
    v7 = 0;
    do
    {
      *(__int64 *)((char *)&qword_159140 + v7) = 0;
      *(__int64 *)((char *)qword_159148 + v7) = 0;
      v12 = v7 == 336;
      *(__int64 *)((char *)qword_159168 + v7) = (__int64)&qword_159140 + v7 + 48;
      v7 += 48;
    }
    while ( !v12 );
    LOWORD(v7) = 0;
    qword_1592B8 = 0;
    qword_159118 = (__int64)&qword_159140;
    *((_DWORD *)a3 + 10) = 0;
LABEL_19:
    v8 = nullptr;
    goto LABEL_21;
  }
  if ( a2 > 0x19 )
  {
    v7 = 0;
    goto LABEL_19;
  }
  return 0xFFFFFFFFLL;
}
// 1556E8: using guessed type __int64 qword_1556E8;
// 159110: using guessed type __int64 qword_159110;
// 159118: using guessed type __int64 qword_159118;
// 159140: using guessed type __int64 qword_159140;
// 159148: using guessed type __int64 qword_159148[4];
// 159168: using guessed type __int64 qword_159168[42];
// 1592B8: using guessed type __int64 qword_1592B8;
