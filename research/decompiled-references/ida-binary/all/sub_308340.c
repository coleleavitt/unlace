__int64 __fastcall sub_308340(
        char a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // r12d
  unsigned int v13; // ebx
  QT::QWidget *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  QT::QWidget *v20; // rax
  double v21; // xmm0_8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rdx
  char *v28; // rcx
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rdx
  __int64 v32; // rcx
  const char *v33; // r8
  int v34; // r12d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // [rsp+0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+8h] [rbp-30h]
  __int64 v41; // [rsp+10h] [rbp-28h]
  int v42[2]; // [rsp+18h] [rbp-20h]
  __int64 v43; // [rsp+20h] [rbp-18h]

  *(_QWORD *)v42 = __readfsqword(0x28u);
  if ( byte_8CD690 )
    return 0;
  byte_8CD690 = 1;
  v12 = dword_8CC5F0;
  if ( byte_8CD800 )
  {
    *(double *)a5.m128_u64 = sub_31E420();
    v13 = sub_2588A0(a1 & 1, a5, a6, a7, a8, v29, v30, a11, a12, a2, v27, v28);
    if ( !(_BYTE)v13 )
      goto LABEL_4;
LABEL_7:
    set_ida_state(3);
    if ( (a1 & 2) == 0
      && (((__int64 (*)(void))get_merge_state)() & 3) == 0
      && (unsigned __int8)netnode_inited(*(double *)a5.m128_u64) )
    {
      if ( !v12 && qword_8CD748 )
      {
        v39 = 0;
        v40 = 0;
        v34 = (int)QT::QCoreApplication::self;
        LOBYTE(v41) = 0;
        if ( (unsigned __int8)sub_47B250(QT::QCoreApplication::self) )
          sub_47AFB0(v34, a2, v35, v36, v37, v38, v39, v40, v41, v42[0], v43);
        sub_268E70((__int64)&v39, 0);
        a2 = 1;
        sub_2687C0((__int64)&v39, 1);
        jvalue_t_clear(&v39);
      }
      sub_2689E0();
    }
    v15 = (QT::QWidget *)(&dword_0 + 1);
    sub_310F80(1);
    if ( qword_8CD748 )
    {
      v20 = sub_3047E0((__int64)QT::QCoreApplication::self, 0, v16);
      if ( v20 )
        sub_2E7DF0((__int64)v20, nullptr);
      a2 = 0;
      sub_346E30(qword_8CF010, 0);
      v15 = qword_8CD748;
      sub_317B20(qword_8CD748);
    }
    sub_24C2D0(*(double *)a5.m128_u64, (__int64)v15, a2, v16, v17, v18, v19);
    term_plugins(32);
    byte_8CD738 = 0;
    if ( (((__int64 (*)(void))get_merge_state)() & 2) != 0 )
    {
      if ( (((__int64 (*)(void))get_merge_state)() & 3) != 0 )
        j__switch_dbctx(0);
      byte_8CD738 = is_database_flag(1);
    }
    do
      v21 = term_database();
    while ( (unsigned __int8)netnode_inited(v21) );
    sub_4900E0();
    set_ida_state(0);
    if ( qword_8CD748 && !byte_8CD800 )
    {
      sub_24A680(1, a2, v22, v23, v24, v25, v39, v40, v41);
      sub_2EF6B0(v21);
      sub_317B20(qword_8CD748);
      sub_308150();
      sub_531B30(8, 0, 0);
      sub_23C050((char *)qword_8CD748, 0, v31, v32, v33);
      sub_531B30(9, 0, 0);
    }
    v26 = 4;
    if ( (((__int64 (*)(void))get_merge_state)() & 3) == 0 )
      v26 = get_merge_state(4) & 4;
    set_merge_state(v26);
    goto LABEL_4;
  }
  v13 = sub_2588A0(a1 & 1, a5, a6, a7, a8, a9, a10, a11, a12, a2, a3, a4);
  if ( (_BYTE)v13 )
    goto LABEL_7;
LABEL_4:
  byte_8CD690 = 0;
  return v13;
}
