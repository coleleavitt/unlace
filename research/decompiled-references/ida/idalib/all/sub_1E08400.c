__int64 __fastcall sub_1E08400(const __m128i *a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 *v14; // r13
  unsigned __int64 *v15; // rsi
  unsigned __int64 v16; // rdx
  void *v17; // rdi
  void *v18; // r12
  __int8 v19; // r13
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int32 v22; // r13d
  void *v23; // rdi
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int32 v26; // r13d
  void *v27; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int16 *v31; // r12
  void *v32; // r12
  __int64 v33; // r12
  const void *v34; // r13
  unsigned __int64 *v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int32 v37; // r13d
  void *v38; // rdi
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int16 *v42; // r12
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int16 *v46; // r12
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int16 *v50; // r12
  __int64 v51; // r13
  const void *v52; // r14
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int16 *v56; // rax
  int v57; // r12d
  const void *v58; // r13
  __int64 v59; // r14
  char v60; // r15
  unsigned __int64 *v61; // rsi
  unsigned __int64 v62; // rdx
  unsigned __int32 v63; // r13d
  void *v64; // rdi
  __int32 v65; // r12d
  __int32 v66; // r13d
  unsigned __int64 *v67; // rsi
  unsigned __int64 v68; // rdx
  unsigned __int32 v69; // r13d
  void *v70; // rdi
  unsigned __int64 *v71; // rsi
  unsigned __int64 v72; // rdx
  unsigned __int32 v73; // r13d
  void *v74; // rdi
  unsigned __int64 *v75; // rsi
  unsigned __int64 v76; // rdx
  unsigned __int32 v77; // r14d
  void *v78; // r13
  __int64 v79; // [rsp-10h] [rbp-98h]
  __m128i *v80; // [rsp+0h] [rbp-88h]
  __m128i *v81; // [rsp+0h] [rbp-88h]
  __m128i *v82; // [rsp+0h] [rbp-88h]
  __m128i *v83; // [rsp+0h] [rbp-88h]
  __m128i *v84; // [rsp+0h] [rbp-88h]
  __m128i *v85; // [rsp+0h] [rbp-88h]
  __m128i *v86; // [rsp+0h] [rbp-88h]
  __m128i *v87; // [rsp+0h] [rbp-88h]
  __m128i *v88; // [rsp+0h] [rbp-88h]
  __m128i *v89; // [rsp+0h] [rbp-88h]
  __m128i *v90; // [rsp+0h] [rbp-88h]
  unsigned __int64 v91; // [rsp+0h] [rbp-88h]
  __m128i *v92; // [rsp+0h] [rbp-88h]
  __m128i *v93; // [rsp+0h] [rbp-88h]
  __m128i *v94; // [rsp+0h] [rbp-88h]
  __m128i *v95; // [rsp+0h] [rbp-88h]
  __m128i *v96; // [rsp+0h] [rbp-88h]
  unsigned __int32 v97; // [rsp+8h] [rbp-80h]
  const void *v98; // [rsp+8h] [rbp-80h]
  __int64 v99; // [rsp+10h] [rbp-78h]
  unsigned __int16 *v100; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+20h] [rbp-68h] BYREF
  __int64 v102; // [rsp+28h] [rbp-60h]
  _BYTE v103[88]; // [rsp+30h] [rbp-58h] BYREF

  switch ( a1[2].m128i_i16[2] )
  {
    case 0:
      result = (__int64)sub_B22AD0(a1, (__int64)a2);
      break;
    case 1:
      result = (__int64)sub_B22E60(a1, (__int64)a2);
      break;
    case 2:
      result = sub_B2D9B0((__int64)a1, (__int64)a2);
      break;
    case 3:
      result = (__int64)sub_B39530(a1, a2);
      break;
    case 4:
      result = (__int64)sub_B38FF0(a1, a2);
      break;
    case 5:
      result = (__int64)sub_B389C0(a1, a2);
      break;
    case 6:
      result = (__int64)sub_B23360(a1, (__int64)a2);
      break;
    case 7:
      result = (__int64)sub_B382C0(a1, a2);
      break;
    case 8:
      result = (__int64)sub_B39370(a1, a2);
      break;
    case 9:
      result = (__int64)sub_B233D0(a1, (__int64)a2);
      break;
    case 0xA:
      result = (__int64)sub_B23440(a1, (__int64)a2);
      break;
    case 0xB:
      result = (__int64)sub_B35B40(a1, (__int64)a2);
      break;
    case 0xC:
      result = (__int64)sub_B23760(a1, (__int64)a2);
      break;
    case 0xD:
      result = (__int64)sub_B23C40(a1, (__int64)a2);
      break;
    case 0xE:
      result = (__int64)sub_B245B0(a1, (__int64)a2);
      break;
    case 0xF:
      result = (__int64)sub_B255B0(a1, (__int64)a2);
      break;
    case 0x10:
      result = (__int64)sub_B25D20(a1, (__int64)a2);
      break;
    case 0x11:
      result = (__int64)sub_B25E10(a1, (__int64)a2);
      break;
    case 0x12:
      result = (__int64)sub_B26110(a1, (__int64)a2);
      break;
    case 0x13:
      result = (__int64)sub_B261E0(a1, (__int64)a2);
      break;
    case 0x14:
      result = (__int64)sub_B262D0(a1, (__int64)a2);
      break;
    case 0x15:
      result = (__int64)sub_B27F00(a1, (__int64)a2);
      break;
    case 0x16:
      result = (__int64)sub_B28880(a1, (__int64)a2);
      break;
    case 0x17:
      result = (__int64)sub_B28900(a1, (__int64)a2);
      break;
    case 0x18:
      result = (__int64)sub_B294F0(a1, (__int64)a2);
      break;
    case 0x19:
      result = (__int64)sub_B295E0(a1, (__int64)a2);
      break;
    case 0x1A:
      result = (__int64)sub_B29650(a1, (__int64)a2);
      break;
    case 0x1B:
      result = (__int64)sub_B29D70(a1, (__int64)a2);
      break;
    case 0x1C:
      result = (__int64)sub_B29DE0(a1, (__int64)a2);
      break;
    case 0x1D:
      result = (__int64)sub_B29E50(a1, (__int64)a2);
      break;
    case 0x1E:
      result = (__int64)sub_B29EC0(a1, (__int64)a2);
      break;
    case 0x1F:
      result = (__int64)sub_B29F30(a1, (__int64)a2);
      break;
    case 0x20:
      result = (__int64)sub_B2A010(a1, (__int64)a2);
      break;
    case 0x21:
      result = (__int64)sub_B2A080(a1, (__int64)a2);
      break;
    case 0x22:
      result = (__int64)sub_B2A5E0(a1, (__int64)a2);
      break;
    case 0x23:
      result = (__int64)sub_B2A9A0(a1, (__int64)a2);
      break;
    case 0x24:
      result = (__int64)sub_B2AA10(a1, (__int64)a2);
      break;
    case 0x25:
      result = (__int64)sub_B2B1D0(a1, (__int64)a2);
      break;
    case 0x26:
      result = (__int64)sub_B2C390(a1, (__int64)a2);
      break;
    case 0x27:
      result = (__int64)sub_B2C400(a1, (__int64)a2);
      break;
    case 0x28:
      result = (__int64)sub_B2C4E0(a1, (__int64)a2);
      break;
    case 0x29:
      result = (__int64)sub_B2C650(a1, (__int64)a2);
      break;
    case 0x2A:
      result = (__int64)sub_B2CD60(a1, (__int64)a2);
      break;
    case 0x2B:
      result = (__int64)sub_B36A90(a1, (__int64)a2);
      break;
    case 0x2C:
      result = (__int64)sub_B242F0(a1, (__int64)a2);
      break;
    case 0x2D:
      result = (__int64)sub_B24690(a1, (__int64)a2);
      break;
    case 0x2E:
      result = (__int64)sub_B25630(a1, (__int64)a2);
      break;
    case 0x2F:
      result = (__int64)sub_B25DA0(a1, (__int64)a2);
      break;
    case 0x30:
      result = (__int64)sub_B25E80(a1, (__int64)a2);
      break;
    case 0x31:
      result = (__int64)sub_B26D80(a1, (__int64)a2);
      break;
    case 0x32:
      result = (__int64)sub_B279B0(a1, (__int64)a2);
      break;
    case 0x33:
      result = (__int64)sub_B2A0F0(a1, (__int64)a2);
      break;
    case 0x34:
      result = (__int64)sub_B2C730(a1, (__int64)a2);
      break;
    case 0x35:
      result = (__int64)sub_B22F40(a1, (__int64)a2);
      break;
    case 0x36:
      result = (__int64)sub_B280C0(a1, (__int64)a2);
      break;
    case 0x37:
      result = (__int64)sub_B28200(a1, (__int64)a2);
      break;
    case 0x38:
      result = (__int64)sub_B38640(a1, a2);
      break;
    case 0x39:
      result = (__int64)sub_B22550(a1, (__int64)a2);
      break;
    case 0x3A:
      result = (__int64)sub_B225C0(a1, (__int64)a2);
      break;
    case 0x3B:
      result = (__int64)sub_B34620(a1, (__int64)a2);
      break;
    case 0x3C:
      result = (__int64)sub_B23100(a1, (__int64)a2);
      break;
    case 0x3D:
      result = (__int64)sub_B239A0(a1, (__int64)a2);
      break;
    case 0x3E:
      result = (__int64)sub_B24E80(a1, (__int64)a2);
      break;
    case 0x3F:
      result = (__int64)sub_B24F00(a1, (__int64)a2);
      break;
    case 0x40:
      result = (__int64)sub_B252A0(a1, (__int64)a2);
      break;
    case 0x41:
      result = (__int64)sub_B256A0(a1, (__int64)a2);
      break;
    case 0x42:
      result = (__int64)sub_B26AE0(a1, (__int64)a2);
      break;
    case 0x43:
      result = (__int64)sub_B26D10(a1, (__int64)a2);
      break;
    case 0x44:
      result = (__int64)sub_B37B40(a1, (__int64)a2);
      break;
    case 0x45:
      result = (__int64)sub_B27070(a1, (__int64)a2);
      break;
    case 0x46:
      result = (__int64)sub_B27150(a1, (__int64)a2);
      break;
    case 0x47:
      result = (__int64)sub_B27C60(a1, (__int64)a2);
      break;
    case 0x48:
      result = (__int64)sub_B29880(a1, (__int64)a2);
      break;
    case 0x49:
      result = (__int64)sub_B2A410(a1, (__int64)a2);
      break;
    case 0x4A:
      result = (__int64)sub_B2A4F0(a1, (__int64)a2);
      break;
    case 0x4B:
      result = (__int64)sub_B2A760(a1, (__int64)a2);
      break;
    case 0x4C:
      result = (__int64)sub_B2A7D0(a1, (__int64)a2);
      break;
    case 0x4D:
      result = (__int64)sub_B2A840(a1, (__int64)a2);
      break;
    case 0x4E:
      result = (__int64)sub_B2AAF0(a1, (__int64)a2);
      break;
    case 0x4F:
      result = (__int64)sub_B2AB60(a1, (__int64)a2);
      break;
    case 0x50:
      result = (__int64)sub_B2AD20(a1, (__int64)a2);
      break;
    case 0x51:
      result = (__int64)sub_B2B500(a1, (__int64)a2);
      break;
    case 0x52:
      result = (__int64)sub_B2B580(a1, (__int64)a2);
      break;
    case 0x53:
      result = (__int64)sub_B2B6E0(a1, (__int64)a2);
      break;
    case 0x54:
      result = (__int64)sub_B2B8B0(a1, (__int64)a2);
      break;
    case 0x55:
      result = (__int64)sub_B354C0(a1, (__int64)a2);
      break;
    case 0x56:
      result = (__int64)sub_B2BA80(a1, (__int64)a2);
      break;
    case 0x57:
      result = (__int64)sub_B2C080(a1, (__int64)a2);
      break;
    case 0x58:
      result = (__int64)sub_B2C160(a1, (__int64)a2);
      break;
    case 0x59:
      result = (__int64)sub_B2C470(a1, (__int64)a2);
      break;
    case 0x5A:
      result = (__int64)sub_B2CB30(a1, (__int64)a2);
      break;
    case 0x5B:
      result = sub_B2D6D0((__int64)a1, (__int64)a2);
      break;
    case 0x5C:
      result = (__int64)sub_B26040(a1, (__int64)a2);
      break;
    case 0x5D:
      result = (__int64)sub_B2B920(a1, (__int64)a2);
      break;
    case 0x5E:
      result = (__int64)sub_B2BAF0(a1, (__int64)a2);
      break;
    case 0x5F:
      result = (__int64)sub_B2BBD0(a1, (__int64)a2);
      break;
    case 0x60:
      result = (__int64)sub_B2BD20(a1, (__int64)a2);
      break;
    case 0x61:
      result = (__int64)sub_B23AF0(a1, (__int64)a2);
      break;
    case 0x62:
      result = (__int64)sub_B24450(a1, (__int64)a2);
      break;
    case 0x63:
      result = (__int64)sub_B27A20(a1, (__int64)a2);
      break;
    case 0x64:
      result = (__int64)sub_B2F0D0(a1, (__int64)a2);
      break;
    case 0x65:
      result = (__int64)sub_B28D40(a1, (__int64)a2);
      break;
    case 0x66:
      result = (__int64)sub_B2A480(a1, (__int64)a2);
      break;
    case 0x67:
      result = (__int64)sub_B34480(a1, (__int64)a2);
      break;
    case 0x68:
      result = (__int64)sub_B35180(a1, (__int64)a2);
      break;
    case 0x69:
      result = (__int64)sub_B25F70(a1, (__int64)a2);
      break;
    case 0x6A:
      result = (__int64)sub_B26340(a1, (__int64)a2);
      break;
    case 0x6B:
      result = (__int64)sub_B263B0(a1, (__int64)a2);
      break;
    case 0x6C:
      result = (__int64)sub_B26420(a1, (__int64)a2);
      break;
    case 0x6D:
      result = (__int64)sub_B26490(a1, (__int64)a2);
      break;
    case 0x6E:
      result = (__int64)sub_B26500(a1, (__int64)a2);
      break;
    case 0x6F:
      result = (__int64)sub_B22630(a1, (__int64)a2);
      break;
    case 0x70:
      result = (__int64)sub_B226B0(a1, (__int64)a2);
      break;
    case 0x71:
      result = (__int64)sub_B22740(a1, (__int64)a2);
      break;
    case 0x72:
      result = (__int64)sub_B227B0(a1, (__int64)a2);
      break;
    case 0x73:
      result = (__int64)sub_B22820(a1, (__int64)a2);
      break;
    case 0x74:
      result = (__int64)sub_B228A0(a1, (__int64)a2);
      break;
    case 0x75:
      result = (__int64)sub_B22910(a1, (__int64)a2);
      break;
    case 0x76:
      result = (__int64)sub_B22980(a1, (__int64)a2);
      break;
    case 0x77:
      result = (__int64)sub_B229F0(a1, (__int64)a2);
      break;
    case 0x78:
      result = (__int64)sub_B22A60(a1, (__int64)a2);
      break;
    case 0x79:
      sub_18C74E0(a3, 0, 0, 4);
      v75 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v76 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v75, v76, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v77 = v102;
      v78 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v78, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v96 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2D100(v96, (__int64)a2, a1, v78, v77);
      result = (__int64)v96;
      break;
    case 0x7A:
      sub_18C74E0(a3, 0, 0, 4);
      v71 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v72 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v71, v72, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v73 = v102;
      v74 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v74, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v95 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2D2D0(v95, (__int64)a2, a1, v74, v73);
      result = (__int64)v95;
      break;
    case 0x7B:
      sub_18C74E0(a3, 0, 0, 4);
      v67 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v68 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v67, v68, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v69 = v102;
      v70 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v70, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v94 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2D420(v94, (__int64)a2, a1, v70, v69);
      result = (__int64)v94;
      break;
    case 0x7C:
      result = (__int64)sub_B22B40(a1, (__int64)a2);
      break;
    case 0x7D:
      result = (__int64)sub_B22BB0(a1, (__int64)a2);
      break;
    case 0x7E:
      result = (__int64)sub_B22CA0(a1, (__int64)a2);
      break;
    case 0x7F:
      result = (__int64)sub_B22D60(a1, (__int64)a2);
      break;
    case 0x80:
      v65 = a1[2].m128i_i32[2];
      v66 = a1[2].m128i_i32[3];
      v93 = (__m128i *)sub_1E083C0(a2 + 294, 48, 3u);
      sub_B09250(v93, (__int64)a2, a1, v65, v66);
      result = (__int64)v93;
      break;
    case 0x81:
      result = (__int64)sub_B22ED0(a1, (__int64)a2);
      break;
    case 0x82:
      result = (__int64)sub_B22FB0(a1, (__int64)a2);
      break;
    case 0x83:
      result = (__int64)sub_B23020(a1, (__int64)a2);
      break;
    case 0x84:
      result = (__int64)sub_B23090(a1, (__int64)a2);
      break;
    case 0x85:
      result = (__int64)sub_B23170(a1, (__int64)a2);
      break;
    case 0x86:
      result = (__int64)sub_B231E0(a1, (__int64)a2);
      break;
    case 0x87:
      result = (__int64)sub_B23270(a1, (__int64)a2);
      break;
    case 0x88:
      result = (__int64)sub_B232F0(a1, (__int64)a2);
      break;
    case 0x89:
      result = (__int64)sub_B391B0(a1, a2);
      break;
    case 0x8A:
      result = (__int64)sub_B234B0(a1, (__int64)a2);
      break;
    case 0x8B:
      result = (__int64)sub_B335A0(a1, (__int64)a2);
      break;
    case 0x8C:
      sub_18C74E0(a3, 0, 0, 4);
      v61 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v62 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v61, v62, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v63 = v102;
      v64 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v64, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v92 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2DB80(v92, (__int64)a2, a1, v64, v63);
      result = (__int64)v92;
      break;
    case 0x8D:
      result = (__int64)sub_B23520(a1, (__int64)a2);
      break;
    case 0x8E:
      result = sub_B2DDE0(a1, (__int64)a2);
      break;
    case 0x8F:
      result = (__int64)sub_B235A0(a1, (__int64)a2);
      break;
    case 0x90:
      result = (__int64)sub_B23610(a1, (__int64)a2);
      break;
    case 0x91:
      result = (__int64)sub_B23680(a1, (__int64)a2);
      break;
    case 0x92:
      result = (__int64)sub_B236F0(a1, (__int64)a2);
      break;
    case 0x93:
      result = (__int64)sub_B35A70(a1, (__int64)a2);
      break;
    case 0x94:
      result = (__int64)sub_B237D0(a1, (__int64)a2);
      break;
    case 0x95:
      result = (__int64)sub_B23840(a1, (__int64)a2);
      break;
    case 0x96:
      result = (__int64)sub_B23930(a1, (__int64)a2);
      break;
    case 0x97:
      result = (__int64)sub_B23A80(a1, (__int64)a2);
      break;
    case 0x98:
      result = (__int64)sub_B23B60(a1, (__int64)a2);
      break;
    case 0x99:
      result = (__int64)sub_B23BD0(a1, (__int64)a2);
      break;
    case 0x9A:
      result = (__int64)sub_B23CB0(a1, (__int64)a2);
      break;
    case 0x9B:
      result = (__int64)sub_B23D20(a1, (__int64)a2);
      break;
    case 0x9C:
      result = (__int64)sub_B23D90(a1, (__int64)a2);
      break;
    case 0x9D:
      result = (__int64)sub_B36750(a1, (__int64)a2);
      break;
    case 0x9E:
      result = (__int64)sub_B368F0(a1, (__int64)a2);
      break;
    case 0x9F:
      result = (__int64)sub_B23E00(a1, (__int64)a2);
      break;
    case 0xA0:
      result = (__int64)sub_B23E70(a1, (__int64)a2);
      break;
    case 0xA1:
      result = (__int64)sub_B23EE0(a1, (__int64)a2);
      break;
    case 0xA2:
      result = (__int64)sub_B23F50(a1, (__int64)a2);
      break;
    case 0xA3:
      result = (__int64)sub_B23FC0(a1, (__int64)a2);
      break;
    case 0xA4:
      result = (__int64)sub_B24030(a1, (__int64)a2);
      break;
    case 0xA5:
      result = (__int64)sub_B240A0(a1, (__int64)a2);
      break;
    case 0xA6:
      result = (__int64)sub_B24110(a1, (__int64)a2);
      break;
    case 0xA7:
      result = (__int64)sub_B24180(a1, (__int64)a2);
      break;
    case 0xA8:
      result = (__int64)sub_B24210(a1, (__int64)a2);
      break;
    case 0xA9:
      result = (__int64)sub_B24280(a1, (__int64)a2);
      break;
    case 0xAA:
      result = (__int64)sub_B36680(a1, (__int64)a2);
      break;
    case 0xAB:
      result = (__int64)sub_B369C0(a1, (__int64)a2);
      break;
    case 0xAC:
      result = (__int64)sub_B346F0(a1, (__int64)a2);
      break;
    case 0xAD:
      result = (__int64)sub_B243E0(a1, (__int64)a2);
      break;
    case 0xAE:
      result = (__int64)sub_B244C0(a1, (__int64)a2);
      break;
    case 0xAF:
      result = (__int64)sub_B24540(a1, (__int64)a2);
      break;
    case 0xB0:
      result = (__int64)sub_B24620(a1, (__int64)a2);
      break;
    case 0xB1:
      result = (__int64)sub_B24710(a1, (__int64)a2);
      break;
    case 0xB2:
      result = (__int64)sub_B34E40(a1, (__int64)a2);
      break;
    case 0xB3:
      result = (__int64)sub_B24780(a1, (__int64)a2);
      break;
    case 0xB4:
      result = (__int64)sub_B247F0(a1, (__int64)a2);
      break;
    case 0xB5:
      result = (__int64)sub_B24860(a1, (__int64)a2);
      break;
    case 0xB6:
      result = (__int64)sub_B248D0(a1, (__int64)a2);
      break;
    case 0xB7:
      result = (__int64)sub_B24940(a1, (__int64)a2);
      break;
    case 0xB8:
      result = (__int64)sub_B249B0(a1, (__int64)a2);
      break;
    case 0xB9:
      result = (__int64)sub_B24A20(a1, (__int64)a2);
      break;
    case 0xBA:
      result = (__int64)sub_B24A90(a1, (__int64)a2);
      break;
    case 0xBB:
      result = (__int64)sub_B24B00(a1, (__int64)a2);
      break;
    case 0xBC:
      result = (__int64)sub_B24B70(a1, (__int64)a2);
      break;
    case 0xBD:
      result = (__int64)sub_B24BE0(a1, (__int64)a2);
      break;
    case 0xBE:
      result = (__int64)sub_B24C50(a1, (__int64)a2);
      break;
    case 0xBF:
      result = (__int64)sub_B24CC0(a1, (__int64)a2);
      break;
    case 0xC0:
      result = (__int64)sub_B24D30(a1, (__int64)a2);
      break;
    case 0xC1:
      result = (__int64)sub_B24DA0(a1, (__int64)a2);
      break;
    case 0xC2:
      result = (__int64)sub_B24E10(a1, (__int64)a2);
      break;
    case 0xC3:
      result = (__int64)sub_B24FF0(a1, (__int64)a2);
      break;
    case 0xC4:
      result = (__int64)sub_B25060(a1, (__int64)a2);
      break;
    case 0xC5:
      result = (__int64)sub_B25140(a1, (__int64)a2);
      break;
    case 0xC6:
      result = (__int64)sub_B251C0(a1, (__int64)a2);
      break;
    case 0xC7:
      result = sub_B2E3D0(a1, (__int64)a2);
      break;
    case 0xC8:
      result = (__int64)sub_B25230(a1, (__int64)a2);
      break;
    case 0xC9:
      result = (__int64)sub_B35C10(a1, (__int64)a2);
      break;
    case 0xCA:
      sub_18C74E0(a3, 0, 0, 4);
      v56 = sub_1DF2070(a3, a1[2].m128i_u64[1], a4, v53, v54, v55, a5, a6);
      if ( v56 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_493;
      v100 = v56;
      sub_190D5E0(a3, a5);
      v57 = a1[4].m128i_i32[0];
      v58 = (const void *)a1[4].m128i_i64[1];
      v59 = a1[4].m128i_u32[1];
      v99 = a1[3].m128i_u32[0];
      v98 = (const void *)a1[3].m128i_i64[1];
      v60 = a1[5].m128i_i8[0];
      v79 = a1[5].m128i_i64[1];
      v91 = sub_1E083C0(a2 + 294, 96, 3u);
      sub_B2E4F0(v91, (__int64)a2, a1, (unsigned __int64)v100 & 0xFFFFFFFFFFFFFFFELL, v98, v99, v57, v58, v59, v60, v79);
      result = v91;
      break;
    case 0xCB:
      result = (__int64)sub_B25310(a1, (__int64)a2);
      break;
    case 0xCC:
      result = (__int64)sub_B25380(a1, (__int64)a2);
      break;
    case 0xCD:
      result = (__int64)sub_B253F0(a1, (__int64)a2);
      break;
    case 0xCE:
      sub_18C74E0(a3, 0, 0, 4);
      v50 = sub_1DF2070(a3, a1[2].m128i_u64[1], a4, v47, v48, v49, a5, a6);
      if ( v50 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_493;
      sub_190D5E0(a3, a5);
      v51 = a1[3].m128i_u32[0];
      v52 = (const void *)a1[3].m128i_i64[1];
      v90 = (__m128i *)sub_1E083C0(a2 + 294, 64, 3u);
      sub_B2E6C0(v90, (__int64)a2, a1, (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFELL, v52, v51);
      result = (__int64)v90;
      break;
    case 0xCF:
      result = (__int64)sub_B34A30(a1, (__int64)a2);
      break;
    case 0xD0:
      result = (__int64)sub_B34960(a1, (__int64)a2);
      break;
    case 0xD1:
      result = (__int64)sub_B25460(a1, (__int64)a2);
      break;
    case 0xD2:
      result = (__int64)sub_B34890(a1, (__int64)a2);
      break;
    case 0xD3:
      result = (__int64)sub_B254D0(a1, (__int64)a2);
      break;
    case 0xD4:
      result = (__int64)sub_B25540(a1, (__int64)a2);
      break;
    case 0xD5:
      result = sub_B2E9E0(a1, (__int64)a2);
      break;
    case 0xD6:
      result = (__int64)sub_B25710(a1, (__int64)a2);
      break;
    case 0xD7:
      result = (__int64)sub_B25780(a1, (__int64)a2);
      break;
    case 0xD8:
      result = (__int64)sub_B257F0(a1, (__int64)a2);
      break;
    case 0xD9:
      result = (__int64)sub_B25860(a1, (__int64)a2);
      break;
    case 0xDA:
      result = (__int64)sub_B258E0(a1, (__int64)a2);
      break;
    case 0xDB:
      result = (__int64)sub_B25960(a1, (__int64)a2);
      break;
    case 0xDC:
      result = (__int64)sub_B25A60(a1, (__int64)a2);
      break;
    case 0xDD:
      result = (__int64)sub_B25AD0(a1, (__int64)a2);
      break;
    case 0xDE:
      sub_18C74E0(a3, 0, 0, 4);
      v46 = sub_1DF2070(a3, a1[2].m128i_u64[1], a4, v43, v44, v45, a5, a6);
      if ( v46 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_493;
      sub_190D5E0(a3, a5);
      v89 = (__m128i *)sub_1E083C0(a2 + 294, 48, 3u);
      sub_B131E0(v89, (__int64)a2, a1, (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFFELL);
      result = (__int64)v89;
      break;
    case 0xDF:
      result = (__int64)sub_B25BC0(a1, (__int64)a2);
      break;
    case 0xE0:
      result = (__int64)sub_B25C30(a1, (__int64)a2);
      break;
    case 0xE1:
      result = (__int64)sub_B25EF0(a1, (__int64)a2);
      break;
    case 0xE2:
      result = sub_B2EB80(a1, (__int64)a2);
      break;
    case 0xE3:
      result = (__int64)sub_B265F0(a1, (__int64)a2);
      break;
    case 0xE4:
      result = (__int64)sub_B26660(a1, (__int64)a2);
      break;
    case 0xE5:
      result = (__int64)sub_B266D0(a1, (__int64)a2);
      break;
    case 0xE6:
      result = (__int64)sub_B26740(a1, (__int64)a2);
      break;
    case 0xE7:
      result = (__int64)sub_B267C0(a1, (__int64)a2);
      break;
    case 0xE8:
      result = (__int64)sub_B26830(a1, (__int64)a2);
      break;
    case 0xE9:
      result = (__int64)sub_B268A0(a1, (__int64)a2);
      break;
    case 0xEA:
      result = (__int64)sub_B26910(a1, (__int64)a2);
      break;
    case 0xEB:
      result = (__int64)sub_B26980(a1, (__int64)a2);
      break;
    case 0xEC:
      result = (__int64)sub_B26A00(a1, (__int64)a2);
      break;
    case 0xED:
      result = (__int64)sub_B26A70(a1, (__int64)a2);
      break;
    case 0xEE:
      result = (__int64)sub_B26B50(a1, (__int64)a2);
      break;
    case 0xEF:
      result = (__int64)sub_B26BC0(a1, (__int64)a2);
      break;
    case 0xF0:
      result = (__int64)sub_B26C30(a1, (__int64)a2);
      break;
    case 0xF1:
      result = (__int64)sub_B26CA0(a1, (__int64)a2);
      break;
    case 0xF2:
      sub_18C74E0(a3, 0, 0, 4);
      v42 = sub_1DF2070(a3, a1[2].m128i_u64[1], a4, v39, v40, v41, a5, a6);
      if ( v42 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_493;
      sub_190D5E0(a3, a5);
      v88 = (__m128i *)sub_1E083C0(a2 + 294, 48, 3u);
      sub_B13EC0(v88, (__int64)a2, a1, (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFELL);
      result = (__int64)v88;
      break;
    case 0xF3:
      sub_18C74E0(a3, 0, 0, 4);
      v35 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v36 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v35, v36, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v37 = v102;
      v38 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v38, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v87 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2EF10(v87, (__int64)a2, a1, v38, v37);
      result = (__int64)v87;
      break;
    case 0xF4:
      result = (__int64)sub_B27000(a1, (__int64)a2);
      break;
    case 0xF5:
      result = (__int64)sub_B270E0(a1, (__int64)a2);
      break;
    case 0xF6:
      result = (__int64)sub_B271C0(a1, (__int64)a2);
      break;
    case 0xF7:
      result = (__int64)sub_B27230(a1, (__int64)a2);
      break;
    case 0xF8:
      result = (__int64)sub_B272A0(a1, (__int64)a2);
      break;
    case 0xF9:
      result = (__int64)sub_B27310(a1, (__int64)a2);
      break;
    case 0xFA:
      result = (__int64)sub_B27380(a1, (__int64)a2);
      break;
    case 0xFB:
      result = (__int64)sub_B273F0(a1, (__int64)a2);
      break;
    case 0xFC:
      result = (__int64)sub_B27460(a1, (__int64)a2);
      break;
    case 0xFD:
      result = (__int64)sub_B274D0(a1, (__int64)a2);
      break;
    case 0xFE:
      result = (__int64)sub_B27540(a1, (__int64)a2);
      break;
    case 0xFF:
      result = (__int64)sub_B275B0(a1, (__int64)a2);
      break;
    case 0x100:
      result = (__int64)sub_B27620(a1, (__int64)a2);
      break;
    case 0x101:
      result = (__int64)sub_B27690(a1, (__int64)a2);
      break;
    case 0x102:
      result = (__int64)sub_B27700(a1, (__int64)a2);
      break;
    case 0x103:
      result = (__int64)sub_B27770(a1, (__int64)a2);
      break;
    case 0x104:
      result = (__int64)sub_B277E0(a1, (__int64)a2);
      break;
    case 0x105:
      result = (__int64)sub_B27850(a1, (__int64)a2);
      break;
    case 0x106:
      result = (__int64)sub_B278C0(a1, (__int64)a2);
      break;
    case 0x107:
      result = (__int64)sub_B27A90(a1, (__int64)a2);
      break;
    case 0x108:
      result = (__int64)sub_B27B00(a1, (__int64)a2);
      break;
    case 0x109:
      result = (__int64)sub_B27B80(a1, (__int64)a2);
      break;
    case 0x10A:
      result = (__int64)sub_B27BF0(a1, (__int64)a2);
      break;
    case 0x10B:
      result = (__int64)sub_B27CD0(a1, (__int64)a2);
      break;
    case 0x10C:
      result = (__int64)sub_B27D40(a1, (__int64)a2);
      break;
    case 0x10D:
      result = (__int64)sub_B27DB0(a1, (__int64)a2);
      break;
    case 0x10E:
      result = (__int64)sub_B27E20(a1, (__int64)a2);
      break;
    case 0x10F:
      result = (__int64)sub_B27E90(a1, (__int64)a2);
      break;
    case 0x110:
      result = (__int64)sub_B27F70(a1, (__int64)a2);
      break;
    case 0x111:
      result = (__int64)sub_B27FE0(a1, (__int64)a2);
      break;
    case 0x112:
      result = (__int64)sub_B28130(a1, (__int64)a2);
      break;
    case 0x113:
      result = (__int64)sub_B28270(a1, (__int64)a2);
      break;
    case 0x114:
      result = (__int64)sub_B282E0(a1, (__int64)a2);
      break;
    case 0x115:
      result = (__int64)sub_B28350(a1, (__int64)a2);
      break;
    case 0x116:
      result = (__int64)sub_B283C0(a1, (__int64)a2);
      break;
    case 0x117:
      result = (__int64)sub_B28430(a1, (__int64)a2);
      break;
    case 0x118:
      result = (__int64)sub_B38B80(a1, a2);
      break;
    case 0x119:
      v33 = a1[2].m128i_u32[2];
      v34 = (const void *)a1[3].m128i_i64[0];
      v86 = (__m128i *)sub_1E083C0(a2 + 294, 56, 3u);
      sub_B2EFA0(v86, (__int64)a2, a1, v34, v33);
      result = (__int64)v86;
      break;
    case 0x11A:
      result = (__int64)sub_B284A0(a1, (__int64)a2);
      break;
    case 0x11B:
      result = (__int64)sub_B28510(a1, (__int64)a2);
      break;
    case 0x11C:
      result = (__int64)sub_B28580(a1, (__int64)a2);
      break;
    case 0x11D:
      result = (__int64)sub_B285F0(a1, (__int64)a2);
      break;
    case 0x11E:
      result = (__int64)sub_B28660(a1, (__int64)a2);
      break;
    case 0x11F:
      result = (__int64)sub_B286D0(a1, (__int64)a2);
      break;
    case 0x120:
      result = (__int64)sub_B287A0(a1, (__int64)a2);
      break;
    case 0x121:
      result = (__int64)sub_B28810(a1, (__int64)a2);
      break;
    case 0x122:
      result = (__int64)sub_B28980(a1, (__int64)a2);
      break;
    case 0x123:
      result = (__int64)sub_B289F0(a1, (__int64)a2);
      break;
    case 0x124:
      result = (__int64)sub_B28A60(a1, (__int64)a2);
      break;
    case 0x125:
      result = (__int64)sub_B34F10(a1, (__int64)a2);
      break;
    case 0x126:
      result = (__int64)sub_B28B50(a1, (__int64)a2);
      break;
    case 0x127:
      result = (__int64)sub_B28BC0(a1, (__int64)a2);
      break;
    case 0x128:
      result = sub_B2F710((__int64)a1, (__int64)a2);
      break;
    case 0x129:
      result = (__int64)sub_B28CD0(a1, (__int64)a2);
      break;
    case 0x12A:
      result = (__int64)sub_B28DB0(a1, (__int64)a2);
      break;
    case 0x12B:
      result = (__int64)sub_B28E20(a1, (__int64)a2);
      break;
    case 0x12C:
      result = (__int64)sub_B28E90(a1, (__int64)a2);
      break;
    case 0x12D:
      result = (__int64)sub_B28F00(a1, (__int64)a2);
      break;
    case 0x12E:
      result = (__int64)sub_B28F70(a1, (__int64)a2);
      break;
    case 0x12F:
      result = (__int64)sub_B29050(a1, (__int64)a2);
      break;
    case 0x130:
      result = (__int64)sub_B290D0(a1, (__int64)a2);
      break;
    case 0x131:
      result = (__int64)sub_B29150(a1, (__int64)a2);
      break;
    case 0x132:
      result = (__int64)sub_B293A0(a1, (__int64)a2);
      break;
    case 0x133:
      result = (__int64)sub_B29410(a1, (__int64)a2);
      break;
    case 0x134:
      result = (__int64)sub_B29480(a1, (__int64)a2);
      break;
    case 0x135:
      result = (__int64)sub_B29570(a1, (__int64)a2);
      break;
    case 0x136:
      result = (__int64)sub_B296C0(a1, (__int64)a2);
      break;
    case 0x137:
      result = (__int64)sub_B29730(a1, (__int64)a2);
      break;
    case 0x138:
      result = (__int64)sub_B29900(a1, (__int64)a2);
      break;
    case 0x139:
      result = (__int64)sub_B29970(a1, (__int64)a2);
      break;
    case 0x13A:
      result = (__int64)sub_B299E0(a1, (__int64)a2);
      break;
    case 0x13B:
      result = (__int64)sub_B29A50(a1, (__int64)a2);
      break;
    case 0x13C:
      result = (__int64)sub_B29AC0(a1, (__int64)a2);
      break;
    case 0x13D:
      result = (__int64)sub_B29BA0(a1, (__int64)a2);
      break;
    case 0x13E:
      result = (__int64)sub_B29C10(a1, (__int64)a2);
      break;
    case 0x13F:
      result = (__int64)sub_B29C80(a1, (__int64)a2);
      break;
    case 0x140:
      result = (__int64)sub_B29FA0(a1, (__int64)a2);
      break;
    case 0x141:
      result = (__int64)sub_B2A160(a1, (__int64)a2);
      break;
    case 0x142:
      result = (__int64)sub_B2A240(a1, (__int64)a2);
      break;
    case 0x143:
      result = (__int64)sub_B2A2B0(a1, (__int64)a2);
      break;
    case 0x144:
      result = (__int64)sub_B2F8E0(a1, (__int64)a2);
      break;
    case 0x145:
      result = (__int64)sub_B2A330(a1, (__int64)a2);
      break;
    case 0x146:
      result = (__int64)sub_B2A3A0(a1, (__int64)a2);
      break;
    case 0x147:
      result = (__int64)sub_B33910(a1, (__int64)a2);
      break;
    case 0x148:
      result = (__int64)sub_B2A560(a1, (__int64)a2);
      break;
    case 0x149:
      result = (__int64)sub_B34FE0(a1, (__int64)a2);
      break;
    case 0x14A:
      result = (__int64)sub_B350B0(a1, (__int64)a2);
      break;
    case 0x14B:
      result = (__int64)sub_B359A0(a1, (__int64)a2);
      break;
    case 0x14C:
      result = (__int64)sub_B358D0(a1, (__int64)a2);
      break;
    case 0x14D:
      result = (__int64)sub_B35250(a1, (__int64)a2);
      break;
    case 0x14E:
      v32 = sub_1DD4AE0(a3, (void **)a1[2].m128i_i64[1], a4, a1[1].m128i_i32[2], a1->m128i_i64[0], 0, a5, a6);
      if ( !v32 )
        goto LABEL_503;
      v85 = (__m128i *)sub_1E083C0(a2 + 294, 48, 3u);
      sub_B17640(v85, (__int64)a2, a1, (__int64)v32);
      result = (__int64)v85;
      break;
    case 0x14F:
      result = (__int64)sub_B2A6E0(a1, (__int64)a2);
      break;
    case 0x150:
      sub_18C74E0(a3, 0, 0, 4);
      v31 = sub_1DF2070(a3, a1[2].m128i_u64[1], a4, v28, v29, v30, a5, a6);
      if ( v31 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_493;
      sub_190D5E0(a3, a5);
      v84 = (__m128i *)sub_1E083C0(a2 + 294, 48, 3u);
      sub_B17740(v84, (__int64)a2, a1, (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFELL);
      result = (__int64)v84;
      break;
    case 0x151:
      result = (__int64)sub_B2A930(a1, (__int64)a2);
      break;
    case 0x152:
      result = (__int64)sub_B2AA80(a1, (__int64)a2);
      break;
    case 0x153:
      result = (__int64)sub_B36820(a1, (__int64)a2);
      break;
    case 0x154:
      result = (__int64)sub_B2ABD0(a1, (__int64)a2);
      break;
    case 0x155:
      result = (__int64)sub_B2AC40(a1, (__int64)a2);
      break;
    case 0x156:
      result = (__int64)sub_B2ACB0(a1, (__int64)a2);
      break;
    case 0x157:
      result = (__int64)sub_B2AD90(a1, (__int64)a2);
      break;
    case 0x158:
      sub_18C74E0(a3, 0, 0, 4);
      v24 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v25 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v24, v25, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v26 = v102;
      v27 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v27, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v83 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2FCE0(v83, (__int64)a2, a1, v27, v26);
      result = (__int64)v83;
      break;
    case 0x159:
      result = (__int64)sub_B2AE00(a1, (__int64)a2);
      break;
    case 0x15A:
      result = (__int64)sub_B2AE70(a1, (__int64)a2);
      break;
    case 0x15B:
      sub_18C74E0(a3, 0, 0, 4);
      v20 = (unsigned __int64 *)a1[3].m128i_i64[0];
      v21 = a1[2].m128i_u32[2];
      src = v103;
      v102 = 0x400000000LL;
      if ( (unsigned __int8)sub_1DDF840(a3, v20, v21, 0, a4, (__int64)&src, a5, a6) )
      {
        if ( src != v103 )
          free(src);
        goto LABEL_518;
      }
      v22 = v102;
      v23 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
      if ( 8LL * (unsigned int)v102 )
        memmove(v23, src, 8LL * (unsigned int)v102);
      if ( src != v103 )
        free(src);
      sub_190D5E0(a3, a5);
      v82 = (__m128i *)sub_1E083C0(a2 + 294, 72, 3u);
      sub_B2FDF0(v82, (__int64)a2, a1, v23, v22);
      result = (__int64)v82;
      break;
    case 0x15C:
      result = (__int64)sub_B2AF00(a1, (__int64)a2);
      break;
    case 0x15D:
      result = (__int64)sub_B2AF90(a1, (__int64)a2);
      break;
    case 0x15E:
      result = (__int64)sub_B2B000(a1, (__int64)a2);
      break;
    case 0x15F:
      result = (__int64)sub_B2B070(a1, (__int64)a2);
      break;
    case 0x160:
      result = (__int64)sub_B2B0E0(a1, (__int64)a2);
      break;
    case 0x161:
      v18 = sub_1DD4AE0(a3, (void **)a1[2].m128i_i64[1], a4, a1[1].m128i_i32[2], a1->m128i_i64[0], 0, a5, a6);
      if ( v18 )
      {
        v19 = a1[3].m128i_i8[0];
        v81 = (__m128i *)sub_1E083C0(a2 + 294, 56, 3u);
        sub_B18E70(v81, (__int64)a2, a1, (__int64)v18, v19);
        result = (__int64)v81;
      }
      else
      {
LABEL_503:
        result = 0;
      }
      break;
    case 0x162:
      result = (__int64)sub_B2B2C0(a1, (__int64)a2);
      break;
    case 0x163:
      result = (__int64)sub_B2B330(a1, (__int64)a2);
      break;
    case 0x164:
      result = (__int64)sub_B33FA0(a1, (__int64)a2);
      break;
    case 0x165:
      result = (__int64)sub_B2B3A0(a1, (__int64)a2);
      break;
    case 0x166:
      result = (__int64)sub_B2B410(a1, (__int64)a2);
      break;
    case 0x167:
      result = (__int64)sub_B2B490(a1, (__int64)a2);
      break;
    case 0x168:
      result = (__int64)sub_B2B600(a1, (__int64)a2);
      break;
    case 0x169:
      result = (__int64)sub_B2B670(a1, (__int64)a2);
      break;
    case 0x16A:
      result = (__int64)sub_B2B750(a1, (__int64)a2);
      break;
    case 0x16B:
      result = (__int64)sub_B2B7C0(a1, (__int64)a2);
      break;
    case 0x16C:
      result = (__int64)sub_B2B830(a1, (__int64)a2);
      break;
    case 0x16D:
      result = (__int64)sub_B2B990(a1, (__int64)a2);
      break;
    case 0x16E:
      result = (__int64)sub_B35320(a1, (__int64)a2);
      break;
    case 0x16F:
      result = (__int64)sub_B353F0(a1, (__int64)a2);
      break;
    case 0x170:
      result = (__int64)sub_B2BA10(a1, (__int64)a2);
      break;
    case 0x171:
      result = (__int64)sub_B2BB60(a1, (__int64)a2);
      break;
    case 0x172:
      result = (__int64)sub_B2BC40(a1, (__int64)a2);
      break;
    case 0x173:
      result = (__int64)sub_B2BCB0(a1, (__int64)a2);
      break;
    case 0x174:
      result = (__int64)sub_B35590(a1, (__int64)a2);
      break;
    case 0x175:
      result = (__int64)sub_B2BD90(a1, (__int64)a2);
      break;
    case 0x176:
      result = (__int64)sub_B2BEE0(a1, (__int64)a2);
      break;
    case 0x177:
      result = (__int64)sub_B35800(a1, (__int64)a2);
      break;
    case 0x178:
      result = (__int64)sub_B35730(a1, (__int64)a2);
      break;
    case 0x179:
      result = (__int64)sub_B38800(a1, a2);
      break;
    case 0x17A:
      result = (__int64)sub_B34D70(a1, (__int64)a2);
      break;
    case 0x17B:
      result = (__int64)sub_B2C0F0(a1, (__int64)a2);
      break;
    case 0x17C:
      result = (__int64)sub_B2C240(a1, (__int64)a2);
      break;
    case 0x17D:
      result = (__int64)sub_B2C2B0(a1, (__int64)a2);
      break;
    case 0x17E:
      result = (__int64)sub_B2C320(a1, (__int64)a2);
      break;
    case 0x17F:
      sub_18C74E0(a3, 0, 0, 4);
      v14 = sub_1DF2070(a3, a1[2].m128i_u64[1], a4, v11, v12, v13, a5, a6);
      if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
LABEL_493:
        sub_190D5E0(a3, a5);
        result = 0;
      }
      else
      {
        sub_190D5E0(a3, a5);
        sub_18C74E0(a3, 0, 0, 4);
        v15 = (unsigned __int64 *)a1[3].m128i_i64[1];
        v16 = a1[3].m128i_u32[0];
        src = v103;
        v102 = 0x400000000LL;
        if ( (unsigned __int8)sub_1DDF840(a3, v15, v16, 0, a4, (__int64)&src, a5, a6) )
        {
          if ( src != v103 )
            free(src);
LABEL_518:
          sub_190D5E0(a3, a5);
          result = 0;
        }
        else
        {
          v97 = v102;
          v17 = (void *)sub_9C3B30(a2 + 294, 8LL * (unsigned int)v102, 4u);
          if ( 8LL * (unsigned int)v102 )
            memmove(v17, src, 8LL * (unsigned int)v102);
          if ( src != v103 )
            free(src);
          sub_190D5E0(a3, a5);
          v80 = (__m128i *)sub_1E083C0(a2 + 294, 80, 3u);
          sub_B30300(v80, (__int64)a2, a1, (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL, v17, v97);
          result = (__int64)v80;
        }
      }
      break;
    case 0x180:
      result = (__int64)sub_B2C550(a1, (__int64)a2);
      break;
    case 0x181:
    case 0x18C:
      result = 0;
      break;
    case 0x182:
      result = (__int64)sub_B33830(a1, (__int64)a2);
      break;
    case 0x183:
      result = (__int64)sub_B2C6C0(a1, (__int64)a2);
      break;
    case 0x184:
      result = (__int64)sub_B2C800(a1, (__int64)a2);
      break;
    case 0x185:
      result = (__int64)sub_B2C870(a1, (__int64)a2);
      break;
    case 0x186:
      result = (__int64)sub_B2C8E0(a1, (__int64)a2);
      break;
    case 0x187:
      result = (__int64)sub_B2C950(a1, (__int64)a2);
      break;
    case 0x188:
      result = sub_B33750(a1, (__int64)a2);
      break;
    case 0x189:
      result = (__int64)sub_B2C9C0(a1, (__int64)a2);
      break;
    case 0x18A:
      result = (__int64)sub_B2CA40(a1, (__int64)a2);
      break;
    case 0x18B:
      result = (__int64)sub_B2CAB0(a1, (__int64)a2);
      break;
    case 0x18D:
      result = (__int64)sub_B2CC10(a1, (__int64)a2);
      break;
    case 0x18E:
      result = (__int64)sub_B34070(a1, (__int64)a2);
      break;
    case 0x18F:
      result = (__int64)sub_B2CC80(a1, (__int64)a2);
      break;
    case 0x190:
      result = (__int64)sub_B2CCF0(a1, (__int64)a2);
      break;
    case 0x191:
      result = (__int64)sub_B343B0(a1, (__int64)a2);
      break;
    case 0x192:
      result = (__int64)sub_B342E0(a1, (__int64)a2);
      break;
    case 0x193:
      result = (__int64)sub_B34210(a1, (__int64)a2);
      break;
    case 0x194:
      result = (__int64)sub_B34140(a1, (__int64)a2);
      break;
    case 0x195:
      result = (__int64)sub_B2CDD0(a1, (__int64)a2);
      break;
    case 0x196:
      result = (__int64)sub_B2CE60(a1, (__int64)a2);
      break;
    case 0x197:
      result = (__int64)sub_B2CED0(a1, (__int64)a2);
      break;
    case 0x198:
      result = (__int64)sub_B2CF40(a1, (__int64)a2);
      break;
    case 0x199:
      result = (__int64)sub_B2D030(a1, (__int64)a2);
      break;
    case 0x19A:
      result = (__int64)sub_B38480(a1, a2);
      break;
    case 0x19B:
      result = (__int64)sub_B34550(a1, (__int64)a2);
      break;
    case 0x19C:
      result = (__int64)sub_B22C20(a1, (__int64)a2);
      break;
    case 0x19D:
      result = (__int64)sub_B238B0(a1, (__int64)a2);
      break;
    case 0x19E:
      result = (__int64)sub_B24370(a1, (__int64)a2);
      break;
    case 0x19F:
      result = (__int64)sub_B34B00(a1, (__int64)a2);
      break;
    case 0x1A0:
      result = (__int64)sub_B347C0(a1, (__int64)a2);
      break;
    case 0x1A1:
      result = (__int64)sub_B26DF0(a1, (__int64)a2);
      break;
    case 0x1A2:
      result = (__int64)sub_B26F80(a1, (__int64)a2);
      break;
    case 0x1A3:
      result = (__int64)sub_B27930(a1, (__int64)a2);
      break;
    case 0x1A4:
      result = (__int64)sub_B38D40(a1, a2);
      break;
    case 0x1A5:
      result = (__int64)sub_B28050(a1, (__int64)a2);
      break;
    case 0x1A6:
      result = (__int64)sub_B28AE0(a1, (__int64)a2);
      break;
    case 0x1A7:
      result = sub_B2F3F0((__int64)a1, (__int64)a2);
      break;
    case 0x1A8:
      result = (__int64)sub_B28C50(a1, (__int64)a2);
      break;
    case 0x1A9:
      result = (__int64)sub_B28FE0(a1, (__int64)a2);
      break;
    case 0x1AA:
      result = (__int64)sub_B291E0(a1, (__int64)a2);
      break;
    case 0x1AB:
      result = (__int64)sub_B29250(a1, (__int64)a2);
      break;
    case 0x1AC:
      result = (__int64)sub_B292C0(a1, (__int64)a2);
      break;
    case 0x1AD:
      result = (__int64)sub_B29330(a1, (__int64)a2);
      break;
    case 0x1AE:
      result = (__int64)sub_B297A0(a1, (__int64)a2);
      break;
    case 0x1AF:
      result = (__int64)sub_B29810(a1, (__int64)a2);
      break;
    case 0x1B0:
      result = (__int64)sub_B34CA0(a1, (__int64)a2);
      break;
    case 0x1B1:
      result = (__int64)sub_B29B30(a1, (__int64)a2);
      break;
    case 0x1B2:
      result = (__int64)sub_B29D00(a1, (__int64)a2);
      break;
    case 0x1B3:
      result = (__int64)sub_B2A1D0(a1, (__int64)a2);
      break;
    case 0x1B4:
      result = (__int64)sub_B2B150(a1, (__int64)a2);
      break;
    case 0x1B5:
      result = (__int64)sub_B2BE00(a1, (__int64)a2);
      break;
    case 0x1B6:
      result = (__int64)sub_B2BE70(a1, (__int64)a2);
      break;
    case 0x1B7:
      result = (__int64)sub_B35660(a1, (__int64)a2);
      break;
    case 0x1B8:
      result = sub_B2BF50((__int64)a1, (__int64)a2);
      break;
    case 0x1B9:
      result = sub_B2BFF0((__int64)a1, (__int64)a2);
      break;
    case 0x1BA:
      result = (__int64)sub_B2C1D0(a1, (__int64)a2);
      break;
  }
  return result;
}
