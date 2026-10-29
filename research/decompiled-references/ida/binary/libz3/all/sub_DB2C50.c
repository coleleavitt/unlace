void __fastcall sub_DB2C50(__int64 a1, __int64 **a2, _QWORD *a3, __int64 a4)
{
  char **exception; // rbx
  __int64 *v5; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r15
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  unsigned int v31; // r15d
  __int64 v32; // r14
  unsigned int v33; // r15d
  unsigned int v34; // ecx
  unsigned int *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 j; // rax
  __int64 *i; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+18h] [rbp-70h]
  __int64 v47[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *a2;
  if ( *a2 )
  {
    for ( i = &v5[*((unsigned int *)v5 - 1)]; i != v5; ++v5 )
    {
      v7 = *v5;
      v8 = *(unsigned int *)(a1 + 128);
      v9 = *(__int64 **)(a1 + 120);
      v10 = *(_DWORD *)(*v5 + 12);
      v11 = v8 - 1;
      v8 *= 24;
      v12 = (__int64 *)((char *)v9 + v8);
      v13 = 24LL * (v10 & v11);
      v14 = &v9[(unsigned __int64)v13 / 8];
      if ( v13 == v8 )
      {
LABEL_11:
        while ( v14 != v9 )
        {
          v17 = *v9;
          if ( (unsigned __int64)*v9 > 1 )
          {
            if ( *(_DWORD *)(v17 + 12) == v10 && v7 == v17 )
            {
              v15 = v9;
              goto LABEL_20;
            }
          }
          else if ( !v17 )
          {
            break;
          }
          v9 += 3;
        }
LABEL_55:
        BUG();
      }
      v15 = &v9[(unsigned __int64)v13 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( (unsigned __int64)*v15 > 1 )
            break;
          if ( !v16 )
            goto LABEL_55;
          v15 += 3;
          if ( v12 == v15 )
            goto LABEL_11;
        }
        if ( *(_DWORD *)(v16 + 12) == v10 && v7 == v16 )
          break;
        v15 += 3;
        if ( v12 == v15 )
          goto LABEL_11;
      }
LABEL_20:
      v18 = v15[1];
      if ( v18 )
      {
        v19 = *(_DWORD *)(v18 - 4);
        if ( v19 )
        {
          v20 = v19;
          v21 = v15[1];
          v19 = 0;
          v22 = v18 + 4 * v20;
          do
          {
            v21 += 4;
            v19 += __popcountdi2();
          }
          while ( v22 != v21 );
        }
      }
      else
      {
        v19 = 0;
      }
      if ( *(_DWORD *)(a1 + 96) == v19 )
      {
        v28 = sub_DB10F0((__int64 *)a1, v7);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        v30 = *(_DWORD *)(a4 + 16);
        v31 = *(_DWORD *)(a4 + 20);
        if ( v30 >= v31 )
        {
          v46 = v28;
          v37 = 2 * v31;
          v38 = sub_186B270(8 * v37);
          v29 = v46;
          v32 = v38;
          v30 = *(_DWORD *)(a4 + 16);
          v39 = *(_QWORD **)(a4 + 8);
          if ( v30 )
          {
            if ( v30 - 1 <= 2 || (_QWORD *)v38 == v39 + 1 )
            {
              for ( j = 0; j != v30; ++j )
                *(_QWORD *)(v32 + j * 8) = v39[j];
            }
            else
            {
              v40 = 0;
              do
              {
                *(__m128i *)(v32 + v40 * 8) = _mm_loadu_si128((const __m128i *)&v39[v40]);
                v40 += 2;
              }
              while ( v40 != 2LL * (v30 >> 1) );
              if ( (v30 & 1) != 0 )
                *(_QWORD *)(v32 + 8LL * (v30 & 0xFFFFFFFE)) = v39[v30 & 0xFFFFFFFE];
            }
          }
          if ( v39 && v39 != (_QWORD *)(a4 + 24) )
          {
            sub_186B220(v39);
            v29 = v46;
            v30 = *(_DWORD *)(a4 + 16);
          }
          *(_QWORD *)(a4 + 8) = v32;
          *(_DWORD *)(a4 + 20) = v37;
        }
        else
        {
          v32 = *(_QWORD *)(a4 + 8);
        }
        *(_QWORD *)(v32 + 8LL * v30) = v29;
        *(_DWORD *)(a4 + 16) = v30 + 1;
      }
      else
      {
        v23 = (_QWORD *)*a3;
        if ( *a3 )
        {
          v24 = *((_DWORD *)v23 - 1);
          if ( v24 == *((_DWORD *)v23 - 2) )
          {
            v33 = (3 * v24 + 1) >> 1;
            v34 = 8 * v33 + 8;
            if ( 8 * v24 + 8 >= v34 || v24 >= v33 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v47, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v35 = (unsigned int *)sub_186B300(v23 - 1, v34);
            v36 = v35[1];
            v23 = v35 + 2;
            *v35 = v33;
            *a3 = v35 + 2;
            LODWORD(v35) = v36;
            v27 = &v23[v36];
            v26 = (_DWORD)v35 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v24 + 1;
            v27 = &v23[v25];
          }
        }
        else
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          *v41 = 2;
          v23 = v41 + 1;
          *a3 = v41 + 1;
          v27 = v41 + 1;
          v26 = 1;
        }
        *v27 = v7;
        *((_DWORD *)v23 - 1) = v26;
      }
    }
  }
}

