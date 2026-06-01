__int64 __fastcall sub_2D0A70(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int *v23; // rax
  void *v24; // rbp
  unsigned int v25; // r9d
  size_t v26; // rsi
  unsigned int *v27; // rax
  _QWORD *v28; // rax
  char **exception; // rbx
  char **v30; // r12
  unsigned int v31; // [rsp+8h] [rbp-A0h]
  unsigned int v32; // [rsp+8h] [rbp-A0h]
  unsigned int v33; // [rsp+14h] [rbp-94h]
  char v34; // [rsp+2Eh] [rbp-7Ah] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = a1[2];
  if ( *(_WORD *)(a2 + 4) || (v5 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v5 + 40) != *(_QWORD *)(v4 + 848)) )
  {
    if ( (unsigned __int8)sub_15D2CB0(v4, a2) )
    {
      v6 = (_QWORD *)a1[6];
      ++*(_DWORD *)(a2 + 8);
      if ( !v6 )
      {
        v15 = (_QWORD *)sub_186B270(0x18u);
        v6 = v15 + 1;
        *v15 = 2;
        result = 1;
        a1[6] = v6;
        v10 = v6;
        goto LABEL_7;
      }
      v7 = *((_DWORD *)v6 - 1);
      if ( v7 != *((_DWORD *)v6 - 2) )
      {
        v8 = v7;
        result = v7 + 1;
        v10 = &v6[v8];
LABEL_7:
        *v10 = a2;
        *((_DWORD *)v6 - 1) = result;
        return result;
      }
      v11 = (3 * v7 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v7 + 8 < (unsigned int)v12 && v7 < v11 )
      {
        v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
        v14 = v13[1];
        v6 = v13 + 2;
        *v13 = v11;
        a1[6] = v13 + 2;
        LODWORD(v13) = v14;
        v10 = &v6[v14];
        result = (unsigned int)((_DWORD)v13 + 1);
        goto LABEL_7;
      }
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v37, "Overflow encountered when expanding vector");
    }
    else
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v37, "literal should be either a Proof or Bool");
    }
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v37);
    sub_233E40((__int64)v37);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_180C5A0(v37, "deps");
  result = *(_QWORD *)(v5 + 16);
  if ( v37[0] == result )
  {
    v16 = *(unsigned int *)(a2 + 24);
    v35[0] = 0;
    v35[1] = 0;
    v16 *= 8;
    v34 = 0;
    v36[0] = 1;
    v17 = (_QWORD *)(a2 + 32 + v16);
    v36[1] = 0;
    if ( v16 )
    {
      v18 = (_QWORD *)(a2 + 32);
      do
      {
        if ( (unsigned __int8)sub_1666AE0(a1 + 3, *v18, v35, &v34)
          && (v36[0] & 0x100000000LL) == 0
          && LODWORD(v36[0]) == 1
          && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, v35)
          && !((unsigned __int64)sub_182D020(qword_1C7F2C0, v35) >> 32) )
        {
          v19 = sub_182D020(qword_1C7F2C0, v35);
          v20 = (_QWORD *)a1[9];
          v21 = v19;
          if ( v20 )
          {
            v22 = *((unsigned int *)v20 - 1);
            if ( (_DWORD)v22 == *((_DWORD *)v20 - 2) )
            {
              v25 = (unsigned int)(3 * v22 + 1) >> 1;
              v26 = 4 * v25 + 8;
              if ( 4 * (int)v22 + 8 >= (unsigned int)v26 || (unsigned int)v22 >= v25 )
              {
                v30 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v37, "Overflow encountered when expanding vector");
                *v30 = (char *)off_1C63128;
                sub_2333C0(v30 + 1, v37);
                sub_233E40((__int64)v37);
                __cxa_throw(v30, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v33 = (unsigned int)(3 * v22 + 1) >> 1;
              v31 = v21;
              v27 = (unsigned int *)sub_186B300(v20 - 1, v26);
              v20 = v27 + 2;
              v21 = v31;
              a1[9] = v27 + 2;
              *v27 = v33;
              v23 = &v27[v27[1] + 2];
            }
            else
            {
              v23 = (unsigned int *)v20 + v22;
            }
          }
          else
          {
            v32 = v19;
            v28 = (_QWORD *)sub_186B270(0x10u);
            *v28 = 2;
            v21 = v32;
            v20 = v28 + 1;
            a1[9] = v28 + 1;
            v23 = (unsigned int *)(v28 + 1);
          }
          *v23 = v21;
          ++*((_DWORD *)v20 - 1);
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v35);
    return sub_182CBA0(v24, v36);
  }
  else if ( !a1[7] )
  {
    ++*(_DWORD *)(a2 + 8);
    a1[7] = a2;
  }
  return result;
}

