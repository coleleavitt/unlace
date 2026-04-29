__int64 *__fastcall sub_264A20(__int64 *a1, __int64 a2, signed int a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned __int64 v10; // rbx
  const void *v11; // r13
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __m128 v16; // xmm0
  __int64 v17; // rax
  int v18; // [rsp+4h] [rbp-54h]
  __int128 v19; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_6B870(a1);
  v5 = **(_QWORD ***)(a2 + 64);
  if ( v5 )
  {
    v6 = 24;
    v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v7 )
      goto LABEL_14;
    if ( (*(_BYTE *)v7 & 2) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = v7 + 24;
          if ( *(_DWORD *)(v7 + 24) <= a3 )
            break;
          v7 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)v7 & 2) != 0 )
            goto LABEL_5;
        }
        if ( *(_DWORD *)(v7 + 24) >= a3 )
          break;
        v7 = *(_QWORD *)(v7 + 16);
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_5;
      }
      if ( v5 != (_QWORD *)v7 )
      {
LABEL_14:
        if ( a1 != (__int64 *)(v7 + 32) )
        {
          v10 = *(_QWORD *)(v6 + 16);
          if ( v10 > 1 )
          {
            v11 = *(const void **)(v6 + 8);
            v12 = (void *)*a1;
            if ( a1[2] < v10 )
            {
              v17 = qvector_reserve();
              *a1 = v17;
              v12 = (void *)v17;
            }
            a1[1] = v10;
            memmove(v12, v11, v10 - 1);
            *(_BYTE *)(*a1 + v10 - 1) = 0;
          }
          else
          {
            a1[1] = 0;
          }
        }
        return (__int64 *)(v20 - __readfsqword(0x28u));
      }
    }
  }
LABEL_5:
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 64LL);
  if ( (int)v8 <= a3 )
    return sub_6B870(a1);
  if ( a3 >= v8 )
  {
    if ( !under_debugger )
      sub_383060(52719);
    BUG();
  }
  if ( (get_flags_ex() & 0xC000) == 0x4000 )
  {
    v19 = 0;
    if ( get_ea_name() > 0 )
    {
      if ( strncmp(nullptr, "def_", 4u) || (unsigned int)qsscanf() != 1 )
        goto LABEL_32;
      v13 = v19 - 5;
      if ( !(_QWORD)v19 )
        v13 = -4;
      if ( v18 != v13 || get_switch_info() <= 0 )
      {
LABEL_32:
        v14 = *a1;
        v15 = a1[2];
        *a1 = 0;
        v16 = _mm_loadh_ps((const double *)&v19 + 1);
        *((_QWORD *)&v19 + 1) = v15;
        *(__m128 *)(a1 + 1) = v16;
        if ( v14 )
          qfree();
        return (__int64 *)(v20 - __readfsqword(0x28u));
      }
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 216) + 717LL) )
    return sub_6B870(a1);
  sub_23FC40(a2);
  return sub_6B870(a1);
}
