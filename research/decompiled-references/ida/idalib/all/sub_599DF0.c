__int64 __fastcall sub_599DF0(__int64 *a1, void *a2, unsigned int a3, _BYTE *a4, double a5, __m128 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // r13d
  __int64 v10; // rdx
  unsigned int i; // r15d
  char *v12; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-70h]
  char v20; // [rsp+11h] [rbp-67h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v8 = sub_3BC240((__int64)a1, (__int64)a2, a4);
  if ( !(_BYTE)v8 )
    return 0;
  v9 = v8;
  if ( !*a4 )
  {
    v10 = 0;
    if ( a3 <= 7 )
      v10 = 15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5));
    sub_3D00D0(a1, a2, v10);
    sub_3C82A0(a1, (__int64)a2, a3);
    if ( (unsigned __int8)xrefblk_t_first_from(&v18, a2, 2) )
    {
      do
      {
        while ( v20 != 4 )
        {
          if ( !(unsigned __int8)xrefblk_t_next_from(&v18) )
            goto LABEL_10;
        }
        sub_411F00(a1, (unsigned __int64)a2, v19);
      }
      while ( (unsigned __int8)xrefblk_t_next_from(&v18) );
    }
LABEL_10:
    for ( i = 0; i != 8; ++i )
    {
      if ( (a3 & 0xF) != i )
      {
        ptr = nullptr;
        v22 = 0;
        if ( get_forced_operand(&ptr, a2, i) > 0 )
        {
          v12 = (char *)haystack;
          if ( (_QWORD)v22 )
            v12 = (char *)ptr;
          sub_5999C0(a1, (unsigned __int64)a2, v12, 0.0, a6);
        }
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
      }
    }
    goto LABEL_19;
  }
  v14 = sub_3BE900(a1, (unsigned __int64)a2, 0);
  if ( !(unsigned __int8)is_manual(v14, a3)
    && !(unsigned __int8)sub_3D55E0(a1, (unsigned __int64)a2, 0x99999909900000LL, a3) )
  {
    return 0;
  }
  sub_3C8250((__int64)a2, a3, (__int64)a4, v15, v16, v17, v18, v19);
  sub_5999C0(a1, (unsigned __int64)a2, a4, a5, a6);
LABEL_19:
  sub_39ADA0(0x11u, a2, a3);
  sub_3A61A0(a1, (unsigned __int64)a2, (unsigned __int64)a2 + 1, 0x28u);
  return v9;
}
