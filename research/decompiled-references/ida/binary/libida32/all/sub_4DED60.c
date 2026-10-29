__int64 __fastcall sub_4DED60(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  unsigned int v7; // r8d
  int *v8; // rdx
  int v9; // edx
  unsigned int *v10; // r14
  int v11; // r12d
  unsigned int i; // eax
  __int64 v13; // rdi
  int v14; // r9d
  int v15; // r15d
  unsigned __int64 (__fastcall *v16)(__int64, int); // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _DWORD *v19; // rax
  unsigned int v20; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  bool v28; // cf
  __int64 v29; // rax
  unsigned __int64 v30; // xmm1_8
  _QWORD *v31; // rax
  __int64 aflags; // rax
  unsigned int tinfo; // ebx
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  __int64 *v36; // rdi
  unsigned __int64 v37; // r12
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  int v42; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v43; // [rsp+10h] [rbp-88h]
  unsigned __int64 v44; // [rsp+10h] [rbp-88h]
  unsigned int *v45; // [rsp+20h] [rbp-78h]
  unsigned int v46; // [rsp+28h] [rbp-70h]
  unsigned __int8 v47; // [rsp+2Eh] [rbp-6Ah]
  unsigned __int8 v48; // [rsp+2Eh] [rbp-6Ah]
  char v49; // [rsp+2Fh] [rbp-69h]
  __int64 v50; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 v51; // [rsp+39h] [rbp-5Fh]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v3 = a3;
  v4 = HIDWORD(a3);
  v54 = __readfsqword(0x28u);
  v7 = a3;
  a2[1] = 0;
  v8 = (int *)a1[3];
  v46 = v4;
  if ( !v8 )
  {
    if ( (_DWORD)v4 != -1 )
    {
      if ( v3 >= (unsigned int)v4 )
        goto LABEL_5;
LABEL_37:
      v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(v3)).m128i_u64[0];
      if ( a2[2] )
      {
        v31 = (_QWORD *)*a2;
      }
      else
      {
        v34 = qvector_reserve(a2, 0, 1, 8);
        v35 = a2[2];
        v36 = (__int64 *)*a2;
        a2[2] = 0;
        v37 = v34;
        v38 = a2[1] - 1;
        if ( v38 >= 0 )
        {
          v39 = v37;
          do
          {
            v40 = *v36;
            v39 += 8LL;
            ++v36;
            *(_QWORD *)(v39 - 8) = v40;
            v28 = v38-- == 0;
          }
          while ( !v28 );
          v36 = (__int64 *)*a2;
        }
        qfree(v36);
        v41 = a2[1];
        *a2 = v37;
        a2[2] = v35;
        v31 = (_QWORD *)(v37 + 8 * v41);
      }
      *v31 = v30;
      v20 = 0;
      ++a2[1];
      return v20;
    }
    goto LABEL_21;
  }
  v9 = *v8;
  if ( (_DWORD)v4 == -1 )
  {
    if ( v3 == v9 )
      return 1;
LABEL_21:
    v46 = v7;
    goto LABEL_5;
  }
  if ( (_DWORD)v4 == v9 )
    return 1;
  if ( v3 < (unsigned int)v4 )
    goto LABEL_37;
LABEL_5:
  v53 = 0;
  ptr = nullptr;
  v49 = sub_4DE740(a1, a2, (__int64 *)&ptr, v46);
  v10 = (unsigned int *)ptr;
  v45 = (unsigned int *)((char *)ptr + 4 * v53);
  if ( v45 != ptr )
  {
    v47 = 0;
    while ( 1 )
    {
      v11 = *v10;
      for ( i = xrefblk_t_first_to(&v50, *v10, 5); ; i = xrefblk_t_next_to(&v50) )
      {
        v20 = i;
        if ( !(_BYTE)i )
          break;
        if ( (unsigned __int8)(v51 - 16) <= 1u )
        {
          v47 = i;
          continue;
        }
        if ( (_DWORD)v50 == v11 )
          continue;
        v13 = a1[3];
        if ( v13 )
        {
          if ( (int)get_func_chunknum(v13, (unsigned int)v50) < 0 )
            continue;
        }
        else if ( get_fchunk((unsigned int)v50) )
        {
          continue;
        }
        v14 = v50;
        v15 = -1;
        v16 = *(unsigned __int64 (__fastcall **)(__int64, int))(*a1 + 16LL);
        if ( v16 != sub_4DC6B0 )
        {
          v29 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v16)(a1, (unsigned int)v50, v51);
          v14 = v29;
          v15 = HIDWORD(v29);
        }
        v17 = a2[1];
        if ( a2[2] < v17 + 1 )
        {
          v43 = a2[2];
          v42 = v14;
          v22 = qvector_reserve(a2, 0, v17 + 1, 8);
          v23 = v22;
          v24 = a2[2];
          v25 = (__int64 *)*a2;
          v26 = a2[1] - 1;
          a2[2] = v43;
          if ( v26 >= 0 )
          {
            do
            {
              v27 = *v25;
              v22 += 8;
              ++v25;
              *(_QWORD *)(v22 - 8) = v27;
              v28 = v26-- == 0;
            }
            while ( !v28 );
            v25 = (__int64 *)*a2;
          }
          v44 = v23;
          qfree(v25);
          v18 = v44;
          v17 = a2[1];
          v14 = v42;
          *a2 = v44;
          a2[2] = v24;
        }
        else
        {
          v18 = *a2;
        }
        v19 = (_DWORD *)(v18 + 8 * v17);
        *v19 = v14;
        v19[1] = v15;
        ++a2[1];
      }
      if ( v45 == ++v10 )
      {
        if ( !a2[1] && !v49 )
        {
          v20 = v47;
          if ( !v47 )
            goto LABEL_42;
        }
LABEL_27:
        v10 = (unsigned int *)ptr;
        goto LABEL_28;
      }
    }
  }
  if ( a2[1] || v49 )
  {
    v20 = 0;
  }
  else
  {
LABEL_42:
    v20 = is_planned_proc(v46);
    if ( (_BYTE)v20 )
      goto LABEL_27;
    aflags = get_aflags(v46);
    v20 = 0;
    if ( (aflags & 0x800) == 0 )
      goto LABEL_27;
    v50 = 0;
    tinfo = get_tinfo(&v50, v46);
    if ( (_BYTE)tinfo && (get_tinfo_property(v50, 2) & 0xF) == 0xC )
    {
      clear_tinfo_t(&v50);
      v10 = (unsigned int *)ptr;
      v20 = tinfo;
    }
    else
    {
      clear_tinfo_t(&v50);
      v10 = (unsigned int *)ptr;
      v20 = 0;
    }
  }
LABEL_28:
  if ( v10 )
  {
    v48 = v20;
    *(_QWORD *)&v53 = 0;
    qfree(v10);
    return v48;
  }
  return v20;
}

