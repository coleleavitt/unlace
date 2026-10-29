__int64 __fastcall sub_406C30(__int64 a1, _QWORD *a2, double a3)
{
  char **v3; // r12
  char **exception; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 result; // rax
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 *v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r15
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 *v35; // rcx
  unsigned int i; // r15d
  __int64 v37; // rsi
  unsigned int v38; // eax
  unsigned int v39; // ecx
  size_t v40; // rsi
  unsigned int *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // [rsp+10h] [rbp-98h]
  unsigned int v45; // [rsp+28h] [rbp-80h]
  unsigned int v46; // [rsp+2Ch] [rbp-7Ch]
  __int64 *v47; // [rsp+38h] [rbp-70h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+48h] [rbp-60h] BYREF
  __int64 v50[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 360) == 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 216LL);
    v7 = 0x7FFFFFFF8LL;
    if ( v6 )
      v7 = 8LL * (unsigned int)(*(_DWORD *)(v6 - 4) - 1);
    v8 = *(_QWORD *)(v6 + v7);
    v9 = *(_QWORD *)(v8 + 32);
    sub_62A000(*a2, v9);
    v10 = (_QWORD *)a2[1];
    if ( v10 )
    {
      v11 = *((_DWORD *)v10 - 1);
      if ( v11 == *((_DWORD *)v10 - 2) )
      {
        v19 = (3 * v11 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v20 || v11 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(v50, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v10 - 1, v20);
        v22 = v21[1];
        v10 = v21 + 2;
        *v21 = v19;
        a2[1] = v21 + 2;
        LODWORD(v21) = v22;
        v14 = &v10[v22];
        v13 = (_DWORD)v21 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v10[v12];
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      v10 = v42 + 1;
      *v42 = 2;
      v13 = 1;
      a2[1] = v10;
      v14 = v10;
    }
    *v14 = v9;
    v15 = v8 + 40;
    *((_DWORD *)v10 - 1) = v13;
    v49 = 0;
    sub_41DF90(&v49, v8 + 40);
    v16 = v49;
    if ( v49 && *(_DWORD *)(v49 - 4) == 1 )
    {
      v47 = nullptr;
      sub_403090(v9, &v47);
      v24 = v47;
      v25 = sub_3FCD00(*(_QWORD **)(a1 + 264), *(_DWORD *)(a1 + 272), *v47);
      v48 = 0;
      v26 = v25[1];
      sub_41EE80(&v48);
      v27 = v48;
      v45 = 0;
      v28 = *(_DWORD *)(v48 - 4);
      *(_QWORD *)(v48 + 8LL * v28) = v26;
      v29 = v28 + 1;
      *(_DWORD *)(v27 - 4) = v29;
      while ( v45 < v29 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v16 + 8LL * v45) + 32LL);
        v44 = *(_QWORD *)(v16 + 8LL * v45);
        sub_62A000(*a2, v30);
        v31 = (_QWORD *)a2[1];
        if ( v31 )
        {
          v32 = *((_DWORD *)v31 - 1);
          if ( v32 == *((_DWORD *)v31 - 2) )
          {
            v39 = (3 * v32 + 1) >> 1;
            v40 = 8 * v39 + 8;
            if ( 8 * v32 + 8 >= (unsigned int)v40 || v32 >= v39 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(v50, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v50);
              sub_233E40((__int64)v50);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v46 = (3 * v32 + 1) >> 1;
            v41 = (unsigned int *)sub_186B300(v31 - 1, v40);
            v31 = v41 + 2;
            a2[1] = v41 + 2;
            *v41 = v46;
            LODWORD(v41) = v41[1];
            v35 = &v31[(unsigned int)v41];
            v34 = (_DWORD)v41 + 1;
          }
          else
          {
            v33 = v32;
            v34 = v32 + 1;
            v35 = &v31[v33];
          }
        }
        else
        {
          v43 = (_QWORD *)sub_186B270(0x18u);
          v31 = v43 + 1;
          *v43 = 2;
          v34 = 1;
          a2[1] = v31;
          v35 = v31;
        }
        *v35 = v30;
        *((_DWORD *)v31 - 1) = v34;
        v49 = v16;
        sub_41DF90(&v49, v44 + 40);
        v47 = v24;
        v16 = v49;
        sub_403090(v30, &v47);
        v24 = v47;
        if ( v47 )
        {
          for ( i = 0; i < *((_DWORD *)v24 - 1); ++i )
          {
            v37 = sub_3FCD00(*(_QWORD **)(a1 + 264), *(_DWORD *)(a1 + 272), v24[i])[1];
            v38 = *(_DWORD *)(v27 - 4);
            if ( v38 == *(_DWORD *)(v27 - 8) )
            {
              v48 = v27;
              sub_41EE80(&v48);
              v27 = v48;
              v38 = *(_DWORD *)(v48 - 4);
            }
            *(_QWORD *)(v27 + 8LL * v38) = v37;
            *(_DWORD *)(v27 - 4) = v38 + 1;
          }
        }
        ++v45;
        v29 = *(_DWORD *)(v27 - 4);
      }
      v49 = v16;
      sub_41D1C0(&v49);
      result = sub_186B220((void *)(v27 - 8));
      if ( v24 )
        return sub_186B220(v24 - 1);
    }
    else
    {
      if ( (unsigned int)sub_180B130(&v49) )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v17 = sub_180B150(&v49, v15);
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v17, "Warning: counterexample is trivial or non-existent\n");
        }
        else
        {
          sub_180B150(&v49, v15);
          std::operator<<<std::char_traits<char>>();
        }
      }
      return sub_41D1C0(&v49);
    }
  }
  else
  {
    result = sub_180B130(a1);
    if ( (_DWORD)result )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v23 = sub_180B150(a1, a2);
        std::operator<<<std::char_traits<char>>();
        return sub_186A500(v23, "Trace unavailable when result is false\n");
      }
      else
      {
        sub_180B150(a1, a2);
        return std::operator<<<std::char_traits<char>>();
      }
    }
  }
  return result;
}

