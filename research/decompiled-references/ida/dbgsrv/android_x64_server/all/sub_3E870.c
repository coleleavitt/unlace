/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E870
// Address: 0x000000000003E870

//----- (000000000003E870) ----------------------------------------------------
unsigned __int64 __fastcall sub_3E870(__int64 a1, __int64 *a2, double a3, double a4)
{
  __m128i v4; // xmm0
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  const char *v8; // rbx
  void *v9; // r12
  int v10; // r13d
  _QWORD *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  const char *v14; // rdi
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r14
  __int64 *v22; // r13
  __int64 *v23; // rbp
  __int64 v24; // r13
  bool v25; // zf
  const char *v26; // r15
  void *v27; // r14
  int v28; // ebx
  _QWORD *v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // r12
  const char *v32; // rdi
  __int64 *v33; // rax
  size_t v34; // rax
  size_t v35; // r14
  unsigned __int64 v36; // rbx
  void *v37; // rax
  unsigned __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 j; // r15
  _QWORD *v47; // rbx
  __int64 v48; // rbp
  const char *v49; // rsi
  const char *v50; // rbx
  __int64 *v51; // rcx
  __int64 *v52; // rax
  const char *v53; // r14
  void *v54; // rax
  const char *v55; // r8
  __int128 *v58; // [rsp+8h] [rbp-F0h]
  __int64 *v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v61; // [rsp+18h] [rbp-E0h]
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-B8h]
  void *v65[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+60h] [rbp-98h]
  int v67; // [rsp+74h] [rbp-84h] BYREF
  __int64 v68; // [rsp+78h] [rbp-80h] BYREF
  __int64 v69; // [rsp+80h] [rbp-78h]
  _BYTE v70[36]; // [rsp+88h] [rbp-70h] BYREF
  __int128 v71; // [rsp+ACh] [rbp-4Ch]
  int v72; // [rsp+BCh] [rbp-3Ch]
  unsigned __int64 v73; // [rsp+C0h] [rbp-38h]

  v73 = __readfsqword(0x28u);
  v4.m128i_i64[0] = 0;
  *(_OWORD *)v65 = 0;
  v66 = 0;
  v61 = a2[1];
  if ( v61 )
  {
    for ( i = 0; i < v61; ++i )
    {
      v6 = *a2;
      v7 = 80 * i;
      v8 = s1;
      if ( *(_QWORD *)(*a2 + 80 * i + 24) )
        v8 = *(const char **)(v6 + v7 + 16);
      v60 = *a2;
      v58 = (__int128 *)(v6 + v7);
      v9 = v65[1];
      if ( !v65[1] )
        goto LABEL_21;
      v10 = 1;
      v11 = v65[0];
      v12 = 0;
      while ( 1 )
      {
        v13 = 10 * v12;
        v14 = s1;
        if ( v11[10 * v12 + 3] )
          v14 = (const char *)v11[v13 + 2];
        if ( !strcmp(v14, v8) )
          break;
        v12 = v10++;
        if ( (unsigned __int64)v9 <= v12 )
          goto LABEL_21;
      }
      v15 = &v11[v13];
      if ( &v11[v13] )
      {
        v16 = *(_QWORD *)v58;
        v17 = *v15;
        if ( *v15 > *(_QWORD *)v58 )
        {
          *v15 = v16;
          v17 = v16;
        }
        v18 = &v11[v13 + 1];
        v19 = *v18;
        if ( *v18 < v16 )
        {
          *v18 = v16;
          v19 = v16;
        }
        v20 = *(_QWORD *)(v60 + 80 * i + 8);
        if ( v17 > v20 )
          *v15 = v20;
        if ( v19 < v20 )
          *v18 = v20;
      }
      else
      {
LABEL_21:
        sub_47DB0((__int64)v65, v58);
      }
    }
  }
  v21 = a1;
  v22 = *(__int64 **)(a1 + 1008);
  v59 = (__int64 *)(a1 + 1016);
  if ( v22 != (__int64 *)(a1 + 1016) )
  {
    do
    {
      v26 = s1;
      if ( v22[8] )
        v26 = (const char *)v22[7];
      v27 = v65[1];
      if ( !v65[1] )
        goto LABEL_42;
      v28 = 1;
      v29 = v65[0];
      v30 = 0;
      while ( 1 )
      {
        v31 = 10 * v30;
        v32 = s1;
        if ( v29[10 * v30 + 3] )
          v32 = (const char *)v29[v31 + 2];
        if ( !strcmp(v32, v26) )
          break;
        v30 = v28++;
        if ( (unsigned __int64)v27 <= v30 )
          goto LABEL_42;
      }
      if ( &v29[v31] )
      {
        v33 = (__int64 *)v22[1];
        if ( v33 )
        {
          do
          {
            v23 = v33;
            v33 = (__int64 *)*v33;
          }
          while ( v33 );
          v21 = a1;
        }
        else
        {
          v23 = (__int64 *)v22[2];
          v21 = a1;
          if ( (__int64 *)*v23 != v22 )
          {
            v24 = (__int64)(v22 + 2);
            do
            {
              v23 = *(__int64 **)(*(_QWORD *)v24 + 16LL);
              v25 = *v23 == *(_QWORD *)v24;
              v24 = *(_QWORD *)v24 + 16LL;
            }
            while ( !v25 );
          }
        }
      }
      else
      {
LABEL_42:
        v21 = a1;
        if ( !sub_3CE80((_QWORD *)a1, 8, v26) )
        {
          v68 = 0xFFFFFFFFLL;
          v69 = -1;
          v70[0] = 0;
          v4.m128i_i64[0] = 0;
          v71 = 0;
          memset(&v70[4], 0, 32);
          v72 = 0;
          set_debug_event_code((__int64)&v68, 9);
          if ( (*(_DWORD *)&v70[4] & 0xFFFFFFFu) - 9 >= 2 && (*(_DWORD *)&v70[4] & 0xFFFFFFF) != 3 )
          {
            if ( !(_BYTE)under_debugger )
              interr(3297);
            BUG();
          }
          if ( v26 && (v34 = strlen(v26)) != 0 )
          {
            v35 = v34;
            v36 = v34 + 1;
            v37 = *(void **)&v70[8];
            if ( *(_QWORD *)&v70[24] < v36 )
            {
              v37 = qvector_reserve((__int64)&v70[8], *(char **)&v70[8], v36, 1u);
              *(_QWORD *)&v70[8] = v37;
            }
            *(_QWORD *)&v70[16] = v36;
            memmove(v37, v26, v35);
            *(_BYTE *)(*(_QWORD *)&v70[8] + v35) = 0;
          }
          else
          {
            *(_QWORD *)&v70[16] = 0;
          }
          v21 = a1;
          LODWORD(v68) = *(_DWORD *)(a1 + 1140);
          HIDWORD(v68) = v68;
          v69 = -1;
          v70[0] = 1;
          if ( (*(_DWORD *)&v70[4] & 0xFFFFFFF) != 0 )
          {
            v38 = *(_QWORD *)(a1 + 152);
            if ( !v38 )
            {
              sub_48AB0(a1 + 120);
              v21 = a1;
              v38 = *(_QWORD *)(a1 + 152);
            }
            v39 = *(_QWORD *)(v21 + 128);
            v40 = *(_QWORD *)(v39 + 8 * (v38 / 0x38));
            v41 = v40 + 72 * (v38 % 0x38);
            if ( *(_QWORD *)(v21 + 136) == v39 )
              v41 = 0;
            if ( v41 == v40 )
              v41 = *(_QWORD *)(v39 + 8 * (v38 / 0x38) - 8) + 4032LL;
            *(_QWORD *)(v41 - 72) = 0xFFFFFFFFLL;
            *(_QWORD *)(v41 - 64) = -1;
            *(_BYTE *)(v41 - 56) = 0;
            *(_DWORD *)(v41 - 52) = 0;
            copy_debug_event(v41 - 72, (__int64)&v68);
            v21 = a1;
            v4 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_FE0B0);
            *(__m128i *)(a1 + 152) = v4;
            *(_BYTE *)(a1 + 1228) = 0;
          }
          free_debug_event((__int64)&v68);
        }
        v42 = (__int64 *)v22[1];
        if ( v42 )
        {
          do
          {
            v23 = v42;
            v42 = (__int64 *)*v42;
          }
          while ( v42 );
        }
        else
        {
          v23 = (__int64 *)v22[2];
          if ( (__int64 *)*v23 != v22 )
          {
            v43 = v22 + 2;
            do
            {
              v44 = *v43;
              v23 = *(__int64 **)(v44 + 16);
              v25 = *v23 == v44;
              v43 = (__int64 *)(v44 + 16);
            }
            while ( !v25 );
          }
        }
        if ( *(__int64 **)(v21 + 1008) == v22 )
          *(_QWORD *)(v21 + 1008) = v23;
        --*(_QWORD *)(v21 + 1024);
        sub_4C430(*(__int64 **)(v21 + 1016), v22);
        sub_415E0((__int64)(v22 + 5));
        operator delete(v22);
      }
      v22 = v23;
    }
    while ( v23 != v59 );
  }
  if ( SLODWORD(v65[1]) > 0 )
  {
    v45 = SLODWORD(v65[1]);
    for ( j = 0; j < v45; ++j )
    {
      v47 = v65[0];
      v48 = 80 * j;
      if ( *((_QWORD *)v65[0] + 10 * j + 3) >= 2u )
      {
        if ( *(_BYTE *)(v21 + 733) )
          goto LABEL_77;
        v49 = s1;
        if ( *(_QWORD *)(v21 + 488) )
          v49 = *(const char **)(v21 + 480);
        if ( strcmp(*(const char **)((char *)v65[0] + v48 + 16), v49) )
        {
LABEL_77:
          v50 = (const char *)v47[10 * j];
          v51 = (__int64 *)*v59;
          if ( !*v59 )
            goto LABEL_85;
          v52 = (__int64 *)(a1 + 1016);
          do
          {
            if ( v51[4] >= (unsigned __int64)v50 )
              v52 = v51;
            v51 = (__int64 *)v51[v51[4] < (unsigned __int64)v50];
          }
          while ( v51 );
          if ( v52 == v59 || (unsigned __int64)v50 < v52[4] )
          {
LABEL_85:
            if ( (unsigned int)sub_3D950(v21, 0xFFFFFFFF, (__int64)v50, (__int64)&v67, 4, 0) == 4 && v67 == 1179403647 )
            {
              v4.m128i_i64[0] = 0;
              *(_OWORD *)ptr = 0;
              v64 = 0;
              v53 = s1;
              if ( *(_QWORD *)((char *)v65[0] + v48 + 24) )
                v53 = *(const char **)((char *)v65[0] + v48 + 16);
              LODWORD(v69) = 4;
              v68 = (__int64)off_146E90;
              *(_QWORD *)v70 = ptr;
              sub_5B480(v53, &v68, 0);
              v54 = (void *)sub_433A0((__int64)v53, v65, (unsigned __int64 *)((char *)v65[0] + v48));
              v55 = s1;
              if ( ptr[1] )
                v55 = (const char *)ptr[0];
              sub_40DB0(a1, v50, v54, v53, v55, 0.0);
              v21 = a1;
              if ( ptr[0] )
              {
                ptr[1] = nullptr;
                qfree(ptr[0]);
                ptr[0] = nullptr;
                v64 = 0;
              }
            }
          }
        }
      }
    }
  }
  sub_3C4A0(v21, *(double *)v4.m128i_i64, a4);
  if ( v65[0] )
  {
    sub_385C0((__int64 *)v65, 0);
    qfree(v65[0]);
    v65[0] = nullptr;
    v66 = 0;
  }
  return __readfsqword(0x28u);
}
// FE0B0: using guessed type __int128 xmmword_FE0B0;
// 146E90: using guessed type __int64 (__fastcall *off_146E90[3])();
// 158B40: using guessed type __int64 under_debugger;
