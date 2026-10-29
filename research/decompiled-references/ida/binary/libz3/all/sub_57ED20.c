__int64 __fastcall sub_57ED20(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r13d
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // eax
  unsigned int v13; // r15d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rax
  unsigned int *v19; // rax
  __int64 (*v20)(); // r10
  _QWORD *v21; // r13
  __int64 v22; // rax
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // r12d
  __int64 v27; // r14
  __int64 (*v28)(); // r10
  __int64 v29; // r13
  unsigned int v30; // r10d
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r11
  unsigned int v34; // r10d
  _DWORD *v35; // rsi
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // r15d
  size_t v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  _DWORD *v43; // r10
  __int64 v44; // r11
  unsigned __int64 v45; // rax
  __int64 v46; // r11
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  char **v49; // r12
  char **exception; // r12
  char **v51; // r12
  __int64 v52; // [rsp+0h] [rbp-88h]
  unsigned int v53; // [rsp+8h] [rbp-80h]
  unsigned int v54; // [rsp+Ch] [rbp-7Ch]
  unsigned int v55; // [rsp+10h] [rbp-78h]
  _DWORD *v56; // [rsp+10h] [rbp-78h]
  __int64 v57[11]; // [rsp+30h] [rbp-58h] BYREF

  a1[1] = 0;
  *a1 = &off_1C51700;
  result = *(_QWORD *)(a2 + 32);
  a1[2] = 0;
  if ( result )
  {
    v3 = 0;
    while ( v3 < *(_DWORD *)(result - 4) )
    {
      v9 = sub_4C4AD0(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL), *(_QWORD *)(result + 8LL * v3));
      v10 = (_QWORD *)a1[1];
      v11 = v9;
      if ( v10 )
      {
        v12 = *((_DWORD *)v10 - 1);
        if ( v12 == *((_DWORD *)v10 - 2) )
        {
          v13 = (3 * v12 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v57, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v57);
            sub_233E40((__int64)v57);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
          v16 = v15[1];
          v10 = v15 + 2;
          *v15 = v13;
          a1[1] = v15 + 2;
          LODWORD(v15) = v16;
          v8 = &v10[v16];
          v7 = (_DWORD)v15 + 1;
        }
        else
        {
          v6 = v12;
          v7 = v12 + 1;
          v8 = &v10[v6];
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v10 = v24 + 1;
        *v24 = 2;
        v7 = 1;
        a1[1] = v10;
        v8 = v10;
      }
      *v8 = v11;
      ++v3;
      *((_DWORD *)v10 - 1) = v7;
      result = *(_QWORD *)(a2 + 32);
      if ( !result )
        return result;
    }
    v53 = 0;
    v25 = 0;
    while ( v25 < *(_DWORD *)(result - 4) )
    {
      v26 = v25 + 1;
      v54 = v25 + 1;
      v52 = 8LL * v25;
      v27 = *(_QWORD *)(a1[1] + v52);
      if ( v25 + 1 < *(_DWORD *)(result - 4) )
      {
        while ( 1 )
        {
          v28 = *(__int64 (**)())(*(_QWORD *)v27 + 24LL);
          v29 = *(_QWORD *)(a1[1] + 8LL * v26);
          if ( v28 != sub_4C9C00 )
            break;
          v20 = *(__int64 (**)())(*(_QWORD *)v29 + 24LL);
          if ( v20 != sub_4C9C00 )
            goto LABEL_17;
LABEL_31:
          if ( ++v26 >= *(_DWORD *)(result - 4) )
            goto LABEL_32;
        }
        if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v28)(v27, *(_QWORD *)(result + 8LL * v26)) )
        {
          v17 = (_QWORD *)a1[2];
          if ( v17 )
          {
            v18 = *((unsigned int *)v17 - 1);
            if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
            {
              v30 = (unsigned int)(3 * v18 + 1) >> 1;
              v31 = 8 * v30 + 8;
              if ( 8 * (int)v18 + 8 >= (unsigned int)v31 || (unsigned int)v18 >= v30 )
              {
                v51 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v57, "Overflow encountered when expanding vector");
                *v51 = (char *)off_1C63128;
                sub_2333C0(v51 + 1, v57);
                sub_233E40((__int64)v57);
                __cxa_throw(v51, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v55 = (unsigned int)(3 * v18 + 1) >> 1;
              v32 = sub_186B270(v31);
              v33 = a1[2];
              v34 = v55;
              v35 = (_DWORD *)v32;
              v17 = (_QWORD *)(v32 + 8);
              if ( v33 )
              {
                v36 = *(unsigned int *)(v33 - 4);
                *(_DWORD *)(v32 + 4) = v36;
                v37 = 0;
                v38 = 8 * v36;
                if ( v38 )
                {
                  do
                  {
                    *(_QWORD *)&v35[v37 / 4 + 2] = *(_QWORD *)(v33 + v37);
                    v37 += 8LL;
                  }
                  while ( v38 != v37 );
                }
                sub_186B220((void *)(v33 - 8));
                v34 = v55;
                v19 = (unsigned int *)&v17[v35[1]];
              }
              else
              {
                *(_DWORD *)(v32 + 4) = 0;
                v19 = (unsigned int *)(v32 + 8);
              }
              a1[2] = v17;
              *v35 = v34;
            }
            else
            {
              v19 = (unsigned int *)&v17[v18];
            }
          }
          else
          {
            v47 = (_QWORD *)sub_186B270(0x18u);
            v17 = v47 + 1;
            a1[2] = v47 + 1;
            *v47 = 2;
            v19 = (unsigned int *)(v47 + 1);
          }
          v19[1] = v26;
          *v19 = v53;
          ++*((_DWORD *)v17 - 1);
        }
        result = *(_QWORD *)(a2 + 32);
        v20 = *(__int64 (**)())(*(_QWORD *)v29 + 24LL);
        if ( v20 != sub_4C9C00 )
        {
LABEL_17:
          if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v20)(v29, *(_QWORD *)(result + v52)) )
          {
            v21 = (_QWORD *)a1[2];
            if ( v21 )
            {
              v22 = *((unsigned int *)v21 - 1);
              if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
              {
                v39 = (unsigned int)(3 * v22 + 1) >> 1;
                v40 = 8 * v39 + 8;
                if ( 8 * (int)v22 + 8 >= (unsigned int)v40 || (unsigned int)v22 >= v39 )
                {
                  v49 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v57, "Overflow encountered when expanding vector");
                  *v49 = (char *)off_1C63128;
                  sub_2333C0(v49 + 1, v57);
                  sub_233E40((__int64)v57);
                  __cxa_throw(v49, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v41 = sub_186B270(v40);
                v42 = a1[2];
                v43 = (_DWORD *)v41;
                v21 = (_QWORD *)(v41 + 8);
                if ( v42 )
                {
                  v44 = *(unsigned int *)(v42 - 4);
                  *(_DWORD *)(v41 + 4) = v44;
                  v45 = 0;
                  v46 = 8 * v44;
                  if ( v46 )
                  {
                    do
                    {
                      *(_QWORD *)&v43[v45 / 4 + 2] = *(_QWORD *)(v42 + v45);
                      v45 += 8LL;
                    }
                    while ( v45 != v46 );
                  }
                  v56 = v43;
                  sub_186B220((void *)(v42 - 8));
                  v43 = v56;
                  v23 = (unsigned int *)&v21[v56[1]];
                }
                else
                {
                  *(_DWORD *)(v41 + 4) = 0;
                  v23 = (unsigned int *)(v41 + 8);
                }
                a1[2] = v21;
                *v43 = v39;
              }
              else
              {
                v23 = (unsigned int *)&v21[v22];
              }
            }
            else
            {
              v48 = (_QWORD *)sub_186B270(0x18u);
              v21 = v48 + 1;
              a1[2] = v48 + 1;
              *v48 = 2;
              v23 = (unsigned int *)(v48 + 1);
            }
            *v23 = v26;
            v23[1] = v53;
            ++*((_DWORD *)v21 - 1);
          }
          result = *(_QWORD *)(a2 + 32);
        }
        if ( !result )
          return result;
        goto LABEL_31;
      }
LABEL_32:
      v25 = v54;
      v53 = v54;
    }
  }
  return result;
}

