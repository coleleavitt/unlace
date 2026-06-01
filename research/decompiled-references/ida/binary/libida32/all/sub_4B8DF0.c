__int64 __fastcall sub_4B8DF0(__int64 *a1, void **a2, unsigned int a3, __int16 a4, _DWORD *a5)
{
  __int16 v7; // bp
  void **p_ptr; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // r15
  int v12; // r13d
  unsigned int v13; // eax
  __int64 result; // rax
  int v15; // r15d
  char *v16; // rdi
  void *v17; // rsi
  __m128 v18; // xmm0
  char *v19; // r13
  unsigned int v20; // eax
  int v21; // r8d
  int v22; // r9d
  int v23; // r13d
  __int64 func; // rax
  const char *v25; // rax
  size_t v26; // rax
  size_t v27; // r13
  char *v28; // rdx
  __int128 v29; // kr00_16
  void *v30; // rdi
  char *v31; // rdi
  void *v32; // rdi
  void *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // rdi
  size_t v37; // r15
  char *v38; // rax
  unsigned int v39; // [rsp+0h] [rbp-C0h]
  __int64 v40; // [rsp+0h] [rbp-C0h]
  void *srcb; // [rsp+8h] [rbp-B8h]
  const char *srca; // [rsp+8h] [rbp-B8h]
  char *v44; // [rsp+10h] [rbp-B0h]
  unsigned int v45; // [rsp+10h] [rbp-B0h]
  char *v46; // [rsp+10h] [rbp-B0h]
  const char *v47; // [rsp+10h] [rbp-B0h]
  unsigned int v48; // [rsp+34h] [rbp-8Ch] BYREF
  void *ptr; // [rsp+38h] [rbp-88h] BYREF
  __int128 v50; // [rsp+40h] [rbp-80h]
  char *s1; // [rsp+58h] [rbp-68h] BYREF
  __int128 v52; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp-40h]

  v7 = a4;
  p_ptr = a2;
  v53 = __readfsqword(0x28u);
  v50 = 0;
  ptr = nullptr;
  if ( !a2 && (a4 & 7) != 0 )
    p_ptr = &ptr;
  v9 = *a1;
  v10 = -1;
  if ( (v7 & 0x40) != 0 )
    v10 = a3;
  v48 = a3;
  v11 = *(__int64 **)(v9 + 1480);
  v44 = (char *)v9;
  v39 = v10;
  v12 = sub_3B9AA0((__int64)v11, a3, 0);
  if ( (v12 & 0x4000) == 0 )
    goto LABEL_19;
  if ( v39 == -1
    || (get_aflags(v48) & 0x4000) == 0
    || (func = get_func(v39)) == 0
    || (v25 = (const char *)sub_622440(v11, func, v48)) == nullptr )
  {
    v13 = ea2node(v48);
    result = netnode_get_name(v13, p_ptr);
    if ( result > 0 )
    {
      if ( (v7 & 4) == 0 )
        goto LABEL_29;
      v15 = 1;
      goto LABEL_10;
    }
    if ( (get_aflags(v48) & 0x4000) == 0 )
    {
      sub_3CA7E0(v11, v48, 0x4000);
      if ( (v12 & 0x8000) == 0 )
      {
        v12 |= 0x8000u;
        sub_3CA5A0((__int64)v44, v48, 0x8000);
        sub_4B4410(*((__int64 **)v44 + 185), v48);
      }
      remember_problem(2, v48, 0);
      if ( !(unsigned __int8)is_debugger_on() )
      {
LABEL_21:
        if ( (v7 & 0x200) == 0 )
        {
          v52 = 0;
          s1 = nullptr;
          sub_4B60F0(v11, (__int64 *)&s1, v48, v12, v7);
          if ( (_QWORD)v52 )
          {
            result = v52 - 1;
            v16 = s1;
            if ( !p_ptr )
              goto LABEL_25;
          }
          else
          {
            result = 0;
            if ( !p_ptr )
            {
              if ( s1 )
                qfree(s1);
              goto LABEL_35;
            }
          }
          v16 = (char *)*p_ptr;
          v17 = p_ptr[2];
          *p_ptr = s1;
          v18 = _mm_loadh_ps((const double *)&v52 + 1);
          s1 = v16;
          *((_QWORD *)&v52 + 1) = v17;
          *(__m128 *)(p_ptr + 1) = v18;
LABEL_25:
          if ( v16 )
          {
            srcb = (void *)result;
            *(_QWORD *)&v52 = 0;
            qfree(v16);
            result = (__int64)srcb;
          }
          if ( result <= 0 )
            goto LABEL_16;
          if ( (v7 & 4) != 0 )
            goto LABEL_12;
LABEL_29:
          if ( (v7 & 1) == 0 )
          {
            if ( (v7 & 2) == 0 )
              goto LABEL_16;
            goto LABEL_31;
          }
          goto LABEL_14;
        }
LABEL_67:
        if ( p_ptr )
        {
          v32 = *p_ptr;
          if ( *p_ptr )
          {
            p_ptr[1] = nullptr;
            qfree(v32);
            *p_ptr = nullptr;
            p_ptr[2] = nullptr;
          }
        }
        result = -1;
        goto LABEL_16;
      }
LABEL_40:
      result = get_debug_name(p_ptr, &v48, 0);
      if ( result > 0 )
      {
        if ( (v7 & 4) == 0 )
          goto LABEL_29;
        v15 = 2;
LABEL_10:
        if ( a5 && (sub_614FB0(*a1, 38) & 3) != a5[3] )
          goto LABEL_12;
        v19 = (char *)*p_ptr;
        if ( *(_BYTE *)*p_ptr == 46 )
        {
          s1 = nullptr;
          v52 = 0;
          v34 = sub_4EE820(a1 + 194, a3);
          v35 = sub_4F9200(a1, &s1, v34, 0);
          v36 = s1;
          if ( v35 > 0 )
          {
            if ( (_QWORD)v52 )
            {
              v47 = s1;
              v36 = s1;
              if ( !strcmp(s1, ".plt") || (v36 = (char *)v47, !strcmp(v47, ".got.plt")) )
                ++v19;
            }
          }
          if ( v36 )
          {
            *(_QWORD *)&v52 = 0;
            qfree(v36);
          }
        }
        if ( (v7 & 0x10) != 0 )
        {
          v20 = sub_614FB0(*a1, 36);
        }
        else if ( (v7 & 0x20) != 0 )
        {
          v20 = sub_614FB0(*a1, 37);
        }
        else
        {
          v45 = 0;
          if ( !a5 )
          {
LABEL_52:
            v23 = demangle_name(p_ptr, v19, v45, 2);
            if ( v23 > 0 )
            {
              sub_4B8BE0(*a1, (__int64)p_ptr);
              if ( a5 )
                a5[4] = v23;
              v33 = p_ptr[1];
              LOBYTE(v7) = v7 & 0xFE;
              result = (__int64)v33 - 1;
              if ( !v33 )
                result = 0;
LABEL_15:
              if ( (v7 & 2) == 0 )
                goto LABEL_16;
LABEL_31:
              sub_4B3CB0(*(_QWORD *)(*a1 + 1480), v39, a3, (__int64)p_ptr);
              result = (__int64)p_ptr[1] + (p_ptr[1] == nullptr) - 1;
              goto LABEL_16;
            }
            if ( v15 != 1 )
            {
              v52 = 0;
              s1 = nullptr;
              callui(1179, a3, (int)&s1, (int)&callui, v21, v22);
            }
            if ( a5 )
              a5[4] = v23;
            goto LABEL_12;
          }
          v20 = a5[2];
        }
        v45 = v20;
        goto LABEL_52;
      }
LABEL_20:
      if ( (v12 & 0x8000) == 0 )
        goto LABEL_67;
      goto LABEL_21;
    }
LABEL_19:
    if ( !(unsigned __int8)is_debugger_on() )
      goto LABEL_20;
    goto LABEL_40;
  }
  srca = v25;
  v26 = strlen(v25);
  v27 = v26;
  if ( p_ptr )
  {
    s1 = nullptr;
    v52 = 0;
    if ( v26 )
    {
      v37 = v26 + 1;
      v38 = (char *)qvector_reserve(&s1, 0, v26 + 1, 1);
      *(_QWORD *)&v52 = v37;
      s1 = v38;
      memmove(v38, srca, v27);
      s1[v27] = 0;
      v28 = s1;
      v29 = v52;
    }
    else
    {
      v28 = nullptr;
      v29 = 0u;
    }
    s1 = nullptr;
    v30 = *p_ptr;
    v52 = 0;
    if ( v30 )
    {
      p_ptr[1] = nullptr;
      v46 = v28;
      qfree(v30);
      p_ptr[2] = *((void **)&v29 + 1);
      v31 = s1;
      *p_ptr = v46;
      p_ptr[1] = (void *)v29;
      if ( v31 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v31);
      }
    }
    else
    {
      *p_ptr = v28;
      *(_OWORD *)(p_ptr + 1) = v29;
    }
  }
  if ( !v27 )
  {
LABEL_35:
    result = 0;
    goto LABEL_16;
  }
  result = v27;
  if ( (v7 & 4) == 0 )
    goto LABEL_29;
LABEL_12:
  if ( (v7 & 8) == 0 )
  {
    LOBYTE(v7) = v7 | 1;
LABEL_14:
    sub_4B67F0((__int64)p_ptr);
    result = (__int64)p_ptr[1] + (p_ptr[1] == nullptr) - 1;
    goto LABEL_15;
  }
  result = -2;
LABEL_16:
  if ( ptr )
  {
    v40 = result;
    *(_QWORD *)&v50 = 0;
    qfree(ptr);
    return v40;
  }
  return result;
}

