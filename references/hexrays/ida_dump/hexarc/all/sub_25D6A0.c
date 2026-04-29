__int64 *__fastcall sub_25D6A0(__int64 *a1, __int64 a2, signed int a3, double a4)
{
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r13
  unsigned __int64 v13; // rbx
  const void *v14; // r13
  void *v15; // rdi
  char *v16; // r14
  __int64 v17; // rdx
  char *v18; // rdi
  __int64 v19; // rdx
  __m128 v20; // xmm0
  __int64 v21; // rax
  int v22; // [rsp+4h] [rbp-54h] BYREF
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v25; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_652F0(a1, (__int64)"LABEL_%d", a3);
  v6 = **(_QWORD ***)(a2 + 64);
  if ( v6 )
  {
    v7 = 24;
    v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
      goto LABEL_14;
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = v8 + 24;
          if ( *(_DWORD *)(v8 + 24) <= a3 )
            break;
          v8 = *(_QWORD *)(v8 + 8);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_5;
        }
        if ( *(_DWORD *)(v8 + 24) >= a3 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_5;
      }
      if ( v6 != (_QWORD *)v8 )
      {
LABEL_14:
        if ( a1 != (__int64 *)(v8 + 32) )
        {
          v13 = *(_QWORD *)(v7 + 16);
          if ( v13 > 1 )
          {
            v14 = *(const void **)(v7 + 8);
            v15 = (void *)*a1;
            if ( a1[2] < v13 )
            {
              v21 = qvector_reserve(a1, *a1, v13, 1);
              *a1 = v21;
              v15 = (void *)v21;
            }
            a1[1] = v13;
            memmove(v15, v14, v13 - 1);
            *(_BYTE *)(*a1 + v13 - 1) = 0;
          }
          else
          {
            a1[1] = 0;
          }
        }
        return (__int64 *)(v26 - __readfsqword(0x28u));
      }
    }
  }
LABEL_5:
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_DWORD *)(v9 + 64);
  if ( (int)v10 <= a3 )
    return sub_652F0(a1, (__int64)"LABEL_%d", a3);
  if ( a3 >= v10 )
  {
    if ( !under_debugger )
      sub_37B760(52719);
    BUG();
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * (unsigned int)a3) + 32LL);
  if ( (get_flags_ex(v11, 4) & 0xC000) == 0x4000 )
  {
    a4 = 0.0;
    v25 = 0;
    s1 = nullptr;
    if ( get_ea_name(&s1, v11, 65, 0) <= 0 )
      goto LABEL_22;
    v16 = s1;
    if ( !strncmp(s1, "def_", 4u) )
    {
      if ( (unsigned int)qsscanf(v16 + 4, "%a%n", &v23, &v22) != 1 )
        goto LABEL_33;
      v17 = v25 - 5;
      if ( !(_QWORD)v25 )
        v17 = -4;
      if ( v22 == v17 )
      {
        if ( get_switch_info(0, v23) > 0 )
        {
LABEL_22:
          if ( s1 )
          {
            *(_QWORD *)&v25 = 0;
            qfree(s1);
          }
          goto LABEL_8;
        }
        v16 = s1;
      }
      else
      {
LABEL_33:
        v16 = s1;
      }
    }
    v18 = (char *)*a1;
    v19 = a1[2];
    *a1 = (__int64)v16;
    v20 = _mm_loadh_ps((const double *)&v25 + 1);
    s1 = v18;
    *((_QWORD *)&v25 + 1) = v19;
    *(__m128 *)(a1 + 1) = v20;
    if ( v18 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v18);
    }
    return (__int64 *)(v26 - __readfsqword(0x28u));
  }
LABEL_8:
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 216) + 717LL) )
    return sub_652F0(a1, (__int64)"LABEL_%d", a3);
  sub_2388C0(a2);
  return sub_652F0(a1, (__int64)"LABEL_x%a", a4);
}
