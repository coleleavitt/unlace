unsigned __int64 __fastcall sub_3B02E0(__int64 *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  __int64 tinfo_property; // rax
  const char *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+8h] [rbp-70h] BYREF
  __int64 v15; // [rsp+10h] [rbp-68h] BYREF
  __int128 v16; // [rsp+18h] [rbp-60h]
  _QWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v18; // [rsp+40h] [rbp-38h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 48);
  v19 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  tinfo_property = get_tinfo_property(v6, 10);
  v13 = tinfo_property;
  if ( (tinfo_property & 0x100) != 0 )
    get_tinfo_pdata(&v15, tinfo_property, 0);
  if ( (unsigned __int64)v16 > 6 )
  {
    v9 = (const char *)(v15 + v16 - 6);
    if ( !strcmp(v9, "_vtbl") )
    {
      *v9 = 0;
      v14 = 0;
      if ( v15 )
      {
        v17[1] = v15;
        v18 = 256;
        v17[0] = get_idati(v9, "_vtbl", 256, v10);
        if ( (unsigned __int8)create_tinfo(&v14, 61, 61, v17) )
        {
          sub_3A51F0(&v14);
          if ( (unsigned int)lexcompare_tinfo(v14, *(_QWORD *)(a3 + 8), 0) )
          {
            copy_tinfo_t(a3 + 8, &v14);
            sub_3AFD20(a1, a2, a3, a4, nullptr, (__m128)0LL);
          }
          clear_tinfo_t(&v14);
          clear_tinfo_t(&v13);
          v11 = v15;
          if ( v15 )
            goto LABEL_6;
          return v19 - __readfsqword(0x28u);
        }
      }
      clear_tinfo_t(&v14);
    }
  }
  clear_tinfo_t(&v13);
  v11 = v15;
  if ( v15 )
  {
LABEL_6:
    *(_QWORD *)&v16 = 0;
    qfree(v11);
  }
  return v19 - __readfsqword(0x28u);
}
