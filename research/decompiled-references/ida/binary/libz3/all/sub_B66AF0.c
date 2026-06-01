__int64 __fastcall sub_B66AF0(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  char **exception; // r15
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 *v6; // r14
  unsigned int v7; // eax
  __int64 *v8; // rbx
  unsigned int *v9; // r13
  unsigned int *v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 *v25; // rbp
  unsigned __int64 v26; // r14
  __int64 v27; // rsi
  bool v28; // zf
  _QWORD *v29; // rax
  int v30; // [rsp-4h] [rbp-78h]
  __int64 v31; // [rsp+4h] [rbp-70h]
  __int64 v32; // [rsp+4h] [rbp-70h]
  __int64 *v33; // [rsp+Ch] [rbp-68h]
  __int64 v34[11]; // [rsp+1Ch] [rbp-58h] BYREF

  result = a1[14];
  if ( *(_BYTE *)(result + 698) )
  {
    v6 = (__int64 *)a1[13];
    v31 = (__int64)v6;
    v33 = v6;
    if ( (_DWORD)a2 )
    {
      v7 = *a3;
      v8 = nullptr;
      v9 = a3;
      v10 = &a3[(unsigned int)a2];
      if ( dword_1C7ED6C != *a3 )
        goto LABEL_4;
      v11 = v6[107];
      if ( v11 )
        goto LABEL_7;
      while ( 2 )
      {
        v29 = (_QWORD *)sub_186B270(0x18u);
        *v29 = 2;
        v14 = v29 + 1;
        a2 = 1;
        v8 = v14;
LABEL_11:
        ++v9;
        *v14 = v11;
        *((_DWORD *)v8 - 1) = a2;
        if ( v10 != v9 )
        {
          while ( 1 )
          {
            v7 = *v9;
            v6 = (__int64 *)a1[13];
            if ( *v9 != dword_1C7ED6C )
              break;
            v11 = v6[107];
            if ( v11 )
              goto LABEL_7;
            v12 = *((_DWORD *)v8 - 1);
            if ( v12 != *((_DWORD *)v8 - 2) )
            {
LABEL_10:
              v13 = v12;
              a2 = v12 + 1;
              v14 = &v8[v13];
              goto LABEL_11;
            }
LABEL_15:
            v15 = (3 * v12 + 1) >> 1;
            v16 = 8 * v15 + 8;
            if ( 8 * v12 + 8 >= v16 || v12 >= v15 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_14E142(v34, "Overflow encountered when expanding vector", v4);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v34);
              sub_233E40((__int64)v34);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
            v8 = (__int64 *)(v17 + 2);
            ++v9;
            *v17 = (3 * v12 + 1) >> 1;
            v18 = v17[1];
            a2 = (unsigned int)(v18 + 1);
            v8[v18] = v11;
            *((_DWORD *)v8 - 1) = a2;
            if ( v10 == v9 )
              goto LABEL_18;
          }
LABEL_4:
          if ( dword_1C7ED68 == v7 )
          {
            v11 = v6[108];
            if ( !v11 )
            {
              if ( !v8 )
                continue;
LABEL_9:
              v12 = *((_DWORD *)v8 - 1);
              if ( v12 != *((_DWORD *)v8 - 2) )
                goto LABEL_10;
              goto LABEL_15;
            }
          }
          else
          {
            v11 = *(_QWORD *)(a1[1105] + 8LL * (v7 >> 1));
            if ( (v7 & 1) != 0 )
            {
              v11 = sub_15E1A70((int)v6);
              if ( !v11 )
              {
LABEL_8:
                if ( !v8 )
                  continue;
                goto LABEL_9;
              }
            }
            else if ( !v11 )
            {
              goto LABEL_8;
            }
          }
LABEL_7:
          ++*(_DWORD *)(v11 + 8);
          goto LABEL_8;
        }
        break;
      }
    }
    else
    {
      v8 = nullptr;
    }
LABEL_18:
    v19 = sub_15EC240(v31, a2);
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    sub_168ACC0(a1 + 1200, v19);
    sub_168B080((_DWORD)a1 + 9600, (int)&std::cout, v21, v22, v23, v24, v30, v31, v33);
    result = sub_168B790(a1 + 1200, &std::cout, v20, 0);
    if ( v8 )
    {
      v25 = v8;
      v26 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 < v26 )
      {
        do
        {
          while ( 1 )
          {
            v27 = *v25;
            if ( *v25 )
            {
              v28 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v28 )
                break;
            }
            if ( (unsigned __int64)++v25 >= v26 )
              goto LABEL_27;
          }
          ++v25;
          sub_15D7BC0(v32, v27);
        }
        while ( (unsigned __int64)v25 < v26 );
      }
LABEL_27:
      result = sub_186B220(v8 - 1);
    }
    if ( v20 )
    {
      v28 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( v28 )
        return sub_15D7BC0(v32, v20);
    }
  }
  return result;
}

