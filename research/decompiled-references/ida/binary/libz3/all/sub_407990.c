void __fastcall sub_407990(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r14
  unsigned int v18; // esi
  unsigned int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r8
  void *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // r12
  unsigned int v31; // eax
  __int64 v32; // r13
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rsi
  __int64 v36; // r12
  char *v37; // rax
  char *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  unsigned int *v41; // r9
  __int64 v42; // rdi
  _BYTE *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r14
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // [rsp+0h] [rbp-120h]
  __int64 *v49; // [rsp+8h] [rbp-118h]
  __int64 v50; // [rsp+10h] [rbp-110h]
  _QWORD *v51; // [rsp+10h] [rbp-110h]
  __int64 v52; // [rsp+18h] [rbp-108h]
  void *v53; // [rsp+20h] [rbp-100h]
  __int64 v54; // [rsp+28h] [rbp-F8h]
  __int64 *v55; // [rsp+30h] [rbp-F0h]
  __int64 *v56; // [rsp+38h] [rbp-E8h]
  __int64 v57; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-D0h] BYREF
  int v60[2]; // [rsp+58h] [rbp-C8h]
  void *ptr; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-B8h]
  _BYTE v63[176]; // [rsp+70h] [rbp-B0h] BYREF

  v6 = a1[2];
  if ( !v6 )
  {
    if ( a1[10] )
      sub_407650((__int64)a1, a2, a3, a4, a5, a6);
    sub_41C800(&ptr, a1 + 4);
    v8 = a1[2];
    v9 = v62;
    a1[2] = ptr;
    sub_3FCDF0(v8, v9);
    sub_3D8450(a1[2], a1 + 2, 0, 0);
    sub_15ECFD0((unsigned int)&ptr, (_DWORD)a1 + 16, 8, v10, v11, v12);
    v13 = (void *)a1[2];
    v14 = v62;
    a1[2] = ptr;
    ptr = v13;
    sub_3FCDF0((__int64)v13, v14);
    v15 = a1[7];
    if ( v15 && *(_DWORD *)(v15 - 4) && (unsigned __int8)sub_422190(a1[2]) )
    {
      v16 = a1[1];
      *(_QWORD *)v60 = 0;
      v59 = v16;
      sub_3EE030((__int64)&v59, (__int64)(a1 + 6));
      v17 = *(__int64 **)v60;
      if ( *(_QWORD *)v60 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)v60 - 4LL);
        if ( v18 >> 1 )
        {
          v19 = v18 - 1;
          v20 = *(__int64 **)v60;
          do
          {
            v21 = v19;
            v22 = *v20;
            --v19;
            ++v20;
            v23 = &v17[v21];
            *(v20 - 1) = *v23;
            *v23 = v22;
          }
          while ( v19 != v18 - 1 - (v18 >> 1) );
        }
      }
      else
      {
        v18 = 0;
      }
      v24 = a1[1];
      v25 = a1[2];
      ptr = nullptr;
      v62 = v24;
      sub_1697FC0(v24, 0, v18, (int)v17, v25, (int)&ptr, v48, (__int64)&v59, v50, v52, v53);
      v26 = (void *)a1[2];
      v27 = v62;
      a1[2] = ptr;
      ptr = v26;
      sub_3FCDF0((__int64)v26, v27);
      ptr = v63;
      v62 = 0x1000000000LL;
      if ( v17 )
      {
        v28 = *((unsigned int *)v17 - 1);
        v55 = &v17[v28];
        if ( v55 == v17 )
        {
          v41 = (unsigned int *)a1[2];
          v42 = a1[1];
          v43 = v63;
          v58 = 8LL * *v41 + 1;
        }
        else
        {
          v56 = v17;
          do
          {
            v32 = *v56;
            v33 = sub_15D1F10(*v56);
            v34 = v62;
            v35 = v33;
            if ( (unsigned int)v62 < HIDWORD(v62) )
            {
              v29 = ptr;
            }
            else
            {
              v54 = v33;
              v36 = (unsigned int)(2 * HIDWORD(v62));
              v37 = (char *)sub_186B270(8 * v36);
              v34 = v62;
              v38 = (char *)ptr;
              v29 = v37;
              v35 = v54;
              if ( (_DWORD)v62 )
              {
                if ( (unsigned int)(v62 - 1) <= 2 || v37 == (char *)ptr + 8 )
                {
                  v46 = 0;
                  v47 = 8LL * (unsigned int)v62;
                  do
                  {
                    v29[v46 / 8] = *(_QWORD *)&v38[v46];
                    v46 += 8LL;
                  }
                  while ( v47 != v46 );
                }
                else
                {
                  v39 = 0;
                  v40 = 16LL * ((unsigned int)v62 >> 1);
                  do
                  {
                    *(__m128i *)&v29[v39 / 8] = _mm_loadu_si128((const __m128i *)&v38[v39]);
                    v39 += 16LL;
                  }
                  while ( v40 != v39 );
                  if ( (v34 & 1) != 0 )
                    v29[v34 & 0xFFFFFFFE] = *(_QWORD *)&v38[8 * (v34 & 0xFFFFFFFE)];
                }
              }
              if ( v38 != v63 && v38 )
              {
                v51 = v29;
                sub_186B220(v38);
                v34 = v62;
                v29 = v51;
              }
              ptr = v29;
              HIDWORD(v62) = v36;
            }
            v30 = *(_QWORD *)(v32 + 16);
            v29[v34] = v35;
            LODWORD(v62) = v34 + 1;
            if ( !v6 || (v31 = *(_DWORD *)(v6 - 4), v31 == *(_DWORD *)(v6 - 8)) )
            {
              v57 = v6;
              sub_41E8A0(&v57);
              v6 = v57;
              v31 = *(_DWORD *)(v57 - 4);
            }
            ++v56;
            *(_QWORD *)(v6 + 8LL * v31) = *(_QWORD *)(v30 + 16);
            *(_DWORD *)(v6 - 4) = v31 + 1;
          }
          while ( v55 != v56 );
          v41 = (unsigned int *)a1[2];
          v42 = a1[1];
          v43 = ptr;
          v28 = *((unsigned int *)v17 - 1);
          v58 = 8LL * *v41 + 1;
        }
      }
      else
      {
        v41 = (unsigned int *)a1[2];
        v42 = a1[1];
        v6 = 0;
        v28 = 0;
        v43 = v63;
        v58 = 8LL * *v41 + 1;
      }
      v44 = sub_15DB6A0(v42, 0, v28, v43, v6, v41, 15, &v58, &qword_18D6CD0, 0, 0, 0, 0);
      v45 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      sub_3FCDF0(a1[2], a1[3]);
      a1[2] = v45;
      if ( v6 )
        sub_186B220((void *)(v6 - 8));
      if ( ptr != v63 )
      {
        if ( ptr )
          sub_186B220(ptr);
      }
      sub_2B4F40(v49);
    }
  }
}

