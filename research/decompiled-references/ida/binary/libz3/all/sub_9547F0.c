__int64 __fastcall sub_9547F0(__int64 a1, __int64 *a2, void **a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  __int64 v7; // r8
  __int64 **v8; // r14
  int v9; // ecx
  int v10; // r11d
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 **v13; // rsi
  __int64 **v14; // rax
  __int64 *v15; // rdx
  unsigned int v16; // ebp
  __int64 **v17; // rax
  __int64 **v18; // r8
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 result; // rax
  __int64 *v22; // rdx
  __int64 *v23; // r15
  size_t v24; // r12
  __int64 **v25; // rax
  unsigned int v26; // eax
  char *v27; // r11
  void **v28; // rdi
  char *v29; // rbx
  __int64 v30; // rdx
  __int64 **v31; // rsi
  __int64 **v32; // rdx
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 *v37; // r14
  __int64 *v38; // rbp
  __int64 *v39; // r15
  __int64 v40; // rsi
  __int64 v41; // [rsp+8h] [rbp-70h]

  v41 = a2[1];
  if ( a2 == (__int64 *)v41 )
    goto LABEL_31;
  v5 = a2;
  do
  {
    v7 = *((unsigned int *)a3 + 2);
    v8 = (__int64 **)*a3;
    v9 = *(_DWORD *)(*v5 + 12);
    v10 = *((_DWORD *)a3 + 2);
    v11 = (__int64)*a3 + 8 * v7;
    v12 = 8LL * (v9 & (unsigned int)(v7 - 1));
    v13 = (__int64 **)((char *)*a3 + v12);
    if ( 8 * v7 == v12 )
    {
LABEL_33:
      if ( v8 != v13 )
      {
        v14 = (__int64 **)*a3;
        while ( 1 )
        {
          v22 = *v14;
          if ( (unsigned __int64)*v14 > 1 )
          {
            if ( *(_DWORD *)(*v22 + 12) == v9 && v22 == v5 )
              goto LABEL_26;
          }
          else if ( !v22 )
          {
            goto LABEL_10;
          }
          if ( v13 == ++v14 )
            goto LABEL_10;
        }
      }
      goto LABEL_10;
    }
    v14 = (__int64 **)((char *)*a3 + v12);
    while ( 1 )
    {
      v15 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
        break;
      if ( !v15 )
        goto LABEL_10;
LABEL_7:
      if ( (__int64 **)v11 == ++v14 )
        goto LABEL_33;
    }
    if ( *(_DWORD *)(*v15 + 12) != v9 || v15 != v5 )
      goto LABEL_7;
LABEL_26:
    if ( (__int64 **)v11 != v14 )
    {
      while ( (unsigned __int64)*v14 <= 1 )
      {
        if ( (__int64 **)v11 == ++v14 )
          goto LABEL_10;
      }
      if ( v14 != (__int64 **)v11 )
      {
LABEL_31:
        result = v41;
        if ( !*(_BYTE *)(v41 + 52) )
          goto LABEL_47;
        return result;
      }
    }
LABEL_10:
    v16 = 2 * v10;
    if ( 3 * v10 < (unsigned int)(4 * (*((_DWORD *)a3 + 3) + *((_DWORD *)a3 + 4))) )
    {
      v24 = 8LL * v16;
      v25 = (__int64 **)sub_186B270(v24);
      v8 = v25;
      if ( v16 )
        memset(v25, 0, 8LL * v16);
      v26 = v16 - 1;
      v11 = (__int64)&v8[v24 / 8];
      v27 = (char *)*a3 + 8 * *((unsigned int *)a3 + 2);
      if ( *a3 != v27 )
      {
        v28 = a3;
        v29 = (char *)*a3;
        do
        {
          while ( *(_QWORD *)v29 <= 1u )
          {
            v29 += 8;
            if ( v27 == v29 )
              goto LABEL_59;
          }
          v30 = 8LL * (*(_DWORD *)(**(_QWORD **)v29 + 12LL) & v26);
          v31 = &v8[(unsigned __int64)v30 / 8];
          if ( v24 == v30 )
          {
LABEL_64:
            if ( v8 == v31 )
            {
LABEL_73:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v32 = v8;
            while ( *v32 )
            {
              if ( v31 == ++v32 )
                goto LABEL_73;
            }
          }
          else
          {
            v32 = &v8[(unsigned __int64)v30 / 8];
            while ( *v32 )
            {
              if ( (__int64 **)v11 == ++v32 )
                goto LABEL_64;
            }
          }
          v33 = *(__int64 **)v29;
          v29 += 8;
          *v32 = v33;
        }
        while ( v27 != v29 );
LABEL_59:
        v27 = (char *)*v28;
        a3 = v28;
      }
      if ( v27 )
      {
        sub_186B220(v27);
        v26 = v16 - 1;
      }
      v34 = *v5;
      *a3 = v8;
      *((_DWORD *)a3 + 2) = v16;
      v9 = *(_DWORD *)(v34 + 12);
      *((_DWORD *)a3 + 4) = 0;
      v35 = 8LL * (v9 & v26);
      v13 = &v8[(unsigned __int64)v35 / 8];
      if ( v35 != v24 )
      {
LABEL_12:
        v17 = v13;
        v18 = nullptr;
        while ( 1 )
        {
          v19 = *v17;
          if ( (unsigned __int64)*v17 > 1 )
          {
            if ( *(_DWORD *)(*v19 + 12) == v9 && v19 == v5 )
            {
              *v17 = v5;
              goto LABEL_42;
            }
          }
          else
          {
            if ( !v19 )
            {
              if ( v18 )
                goto LABEL_71;
              v18 = v17;
              goto LABEL_72;
            }
            v18 = v17;
          }
          if ( ++v17 == (__int64 **)v11 )
            goto LABEL_22;
        }
      }
    }
    else if ( v12 != 8 * v7 )
    {
      goto LABEL_12;
    }
    v18 = nullptr;
LABEL_22:
    while ( 2 )
    {
      if ( v8 == v13 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v20 = *v8;
      if ( (unsigned __int64)*v8 > 1 )
      {
        if ( *(_DWORD *)(*v20 + 12) == v9 && v20 == v5 )
        {
          *v8 = v5;
          goto LABEL_42;
        }
        goto LABEL_21;
      }
      if ( v20 )
      {
        v18 = v8;
LABEL_21:
        ++v8;
        continue;
      }
      break;
    }
    if ( v18 )
LABEL_71:
      --*((_DWORD *)a3 + 4);
    else
      v18 = v8;
LABEL_72:
    *v18 = v5;
    ++*((_DWORD *)a3 + 3);
LABEL_42:
    if ( *((_BYTE *)v5 + 52) )
    {
      v23 = (__int64 *)v5[10];
      if ( (v5[11] & 7) == 1 )
      {
        if ( (*((_BYTE *)v5 + 44) & 8) == 0 )
        {
          v36 = *(unsigned int *)(*v5 + 24);
          if ( (_DWORD)v36 )
          {
            v37 = &v5[v36];
            v38 = v5;
            v39 = v23 + 14;
            do
            {
              v40 = v38[14];
              ++v38;
              ++v39;
              sub_9547F0(a1, v40, a3, a4, a5);
              sub_9547F0(a1, *(v39 - 1), a3, a4, a5);
            }
            while ( v38 != v37 );
            v23 = (__int64 *)v5[10];
          }
        }
        *((_BYTE *)v5 + 52) = 1;
        v5 = v23;
      }
      else
      {
        v5 = (__int64 *)v5[10];
      }
    }
    else
    {
      sub_954300(a1, v5, a3, a4, a5);
      *((_BYTE *)v5 + 52) = 1;
      v5 = (__int64 *)v5[10];
    }
  }
  while ( (__int64 *)v41 != v5 );
  result = v41;
  if ( !*(_BYTE *)(v41 + 52) )
  {
LABEL_47:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    result = std::__ostream_insert<char,std::char_traits<char>>();
    *(_BYTE *)(v41 + 52) = 1;
  }
  return result;
}

