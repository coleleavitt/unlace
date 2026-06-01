/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466DD0
// Address: 0x0000000000466DD0

//----- (0000000000466DD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_466DD0(
        __int64 a1,
        char **a2,
        unsigned __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128 v11; // xmm0
  void *v14; // rdx
  char *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  const char *v22; // r12
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  unsigned int v32; // ebx
  const char *v33; // rsi
  char *v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rbp
  char *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  size_t v42; // rax
  size_t v43; // r13
  void *v44; // rdi
  unsigned __int64 v45; // rdx
  int v46; // eax
  unsigned __int64 v47; // rsi
  unsigned __int8 *v48; // rax
  unsigned __int64 v49; // r10
  char *v50; // rdx
  __int64 v51; // rax
  const char *v52; // rdx
  void *v53; // rax
  unsigned __int64 v54; // rax
  char *v55; // rcx
  _QWORD *v56; // rax
  char *v57; // rsi
  char *v58; // rax
  char *v59; // [rsp+0h] [rbp-A8h]
  int v61; // [rsp+14h] [rbp-94h]
  unsigned __int64 v62; // [rsp+18h] [rbp-90h]
  unsigned __int64 v63; // [rsp+18h] [rbp-90h]
  unsigned __int64 v64; // [rsp+18h] [rbp-90h]
  unsigned int v65; // [rsp+2Ch] [rbp-7Ch] BYREF
  void *v66; // [rsp+30h] [rbp-78h] BYREF
  __int128 v67; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v69; // [rsp+58h] [rbp-50h]
  unsigned __int64 v70; // [rsp+68h] [rbp-40h]

  v11 = 0;
  v70 = __readfsqword(0x28u);
  v67 = 0;
  v66 = nullptr;
  v61 = sub_47FD50(a3, a3[1]);
  sub_466A80((__int64)&v66, v61);
  v14 = v66;
  if ( v61 > 0 )
  {
    v15 = (char *)v66 + 8;
    v16 = 0;
    v59 = (char *)v66 + 432 * (unsigned int)(v61 - 1) + 440;
    while ( 1 )
    {
      v15[416] = 0;
      v16 = v16 + sub_47FE70(a3, a3[1]) - 1;
      *((_QWORD *)v15 - 1) = v16;
      v22 = (const char *)*a3;
      v23 = *a3;
      do
      {
        if ( v23 >= a3[1] )
          goto LABEL_6;
        ++v23;
      }
      while ( *(_BYTE *)(v23 - 1) );
      *a3 = v23;
      if ( !v22 || (v42 = strlen(v22), (v43 = v42) == 0) )
      {
LABEL_6:
        *((_QWORD *)v15 + 1) = 0;
        if ( !*(_BYTE *)(a1 + 184) )
          goto LABEL_7;
        goto LABEL_42;
      }
      v44 = *(void **)v15;
      v45 = v42 + 1;
      if ( *((_QWORD *)v15 + 2) < v42 + 1 )
      {
        v62 = v42 + 1;
        v53 = sub_481540((__int64)v15, *(void **)v15, v45, 1u);
        *(_QWORD *)v15 = v53;
        v45 = v62;
        v44 = v53;
      }
      *((_QWORD *)v15 + 1) = v45;
      memmove(v44, v22, v43);
      *(_BYTE *)(*(_QWORD *)v15 + v43) = 0;
      if ( *((_QWORD *)v15 + 1) <= 1u )
        goto LABEL_38;
      *((_DWORD *)v15 + 105) = 0;
      v46 = sub_47FD50(a3, a3[1]);
      *((_DWORD *)v15 + 6) = v46;
      if ( v46 != 4 )
        *((_DWORD *)v15 + 105) = sub_47FD50(a3, a3[1]);
      v47 = a3[1];
      v48 = (unsigned __int8 *)*a3;
      if ( *a3 < v47 )
      {
        v49 = *v48;
        v50 = (char *)(v48 + 1);
        *a3 = (unsigned __int64)(v48 + 1);
        if ( (_BYTE)v49 )
        {
          v54 = *((_QWORD *)v15 + 5);
          if ( v54 < v49 )
          {
            v57 = *((char **)v15 + 4);
            if ( *((_QWORD *)v15 + 6) < v49 )
            {
              v64 = v49;
              v58 = (char *)sub_481540((__int64)(v15 + 32), v57, v49, 1u);
              *((_QWORD *)v15 + 4) = v58;
              v57 = v58;
              v49 = v64;
              v54 = *((_QWORD *)v15 + 5);
            }
            v63 = v49;
            memset(&v57[v54], 0, v49 - v54);
            v49 = v63;
            *((_QWORD *)v15 + 5) = v63;
            v47 = a3[1];
            v50 = (char *)*a3;
          }
          else if ( v49 != v54 )
          {
            *((_QWORD *)v15 + 5) = v49;
            v47 = a3[1];
            v50 = (char *)*a3;
          }
          v55 = &v50[v49];
          if ( !__CFADD__(v49, v50) && v47 >= (unsigned __int64)v55 )
          {
            v56 = *((_QWORD **)v15 + 4);
            *a3 = (unsigned __int64)v55;
            if ( (unsigned int)v49 >= 8 )
            {
              *v56 = *(_QWORD *)v50;
              *(_QWORD *)((char *)v56 + v49 - 8) = *(_QWORD *)&v50[v49 - 8];
              qmemcpy(
                (void *)((unsigned __int64)(v56 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v50 - ((char *)v56 - ((unsigned __int64)(v56 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v49 + (_DWORD)v56 - (((_DWORD)v56 + 8) & 0xFFFFFFF8)) >> 3));
LABEL_51:
              v47 = a3[1];
              goto LABEL_36;
            }
            if ( (v49 & 4) != 0 )
            {
              *(_DWORD *)v56 = *(_DWORD *)v50;
              *(_DWORD *)((char *)v56 + v49 - 4) = *(_DWORD *)&v50[v49 - 4];
              v47 = a3[1];
            }
            else
            {
              *(_BYTE *)v56 = *v50;
              if ( (v49 & 2) == 0 )
                goto LABEL_51;
              *(_WORD *)((char *)v56 + v49 - 2) = *(_WORD *)&v50[v49 - 2];
              v47 = a3[1];
            }
          }
        }
      }
LABEL_36:
      v51 = sub_47FE70(a3, v47) - 1;
      *((_QWORD *)v15 + 9) = v51;
      if ( v51 != -1 )
        sub_46D010(v15 + 56, a3);
LABEL_38:
      if ( !*(_BYTE *)(a1 + 184) )
        goto LABEL_7;
      if ( *((_QWORD *)v15 + 1) )
      {
        v52 = *(const char **)v15;
        goto LABEL_41;
      }
LABEL_42:
      v52 = s1;
LABEL_41:
      *(double *)v11.m128_u64 = sub_410EA0(
                                  (int)"update_lowcnd(ea=%a cnd=%s)\n",
                                  v16,
                                  (__int64)v52,
                                  v17,
                                  v18,
                                  v19,
                                  v11,
                                  a5,
                                  a6,
                                  a7,
                                  v20,
                                  v21,
                                  a10,
                                  a11,
                                  (char)v59);
LABEL_7:
      v15 += 432;
      if ( v15 == v59 )
      {
        v14 = v66;
        break;
      }
    }
  }
  v24 = *(_QWORD *)(a1 + 440);
  ptr = nullptr;
  v69 = 0;
  v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *, void *, _QWORD, void **))(*(_QWORD *)v24 + 352LL))(
          v24,
          &v65,
          v14,
          (unsigned int)v61,
          &ptr);
  v32 = v25;
  if ( *(_BYTE *)(a1 + 184) )
    sub_410EA0(
      (int)"  update_lowcnds => %d\n",
      v25,
      v26,
      v27,
      v28,
      v29,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v30,
      v31,
      a10,
      a11,
      (char)v59);
  sub_45BD90(a2, v32);
  sub_45BD90(a2, v65);
  if ( v32 != 1 )
  {
    v33 = s1;
    if ( (_QWORD)v69 )
      v33 = (const char *)ptr;
    sub_45BFB0(a2, v33);
  }
  if ( ptr )
  {
    *(_QWORD *)&v69 = 0;
    j__free(ptr);
  }
  v34 = (char *)v66;
  if ( v66 )
  {
    v35 = v67;
    if ( (_QWORD)v67 )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = &v34[v36];
        v39 = *(void **)&v34[v36 + 40];
        if ( v39 )
        {
          *((_QWORD *)v38 + 6) = 0;
          j__free(v39);
        }
        v40 = *((void **)v38 + 1);
        if ( v40 )
        {
          *((_QWORD *)v38 + 2) = 0;
          j__free(v40);
        }
        ++v37;
        v34 = (char *)v66;
        v36 += 432;
      }
      while ( v35 != v37 );
    }
    *(_QWORD *)&v67 = 0;
    j__free(v34);
  }
  return v70 - __readfsqword(0x28u);
}
// 467182: conditional instruction was optimized away because r10d.4 is in (1..7)
// 466EC6: variable 'v59' is possibly undefined
// 466F13: variable 'v26' is possibly undefined
// 466F13: variable 'v27' is possibly undefined
// 466F13: variable 'v28' is possibly undefined
// 466F13: variable 'v29' is possibly undefined
// 466F13: variable 'v30' is possibly undefined
// 466F13: variable 'v31' is possibly undefined
// 4670F7: variable 'v17' is possibly undefined
// 4670F7: variable 'v18' is possibly undefined
// 4670F7: variable 'v19' is possibly undefined
// 4670F7: variable 'v20' is possibly undefined
// 4670F7: variable 'v21' is possibly undefined
// 46D010: using guessed type __int64 __fastcall sub_46D010(_QWORD, _QWORD);
