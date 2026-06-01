__int64 __fastcall sub_B278D0(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  int v4; // r12d
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // r8d
  _QWORD *v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // edi
  __int64 *v20; // rcx
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // r12d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_DWORD *)(a1 + 208);
  if ( v3 )
    result = *(unsigned int *)(v3 - 4);
  else
    result = 0;
  if ( v4 != (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = sub_180C100(v6 + 8400, 24);
    v9 = *(_QWORD **)(v6 + 9456);
    v10 = v7;
    *(_QWORD *)v7 = &off_1C4C070;
    *(_QWORD *)(v7 + 8) = a1 + 208;
    *(_DWORD *)(v7 + 16) = v4;
    if ( v9 )
    {
      v11 = *((_DWORD *)v9 - 1);
      if ( v11 == *((_DWORD *)v9 - 2) )
      {
        v28 = (3 * v11 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v29 || v11 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v34, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v9 - 1, v29);
        v31 = v30[1];
        v9 = v30 + 2;
        *(_QWORD *)(v6 + 9456) = v30 + 2;
        *v30 = v28;
        LODWORD(v30) = v31;
        v13 = &v9[v31];
        result = (unsigned int)((_DWORD)v30 + 1);
      }
      else
      {
        v12 = v11;
        result = v11 + 1;
        v13 = &v9[v12];
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x18u);
      v9 = v33 + 1;
      *v33 = 2;
      result = 1;
      *(_QWORD *)(v6 + 9456) = v9;
      v13 = v9;
    }
    *v13 = v10;
    *((_DWORD *)v9 - 1) = result;
    v14 = *(_QWORD *)(a1 + 200);
    if ( v14 )
    {
      result = *(unsigned int *)(a1 + 208);
      do
      {
        if ( (unsigned int)result >= *(_DWORD *)(v14 - 4) )
          break;
        v15 = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(v15 + 8984) != qword_1C7ED30 || *(_BYTE *)(v15 + 2416) )
          break;
        v16 = *(_QWORD *)(v14 + 8 * result);
        v17 = *(_QWORD *)(v16 + 24);
        if ( v17 )
        {
          v18 = *(unsigned int *)(a1 + 128);
          v19 = *(_DWORD *)(v17 + 12);
          v20 = *(__int64 **)(a1 + 120);
          v21 = v18 - 1;
          v18 *= 16;
          v22 = (__int64 *)((char *)v20 + v18);
          v23 = 16LL * (v19 & v21);
          v24 = &v20[(unsigned __int64)v23 / 8];
          if ( v23 == v18 )
          {
LABEL_29:
            while ( v24 != v20 )
            {
              v32 = *v20;
              if ( (unsigned __int64)*v20 > 1 )
              {
                if ( *(_DWORD *)(v32 + 12) == v19 && v17 == v32 )
                {
                  v25 = v20;
                  goto LABEL_41;
                }
              }
              else if ( !v32 )
              {
                break;
              }
              v20 += 2;
            }
LABEL_43:
            BUG();
          }
          v25 = &v20[(unsigned __int64)v23 / 8];
          while ( 1 )
          {
            v26 = *v25;
            if ( (unsigned __int64)*v25 > 1 )
            {
              if ( *(_DWORD *)(v26 + 12) == v19 && v17 == v26 )
              {
LABEL_41:
                sub_B23FA0(a1, v17, v25[1]);
                goto LABEL_23;
              }
            }
            else if ( !v26 )
            {
              goto LABEL_43;
            }
            v25 += 2;
            if ( v22 == v25 )
              goto LABEL_29;
          }
        }
        v27 = *(_QWORD *)(v16 + 16);
        if ( v27 )
        {
          sub_B23E50(a1, v27);
        }
        else if ( *(_QWORD *)v16 )
        {
          sub_B26F20(a1, *(__int64 **)v16, v14, v15, v8, 0);
        }
        else
        {
          sub_B24F10(a1, *(_QWORD *)(v16 + 8));
        }
LABEL_23:
        v14 = *(_QWORD *)(a1 + 200);
        result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
        *(_DWORD *)(a1 + 208) = result;
      }
      while ( v14 );
    }
  }
  return result;
}

