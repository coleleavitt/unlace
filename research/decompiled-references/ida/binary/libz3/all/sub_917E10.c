__int64 __fastcall sub_917E10(__int64 a1, __int64 a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  __int64 result; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  int v16; // edi
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 *v24; // r9
  __int64 *i; // rax
  __int64 v26; // rdx
  __int64 *v27; // rbx
  size_t v28; // r15
  unsigned int v29; // ecx
  __int64 *v30; // r13
  int v31; // esi
  __int64 v32; // rcx
  __int64 *v33; // rdi
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  _DWORD *v37; // rax
  int v38; // eax
  __int64 *v39; // rax
  int v40; // r8d
  __int64 *v41; // r14
  __int64 *v42; // r9
  __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rax
  int v46; // [rsp+0h] [rbp-68h]
  unsigned int v47; // [rsp+0h] [rbp-68h]
  int v48; // [rsp+8h] [rbp-60h]
  _QWORD v49[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v50; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(unsigned int *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 24);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  result = 8 * v6;
  v11 = (char *)v7 + result;
  v12 = 8LL * (v8 & v9);
  v13 = &v7[(unsigned __int64)v12 / 8];
  if ( v12 == result )
  {
LABEL_31:
    while ( v13 != v7 )
    {
      result = *v7;
      if ( (unsigned __int64)*v7 > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v8 && result == a2 )
          return result;
      }
      else if ( !result )
      {
        v15 = *(_QWORD **)(a1 + 48);
        if ( !v15 )
        {
LABEL_39:
          result = sub_186B270(0x18u);
          v15 = (_QWORD *)(result + 8);
          *(_QWORD *)result = 2;
          *(_QWORD *)(a1 + 48) = result + 8;
          goto LABEL_10;
        }
LABEL_9:
        v16 = *((_DWORD *)v15 - 2);
        *((_DWORD *)v15 - 1) = 0;
        if ( !v16 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v3 = (char *)operator new(0x2Bu);
          strcpy(v3, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v3;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v49[0] = &v50;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v49[1] = 0;
          v50 = 0;
          sub_233E40((__int64)v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_10:
        *v15 = a2;
        *((_DWORD *)v15 - 1) = 1;
LABEL_11:
        if ( !v15 )
          return result;
LABEL_12:
        result = *((unsigned int *)v15 - 1);
        if ( !(_DWORD)result )
          return result;
        v17 = (unsigned int)(result - 1);
        v18 = *(__int64 **)(a1 + 24);
        v19 = v15[v17];
        *((_DWORD *)v15 - 1) = v17;
        v20 = *(unsigned int *)(a1 + 32);
        v21 = *(unsigned int *)(v19 + 12);
        LODWORD(v17) = v20 - 1;
        v20 *= 8;
        v22 = (__int64 *)((char *)v18 + v20);
        v23 = 8LL * ((unsigned int)v21 & (unsigned int)v17);
        v24 = (__int64 *)((char *)v18 + v23);
        if ( v23 != v20 )
        {
          for ( i = (__int64 *)((char *)v18 + v23); v22 != i; ++i )
          {
            v23 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v23 + 12) == (_DWORD)v21 && v19 == v23 )
                goto LABEL_12;
            }
            else if ( !v23 )
            {
              goto LABEL_20;
            }
          }
        }
        for ( ; v24 != v18; ++v18 )
        {
          v36 = *v18;
          if ( (unsigned __int64)*v18 > 1 )
          {
            if ( *(_DWORD *)(v36 + 12) == (_DWORD)v21 && v19 == v36 )
              goto LABEL_12;
          }
          else if ( !v36 )
          {
            break;
          }
        }
LABEL_20:
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 16LL))(
          a1,
          v19,
          v23,
          v18,
          v21,
          v24);
        v26 = *(unsigned int *)(a1 + 32);
        if ( 3 * (int)v26 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
        {
          v46 = 2 * v26;
          v28 = 8LL * (unsigned int)(2 * v26);
          v39 = (__int64 *)sub_186B270(v28);
          v40 = v46;
          v27 = v39;
          if ( v46 )
          {
            memset(v39, 0, v28);
            v40 = v46;
          }
          v41 = *(__int64 **)(a1 + 24);
          v29 = v40 - 1;
          v30 = &v27[v28 / 8];
          v42 = &v41[*(unsigned int *)(a1 + 32)];
          if ( v41 != v42 )
          {
            do
            {
              if ( (unsigned __int64)*v41 > 1 )
              {
                v43 = 8LL * (*(_DWORD *)(*v41 + 12) & v29);
                v44 = &v27[(unsigned __int64)v43 / 8];
                if ( v28 == v43 )
                {
LABEL_76:
                  if ( v27 == v44 )
                  {
LABEL_88:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v45 = v27;
                  while ( *v45 )
                  {
                    if ( v44 == ++v45 )
                      goto LABEL_88;
                  }
                }
                else
                {
                  v45 = &v27[(unsigned __int64)v43 / 8];
                  while ( *v45 )
                  {
                    if ( v30 == ++v45 )
                      goto LABEL_76;
                  }
                }
                *v45 = *v41;
              }
              ++v41;
            }
            while ( v42 != v41 );
            v42 = *(__int64 **)(a1 + 24);
          }
          if ( v42 )
          {
            v48 = v40;
            v47 = v40 - 1;
            sub_186B220(v42);
            v40 = v48;
            v29 = v47;
          }
          *(_QWORD *)(a1 + 24) = v27;
          *(_DWORD *)(a1 + 32) = v40;
          *(_DWORD *)(a1 + 40) = 0;
        }
        else
        {
          v27 = *(__int64 **)(a1 + 24);
          v28 = 8 * v26;
          v29 = v26 - 1;
          v30 = &v27[v26];
        }
        v31 = *(_DWORD *)(v19 + 12);
        v32 = v31 & v29;
        v33 = &v27[v32];
        if ( 8 * v32 != v28 )
        {
          result = (__int64)&v27[v32];
          v34 = nullptr;
          while ( 1 )
          {
            v35 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
            {
              if ( *(_DWORD *)(v35 + 12) == v31 && v19 == v35 )
              {
                *(_QWORD *)result = v19;
                goto LABEL_56;
              }
            }
            else
            {
              if ( !v35 )
              {
                if ( v34 )
                  goto LABEL_86;
                v34 = (_QWORD *)result;
                goto LABEL_87;
              }
              v34 = (_QWORD *)result;
            }
            result += 8;
            if ( (__int64 *)result == v30 )
              goto LABEL_43;
          }
        }
        v34 = nullptr;
        while ( 1 )
        {
LABEL_43:
          if ( v33 == v27 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          result = *v27;
          if ( (unsigned __int64)*v27 > 1 )
          {
            if ( *(_DWORD *)(result + 12) == v31 && v19 == result )
            {
              *v27 = v19;
              goto LABEL_56;
            }
          }
          else
          {
            if ( !result )
            {
              if ( v34 )
LABEL_86:
                --*(_DWORD *)(a1 + 40);
              else
                v34 = v27;
LABEL_87:
              *v34 = v19;
              ++*(_DWORD *)(a1 + 36);
LABEL_56:
              if ( !*(_WORD *)(v19 + 4) )
              {
                v37 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
                if ( !v37 || *v37 )
                  goto LABEL_64;
                v38 = v37[1];
                switch ( v38 )
                {
                  case 5:
                    result = sub_9177E0(a1, (unsigned int *)v19);
                    break;
                  case 6:
                    result = sub_9178D0(a1, (unsigned int *)v19);
                    break;
                  case 4:
                    result = sub_9179C0(a1, (_QWORD *)v19);
                    break;
                  default:
LABEL_64:
                    result = sub_9172F0(a1, v19);
                    break;
                }
              }
              v15 = *(_QWORD **)(a1 + 48);
              goto LABEL_11;
            }
            v34 = v27;
          }
          ++v27;
        }
      }
      ++v7;
    }
LABEL_8:
    v15 = *(_QWORD **)(a1 + 48);
    if ( !v15 )
      goto LABEL_39;
    goto LABEL_9;
  }
  result = (__int64)&v7[(unsigned __int64)v12 / 8];
  while ( 1 )
  {
    v14 = *(_QWORD *)result;
    if ( *(_QWORD *)result > 1u )
      break;
    if ( !v14 )
      goto LABEL_8;
LABEL_5:
    result += 8;
    if ( v11 == (char *)result )
      goto LABEL_31;
  }
  if ( *(_DWORD *)(v14 + 12) != v8 || v14 != a2 )
    goto LABEL_5;
  return result;
}

