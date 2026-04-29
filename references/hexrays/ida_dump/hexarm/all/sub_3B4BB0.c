__int64 __fastcall sub_3B4BB0(__int64 *a1, unsigned __int64 a2, __m128 a3)
{
  int v3; // eax
  int v4; // r13d
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h] BYREF
  char v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v3 = *(_DWORD *)(a2 + 8);
  v16 = __readfsqword(0x28u);
  v15 = 0;
  v13 = 0;
  v14 = 0;
  if ( v3 == 61 )
  {
    if ( (unsigned __int8)is_enum(
                            *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL),
                            (unsigned int)*(char *)(*(_QWORD *)(a2 + 24) + 12LL))
      && (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x3F) == 0x2D )
    {
      copy_tinfo_t(&v14, a2 + 48);
      v9 = *(_QWORD *)(a2 + 24);
      v10 = -1;
      v11 = 8 * *(char *)(v9 + 15);
      if ( (unsigned __int64)v11 <= 0x3F )
        v10 = (1LL << v11) - 1;
      v4 = 0;
      v13 = *(_QWORD *)v9 & v10;
      goto LABEL_15;
    }
    v3 = *(_DWORD *)(a2 + 8);
  }
  if ( (unsigned int)(v3 - 59) <= 1 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 48), 10);
    copy_tinfo_t(&v14, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    v13 = *(unsigned int *)(a2 + 32);
    v4 = sub_3AC130(a1 + 2, a2, 0);
    sub_3A98B0(&v14);
    sub_3B43E0(a1, a2, (__int64)&v13, v4, nullptr, a3);
    if ( (*(_BYTE *)(a2 + 57) & 1) != 0 )
      sub_3B49A0(a1, a2, (__int64)&v13, v4);
  }
  else
  {
    v4 = 4;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[2] + 8 * a1[3] - 8) + 8LL) - 59) > 1 )
  {
    v5 = (unsigned int)(*(_DWORD *)(a2 + 8) - 48);
    if ( (unsigned int)v5 <= 0x15 )
    {
      v6 = 2300417;
      if ( _bittest64(&v6, v5) )
      {
        if ( (unsigned __int8)sub_3A9C90((__int64)&v13, a2 + 48) )
        {
          if ( v4 == 4 )
            v4 = sub_3AC130(a1 + 2, a2, 1);
LABEL_15:
          sub_3A98B0(&v14);
          sub_3B43E0(a1, a2, (__int64)&v13, v4, nullptr, a3);
        }
      }
    }
  }
  clear_tinfo_t(&v14);
  return 0;
}
