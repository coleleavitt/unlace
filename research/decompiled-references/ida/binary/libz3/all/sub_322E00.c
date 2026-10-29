void __fastcall sub_322E00(__int64 a1, char a2, int a3, unsigned int a4, __int64 **a5, int a6, __int64 a7)
{
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 *v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // ecx
  __int64 *v19; // rax
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 *v25; // rbx
  unsigned int v26; // r12d
  __int64 *v27; // r14
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rbx
  _DWORD *v32; // rdx
  __int64 *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  __int64 *v37; // rsi
  __int64 v38; // rax
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rsi
  int v42; // eax
  __int64 *v43; // rsi
  unsigned int v44; // r9d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  _DWORD *v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // r15d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rbp
  __int64 v59; // rbx
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // r11d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rsi
  _QWORD *v67; // rdx
  char **exception; // rbp
  unsigned int v70; // [rsp+10h] [rbp-78h]
  __int64 v71; // [rsp+10h] [rbp-78h]
  unsigned int v72; // [rsp+10h] [rbp-78h]
  int v73; // [rsp+18h] [rbp-70h]
  int v74; // [rsp+18h] [rbp-70h]
  unsigned int v75; // [rsp+1Ch] [rbp-6Ch]
  __int64 v76[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a3 )
  {
    v9 = a4;
    v10 = a6 + 1 - a3;
    if ( a4 < v10 )
    {
      v11 = (__int64 *)(a7 + 8LL * a4);
      if ( !a2 )
      {
        v12 = *a5;
        v73 = a3 - 1;
        while ( 1 )
        {
          v13 = *v11;
          v14 = v12;
          if ( v12 )
          {
            v15 = *((_DWORD *)v12 - 1);
            v16 = *((_DWORD *)v12 - 2);
            if ( v16 == v15 )
            {
              v20 = (3 * v16 + 1) >> 1;
              v21 = 8 * v20 + 8;
              if ( 8 * v16 + 8 >= (unsigned int)v21 )
                goto LABEL_59;
              v70 = (3 * v16 + 1) >> 1;
              if ( v16 >= v20 )
                goto LABEL_59;
              v22 = (unsigned int *)sub_186B300(v14 - 1, v21);
              v14 = (__int64 *)(v22 + 2);
              *v22 = v70;
              v23 = v22[1];
              *a5 = v14;
              v24 = v23;
              v19 = &v14[v23];
              v18 = v24 + 1;
            }
            else
            {
              v17 = v15;
              v18 = v15 + 1;
              v19 = &v14[v17];
            }
          }
          else
          {
            v61 = (_QWORD *)sub_186B270(0x18u);
            v18 = 1;
            v14 = v61 + 1;
            *v61 = 2;
            *a5 = v61 + 1;
            v19 = v61 + 1;
          }
          *v19 = v13;
          ++v9;
          *((_DWORD *)v14 - 1) = v18;
          ++v11;
          sub_322E00(a1, 0, v73, v9, (_DWORD)a5, a6, a7);
          v12 = *a5;
          --*((_DWORD *)*a5 - 1);
          if ( v9 == v10 )
            return;
        }
      }
      v74 = a3 - 1;
      do
      {
        v29 = *v11;
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v31 = *(_QWORD *)(v30 + 864);
        if ( *(_QWORD *)(v30 + 856) != *v11 )
        {
          if ( v31 == v29 )
          {
            v31 = *(_QWORD *)(v30 + 856);
          }
          else if ( !*(_WORD *)(v29 + 4)
                 && (v32 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL)) != nullptr
                 && !*v32
                 && v32[1] == 8
                 && *(_DWORD *)(v29 + 24) == 1 )
          {
            v31 = *(_QWORD *)(v29 + 32);
          }
          else
          {
            v71 = *(_QWORD *)(a1 + 8);
            v38 = sub_15E1A70(v30);
            v31 = v38;
            if ( v38 )
              ++*(_DWORD *)(v38 + 8);
            v39 = *(_QWORD **)(v71 + 200);
            if ( v39 )
            {
              v40 = *((_DWORD *)v39 - 1);
              if ( v40 == *((_DWORD *)v39 - 2) )
              {
                v63 = (3 * v40 + 1) >> 1;
                v64 = 8 * v63 + 8;
                if ( 8 * v40 + 8 >= (unsigned int)v64 || v40 >= v63 )
                  goto LABEL_59;
                v75 = (3 * v40 + 1) >> 1;
                v65 = (unsigned int *)sub_186B300(v39 - 1, v64);
                v66 = v65[1];
                v39 = v65 + 2;
                *(_QWORD *)(v71 + 200) = v65 + 2;
                *v65 = v75;
                LODWORD(v65) = v66;
                v43 = &v39[v66];
                v42 = (_DWORD)v65 + 1;
              }
              else
              {
                v41 = v40;
                v42 = v40 + 1;
                v43 = &v39[v41];
              }
            }
            else
            {
              v67 = (_QWORD *)sub_186B270(0x18u);
              *v67 = 2;
              v42 = 1;
              v39 = v67 + 1;
              *(_QWORD *)(v71 + 200) = v39;
              v43 = v39;
            }
            *v43 = v31;
            *((_DWORD *)v39 - 1) = v42;
          }
        }
        v33 = *a5;
        if ( *a5 )
        {
          v34 = *((_DWORD *)v33 - 1);
          if ( v34 == *((_DWORD *)v33 - 2) )
          {
            v44 = (3 * v34 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * v34 + 8 >= (unsigned int)v45 || v34 >= v44 )
              goto LABEL_59;
            v72 = (3 * v34 + 1) >> 1;
            v46 = (unsigned int *)sub_186B300(v33 - 1, v45);
            v47 = v46[1];
            v33 = (__int64 *)(v46 + 2);
            *v46 = v72;
            LODWORD(v46) = v47;
            *a5 = v33;
            v37 = &v33[v47];
            v36 = (_DWORD)v46 + 1;
          }
          else
          {
            v35 = v34;
            v36 = v34 + 1;
            v37 = &v33[v35];
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x18u);
          v33 = v62 + 1;
          *v62 = 2;
          v36 = 1;
          *a5 = v33;
          v37 = v33;
        }
        *v37 = v31;
        ++v9;
        *((_DWORD *)v33 - 1) = v36;
        ++v11;
        sub_322E00(a1, 1, v74, v9, (_DWORD)a5, a6, a7);
        --*((_DWORD *)*a5 - 1);
      }
      while ( v9 != v10 );
    }
  }
  else
  {
    v25 = *a5;
    if ( *a5 && (v26 = *((_DWORD *)v25 - 1)) != 0 )
    {
      v27 = &v25[v26];
      v28 = *a5;
      while ( *v28 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 856LL) )
      {
        if ( v27 == ++v28 )
        {
          ++*(_DWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 28) += v26;
          v48 = (_QWORD *)sub_186B270(0x18u);
          v49 = v48 + 1;
          *v48 = 2;
          v50 = 1;
          v51 = v49;
          while ( 1 )
          {
            v52 = *v25++;
            *v49 = v52;
            *(v51 - 1) = v50;
            if ( v27 == v25 )
              break;
            if ( *(v51 - 2) == v50 )
            {
              v54 = (3 * v50 + 1) >> 1;
              v55 = 8 * v54 + 8;
              if ( 8 * v50 + 8 >= (unsigned int)v55 || v50 >= v54 )
              {
LABEL_59:
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v76, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v76);
                sub_233E40((__int64)v76);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v56 = (unsigned int *)sub_186B300(v51 - 2, v55);
              v57 = v56[1];
              v51 = v56 + 2;
              *v56 = v54;
              LODWORD(v56) = v57;
              v49 = &v51[2 * v57];
              v50 = (_DWORD)v56 + 1;
            }
            else
            {
              v53 = v50++;
              v49 = &v51[2 * v53];
            }
          }
          goto LABEL_50;
        }
      }
    }
    else
    {
      v26 = 0;
      v51 = nullptr;
      ++*(_DWORD *)(a1 + 24);
LABEL_50:
      v58 = *(_QWORD *)(a1 + 8);
      v59 = sub_2FF8B0(v58);
      v60 = sub_15EC240(*(_QWORD *)(v58 + 8), v26);
      sub_E5EBF0(v59, v60);
      if ( v51 )
        sub_186B220(v51 - 2);
    }
  }
}

