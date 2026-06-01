QT::QSplitter *__fastcall sub_3CE4E0(
        __int64 a1,
        char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 idati; // rax
  const char *v13; // r14
  __int64 v14; // rax
  QT::QSplitter *v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  QT::QSplitter *v18; // rbx
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v22; // [rsp+20h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited(*(double *)a3.m128_u64) )
    return nullptr;
  sub_3B8B40(a1, a2, a3, a4, a5, a6, v10, v11, a9, a10);
  v20 = 0;
  idati = get_idati(a1);
  v22 = 257;
  v21[1] = (unsigned int)a1;
  if ( !idati )
    idati = get_idati(a1);
  v21[0] = idati;
  v13 = nullptr;
  if ( (unsigned __int8)create_tinfo(&v20, 61, 189, v21) )
    v13 = (const char *)&v20;
  v14 = get_idati(&v20);
  v15 = sub_3CD600((bool *)v21, v14, "Local Types", v13, a2);
  v18 = v15;
  if ( v15 && !LOBYTE(v21[0]) )
    sub_3C6B30(
      (__int64)v15,
      (unsigned int)a1,
      (__int64 *)a2,
      0,
      *(double *)a3.m128_u64,
      *(double *)a4.m128_u64,
      a5,
      a6,
      v16,
      v17,
      a9,
      a10);
  clear_tinfo_t(&v20);
  return v18;
}
