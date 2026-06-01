__int64 __fastcall sub_18CEE0(unsigned int a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 *v23; // rdi
  _QWORD *v24; // rax
  unsigned int *v25; // rdx
  unsigned int *v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  unsigned int *v31; // rax
  _QWORD *v32; // rdx
  __int64 *v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 *v36; // rax
  const void *v37; // rsi
  __int64 *v38; // r14
  __m128i v39; // xmm2
  unsigned int v40; // eax
  __m128i v41; // [rsp+0h] [rbp-78h] BYREF
  size_t n; // [rsp+18h] [rbp-60h]
  __int64 *v43; // [rsp+20h] [rbp-58h] BYREF
  __m128i v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-40h]
  unsigned __int64 v46; // [rsp+48h] [rbp-30h]

  v46 = __readfsqword(0x28u);
  v2 = 0;
  if ( a1 > 0x13 )
    return v2;
  if ( a1 > 0xA )
  {
    switch ( a1 )
    {
      case 0xBu:
      case 0xFu:
      case 0x10u:
      case 0x12u:
      case 0x13u:
        goto LABEL_4;
      case 0x11u:
        goto LABEL_33;
      default:
        return v2;
    }
    return v2;
  }
  if ( !a1 )
  {
    v40 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 > 0x2Fu )
    {
      *(_QWORD *)(a2 + 8) += 8LL;
    }
    else
    {
      if ( v40 + 8 <= 0x2F )
      {
        *(_DWORD *)a2 = v40 + 16;
        goto LABEL_51;
      }
      *(_DWORD *)a2 = v40 + 8;
    }
    *(_QWORD *)(a2 + 8) += 8LL;
LABEL_51:
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( a1 - 2 > 8 )
    return v2;
  v11 = 1LL << a1;
  if ( ((1LL << a1) & 0x500) != 0 )
  {
LABEL_4:
    v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 > 0x2Fu )
    {
      v24 = *(_QWORD **)(a2 + 8);
      v25 = (unsigned int *)(v24 + 1);
      *(_QWORD *)(a2 + 8) = v24 + 1;
      v8 = *v24;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 16);
      v7 = v5 + 8;
      *(_DWORD *)a2 = v7;
      v8 = *(_QWORD *)(v6 + v5);
      if ( (unsigned int)v7 <= 0x2F )
      {
        *(_DWORD *)a2 = v5 + 16;
        v9 = *(unsigned int *)(v6 + v7);
        if ( v5 + 16 <= 0x2F )
        {
          *(_DWORD *)a2 = v5 + 24;
          goto LABEL_8;
        }
        v26 = *(unsigned int **)(a2 + 8);
        goto LABEL_32;
      }
      v25 = *(unsigned int **)(a2 + 8);
    }
    v26 = v25 + 2;
    *(_QWORD *)(a2 + 8) = v25 + 2;
    v9 = *v25;
LABEL_32:
    *(_QWORD *)(a2 + 8) = v26 + 2;
    goto LABEL_8;
  }
  if ( (v11 & 0x280) != 0 )
  {
LABEL_33:
    v27 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 > 0x2Fu )
    {
      v30 = *(_QWORD **)(a2 + 8);
      v31 = (unsigned int *)(v30 + 1);
      *(_QWORD *)(a2 + 8) = v30 + 1;
      v8 = *v30;
    }
    else
    {
      v28 = *(_QWORD *)(a2 + 16);
      v29 = v27 + 8;
      *(_DWORD *)a2 = v29;
      v8 = *(_QWORD *)(v28 + v27);
      if ( (unsigned int)v29 <= 0x2F )
      {
        *(_DWORD *)a2 = v27 + 16;
        v9 = *(unsigned int *)(v29 + v28);
        goto LABEL_8;
      }
      v31 = *(unsigned int **)(a2 + 8);
    }
    *(_QWORD *)(a2 + 8) = v31 + 2;
    v9 = *v31;
LABEL_8:
    if ( (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v9) )
      sub_1A24C0(v8);
    return v2;
  }
  if ( (v11 & 0x14) == 0 )
    return v2;
  v12 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 0x2Fu )
  {
    v32 = *(_QWORD **)(a2 + 8);
    v16 = (unsigned int *)(v32 + 1);
    *(_QWORD *)(a2 + 8) = v32 + 1;
    v15 = *v32;
LABEL_39:
    *(_QWORD *)(a2 + 8) = v16 + 2;
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(a2 + 16);
  v14 = v12 + 8;
  *(_DWORD *)a2 = v14;
  v15 = *(_QWORD *)(v13 + v12);
  if ( (unsigned int)v14 > 0x2F )
  {
    v16 = *(unsigned int **)(a2 + 8);
    goto LABEL_39;
  }
  v16 = (unsigned int *)(v14 + v13);
  *(_DWORD *)a2 = v12 + 16;
LABEL_19:
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, *v16);
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 8) == 8 )
    {
      v18 = sub_192D20(*(_QWORD *)(v17 + 104));
      if ( v18 )
      {
        v43 = nullptr;
        v19 = *(_DWORD *)a2;
        v45 = -1;
        v44 = 0;
        if ( a1 == 2 )
        {
          if ( v19 > 0x2F )
          {
            v20 = *(__int64 **)(a2 + 8);
            *(_QWORD *)(a2 + 8) = v20 + 1;
          }
          else
          {
            v20 = (__int64 *)(*(_QWORD *)(a2 + 16) + v19);
            *(_DWORD *)a2 = v19 + 8;
          }
          v21 = *v20;
          if ( *v20 )
          {
            v22 = *(_QWORD *)(v21 + 8);
            if ( v22 )
            {
              n = 8 * v22;
              v36 = (__int64 *)qalloc_or_throw();
              v37 = *(const void **)v21;
              v38 = v36;
              v41 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
              memcpy(v36, v37, 8 * v22);
              if ( v43 )
              {
                v44.m128i_i64[0] = 0;
                qfree();
              }
              v39 = _mm_load_si128(&v41);
              v43 = v38;
              v44 = v39;
              v45 = *v38;
            }
          }
          sub_195F90(v18, &v43, 7, 0);
          v23 = v43;
        }
        else
        {
          if ( v19 > 0x2F )
          {
            v33 = *(__int64 **)(a2 + 8);
            *(_QWORD *)(a2 + 8) = v33 + 1;
          }
          else
          {
            v33 = (__int64 *)(*(_QWORD *)(a2 + 16) + v19);
            *(_DWORD *)a2 = v19 + 8;
          }
          v34 = *v33;
          sub_1965F0(v18, &v43, 3);
          v23 = *(__int64 **)v34;
          LOBYTE(v2) = 1;
          v35 = *(_QWORD *)(v34 + 16);
          *(_QWORD *)v34 = v43;
          v43 = v23;
          *(__m128i *)(v34 + 8) = v44;
          v44.m128i_i64[1] = v35;
        }
        if ( v23 )
        {
          v44.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  return v2;
}

