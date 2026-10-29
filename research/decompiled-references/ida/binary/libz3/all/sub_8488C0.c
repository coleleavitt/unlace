__int64 __fastcall sub_8488C0(__int64 a1, void *a2)
{
  char **exception; // rbx
  __int64 result; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  void **v9; // rdx
  _QWORD *v10; // r14
  __int64 (__fastcall *v11)(_QWORD *); // rax
  __int64 *v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 *v17; // rbx
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rdi
  void *v28; // rdi
  unsigned int v29; // r15d
  unsigned int v30; // r13d
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // r14d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39[11]; // [rsp+10h] [rbp-58h] BYREF

  result = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (__int64 (*)())result == sub_6F1010 )
  {
    v6 = *(_QWORD **)(a1 + 208);
    v7 = 0xFFFFFFFFLL;
    if ( !v6 )
      goto LABEL_5;
  }
  else
  {
    result = ((__int64 (__fastcall *)(void *))result)(a2);
    v6 = *(_QWORD **)(a1 + 208);
    v8 = (unsigned int)result;
    v29 = result + 1;
    if ( v6 )
    {
      v30 = *((_DWORD *)v6 - 1);
      if ( v29 >= v30 && v30 < v29 )
      {
        do
        {
          v33 = *((_DWORD *)v6 - 1);
          if ( v33 == *((_DWORD *)v6 - 2) )
          {
            v34 = (3 * v33 + 1) >> 1;
            v35 = 8 * v34 + 8;
            if ( 8 * v33 + 8 >= (unsigned int)v35 || v33 >= v34 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v39, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v39);
              sub_233E40((__int64)v39);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v36 = (unsigned int *)sub_186B300(v6 - 1, v35);
            v37 = v36[1];
            v6 = v36 + 2;
            *v36 = v34;
            *(_QWORD *)(a1 + 208) = v36 + 2;
            LODWORD(v36) = v37;
            v32 = &v6[v37];
            result = (unsigned int)((_DWORD)v36 + 1);
          }
          else
          {
            v31 = v33;
            result = v33 + 1;
            v32 = &v6[v31];
          }
LABEL_52:
          ++v30;
          *v32 = 0;
          *((_DWORD *)v6 - 1) = result;
        }
        while ( v29 != v30 );
      }
      goto LABEL_4;
    }
    if ( (_DWORD)result != -1 )
    {
      v30 = 0;
      v38 = (_QWORD *)sub_186B270(0x18u);
      v6 = v38 + 1;
      *v38 = 2;
      result = 1;
      *(_QWORD *)(a1 + 208) = v6;
      v32 = v6;
      goto LABEL_52;
    }
  }
  v8 = 0xFFFFFFFFLL;
LABEL_4:
  v7 = v8;
LABEL_5:
  v9 = (void **)&v6[v7];
  v10 = *v9;
  if ( a2 != *v9 )
  {
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(_QWORD *))*v10;
      if ( v11 == sub_6F1480 )
      {
        v12 = (__int64 *)v10[17];
        *v10 = &off_1C53478;
        if ( v12 )
        {
          v13 = &v12[*((unsigned int *)v12 - 1)];
          if ( v12 >= v13 )
            goto LABEL_16;
          do
          {
            while ( 1 )
            {
              v14 = *v12;
              if ( *v12 )
              {
                v15 = v10[16];
                v16 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v12 >= v13 )
                goto LABEL_15;
            }
            sub_15D7BC0(v15, v14);
            ++v12;
          }
          while ( v12 < v13 );
LABEL_15:
          v12 = (__int64 *)v10[17];
          if ( v12 )
LABEL_16:
            sub_186B220(v12 - 1);
        }
        v17 = (__int64 *)v10[15];
        if ( v17 )
        {
          v18 = &v17[*((unsigned int *)v17 - 1)];
          if ( v17 >= v18 )
            goto LABEL_25;
          do
          {
            while ( 1 )
            {
              v19 = *v17;
              if ( *v17 )
              {
                v20 = v10[14];
                v16 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v17 >= v18 )
                goto LABEL_24;
            }
            sub_15D7BC0(v20, v19);
            ++v17;
          }
          while ( v17 < v18 );
LABEL_24:
          v17 = (__int64 *)v10[15];
          if ( v17 )
LABEL_25:
            sub_186B220(v17 - 1);
        }
        v21 = (__int64 *)v10[13];
        if ( v21 )
        {
          v22 = &v21[*((unsigned int *)v21 - 1)];
          if ( v21 >= v22 )
            goto LABEL_34;
          do
          {
            while ( 1 )
            {
              v23 = *v21;
              if ( *v21 )
              {
                v24 = v10[12];
                v16 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v21 >= v22 )
                goto LABEL_33;
            }
            sub_15D7BC0(v24, v23);
            ++v21;
          }
          while ( v21 < v22 );
LABEL_33:
          v21 = (__int64 *)v10[13];
          if ( v21 )
LABEL_34:
            sub_186B220(v21 - 1);
        }
        v25 = (void *)v10[11];
        if ( v25 )
          sub_186B220(v25);
        v26 = (void *)v10[8];
        if ( v26 )
          sub_186B220(v26);
        v27 = v10[5];
        if ( v27 )
          sub_186B220((void *)(v27 - 8));
        v28 = (void *)v10[4];
        if ( v28 )
          sub_186B220(v28);
      }
      else
      {
        v11(v10);
      }
      result = sub_186B220(v10);
      v9 = (void **)(v7 * 8 + *(_QWORD *)(a1 + 208));
    }
    *v9 = a2;
  }
  return result;
}

