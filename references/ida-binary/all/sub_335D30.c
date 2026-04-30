unsigned __int64 __fastcall sub_335D30(
        int a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v10; // al
  __int64 v11; // rdi
  char v12; // bp
  __int64 v13; // rax
  __int64 segm_base; // rax
  __int64 v15; // rcx
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rdi
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 (__fastcall *v24)(__int64, unsigned int, __int64, int, unsigned int); // rsi
  __int64 v25; // rbx
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rdi
  unsigned int *v29; // rbx
  double v30; // xmm4_8
  double v31; // xmm5_8
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 (__fastcall *v34)(__int64, unsigned int, __int64, int, unsigned int); // rsi
  double v35; // xmm4_8
  double v36; // xmm5_8
  __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rdi
  double v47; // xmm4_8
  double v48; // xmm5_8
  unsigned int v49; // eax
  double v50; // xmm4_8
  double v51; // xmm5_8
  unsigned int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rdx
  __m128i *v56; // rax
  __m128 v57; // xmm0
  __int64 v58; // rdi
  double v59; // xmm4_8
  double v60; // xmm5_8
  __int64 v61; // rax
  unsigned int v62; // ebp
  __int64 tinfo_tid; // rax
  __int64 v64; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v65; // [rsp+8h] [rbp-1B0h] BYREF
  __int64 v66; // [rsp+10h] [rbp-1A8h] BYREF
  char v67; // [rsp+18h] [rbp-1A0h]
  __int64 v68; // [rsp+20h] [rbp-198h] BYREF
  char v69; // [rsp+28h] [rbp-190h]
  __m128i v70; // [rsp+30h] [rbp-188h] BYREF
  __m128 v71; // [rsp+40h] [rbp-178h]
  __int64 v72; // [rsp+50h] [rbp-168h]
  __int128 v73; // [rsp+58h] [rbp-160h]
  __int64 v74; // [rsp+68h] [rbp-150h]
  __int128 v75; // [rsp+70h] [rbp-148h]
  int v76; // [rsp+80h] [rbp-138h] BYREF
  _BYTE v77[256]; // [rsp+88h] [rbp-130h] BYREF
  __int64 v78; // [rsp+188h] [rbp-30h]
  __int64 v79; // [rsp+190h] [rbp-28h] BYREF
  unsigned __int64 v80; // [rsp+198h] [rbp-20h]

  v80 = __readfsqword(0x28u);
  v10 = sub_1F09E0(0, &v64, &v65);
  v11 = v64;
  v12 = v10;
  if ( !v10 )
  {
    v65 = -1;
    v11 = xmmword_8CC810;
    v64 = xmmword_8CC810;
  }
  v13 = getseg(v11);
  segm_base = get_segm_base(v13);
  v18 = (unsigned int)(a1 - 79);
  if ( (unsigned int)v18 <= 0x1869F )
  {
    v25 = getnseg(v18);
    clr_op_type(v64, (unsigned int)dword_8CEBF8);
    v28 = *(_QWORD *)(v25 + 48);
    v71.m128_i32[2] = 0;
    v70.m128i_i64[0] = -1;
    if ( v28 != -1 )
      v28 = 16 * sel2para(v28);
    v70.m128i_i64[1] = v28;
    v71.m128_u64[0] = 0;
    sub_331480(
      "Offset",
      (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_331B90,
      (__int64)&v70,
      1,
      1u,
      a2,
      a3,
      a4,
      a5,
      v26,
      v27,
      a8,
      a9);
  }
  else
  {
    v19 = a1 - 300079;
    if ( (unsigned int)(a1 - 300079) <= 0x1869F )
    {
      v24 = (__int64 (__fastcall *)(__int64, unsigned int, __int64, int, unsigned int))qword_8CEC00;
      sub_1AB7A0((__int64)&v70, qword_8CEC00, (unsigned int)qword_8CEC20, v15);
      if ( (unsigned __int64)v19 < v70.m128i_i64[1] )
      {
        v29 = (unsigned int *)(v70.m128i_i64[0] + 8LL * v19);
        clr_op_type(v64, (unsigned int)dword_8CEBF8);
        sub_334950(unk_8C9BF8);
        v24 = (__int64 (__fastcall *)(__int64, unsigned int, __int64, int, unsigned int))&v66;
        sub_1AB6D0(v29, (__int64)&v66);
        v68 = v66;
        v69 = v67;
        qword_8BC990 = (__int64)&v68;
        if ( !sub_32FD50() )
        {
          v24 = sub_32E3E0;
          sub_331480(
            "Enum",
            (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
            (__int64)&off_8BC980,
            0,
            0,
            a2,
            a3,
            a4,
            a5,
            v30,
            v31,
            a8,
            a9);
        }
      }
      if ( v70.m128i_i64[0] )
      {
        v70.m128i_i64[1] = 0;
        qfree(v70.m128i_i64[0], (const char *)v24);
      }
    }
    else
    {
      v20 = (unsigned int)(a1 - 100079);
      if ( (unsigned int)v20 <= 0x1869F )
      {
        v68 = 0;
        v70.m128i_i64[1] = (unsigned int)(a1 - 100078);
        v71.m128_i16[0] = 257;
        v70.m128i_i64[0] = get_idati(v18);
        if ( (unsigned __int8)create_tinfo(&v68, 61, 189, &v70) )
        {
          sub_334950(unk_8C9AA0);
          sub_32FB60(&v68, 0, a2, a3, a4, a5, v32, v33, a8, a9);
        }
LABEL_25:
        clear_tinfo_t(&v68);
      }
      else if ( (unsigned int)(a1 - 200079) <= 0x1869F )
      {
        v70.m128i_i64[0] = -1;
        v71.m128_i8[8] = 1;
        v70.m128i_i64[1] = qword_8CEC00;
        v71.m128_u64[0] = 0;
        v72 = 0;
        v74 = 0;
        v73 = 0;
        v75 = 0;
        sub_1AD2D0(
          v70.m128i_i64,
          (__int64)&v64,
          v20,
          v15,
          0.0,
          a3,
          *(double *)a4.m128_u64,
          *(double *)a5.m128_u64,
          v16,
          v17,
          a8,
          a9);
        v78 = qword_8CEC00;
        v76 = sub_1ACB20(&v70, (__int64)v77, &v79, a1 - 200079);
        set_abits(v64, 128);
        v34 = (__int64 (__fastcall *)(__int64, unsigned int, __int64, int, unsigned int))(unsigned int)dword_8CEBF8;
        clr_op_type(v64, (unsigned int)dword_8CEBF8);
        sub_334950(unk_8C9BA0);
        qword_8BC9B0 = (__int64)&v76;
        if ( !sub_32FD50() )
        {
          v34 = sub_32E3E0;
          sub_331480(
            "Struct offset",
            (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
            (__int64)&off_8BC9A0,
            0,
            0,
            (__m128)0LL,
            a3,
            a4,
            a5,
            v35,
            v36,
            a8,
            a9);
        }
        v37 = v74;
        if ( v74 )
        {
          v38 = v75;
          if ( (_QWORD)v75 )
          {
            v39 = 0;
            do
            {
              v40 = (__int64 *)(v37 + 24 * v39);
              v41 = *v40;
              if ( *v40 )
              {
                v40[1] = 0;
                qfree(v41, (const char *)v34);
                v37 = v74;
              }
              ++v39;
            }
            while ( v38 != v39 );
          }
          *(_QWORD *)&v75 = 0;
          qfree(v37, (const char *)v34);
        }
        v42 = v72;
        if ( v72 )
        {
          v43 = v73;
          if ( (_QWORD)v73 )
          {
            v44 = 0;
            do
            {
              v45 = (__int64 *)(v42 + 24 * v44);
              v46 = *v45;
              if ( *v45 )
              {
                v45[1] = 0;
                qfree(v46, (const char *)v34);
                v42 = v72;
              }
              ++v44;
            }
            while ( v43 != v44 );
          }
          *(_QWORD *)&v73 = 0;
          qfree(v42, (const char *)v34);
        }
      }
      else if ( (unsigned int)(a1 - 15) <= 0x3F )
      {
        v65 = (-(1LL << ((unsigned __int8)a1 - 15)) & ((1LL << ((unsigned __int8)a1 - 15)) + v64 - 1 - segm_base))
            + segm_base;
        sub_334950(unk_8C9E70);
        create_align(v64, v65 - v64, (unsigned int)(a1 - 15));
      }
      else if ( (unsigned int)(a1 - 400079) <= 0x3FF )
      {
        LODWORD(v68) = a1 - 400079;
        v56 = (__m128i *)sub_1EA680(qword_8CD7E8 + 384LL, (__int64)&v64, v20, v15, *(double *)a2.m128_u64);
        v57 = 0;
        v71.m128_u64[0] = 0;
        v71.m128_u64[1] = -1;
        v72 = 0;
        *(_QWORD *)&v73 = 0;
        v70 = 0;
        if ( v56 != &v70 )
        {
          v70 = _mm_loadu_si128(v56);
          v57 = (__m128)_mm_loadu_si128(v56 + 1);
          v71 = v57;
          LODWORD(v72) = v56[2].m128i_i32[0];
          v58 = v56[2].m128i_i64[1];
          if ( v58 )
            *(_QWORD *)&v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        }
        if ( (unsigned __int8)sub_1F9960((_QWORD *)qword_8CD7E8, &v70, nullptr, (__int64)&v68) )
          sub_1FFBB0(qword_8CD7E8 + 384LL, &v70, byte_8BA8E5, v57, a3, a4, a5, v59, v60, a8, a9);
        if ( (_QWORD)v73 )
          qfree(v73, v70.m128i_i8);
      }
      else
      {
        v21 = (unsigned int)(a1 - 401103);
        if ( (unsigned int)v21 > 0x3FF )
        {
          switch ( a1 )
          {
            case 1:
              return v80 - __readfsqword(0x28u);
            case 2:
              v53 = 1024;
              goto LABEL_52;
            case 3:
              v53 = 268436480;
              goto LABEL_52;
            case 4:
              v53 = 536871936;
              goto LABEL_52;
            case 5:
              v53 = 805307392;
              goto LABEL_52;
            case 6:
              v53 = 2147484672LL;
              goto LABEL_52;
            case 7:
              v53 = 2415920128LL;
              goto LABEL_52;
            case 8:
              v53 = 1073742848;
              goto LABEL_52;
            case 9:
              v53 = 2684355584LL;
LABEL_52:
              sub_334950(unk_8C9A98);
              v54 = v64;
              if ( v12 )
              {
                v55 = v65 - v64;
              }
              else
              {
                v61 = sub_32FE70(v64, v53, -1);
                v54 = v64;
                v55 = v61;
              }
              create_data(v54, v53, v55, -1);
              return v80 - __readfsqword(0x28u);
            case 10:
              sub_32E720("UndefineOperand", "Undefine operand");
              clr_op_type(v64, (unsigned int)dword_8CEBF8);
              return v80 - __readfsqword(0x28u);
            case 11:
              v49 = sub_32F240(v64, dword_8CEBF8);
              v52 = sub_1ABF60(
                      (__int64)"Please choose a symbol",
                      qword_8CEC00,
                      v49,
                      &v66,
                      *(double *)a2.m128_u64,
                      a3,
                      a4,
                      a5,
                      v50,
                      v51,
                      a8,
                      a9);
              v68 = 0;
              if ( v52 )
              {
                v71.m128_i16[0] = 257;
                v70.m128i_i64[1] = v52;
                v70.m128i_i64[0] = get_idati("Please choose a symbol");
                if ( (unsigned __int8)create_tinfo(&v68, 61, 189, &v70) )
                {
                  sub_334950(unk_8C9BF8);
                  v62 = (unsigned __int8)v66;
                  tinfo_tid = get_tinfo_tid(&v68, 0);
                  op_enum(v64, (unsigned int)dword_8CEBF8, tinfo_tid, v62);
                }
              }
              goto LABEL_25;
            case 12:
              sub_334950(unk_8C9A90);
              sub_17D780(v70.m128i_i64, v21);
              sub_3307C0(*(double *)a2.m128_u64, a3, a4, a5, v47, v48, a8, a9);
              sub_17D800(v70.m128i_i64);
              return v80 - __readfsqword(0x28u);
            case 13:
              clr_op_type(v64, (unsigned int)dword_8CEBF8);
              QT::QAction::activate(unk_8C9B80, 0);
              return v80 - __readfsqword(0x28u);
            case 14:
              clr_op_type(v64, (unsigned int)dword_8CEBF8);
              QT::QAction::activate(unk_8C9B88, 0);
              return v80 - __readfsqword(0x28u);
            default:
              sub_16B930((__int64)"unhandled context command %d", a1);
          }
        }
        if ( QT::QCoreApplication::self )
        {
          v22 = QT::QCoreApplication::self[14];
          if ( v22 )
            sub_331A20(v22, v21, a2, a3, a4, a5, v16, v17, a8, a9);
        }
      }
    }
  }
  return v80 - __readfsqword(0x28u);
}
