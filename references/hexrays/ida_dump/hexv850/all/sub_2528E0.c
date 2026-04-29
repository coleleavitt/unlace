__int64 __fastcall sub_2528E0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, _QWORD *a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  const char *v12; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = (unsigned int)*(char *)(a1 + 4);
  v10 = *(_QWORD *)(a1 + 32);
  v16[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)is_enum(v10, v9) )
  {
    v12 = s1;
    if ( *(_QWORD *)(a1 + 16) )
      v12 = *(const char **)(a1 + 8);
    sub_325240(v16, v12);
    copy_tinfo_t(a5, v16);
    clear_tinfo_t(v16);
    return 2 * (unsigned int)((get_tinfo_property(*a5, 2) & 0x3F) == 45);
  }
  else if ( (unsigned __int8)is_char(*(_QWORD *)(a1 + 32), (unsigned int)*(char *)(a1 + 4)) )
  {
    v14 = 50;
    if ( (char)a4 != a4 )
      v14 = 21;
    v16[0] = v14;
    copy_tinfo_t(a5, v16);
    clear_tinfo_t(v16);
    return 1;
  }
  else if ( !(unsigned __int8)is_stroff(*(_QWORD *)(a1 + 32), (unsigned int)*(char *)(a1 + 4))
         && ((unsigned __int8)is_numop(*(_QWORD *)(a1 + 32), (unsigned int)*(char *)(a1 + 4))
          && (unsigned int)get_radix(*(_QWORD *)(a1 + 32), (unsigned int)*(char *)(a1 + 4)) == 10
          || a3 < *(unsigned __int8 *)(a2 + 130)
          || (v15 = 8 * a3 - 1, (unsigned __int64)v15 <= 0x3F) && a4 < 1LL << v15) )
  {
    return 0;
  }
  else
  {
    sub_3269C0(v16, *(_QWORD *)(a2 + 112), (unsigned int)a3, 2);
    copy_tinfo_t(a5, v16);
    clear_tinfo_t(v16);
    return (unsigned int)(unsigned __int8)is_stroff(*(_QWORD *)(a1 + 32), (unsigned int)*(char *)(a1 + 4)) + 1;
  }
}
