__int64 __fastcall sub_5803B0(_QWORD *a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r13d
  __int64 v8; // rdx
  unsigned int i; // r15d
  char *v10; // rdx
  unsigned __int64 v12; // rax
  _BYTE v13[4]; // [rsp+4h] [rbp-64h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-60h]
  char v15; // [rsp+Dh] [rbp-5Bh]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v6 = sub_3B76C0((__int64)a1, a2, a4);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  if ( !*a4 )
  {
    v8 = 0;
    if ( a3 <= 7 )
      v8 = 15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5));
    sub_3CA7E0(a1, a2, v8);
    sub_3C3030(a1, a2, a3);
    if ( (unsigned __int8)xrefblk_t_first_from(v13, a2, 2) )
    {
      do
      {
        while ( v15 != 4 )
        {
          if ( !(unsigned __int8)xrefblk_t_next_from(v13) )
            goto LABEL_10;
        }
        sub_3FEBE0((__int64)a1, a2, v14);
      }
      while ( (unsigned __int8)xrefblk_t_next_from(v13) );
    }
LABEL_10:
    for ( i = 0; i != 8; ++i )
    {
      if ( (a3 & 0xF) != i )
      {
        ptr = nullptr;
        v17 = 0;
        if ( get_forced_operand(&ptr, a2, i) > 0 )
        {
          v10 = (char *)haystack;
          if ( (_QWORD)v17 )
            v10 = (char *)ptr;
          sub_57FF80(a1, a2, v10);
        }
        if ( ptr )
        {
          *(_QWORD *)&v17 = 0;
          qfree(ptr);
        }
      }
    }
    goto LABEL_19;
  }
  v12 = sub_3B9AA0((__int64)a1, a2, 0);
  if ( !(unsigned __int8)is_manual(v12, a3) && !(unsigned __int8)sub_3CFA90(a1, a2, 0x99999909900000LL, a3) )
    return 0;
  sub_3C2FE0(a2, a3, (__int64)a4);
  sub_57FF80(a1, a2, a4);
LABEL_19:
  sub_396090(0x11u, a2, a3);
  sub_3A1A90(a1, a2, a2 + 1, 0x28u);
  return v7;
}

