__int64 __fastcall sub_3B17C0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 strid; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  const char *v16; // rsi
  unsigned int v17; // r12d
  char v19; // [rsp+0h] [rbp-58h]
  unsigned __int16 v20; // [rsp+6h] [rbp-52h] BYREF
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  strid = get_strid(*(_QWORD *)(a1 + 88));
  v21 = 0;
  v10 = strid;
  get_type_by_tid(&v21, strid);
  v22 = 0;
  v23 = 0;
  if ( (v21 & 0x100) != 0 )
    get_tinfo_pdata(&v22, v21, 0);
  v16 = (const char *)&v22;
  v17 = 1;
  if ( (unsigned int)sub_1697D0(
                       (int)"Copy field info to pointers\n"
                            "\n"
                            "<Name ~p~refix:q:32::>\n"
                            "<#If not set, only dummy names are renamed#Rename all ~n~ames:C>\n"
                            "<#If not set, user-defined types are preserved#Apply all ~t~ypes:C>>\n"
                            "\n",
                       (__int64)&v22,
                       (__int64)&v20,
                       v11,
                       v12,
                       v13,
                       (__m128)0LL,
                       a3,
                       a4,
                       a5,
                       v14,
                       v15,
                       a8,
                       a9,
                       v19) )
  {
    v16 = (const char *)v10;
    v17 = (unsigned __int8)sub_3B0CF0(*(_QWORD *)(a1 + 88), v10, &v22, v20);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, v16);
  }
  clear_tinfo_t(&v21);
  return v17;
}
