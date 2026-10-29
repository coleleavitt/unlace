__int64 __fastcall sub_54E950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  char **v8; // rbp
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v15; // r9d
  __int64 v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rax
  unsigned int *v19; // rax
  _QWORD *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rsi
  __int64 *v34; // rsi
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // r10d
  size_t v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r11
  unsigned int v43; // r10d
  _DWORD *v44; // r8
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rdi
  unsigned int v48; // r8d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r14
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rsi
  __int64 *v57; // rsi
  unsigned int v58; // r8d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rsi
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v67; // [rsp+10h] [rbp-88h]
  __int64 v68; // [rsp+10h] [rbp-88h]
  __int64 v69; // [rsp+10h] [rbp-88h]
  unsigned int v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+10h] [rbp-88h]
  __int64 v72; // [rsp+10h] [rbp-88h]
  __int64 v73; // [rsp+10h] [rbp-88h]
  unsigned int v74; // [rsp+18h] [rbp-80h]
  unsigned int v75; // [rsp+20h] [rbp-78h]
  unsigned int v76; // [rsp+20h] [rbp-78h]
  unsigned int v77; // [rsp+20h] [rbp-78h]
  unsigned int v78; // [rsp+20h] [rbp-78h]
  _DWORD *v79; // [rsp+28h] [rbp-70h]
  __int64 v80[11]; // [rsp+40h] [rbp-58h] BYREF

  result = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)result )
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(a3 + 8LL * (unsigned int)v12 + 32);
        sub_54E6A0(a1, (unsigned int)v12);
        v28 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v12);
        if ( *(_WORD *)(v27 + 4) == 1 )
          break;
        v29 = sub_15E1B70(*(_QWORD *)(a1 + 16));
        v30 = v29;
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v31 = *(_QWORD **)(a5 + 8);
        if ( v31 )
        {
          v32 = *((_DWORD *)v31 - 1);
          if ( v32 == *((_DWORD *)v31 - 2) )
          {
            v35 = (3 * v32 + 1) >> 1;
            v36 = 8 * v35 + 8;
            if ( 8 * v32 + 8 >= (unsigned int)v36 || v32 >= v35 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v80, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v80);
              sub_233E40((__int64)v80);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v75 = (3 * v32 + 1) >> 1;
            v67 = v30;
            v37 = (unsigned int *)sub_186B300(v31 - 1, v36);
            v38 = v37[1];
            v31 = v37 + 2;
            *v37 = v75;
            LODWORD(v37) = v38;
            *(_QWORD *)(a5 + 8) = v31;
            v34 = &v31[v38];
            v30 = v67;
            result = (unsigned int)((_DWORD)v37 + 1);
          }
          else
          {
            v33 = v32;
            result = v32 + 1;
            v34 = &v31[v33];
          }
        }
        else
        {
          v71 = v29;
          v62 = (_QWORD *)sub_186B270(0x18u);
          v30 = v71;
          v31 = v62 + 1;
          *v62 = 2;
          v34 = v62 + 1;
          *(_QWORD *)(a5 + 8) = v62 + 1;
          result = 1;
        }
        *v34 = v30;
        ++v12;
        *((_DWORD *)v31 - 1) = result;
        if ( (unsigned int)v12 >= *(_DWORD *)(a3 + 24) )
          return result;
      }
      v15 = *(_DWORD *)(v27 + 16);
      v16 = 24LL * v15;
      if ( *(_DWORD *)(v16 + *(_QWORD *)(a2 + 8) + 16) == *(_DWORD *)(a2 + 24) )
      {
        v52 = sub_15E1B70(*(_QWORD *)(a1 + 16));
        v53 = v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        v54 = *(_QWORD **)(a5 + 8);
        if ( v54 )
        {
          v55 = *((_DWORD *)v54 - 1);
          if ( v55 == *((_DWORD *)v54 - 2) )
          {
            v58 = (3 * v55 + 1) >> 1;
            v59 = 8 * v58 + 8;
            if ( 8 * v55 + 8 >= (unsigned int)v59 || v55 >= v58 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v80, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v80);
              sub_233E40((__int64)v80);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v70 = (3 * v55 + 1) >> 1;
            v60 = (unsigned int *)sub_186B300(v54 - 1, v59);
            v61 = v60[1];
            v54 = v60 + 2;
            *v60 = v70;
            LODWORD(v60) = v61;
            *(_QWORD *)(a5 + 8) = v54;
            v57 = &v54[v61];
            result = (unsigned int)((_DWORD)v60 + 1);
          }
          else
          {
            v56 = v55;
            result = v55 + 1;
            v57 = &v54[v56];
          }
        }
        else
        {
          v65 = (_QWORD *)sub_186B270(0x18u);
          v54 = v65 + 1;
          *v65 = 2;
          v57 = v65 + 1;
          *(_QWORD *)(a5 + 8) = v65 + 1;
          result = 1;
        }
        *v57 = v53;
        *((_DWORD *)v54 - 1) = result;
      }
      else
      {
        v17 = *(_QWORD **)(a2 + 32);
        if ( v17 )
        {
          v18 = *((unsigned int *)v17 - 1);
          if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
          {
            v39 = (unsigned int)(3 * v18 + 1) >> 1;
            v40 = 8 * v39 + 8;
            if ( 8 * (int)v18 + 8 >= (unsigned int)v40 || (unsigned int)v18 >= v39 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v80, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v80);
              sub_233E40((__int64)v80);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v74 = (unsigned int)(3 * v18 + 1) >> 1;
            v76 = v15;
            v68 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v12);
            v41 = sub_186B270(v40);
            v42 = *(_QWORD *)(a2 + 32);
            v28 = v68;
            v15 = v76;
            v43 = v74;
            v44 = (_DWORD *)v41;
            v17 = (_QWORD *)(v41 + 8);
            if ( v42 )
            {
              v45 = *(unsigned int *)(v42 - 4);
              *(_DWORD *)(v41 + 4) = v45;
              v46 = 0;
              v47 = 8 * v45;
              if ( v47 )
              {
                do
                {
                  *(_QWORD *)&v44[v46 / 4 + 2] = *(_QWORD *)(v42 + v46);
                  v46 += 8LL;
                }
                while ( v47 != v46 );
              }
              v79 = v44;
              sub_186B220((void *)(v42 - 8));
              v44 = v79;
              v28 = v68;
              v15 = v76;
              v43 = v74;
              v19 = (unsigned int *)&v17[v79[1]];
            }
            else
            {
              *(_DWORD *)(v41 + 4) = 0;
              v19 = (unsigned int *)(v41 + 8);
            }
            *(_QWORD *)(a2 + 32) = v17;
            *v44 = v43;
          }
          else
          {
            v19 = (unsigned int *)&v17[v18];
          }
        }
        else
        {
          v78 = v15;
          v73 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v12);
          v64 = (_QWORD *)sub_186B270(0x18u);
          v28 = v73;
          v15 = v78;
          v17 = v64 + 1;
          *v64 = 2;
          *(_QWORD *)(a2 + 32) = v64 + 1;
          v19 = (unsigned int *)(v64 + 1);
        }
        *v19 = v15;
        v19[1] = 0;
        ++*((_DWORD *)v17 - 1);
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        v20 = *(_QWORD **)(a2 + 48);
        if ( v20 )
        {
          v21 = *((_DWORD *)v20 - 1);
          if ( v21 == *((_DWORD *)v20 - 2) )
          {
            v48 = (3 * v21 + 1) >> 1;
            v49 = 8 * v48 + 8;
            if ( 8 * v21 + 8 >= (unsigned int)v49 || v21 >= v48 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v80, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v80);
              sub_233E40((__int64)v80);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v77 = (3 * v21 + 1) >> 1;
            v69 = v28;
            v50 = (unsigned int *)sub_186B300(v20 - 1, v49);
            v28 = v69;
            v51 = v50[1];
            v20 = v50 + 2;
            *v50 = v77;
            LODWORD(v50) = v51;
            *(_QWORD *)(a2 + 48) = v20;
            v24 = &v20[v51];
            v23 = (_DWORD)v50 + 1;
          }
          else
          {
            v22 = v21;
            v23 = v21 + 1;
            v24 = &v20[v22];
          }
        }
        else
        {
          v72 = v28;
          v63 = (_QWORD *)sub_186B270(0x18u);
          v28 = v72;
          v20 = v63 + 1;
          *v63 = 2;
          v23 = 1;
          *(_QWORD *)(a2 + 48) = v20;
          v24 = v20;
        }
        v25 = *(_QWORD *)(a2 + 8);
        *v24 = v28;
        *((_DWORD *)v20 - 1) = v23;
        result = *(unsigned int *)(a2 + 24);
        v26 = v16 + v25;
        *(_QWORD *)v26 = v28;
        *(_DWORD *)(v26 + 8) = 0;
        *(_DWORD *)(v26 + 16) = result;
        *(_DWORD *)(a2 + 120) = 2;
      }
      ++v12;
    }
    while ( (unsigned int)v12 < *(_DWORD *)(a3 + 24) );
  }
  return result;
}

