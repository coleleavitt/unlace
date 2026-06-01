unsigned __int64 __fastcall sub_12550F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v7; // r13d
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rdx
  char *v13; // rax
  char *i; // rcx
  __int64 v15; // rdx
  char *v16; // rcx
  const std::locale *v17; // rax
  char *v18; // rdx
  char *v19; // rsi
  __int64 v20; // r14
  char *v21; // rax
  unsigned __int8 v22; // r14
  __int64 v23; // r12
  int v24; // eax
  int v25; // r12d
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r15
  char v30; // r14
  __int64 v31; // rax
  __int64 *v32; // r12
  __int64 v33; // r14
  char v34; // r12
  __int64 v35; // rdx
  int v36; // edx
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  const std::locale *v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(v4 + 56) + 48 * a3;
  v7 = a2;
  switch ( *(_DWORD *)v5 )
  {
    case 1:
      v9 = *(_QWORD *)(v5 + 16);
      if ( (*(_BYTE *)(v4 + 24) & 0x10) != 0 )
      {
        result = sub_12550F0(a1, a2, v9);
        if ( !*(_BYTE *)(a1 + 116) )
          return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
      }
      else
      {
        sub_12550F0(a1, a2, v9);
        v34 = *(_BYTE *)(a1 + 116);
        *(_BYTE *)(a1 + 116) = 0;
        result = sub_12550F0(a1, (unsigned int)a2, *(_QWORD *)(v5 + 8));
        *(_BYTE *)(a1 + 116) |= v34;
      }
      return result;
    case 2:
      if ( *(_BYTE *)(v5 + 24) )
      {
        result = sub_12550F0(a1, a2, *(_QWORD *)(v5 + 8));
        if ( !*(_BYTE *)(a1 + 116) )
          return sub_1255B70(a1, (unsigned int)a2, a3);
      }
      else
      {
        result = sub_1255B70(a1, a2, a3);
        if ( !*(_BYTE *)(a1 + 116) )
          return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
      }
      return result;
    case 3:
      result = *(_QWORD *)a1;
      v10 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(v5 + 16);
      if ( *(_BYTE *)(v10 + 16) )
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = *(_QWORD *)(a1 + 40);
        v13 = *(char **)v10;
        if ( v12 != v11 )
        {
          for ( i = *(char **)(v10 + 8); i != v13; ++v13 )
          {
            if ( v12 == ++v11 )
              break;
          }
        }
        v15 = *(_QWORD *)(a1 + 48);
        v16 = *(char **)(a1 + 24);
        v17 = (const std::locale *)(*(_QWORD *)(v15 + 16) + 80LL);
        LOBYTE(v38[0]) = *(_DWORD *)v15 & 1;
        v18 = *(char **)(v10 + 8);
        v19 = *(char **)v10;
        v38[1] = v17;
        result = sub_1251AE0(v38, v19, v18, v16, v11);
        if ( (_BYTE)result )
        {
          v20 = *(_QWORD *)(a1 + 24);
          if ( v11 == v20 )
            return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
          *(_QWORD *)(a1 + 24) = v11;
          result = sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
          *(_QWORD *)(a1 + 24) = v20;
        }
      }
      return result;
    case 4:
      result = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 24) == result && (*(_BYTE *)(a1 + 112) & 0x81) == 0 )
        return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
      return result;
    case 5:
      result = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 24) == result && (*(_BYTE *)(a1 + 112) & 2) == 0 )
        return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
      return result;
    case 6:
      v21 = *(char **)(a1 + 24);
      if ( v21 != *(char **)(a1 + 32) )
      {
        if ( v21 == *(char **)(a1 + 40) && (*(_BYTE *)(a1 + 112) & 8) != 0 )
        {
          LOBYTE(v25) = 0;
          goto LABEL_35;
        }
        goto LABEL_33;
      }
      v36 = *(_DWORD *)(a1 + 112);
      v25 = 0;
      if ( (v36 & 4) != 0 )
        goto LABEL_35;
      if ( v21 != *(char **)(a1 + 40) )
      {
        if ( (v36 & 0x80) == 0 )
        {
LABEL_34:
          LODWORD(v37) = *v21;
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
          v27 = sub_1252DD0(v26, "w", "", 0);
          v25 ^= sub_12536A0(v26, v37, v27);
          goto LABEL_35;
        }
LABEL_33:
        v22 = *(v21 - 1);
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
        v24 = sub_1252DD0(v23, "w", "", 0);
        v25 = sub_12536A0(v23, v22, v24);
        v21 = *(char **)(a1 + 24);
        if ( *(char **)(a1 + 40) == v21 )
          goto LABEL_35;
        goto LABEL_34;
      }
      if ( (v36 & 8) == 0 && (v36 & 0x80) != 0 )
        goto LABEL_33;
LABEL_35:
      result = *(unsigned __int8 *)(v5 + 24) ^ 1u;
      if ( (*(_BYTE *)(v5 + 24) ^ 1) == (_BYTE)v25 )
        return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
      return result;
    case 7:
      result = sub_1255BF0(a1, *(_QWORD *)(v5 + 16));
      if ( (_BYTE)result == (*(_BYTE *)(v5 + 24) ^ 1) )
        return sub_12550F0(a1, v7, *(_QWORD *)(v5 + 8));
      return result;
    case 8:
      v32 = (__int64 *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v5 + 16));
      v33 = *v32;
      *v32 = *(_QWORD *)(a1 + 24);
      result = sub_12550F0(a1, a2, *(_QWORD *)(v5 + 8));
      *v32 = v33;
      return result;
    case 9:
      v28 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(v5 + 16);
      v29 = *(_QWORD *)(v28 + 8);
      v30 = *(_BYTE *)(v28 + 16);
      v37 = *(_QWORD *)v28;
      v31 = *(_QWORD *)(a1 + 24);
      *(_BYTE *)(v28 + 16) = 1;
      *(_QWORD *)(v28 + 8) = v31;
      result = sub_12550F0(a1, a2, *(_QWORD *)(v5 + 8));
      v37 = v29;
      *(_BYTE *)(v28 + 16) = v30;
      *(__m128 *)v28 = _mm_loadh_ps((const double *)&v37);
      return result;
    case 0xB:
      result = *(_QWORD *)(a1 + 24);
      if ( result != *(_QWORD *)(a1 + 40) )
      {
        LOBYTE(v38[0]) = *(_BYTE *)result;
        if ( !*(_QWORD *)(v5 + 32) )
          std::__throw_bad_function_call();
        result = (*(__int64 (__fastcall **)(__int64, const std::locale **))(v5 + 40))(v5 + 16, v38);
        if ( (_BYTE)result )
        {
          ++*(_QWORD *)(a1 + 24);
          result = sub_12550F0(a1, (unsigned int)a2, *(_QWORD *)(v5 + 8));
          --*(_QWORD *)(a1 + 24);
        }
      }
      return result;
    case 0xC:
      result = *(_QWORD *)(a1 + 24);
      if ( (_BYTE)a2 )
      {
        *(_BYTE *)(a1 + 116) = 1;
        if ( result == *(_QWORD *)(a1 + 32) && (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
        {
LABEL_58:
          *(_BYTE *)(a1 + 116) = 0;
          return result;
        }
      }
      else
      {
        v35 = *(_QWORD *)(a1 + 40);
        *(_BYTE *)(a1 + 116) = result == v35;
        if ( result == *(_QWORD *)(a1 + 32) && (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
          goto LABEL_58;
        if ( result != v35 )
          return result;
      }
      if ( (*(_BYTE *)(v4 + 24) & 0x10) == 0 )
      {
        v8 = *(_QWORD *)(a1 + 104);
        if ( result <= v8 && v8 )
          return result;
        *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 24);
      }
      return (unsigned __int64)sub_1250570(*(const __m128i ***)(a1 + 64), (const __m128i **)a1);
    default:
      return result;
  }
}
