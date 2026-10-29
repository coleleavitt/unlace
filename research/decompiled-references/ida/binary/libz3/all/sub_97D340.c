void __fastcall sub_97D340(__int64 a1, _QWORD *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  _QWORD *v9; // rax
  int v10; // eax
  _BYTE *v11; // rsi
  unsigned int v12; // eax
  char *v13; // rbp
  __int64 v14; // r15
  char *v15; // r13
  char *v16; // r12
  unsigned __int64 v17; // rdx
  char *v18; // r15
  int v19; // r8d
  int v20; // edx
  char *v21; // rax
  char *v22; // rsi
  int v23; // ecx
  int v24; // edx
  char *v25; // rax
  char *v26; // rsi
  __int64 v27; // rcx
  unsigned int v28; // r12d
  unsigned int v29; // ebp
  __int64 v30; // rax
  _DWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rsi
  int v34; // eax
  _BYTE *v35; // rsi
  unsigned int v36; // r12d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rsi
  unsigned int v40; // r13d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rsi
  int v44; // r15d
  int v45; // edx
  char *v46; // rax
  char *v47; // rsi
  char *v48; // rsi
  unsigned int v49; // eax
  __int64 v50; // rsi
  int v51; // eax
  _BYTE *v52; // rsi
  _QWORD *v53; // rax
  unsigned int v54; // r13d
  unsigned int *v55; // rax
  __int64 v56; // rsi
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  int v59; // [rsp+Ch] [rbp-6Ch]
  __int64 v60[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (_BYTE *)*a2;
  if ( *a2 )
    *((_DWORD *)v6 - 1) = 0;
  if ( *(_BYTE *)(a1 + 848) )
  {
    v13 = *(char **)(a1 + 760);
    if ( v13 )
    {
      v14 = 4LL * *((unsigned int *)v13 - 1);
      v15 = &v13[v14];
      if ( v13 != &v13[v14] )
      {
        v16 = v13 + 4;
        _BitScanReverse64(&v17, v14 >> 2);
        sub_97BC10(*(__m128i **)(a1 + 760), &v13[v14], 2LL * (int)v17);
        if ( (unsigned __int64)v14 <= 0x40 )
        {
          if ( v14 != 4 )
          {
            do
            {
              v44 = *(_DWORD *)v16;
              if ( *(_DWORD *)v16 < *(_DWORD *)v13 )
              {
                if ( v16 - v13 <= 4 )
                {
                  if ( v16 - v13 == 4 )
                    *(_DWORD *)v16 = *(_DWORD *)v13;
                }
                else
                {
                  memmove(v13 + 4, v13, v16 - v13);
                }
                *(_DWORD *)v13 = v44;
              }
              else
              {
                v45 = *((_DWORD *)v16 - 1);
                v46 = v16 - 4;
                if ( v44 >= v45 )
                {
                  v47 = v16;
                }
                else
                {
                  do
                  {
                    *((_DWORD *)v46 + 1) = v45;
                    v47 = v46;
                    v45 = *((_DWORD *)v46 - 1);
                    v46 -= 4;
                  }
                  while ( v44 < v45 );
                }
                *(_DWORD *)v47 = v44;
              }
              v16 += 4;
            }
            while ( v15 != v16 );
          }
        }
        else
        {
          v18 = v13 + 64;
          do
          {
            while ( 1 )
            {
              v19 = *(_DWORD *)v16;
              if ( *(_DWORD *)v16 < *(_DWORD *)v13 )
                break;
              v20 = *((_DWORD *)v16 - 1);
              v21 = v16 - 4;
              if ( v20 <= v19 )
              {
                v22 = v16;
              }
              else
              {
                do
                {
                  *((_DWORD *)v21 + 1) = v20;
                  v22 = v21;
                  v20 = *((_DWORD *)v21 - 1);
                  v21 -= 4;
                }
                while ( v19 < v20 );
              }
              v16 += 4;
              *(_DWORD *)v22 = v19;
              if ( v18 == v16 )
                goto LABEL_24;
            }
            if ( v16 - v13 <= 4 )
            {
              if ( v16 - v13 == 4 )
                *(_DWORD *)v16 = *(_DWORD *)v13;
            }
            else
            {
              v59 = *(_DWORD *)v16;
              memmove(v13 + 4, v13, v16 - v13);
              v19 = v59;
            }
            v16 += 4;
            *(_DWORD *)v13 = v19;
          }
          while ( v18 != v16 );
          do
          {
LABEL_24:
            while ( 1 )
            {
              v23 = *(_DWORD *)v18;
              v24 = *((_DWORD *)v18 - 1);
              v25 = v18 - 4;
              if ( *(_DWORD *)v18 < v24 )
                break;
              v48 = v18;
              v18 += 4;
              *(_DWORD *)v48 = v23;
              if ( v15 == v18 )
                goto LABEL_27;
            }
            do
            {
              *((_DWORD *)v25 + 1) = v24;
              v26 = v25;
              v24 = *((_DWORD *)v25 - 1);
              v25 -= 4;
            }
            while ( v23 < v24 );
            v18 += 4;
            *(_DWORD *)v26 = v23;
          }
          while ( v15 != v18 );
        }
      }
    }
LABEL_27:
    v27 = *(_QWORD *)(a1 + 672);
    if ( v27 )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        if ( v29 >= *(_DWORD *)(v27 - 4) )
          break;
        v30 = *(_QWORD *)(a1 + 760);
        v31 = (_DWORD *)*a2;
        if ( v30 && v28 < *(_DWORD *)(v30 - 4) && *(_DWORD *)(v30 + 4LL * v28) == v29 )
        {
          if ( v31 )
          {
            v49 = *(v31 - 1);
            if ( v49 == *(v31 - 2) )
            {
              v54 = (3 * v49 + 1) >> 1;
              if ( v49 + 8 >= v54 + 8 || v49 >= v54 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v60, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v60);
                sub_233E40((__int64)v60);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v55 = (unsigned int *)sub_186B300(v31 - 2, v54 + 8);
              v27 = *(_QWORD *)(a1 + 672);
              v56 = v55[1];
              v31 = v55 + 2;
              *v55 = v54;
              *a2 = v55 + 2;
              LODWORD(v55) = v56;
              v52 = (char *)v31 + v56;
              v51 = (_DWORD)v55 + 1;
            }
            else
            {
              v50 = v49;
              v51 = v49 + 1;
              v52 = (char *)v31 + v50;
            }
          }
          else
          {
            v57 = (_QWORD *)sub_186B270(0xAu);
            v27 = *(_QWORD *)(a1 + 672);
            v58 = v57;
            *v57 = 2;
            v51 = 1;
            v31 = v58 + 1;
            *a2 = v31;
            v52 = v31;
          }
          *v52 = 0;
          ++v28;
          *(v31 - 1) = v51;
        }
        else
        {
          if ( v31 )
          {
            v32 = *(v31 - 1);
            if ( v32 == *(v31 - 2) )
            {
              v40 = (3 * v32 + 1) >> 1;
              v41 = v40 + 8;
              if ( v32 + 8 >= (unsigned int)v41 || v32 >= v40 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v60, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v60);
                sub_233E40((__int64)v60);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v42 = (unsigned int *)sub_186B300(v31 - 2, v41);
              v27 = *(_QWORD *)(a1 + 672);
              v43 = v42[1];
              v31 = v42 + 2;
              *v42 = v40;
              *a2 = v42 + 2;
              LODWORD(v42) = v43;
              v35 = (char *)v31 + v43;
              v34 = (_DWORD)v42 + 1;
            }
            else
            {
              v33 = v32;
              v34 = v32 + 1;
              v35 = (char *)v31 + v33;
            }
          }
          else
          {
            v53 = (_QWORD *)sub_186B270(0xAu);
            v27 = *(_QWORD *)(a1 + 672);
            v31 = v53 + 1;
            *v53 = 2;
            v34 = 1;
            *a2 = v31;
            v35 = v31;
          }
          *v35 = 1;
          *(v31 - 1) = v34;
        }
        ++v29;
      }
      while ( v27 );
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 672);
    if ( v7 && *(_DWORD *)(v7 - 4) )
    {
      if ( v6 )
      {
        v8 = 0;
        goto LABEL_10;
      }
      v8 = 0;
      v9 = (_QWORD *)sub_186B270(0xAu);
      v7 = *(_QWORD *)(a1 + 672);
      v6 = v9 + 1;
      *v9 = 2;
      v10 = 1;
      *a2 = v6;
      v11 = v6;
LABEL_8:
      *v11 = 0;
      ++v8;
      *((_DWORD *)v6 - 1) = v10;
      if ( v7 )
      {
        while ( v8 < *(_DWORD *)(v7 - 4) )
        {
LABEL_10:
          v12 = *((_DWORD *)v6 - 1);
          if ( v12 == *((_DWORD *)v6 - 2) )
          {
            v36 = (3 * v12 + 1) >> 1;
            v37 = v36 + 8;
            if ( v12 + 8 >= (unsigned int)v37 || v12 >= v36 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v60, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v60);
              sub_233E40((__int64)v60);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = (unsigned int *)sub_186B300(v6 - 8, v37);
            v7 = *(_QWORD *)(a1 + 672);
            v39 = v38[1];
            v6 = v38 + 2;
            *v38 = v36;
            *a2 = v38 + 2;
            LODWORD(v38) = v39;
            v11 = &v6[v39];
            v10 = (_DWORD)v38 + 1;
            goto LABEL_8;
          }
          ++v8;
          v6[v12] = 0;
          *((_DWORD *)v6 - 1) = v12 + 1;
        }
      }
    }
  }
}

