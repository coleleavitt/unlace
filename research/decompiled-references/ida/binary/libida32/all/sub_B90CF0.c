__int64 __fastcall sub_B90CF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // kr00_8
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  const char *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  const char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  const char *v17; // rax
  __int64 v18; // rax
  char *v20; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rdi
  const char *v28; // rax
  __int64 v29; // r12
  const char *v30; // rax
  __int64 v31; // rax
  const char *v33; // rsi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rdi
  const char *v41; // rax
  const char *v43; // rsi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rdi
  const char *v51; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  int v55; // r10d
  __int64 v56; // r12
  const char *v57; // rax
  __int64 v58; // rdi
  __int64 v60; // rdx
  __int64 v61; // r12
  __int64 v62; // rdi
  __int64 v63; // rax
  int v64; // [rsp+0h] [rbp-44h]
  __int64 v65; // [rsp+4h] [rbp-40h]

  v4 = v2;
  result = *(unsigned int *)(a2 + 8);
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      return sub_E92B00();
    case 1:
      return sub_971800(*a1, "acq_rel");
    case 2:
      return sub_971800(*a1, "acquire");
    case 4:
      if ( *(_DWORD *)(a2 + 16) )
      {
        sub_971800(*a1, "affinity");
        v60 = 40;
        v61 = *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24);
        if ( v61 )
        {
          v62 = *a1;
          sub_971800(*a1, "(");
          v63 = sub_E90F10(v62, "\n");
          sub_EE3EC0(v61, *a1, 0, a1[1], 0, 0, (__int64)"\n", v63);
          sub_971800(*a1, " :");
          v60 = 32;
        }
        sub_E97540(a1, a2, v60);
        return sub_971800(*a1, ")");
      }
      return result;
    case 5:
      return sub_E920E0();
    case 6:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_E96020();
      return result;
    case 7:
      if ( !*(_DWORD *)(a2 + 16) )
        return nullsub_1525();
      v5 = *(_DWORD *)(a2 + 52);
      v6 = *(_QWORD *)(a2 + 24);
      v64 = *(_DWORD *)(a2 + 56);
      if ( !v5 || v5 == 2 && v6 )
      {
        v7 = *(_QWORD *)(a2 + 32);
      }
      else
      {
        v7 = *(_QWORD *)(a2 + 24);
        v6 = *(_QWORD *)(a2 + 32);
      }
      sub_971800(*a1, "allocate");
      if ( v6 )
      {
        v9 = *a1;
        sub_971800(*a1, "(");
        v10 = sub_E90F10(v9, "(");
        if ( v5 == 2 )
        {
          sub_EE3EC0(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
        }
        else
        {
          v65 = *a1;
          v11 = (const char *)sub_FDA030(*(unsigned int *)(a2 + 8));
          sub_971800(v65, v11);
          sub_971800(*a1, "(");
          sub_EE3EC0(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
          sub_971800(*a1, ")");
        }
        v12 = *a1;
        if ( v7 )
        {
          sub_971800(v12, ", ");
          if ( v64 == 2 )
          {
            sub_EE3EC0(v7, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
          }
          else
          {
            v13 = *a1;
            v14 = (const char *)sub_FDA030(*(unsigned int *)(a2 + 8));
            sub_971800(v13, v14);
            sub_971800(*a1, "(");
            sub_EE3EC0(v7, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
            sub_971800(*a1, ")");
          }
          v12 = *a1;
        }
        sub_971800(v12, ":");
        sub_E94CD0(a1, a2, 32);
      }
      else
      {
        sub_E94CD0(a1, a2, 40);
      }
      return sub_971800(*a1, ")");
    case 8:
      return sub_E924B0();
    case 0xA:
      return sub_E92710();
    case 0xB:
      return sub_E926B0();
    case 0xC:
      return sub_E93730();
    case 0xE:
      return sub_971800(*a1, "capture");
    case 0xF:
      return sub_E92510();
    case 0x10:
      return sub_971800(*a1, "compare");
    case 0x11:
      return sub_E92C40();
    case 0x12:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E96360();
      return result;
    case 0x13:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E961E0();
      return result;
    case 0x14:
      return sub_E925D0();
    case 0x15:
      return sub_E93480();
    case 0x16:
      return sub_E96620();
    case 0x17:
      return sub_E93390();
    case 0x18:
      return sub_E93210();
    case 0x19:
      return sub_E92570();
    case 0x1A:
      return sub_E92DE0();
    case 0x1C:
      return sub_E933F0();
    case 0x1D:
      return sub_E97830();
    case 0x1E:
      return sub_971800(*a1, "dynamic_allocators");
    case 0x20:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E974F0();
      return result;
    case 0x21:
      return sub_E92A90();
    case 0x22:
      return sub_E936D0();
    case 0x23:
      return sub_E91FF0();
    case 0x24:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E952E0();
      return result;
    case 0x25:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E964E0();
      return result;
    case 0x26:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_E991A0();
      return result;
    case 0x27:
      return sub_971800(*a1, "full");
    case 0x28:
      return sub_E92ED0();
    case 0x29:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E97070();
      return result;
    case 0x2A:
      return sub_E92FF0();
    case 0x2B:
      return sub_E92BE0();
    case 0x2C:
      return sub_E91F10();
    case 0x2D:
      result = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)result )
        return result;
      v43 = "in_reduction(";
      sub_971800(*a1, "in_reduction(");
      v47 = *(_QWORD *)(a2 + 56);
      v48 = *(_QWORD *)(a2 + 72) & 7LL;
      if ( (_DWORD)v48 == 6 )
      {
        v49 = *a1;
        v50 = *(unsigned int *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v47 && (_DWORD)v50 )
        {
          v51 = (const char *)sub_FBBBC0(v50);
          sub_971800(v49, v51);
          goto LABEL_136;
        }
      }
      else
      {
        v49 = *a1;
      }
      if ( v47 )
      {
        v43 = (const char *)v49;
        sub_E6C510(*(_QWORD *)(a2 + 56), v49, a1[1], 0, 1);
        v49 = *a1;
      }
      sub_B62D60(v49, (__int64)v43, v48, v45, v46, v47, *(_QWORD *)(a2 + 72));
LABEL_136:
      sub_971800(*a1, ":");
      sub_E95AA0(a1, a2, 32);
      return sub_971800(*a1, ")");
    case 0x2F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E97370();
      return result;
    case 0x31:
      return sub_E93050();
    case 0x33:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E96EF0();
      return result;
    case 0x34:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
      {
        sub_971800(*a1, "lastprivate");
        v15 = 40;
        if ( *(_DWORD *)(a2 + 48) != 1 )
        {
          v16 = sub_971800(*a1, "(");
          v17 = (const char *)sub_FDA030(52);
          v18 = sub_971800(v16, v17);
          sub_971800(v18, ":");
          v15 = 32;
        }
        sub_E95330(a1, a2, v15);
        return sub_971800(*a1, ")");
      }
      return result;
    case 0x35:
      if ( !*(_DWORD *)(a2 + 16) )
        return result;
      sub_971800(*a1, "linear");
      sub_E95CA0(a1, a2, 40);
      if ( !*(_DWORD *)(a2 + 52) && !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
        return sub_971800(*a1, ")");
      sub_971800(*a1, ": ");
      if ( !*(_DWORD *)(a2 + 52) )
      {
        if ( !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
          return sub_971800(*a1, ")");
        goto LABEL_145;
      }
      v56 = *a1;
      v57 = (const char *)sub_FDA030(53);
      sub_971800(v56, v57);
      if ( *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
      {
        v58 = *a1;
        if ( *(_DWORD *)(a2 + 52) )
          sub_971800(v58, ", ");
LABEL_145:
        v53 = *a1;
        sub_971800(*a1, "step(");
        v54 = sub_E90F10(v53, "\n");
        sub_EE3EC0(v55, *a1, 0, a1[1], 0, 0, (__int64)"\n", v54);
        sub_971800(*a1, ")");
      }
      return sub_971800(*a1, ")");
    case 0x37:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_E96890();
      return result;
    case 0x3A:
      return sub_971800(*a1, "mergeable");
    case 0x3B:
      return sub_E927B0();
    case 0x3C:
      return sub_971800(*a1, "nogroup");
    case 0x3D:
      return sub_971800(*a1, "no_openmp");
    case 0x3E:
      return sub_971800(*a1, "no_openmp_constructs");
    case 0x3F:
      return sub_971800(*a1, "no_openmp_routines");
    case 0x40:
      return sub_971800(*a1, "no_parallelism");
    case 0x41:
      return sub_971800(*a1, "nowait");
    case 0x42:
      return sub_E93310();
    case 0x43:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E971F0();
      return result;
    case 0x45:
      return sub_E93290();
    case 0x46:
      return sub_E92F60();
    case 0x47:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E94B00();
      return result;
    case 0x48:
      return sub_E92050();
    case 0x49:
      return sub_E937E0();
    case 0x4A:
      return sub_971800(*a1, "ompx_bare");
    case 0x4B:
      return sub_E93780();
    case 0x4C:
      return sub_E93500();
    case 0x4D:
      return sub_E92920();
    case 0x4F:
      return sub_E92400();
    case 0x50:
      return sub_E922B0();
    case 0x51:
      return sub_E92E70();
    case 0x52:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E95160();
      return result;
    case 0x53:
      return sub_E92620();
    case 0x54:
      return sub_971800(*a1, "read");
    case 0x55:
      if ( *(_DWORD *)(a2 + 16) )
      {
        v20 = "reduction(";
        sub_971800(*a1, "reduction(");
        if ( *(_DWORD *)(a2 + 56) )
        {
          v29 = *a1;
          v30 = (const char *)sub_FDA030(85);
          v31 = sub_971800(v29, v30);
          v20 = ", ";
          sub_971800(v31, ", ");
        }
        v24 = *(_QWORD *)(a2 + 64);
        v25 = *a1;
        v26 = *(_QWORD *)(a2 + 80) & 7LL;
        if ( (_DWORD)v26 == 6
          && (v27 = *(unsigned int *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL), !v24)
          && (_DWORD)v27 )
        {
          v28 = (const char *)sub_FBBBC0(v27);
          sub_971800(v25, v28);
        }
        else
        {
          if ( v24 )
          {
            v20 = (char *)*a1;
            sub_E6C510(*(_QWORD *)(a2 + 64), *a1, a1[1], 0, 1);
            v25 = *a1;
          }
          sub_B62D60(v25, (__int64)v20, v26, v22, v23, v24, *(_QWORD *)(a2 + 80));
        }
        sub_971800(*a1, ":");
        sub_E95670(a1, a2, 32);
        return sub_971800(*a1, ")");
      }
      return result;
    case 0x56:
      return sub_971800(*a1, "relaxed");
    case 0x57:
      return sub_971800(*a1, "release");
    case 0x58:
      return sub_971800(*a1, "reverse_offload");
    case 0x59:
      return sub_E92140();
    case 0x5A:
      return sub_E92830();
    case 0x5B:
      return sub_971800(*a1, "self_maps");
    case 0x5C:
      return sub_971800(*a1, "seq_cst");
    case 0x5D:
      return sub_E92760();
    case 0x5E:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E95620();
      return result;
    case 0x5F:
      return sub_971800(*a1, "simd");
    case 0x60:
      return sub_E921A0();
    case 0x61:
      return sub_E92200();
    case 0x62:
      result = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)result )
        return result;
      v33 = "task_reduction(";
      sub_971800(*a1, "task_reduction(");
      v37 = *(_QWORD *)(a2 + 56);
      v38 = *(_QWORD *)(a2 + 72) & 7LL;
      if ( (_DWORD)v38 == 6 )
      {
        v39 = *a1;
        v40 = *(unsigned int *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v37 && (_DWORD)v40 )
        {
          v41 = (const char *)sub_FBBBC0(v40);
          sub_971800(v39, v41);
          goto LABEL_126;
        }
      }
      else
      {
        v39 = *a1;
      }
      if ( v37 )
      {
        v33 = (const char *)v39;
        sub_E6C510(*(_QWORD *)(a2 + 56), v39, a1[1], 0, 1);
        v39 = *a1;
      }
      sub_B62D60(v39, (__int64)v33, v38, v35, v36, v37, *(_QWORD *)(a2 + 72));
LABEL_126:
      sub_971800(*a1, ":");
      sub_E958A0(a1, a2, 32);
      return sub_971800(*a1, ")");
    case 0x63:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E94C80();
      return result;
    case 0x65:
      return sub_971800(*a1, "threads");
    case 0x66:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_E98D70();
      return result;
    case 0x67:
      return sub_971800(*a1, "unified_address");
    case 0x68:
      return sub_971800(*a1, "unified_shared_memory");
    case 0x6B:
      return sub_971800(*a1, "untied");
    case 0x6C:
      return sub_E92A00();
    case 0x6D:
      return sub_E931B0();
    case 0x6E:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E96D70();
      return result;
    case 0x6F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_E96BF0();
      return result;
    case 0x70:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_E93590();
      return result;
    case 0x71:
      return sub_971800(*a1, "weak");
    case 0x73:
      return sub_971800(*a1, "write");
    default:
      return v4;
  }
}

