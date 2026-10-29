_QWORD *__fastcall sub_57ADB0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  char **v4; // r13
  char **exception; // r12
  _QWORD *v6; // r14
  __int64 *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r13d
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rbp
  unsigned int v29; // edx
  _DWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int v38; // r15d
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  _QWORD *v42; // rax
  __int64 v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+10h] [rbp-88h]
  unsigned int v45; // [rsp+1Ch] [rbp-7Ch]
  __int64 v46; // [rsp+30h] [rbp-68h] BYREF
  __int64 v47; // [rsp+38h] [rbp-60h] BYREF
  __int64 v48[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = nullptr;
  sub_180C5A0(v48, "product_relation");
  if ( *(_QWORD *)(a2[1] + 16LL) == v48[0] )
  {
    v10 = nullptr;
    v11 = sub_5790D0(a2);
    v12 = v11[4];
    if ( v12 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= *(_DWORD *)(v12 - 4) )
          break;
        v14 = sub_4C4930(*(_QWORD *)(a1 + 24), *(_QWORD *)(v12 + 8LL * v13));
        v15 = v14;
        if ( v10 )
        {
          v16 = *((_DWORD *)v10 - 1);
          if ( v16 == *((_DWORD *)v10 - 2) )
          {
            v33 = (3 * v16 + 1) >> 1;
            v34 = 8 * v33 + 8;
            if ( 8 * v16 + 8 >= (unsigned int)v34 || v16 >= v33 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v48, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v48);
              sub_233E40((__int64)v48);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v45 = (3 * v16 + 1) >> 1;
            v43 = v15;
            v35 = (unsigned int *)sub_186B300(v10 - 1, v34);
            v10 = (__int64 *)(v35 + 2);
            v15 = v43;
            *v35 = v45;
            LODWORD(v35) = v35[1];
            v19 = &v10[(unsigned int)v35];
            v18 = (_DWORD)v35 + 1;
          }
          else
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = &v10[v17];
          }
        }
        else
        {
          v44 = v14;
          v42 = (_QWORD *)sub_186B270(0x18u);
          v15 = v44;
          v19 = v42 + 1;
          *v42 = 2;
          v18 = 1;
          v10 = v19;
        }
        *v19 = v15;
        ++v13;
        *((_DWORD *)v10 - 1) = v18;
        v12 = v11[4];
      }
      while ( v12 );
    }
    v20 = v11[2];
    if ( v20 )
    {
      v46 = 0;
      sub_52CD90(&v46, v11 + 2);
      v20 = v46;
      if ( a3 <= 1 )
      {
LABEL_15:
        v6 = (_QWORD *)sub_186B270(0x18u);
        if ( v10 )
        {
          v25 = *((_DWORD *)v10 - 1);
          if ( v20 )
            goto LABEL_17;
LABEL_28:
          v6[1] = 0;
          *v6 = &off_1C51628;
          v6[2] = 0;
          if ( !v25 )
          {
LABEL_35:
            sub_186B220(v10 - 1);
            return v6;
          }
LABEL_18:
          v26 = (_QWORD *)sub_186B270(0x18u);
          *v26 = 2;
          v27 = v26 + 1;
          v28 = 0;
          v29 = 1;
          v6[2] = v27;
          v30 = v27;
          while ( 1 )
          {
            v31 = v10[v28++];
            *v27 = v31;
            *(v30 - 1) = v29;
            if ( (unsigned int)v28 >= v25 )
              break;
            if ( *(v30 - 2) == v29 )
            {
              v36 = (3 * v29 + 1) >> 1;
              v37 = 8 * v36 + 8;
              v38 = v36;
              if ( 8 * v29 + 8 >= (unsigned int)v37 || v29 >= v36 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v48, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v48);
                sub_233E40((__int64)v48);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B300(v30 - 2, v37);
              v30 = v39 + 2;
              *v39 = v38;
              v40 = v39[1];
              v6[2] = v30;
              v41 = v40;
              v27 = &v30[2 * v40];
              v29 = v41 + 1;
            }
            else
            {
              v32 = v29++;
              v27 = &v30[2 * v32];
            }
          }
          if ( v20 )
            sub_186B220((void *)(v20 - 8));
          goto LABEL_35;
        }
        v25 = 0;
        if ( v20 )
        {
LABEL_17:
          v46 = v20;
          v47 = 0;
          sub_52CD90(&v47, &v46);
          v6[2] = 0;
          *v6 = &off_1C51628;
          v6[1] = v47;
          if ( !v25 )
          {
            sub_186B220((void *)(v20 - 8));
            if ( !v10 )
              return v6;
            goto LABEL_35;
          }
          goto LABEL_18;
        }
        goto LABEL_40;
      }
    }
    else if ( a3 <= 1 )
    {
      v6 = (_QWORD *)sub_186B270(0x18u);
      if ( v10 )
      {
        v25 = *((_DWORD *)v10 - 1);
        goto LABEL_28;
      }
LABEL_40:
      v6[1] = 0;
      *v6 = &off_1C51628;
      v6[2] = 0;
      return v6;
    }
    v21 = *(_QWORD *)(v20 + 8LL * *a4);
    v22 = 1;
    do
    {
      v23 = *(_QWORD *)(v20 + 8LL * a4[v22]);
      v24 = a4[v22++ - 1];
      *(_QWORD *)(v20 + 8 * v24) = v23;
    }
    while ( (unsigned int)v22 < a3 );
    *(_QWORD *)(v20 + 8LL * a4[a3 - 1]) = v21;
    goto LABEL_15;
  }
  return v6;
}

