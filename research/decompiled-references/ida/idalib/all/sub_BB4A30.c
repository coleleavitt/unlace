__int64 __fastcall sub_BB4A30(__int64 *a1, __int64 a2)
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
      return sub_EB6840();
    case 1:
      return sub_995540(*a1, "acq_rel");
    case 2:
      return sub_995540(*a1, "acquire");
    case 4:
      if ( *(_DWORD *)(a2 + 16) )
      {
        sub_995540(*a1, "affinity");
        v60 = 40;
        v61 = *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24);
        if ( v61 )
        {
          v62 = *a1;
          sub_995540(*a1, "(");
          v63 = sub_EB4C50(v62, "\n");
          sub_F07C00(v61, *a1, 0, a1[1], 0, 0, (__int64)"\n", v63);
          sub_995540(*a1, " :");
          v60 = 32;
        }
        sub_EBB280(a1, a2, v60);
        return sub_995540(*a1, ")");
      }
      return result;
    case 5:
      return sub_EB5E20();
    case 6:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_EB9D60();
      return result;
    case 7:
      if ( !*(_DWORD *)(a2 + 16) )
        return nullsub_1546();
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
      sub_995540(*a1, "allocate");
      if ( v6 )
      {
        v9 = *a1;
        sub_995540(*a1, "(");
        v10 = sub_EB4C50(v9, "(");
        if ( v5 == 2 )
        {
          sub_F07C00(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
        }
        else
        {
          v65 = *a1;
          v11 = (const char *)sub_FFDD70(*(unsigned int *)(a2 + 8));
          sub_995540(v65, v11);
          sub_995540(*a1, "(");
          sub_F07C00(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
          sub_995540(*a1, ")");
        }
        v12 = *a1;
        if ( v7 )
        {
          sub_995540(v12, ", ");
          if ( v64 == 2 )
          {
            sub_F07C00(v7, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
          }
          else
          {
            v13 = *a1;
            v14 = (const char *)sub_FFDD70(*(unsigned int *)(a2 + 8));
            sub_995540(v13, v14);
            sub_995540(*a1, "(");
            sub_F07C00(v7, *a1, 0, a1[1], 0, 0, (__int64)"\n", v10);
            sub_995540(*a1, ")");
          }
          v12 = *a1;
        }
        sub_995540(v12, ":");
        sub_EB8A10(a1, a2, 32);
      }
      else
      {
        sub_EB8A10(a1, a2, 40);
      }
      return sub_995540(*a1, ")");
    case 8:
      return sub_EB61F0();
    case 0xA:
      return sub_EB6450();
    case 0xB:
      return sub_EB63F0();
    case 0xC:
      return sub_EB7470();
    case 0xE:
      return sub_995540(*a1, "capture");
    case 0xF:
      return sub_EB6250();
    case 0x10:
      return sub_995540(*a1, "compare");
    case 0x11:
      return sub_EB6980();
    case 0x12:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBA0A0();
      return result;
    case 0x13:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EB9F20();
      return result;
    case 0x14:
      return sub_EB6310();
    case 0x15:
      return sub_EB71C0();
    case 0x16:
      return sub_EBA360();
    case 0x17:
      return sub_EB70D0();
    case 0x18:
      return sub_EB6F50();
    case 0x19:
      return sub_EB62B0();
    case 0x1A:
      return sub_EB6B20();
    case 0x1C:
      return sub_EB7130();
    case 0x1D:
      return sub_EBB570();
    case 0x1E:
      return sub_995540(*a1, "dynamic_allocators");
    case 0x20:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBB230();
      return result;
    case 0x21:
      return sub_EB67D0();
    case 0x22:
      return sub_EB7410();
    case 0x23:
      return sub_EB5D30();
    case 0x24:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EB9020();
      return result;
    case 0x25:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBA220();
      return result;
    case 0x26:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_EBCEE0();
      return result;
    case 0x27:
      return sub_995540(*a1, "full");
    case 0x28:
      return sub_EB6C10();
    case 0x29:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBADB0();
      return result;
    case 0x2A:
      return sub_EB6D30();
    case 0x2B:
      return sub_EB6920();
    case 0x2C:
      return sub_EB5C50();
    case 0x2D:
      result = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)result )
        return result;
      v43 = "in_reduction(";
      sub_995540(*a1, "in_reduction(");
      v47 = *(_QWORD *)(a2 + 56);
      v48 = *(_QWORD *)(a2 + 72) & 7LL;
      if ( (_DWORD)v48 == 6 )
      {
        v49 = *a1;
        v50 = *(unsigned int *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v47 && (_DWORD)v50 )
        {
          v51 = (const char *)sub_FDF900(v50);
          sub_995540(v49, v51);
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
        sub_E90250(*(_QWORD *)(a2 + 56), v49, a1[1], 0, 1);
        v49 = *a1;
      }
      sub_B86AA0(v49, (__int64)v43, v48, v45, v46, v47, *(_QWORD *)(a2 + 72));
LABEL_136:
      sub_995540(*a1, ":");
      sub_EB97E0(a1, a2, 32);
      return sub_995540(*a1, ")");
    case 0x2F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBB0B0();
      return result;
    case 0x31:
      return sub_EB6D90();
    case 0x33:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBAC30();
      return result;
    case 0x34:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
      {
        sub_995540(*a1, "lastprivate");
        v15 = 40;
        if ( *(_DWORD *)(a2 + 48) != 1 )
        {
          v16 = sub_995540(*a1, "(");
          v17 = (const char *)sub_FFDD70(52);
          v18 = sub_995540(v16, v17);
          sub_995540(v18, ":");
          v15 = 32;
        }
        sub_EB9070(a1, a2, v15);
        return sub_995540(*a1, ")");
      }
      return result;
    case 0x35:
      if ( !*(_DWORD *)(a2 + 16) )
        return result;
      sub_995540(*a1, "linear");
      sub_EB99E0(a1, a2, 40);
      if ( !*(_DWORD *)(a2 + 52) && !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
        return sub_995540(*a1, ")");
      sub_995540(*a1, ": ");
      if ( !*(_DWORD *)(a2 + 52) )
      {
        if ( !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
          return sub_995540(*a1, ")");
        goto LABEL_145;
      }
      v56 = *a1;
      v57 = (const char *)sub_FFDD70(53);
      sub_995540(v56, v57);
      if ( *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
      {
        v58 = *a1;
        if ( *(_DWORD *)(a2 + 52) )
          sub_995540(v58, ", ");
LABEL_145:
        v53 = *a1;
        sub_995540(*a1, "step(");
        v54 = sub_EB4C50(v53, "\n");
        sub_F07C00(v55, *a1, 0, a1[1], 0, 0, (__int64)"\n", v54);
        sub_995540(*a1, ")");
      }
      return sub_995540(*a1, ")");
    case 0x37:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_EBA5D0();
      return result;
    case 0x3A:
      return sub_995540(*a1, "mergeable");
    case 0x3B:
      return sub_EB64F0();
    case 0x3C:
      return sub_995540(*a1, "nogroup");
    case 0x3D:
      return sub_995540(*a1, "no_openmp");
    case 0x3E:
      return sub_995540(*a1, "no_openmp_constructs");
    case 0x3F:
      return sub_995540(*a1, "no_openmp_routines");
    case 0x40:
      return sub_995540(*a1, "no_parallelism");
    case 0x41:
      return sub_995540(*a1, "nowait");
    case 0x42:
      return sub_EB7050();
    case 0x43:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBAF30();
      return result;
    case 0x45:
      return sub_EB6FD0();
    case 0x46:
      return sub_EB6CA0();
    case 0x47:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EB8840();
      return result;
    case 0x48:
      return sub_EB5D90();
    case 0x49:
      return sub_EB7520();
    case 0x4A:
      return sub_995540(*a1, "ompx_bare");
    case 0x4B:
      return sub_EB74C0();
    case 0x4C:
      return sub_EB7240();
    case 0x4D:
      return sub_EB6660();
    case 0x4F:
      return sub_EB6140();
    case 0x50:
      return sub_EB5FF0();
    case 0x51:
      return sub_EB6BB0();
    case 0x52:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EB8EA0();
      return result;
    case 0x53:
      return sub_EB6360();
    case 0x54:
      return sub_995540(*a1, "read");
    case 0x55:
      if ( *(_DWORD *)(a2 + 16) )
      {
        v20 = "reduction(";
        sub_995540(*a1, "reduction(");
        if ( *(_DWORD *)(a2 + 56) )
        {
          v29 = *a1;
          v30 = (const char *)sub_FFDD70(85);
          v31 = sub_995540(v29, v30);
          v20 = ", ";
          sub_995540(v31, ", ");
        }
        v24 = *(_QWORD *)(a2 + 64);
        v25 = *a1;
        v26 = *(_QWORD *)(a2 + 80) & 7LL;
        if ( (_DWORD)v26 == 6
          && (v27 = *(unsigned int *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL), !v24)
          && (_DWORD)v27 )
        {
          v28 = (const char *)sub_FDF900(v27);
          sub_995540(v25, v28);
        }
        else
        {
          if ( v24 )
          {
            v20 = (char *)*a1;
            sub_E90250(*(_QWORD *)(a2 + 64), *a1, a1[1], 0, 1);
            v25 = *a1;
          }
          sub_B86AA0(v25, (__int64)v20, v26, v22, v23, v24, *(_QWORD *)(a2 + 80));
        }
        sub_995540(*a1, ":");
        sub_EB93B0(a1, a2, 32);
        return sub_995540(*a1, ")");
      }
      return result;
    case 0x56:
      return sub_995540(*a1, "relaxed");
    case 0x57:
      return sub_995540(*a1, "release");
    case 0x58:
      return sub_995540(*a1, "reverse_offload");
    case 0x59:
      return sub_EB5E80();
    case 0x5A:
      return sub_EB6570();
    case 0x5B:
      return sub_995540(*a1, "self_maps");
    case 0x5C:
      return sub_995540(*a1, "seq_cst");
    case 0x5D:
      return sub_EB64A0();
    case 0x5E:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EB9360();
      return result;
    case 0x5F:
      return sub_995540(*a1, "simd");
    case 0x60:
      return sub_EB5EE0();
    case 0x61:
      return sub_EB5F40();
    case 0x62:
      result = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)result )
        return result;
      v33 = "task_reduction(";
      sub_995540(*a1, "task_reduction(");
      v37 = *(_QWORD *)(a2 + 56);
      v38 = *(_QWORD *)(a2 + 72) & 7LL;
      if ( (_DWORD)v38 == 6 )
      {
        v39 = *a1;
        v40 = *(unsigned int *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v37 && (_DWORD)v40 )
        {
          v41 = (const char *)sub_FDF900(v40);
          sub_995540(v39, v41);
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
        sub_E90250(*(_QWORD *)(a2 + 56), v39, a1[1], 0, 1);
        v39 = *a1;
      }
      sub_B86AA0(v39, (__int64)v33, v38, v35, v36, v37, *(_QWORD *)(a2 + 72));
LABEL_126:
      sub_995540(*a1, ":");
      sub_EB95E0(a1, a2, 32);
      return sub_995540(*a1, ")");
    case 0x63:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EB89C0();
      return result;
    case 0x65:
      return sub_995540(*a1, "threads");
    case 0x66:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_EBCAB0();
      return result;
    case 0x67:
      return sub_995540(*a1, "unified_address");
    case 0x68:
      return sub_995540(*a1, "unified_shared_memory");
    case 0x6B:
      return sub_995540(*a1, "untied");
    case 0x6C:
      return sub_EB6740();
    case 0x6D:
      return sub_EB6EF0();
    case 0x6E:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBAAB0();
      return result;
    case 0x6F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_EBA930();
      return result;
    case 0x70:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_EB72D0();
      return result;
    case 0x71:
      return sub_995540(*a1, "weak");
    case 0x73:
      return sub_995540(*a1, "write");
    default:
      return v4;
  }
}
