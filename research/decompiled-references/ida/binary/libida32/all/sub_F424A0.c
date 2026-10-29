unsigned __int64 __fastcall sub_F424A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rsi
  char v24; // r15
  _QWORD *v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  _QWORD *v36; // r13
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // r15
  char v74; // bl
  _QWORD *v75; // rdx
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  _QWORD *v82; // r15
  char v83; // di
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r13
  __int64 v89; // rax
  void *v90; // rdi
  unsigned __int32 v91; // eax
  _QWORD *v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // [rsp+0h] [rbp-158h]
  unsigned __int64 v95; // [rsp+0h] [rbp-158h]
  unsigned __int64 v96; // [rsp+0h] [rbp-158h]
  unsigned __int64 v97; // [rsp+0h] [rbp-158h]
  __int64 v98; // [rsp+0h] [rbp-158h]
  char v99; // [rsp+0h] [rbp-158h]
  unsigned __int64 v100; // [rsp+8h] [rbp-150h]
  __int64 v101; // [rsp+8h] [rbp-150h]
  __int64 v102; // [rsp+10h] [rbp-148h]
  __int64 v103; // [rsp+10h] [rbp-148h]
  __int64 v104; // [rsp+18h] [rbp-140h]
  _QWORD *v105; // [rsp+28h] [rbp-130h]
  _QWORD v106[2]; // [rsp+30h] [rbp-128h] BYREF
  void *v107; // [rsp+40h] [rbp-118h] BYREF
  __int64 v108; // [rsp+48h] [rbp-110h]
  _BYTE v109[32]; // [rsp+50h] [rbp-108h] BYREF
  void *ptr; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v111; // [rsp+78h] [rbp-E0h]
  _BYTE v112[32]; // [rsp+80h] [rbp-D8h] BYREF
  __m128 v113; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v114[8]; // [rsp+B0h] [rbp-A8h] BYREF
  int v115; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v116; // [rsp+C0h] [rbp-98h]
  __int64 v117; // [rsp+C8h] [rbp-90h]

  v5 = a2 & 7;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = a2 & 8;
  if ( (_DWORD)v8 )
  {
    v5 |= *(_QWORD *)(v6 + 24);
    v6 = *(_QWORD *)v6;
  }
  switch ( *(_BYTE *)(v6 + 16) )
  {
    case 0:
      v31 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v32 = sub_F424A0(a1, *(_QWORD *)(v6 + 40));
      if ( (v32 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( v31 == *(_QWORD *)(v6 + 32) && v32 == *(_QWORD *)(v6 + 40) )
        goto LABEL_5;
      v9 = sub_A521C0(*a1, v31, v32);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 1:
      v30 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v30 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v30 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A51FE0((_QWORD *)*a1, v30);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 2:
      v9 = sub_F43400(a1, v6);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 3:
      v29 = sub_F43400(a1, v6);
      v9 = v29 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v9 = sub_A4EC50(*a1, v29);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 4:
    case 0xD:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1D:
    case 0x20:
    case 0x24:
    case 0x26:
    case 0x2D:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x37:
      goto LABEL_5;
    case 5:
      v21 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v21 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v21 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4E110(*a1, v21, (*(_WORD *)(v6 + 18) >> 6) & 7, (*(_BYTE *)(v6 + 18) >> 3) & 7);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 6:
      v20 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v20 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v20 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4DD00(
             (_QWORD *)*a1,
             v20,
             *(_QWORD *)(v6 + 40),
             (*(_WORD *)(v6 + 18) >> 6) & 7,
             (*(_BYTE *)(v6 + 18) >> 3) & 7);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 7:
      v19 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v19 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4EEB0(*a1, v19);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 8:
      v17 = sub_F424A0(a1, *(_QWORD *)(v6 + 40));
      if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v18 = sub_F424A0(a1, *(_QWORD *)(v6 + 48));
      if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( v17 == *(_QWORD *)(v6 + 40) && v18 == *(_QWORD *)(v6 + 48) )
        goto LABEL_5;
      v9 = sub_A4DB10(*a1, *(_WORD *)(v6 + 18) >> 3, v17, v18, *(_QWORD *)(v6 + 32));
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 9:
    case 0xA:
    case 0xC:
    case 0x11:
    case 0x1B:
    case 0x1C:
    case 0x27:
    case 0x29:
    case 0x38:
      return 0;
    case 0xB:
      v15 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v15 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A50DC0(*a1, v15);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0xE:
      v58 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v58 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v58 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v58 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A50FA0(*a1, v58);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0xF:
      if ( (BYTE1(**(_DWORD **)(v6 + 24)) & 0x80u) != 0 )
        goto LABEL_5;
      v55 = sub_F32940(v6);
      v56 = sub_F424A0(a1, v55);
      v9 = v56 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v56 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v57 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (**(_DWORD **)(v6 + 24) & 0x8000) == 0 )
      {
        v96 = v56 & 0xFFFFFFFFFFFFFFF0LL;
        v57 = sub_F32940(v6);
        v9 = v96;
      }
      v10 = (_QWORD *)v9;
      v9 = v56;
      if ( v56 == v57 )
        goto LABEL_5;
      goto LABEL_7;
    case 0x10:
      if ( (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v6 + 17) & 4) == 0 )
        goto LABEL_5;
      v54 = sub_F424A0(a1, *(_QWORD *)(v6 + 24));
      v9 = v54 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v54 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v54 == *(_QWORD *)(v6 + 24) )
        goto LABEL_5;
      v9 = sub_A91B00(
             *a1,
             v54,
             (*(_BYTE *)(v6 + 18) >> 3) & 3,
             (*(_BYTE *)(v6 + 17) & 4) != 0,
             0,
             *(__int64 **)(v6 + 32),
             v6 + 48,
             *(unsigned int *)(v6 + 20));
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x18:
      goto LABEL_14;
    case 0x19:
      v62 = sub_F424A0(a1, *(_QWORD *)(v6 + 24));
      v9 = v62 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v62 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v62 == *(_QWORD *)(v6 + 24) )
        goto LABEL_5;
      v63 = *a1;
      v113.m128_i16[0] = *(_WORD *)(v6 + 20) >> 2;
      v9 = sub_A4D8D0(v63, v62, (unsigned __int16 *)&v113);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x1A:
      v103 = sub_F424A0(a1, *(_QWORD *)(v6 + 24));
      v9 = v103 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v103 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v73 = (_QWORD *)(v6 + 48);
      v74 = 0;
      v107 = v109;
      v108 = 0x400000000LL;
      v98 = v6 + 48 + 8LL * *(unsigned __int16 *)(v6 + 22);
      if ( v6 + 48 == v98 )
        goto LABEL_147;
      break;
    case 0x1E:
      v47 = sub_F424A0(a1, *(_QWORD *)(v6 + 24));
      v9 = v47 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v47 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v10 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
      v9 = v47;
      if ( v47 == *(_QWORD *)(v6 + 24) )
        goto LABEL_5;
      goto LABEL_7;
    case 0x1F:
      v46 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v46 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v46 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A53090(*a1, v46, *(_DWORD *)(v6 + 40), *(_DWORD *)(v6 + 44));
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x21:
      v34 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v35 = v34;
      v9 = v34 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v34 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v36 = (_QWORD *)*a1;
      v37 = sub_F3DED0(v6);
      v9 = sub_A97CE0(v36, v35, *(_QWORD *)(v6 + 40), (__int64)v37, v38, v39);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x22:
      v33 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v33 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A51180(*a1, v33);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x23:
      v22 = sub_F422E0(v6);
      v23 = *(_QWORD *)(v6 + 24);
      v24 = v22;
      if ( v22 )
      {
        v113.m128_u64[0] = *a1;
        v80 = sub_F424A0(&v113, v23);
        v81 = (*(_WORD *)(v6 + 18) >> 3) & 0x7F;
        v9 = sub_A51360(*a1, v80, (_QWORD *)(v6 + 48), v81, (_BYTE *)(v6 + 8 * v81 + 48), *(_BYTE *)(v6 + 19) >> 2, 0);
        v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_6;
      }
      v100 = sub_F424A0(a1, v23);
      v9 = v100 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v100 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v25 = (_QWORD *)(v6 + 48);
      v113.m128_u64[0] = (unsigned __int64)v114;
      v113.m128_u64[1] = 0x400000000LL;
      v94 = v6 + 48 + (*(_WORD *)(v6 + 18) & 0x3F8);
      if ( v6 + 48 == v94 )
      {
        v91 = 0;
      }
      else
      {
        do
        {
          v26 = *v25;
          v27 = sub_F424A0(a1, *v25);
          v9 = v27 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            v10 = nullptr;
            goto LABEL_154;
          }
          v28 = v113.m128_u32[2];
          if ( v27 != v26 )
            v24 = 1;
          if ( (unsigned __int64)v113.m128_u32[2] + 1 > v113.m128_u32[3] )
          {
            v102 = v27;
            sub_22134E0(&v113, v114, v113.m128_u32[2] + 1LL, 8);
            v28 = v113.m128_u32[2];
            v27 = v102;
          }
          *(_QWORD *)(v113.m128_u64[0] + 8 * v28) = v27;
          ++v25;
          v91 = ++v113.m128_i32[2];
        }
        while ( (_QWORD *)v94 != v25 );
      }
      if ( v100 == *(_QWORD *)(v6 + 24) && !v24 )
      {
        v9 = v6 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v9 = sub_A51360(
               *a1,
               v100,
               v113.m128_u64[0],
               v91,
               (_BYTE *)(v6 + (*(_WORD *)(v6 + 18) & 0x3F8) + 48),
               (*(_BYTE *)(v6 + 19) >> 2) & 0x3F,
               *(_BYTE *)(v6 + 20) & 1);
        v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      }
LABEL_154:
      v90 = (void *)v113.m128_u64[0];
      if ( (_BYTE *)v113.m128_u64[0] == v114 )
        goto LABEL_6;
      goto LABEL_146;
    case 0x25:
      v48 = sub_F424A0(a1, *(_QWORD *)(v6 + 8));
      v9 = v48 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v10 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
      v9 = v48;
      if ( v48 == *(_QWORD *)(v6 + 8) )
        goto LABEL_5;
      goto LABEL_7;
    case 0x28:
      v49 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v49 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v49 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A52370(*a1, v49);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2A:
      v79 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v79 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v79 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v79 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4C2D0(*a1, v79);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2B:
      v72 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v72 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v72 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v72 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4F2F0(*a1, v72, (*(_WORD *)(v6 + 18) & 8) != 0);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2C:
      v64 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v64 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v64 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v64 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4F090(*a1, v64);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2E:
      if ( (*(_BYTE *)(v6 + 18) & 8) != 0 )
        v69 = *(_QWORD *)(v6 + 48);
      else
        v69 = *(_QWORD *)(v6 + 8);
      v70 = sub_F424A0(a1, v69);
      v9 = v70 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v70 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( (*(_BYTE *)(v6 + 18) & 8) != 0 )
        v71 = *(_QWORD *)(v6 + 48);
      else
        v71 = *(_QWORD *)(v6 + 8);
      if ( v70 == v71 )
        goto LABEL_5;
      v9 = sub_A53F50(
             *a1,
             v70,
             *(_QWORD *)(v6 + 32),
             *(_WORD *)(v6 + 20) & 0x7FFF,
             *(_WORD *)(v6 + 22) & 0x7FFF,
             *(_BYTE *)(v6 + 21) >> 7);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x31:
      if ( (*(_BYTE *)(v6 + 17) & 4) != 0 && !sub_F32950(v6) )
        goto LABEL_5;
      v59 = sub_F32C40(v6);
      v60 = sub_F424A0(a1, v59);
      v44 = v60;
      v9 = v60 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v60 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v95 = v60 & 0xFFFFFFFFFFFFFFF0LL;
      v45 = sub_F32C40(v6);
      goto LABEL_64;
    case 0x33:
      if ( (**(_DWORD **)(v6 + 24) & 0x10000) != 0 )
        goto LABEL_5;
      v50 = sub_F41160(v6, v8, a3, a4, a5);
      v51 = sub_F424A0(a1, v50);
      v44 = v51;
      v9 = v51 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v51 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v95 = v51 & 0xFFFFFFFFFFFFFFF0LL;
      v45 = sub_F41160(v6, v50, v52, v9, v53);
LABEL_64:
      v10 = (_QWORD *)v95;
      v9 = v44;
      if ( v45 == v44 )
        goto LABEL_5;
      goto LABEL_7;
    case 0x34:
      v40 = sub_F41040(v6, v8, a3, a4, a5);
      v41 = sub_F424A0(a1, v40);
      v44 = v41;
      v9 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v95 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      v45 = sub_F41040(v6, v40, v42, v9, v43);
      goto LABEL_64;
    case 0x35:
      v65 = sub_F39D80(v6);
      v66 = sub_F424A0(a1, v65);
      v9 = v66 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v97 = v66 & 0xFFFFFFFFFFFFFFF0LL;
      v67 = sub_F39D80(v6);
      v10 = (_QWORD *)v97;
      v9 = v68;
      if ( v67 == v68 )
        goto LABEL_5;
      goto LABEL_7;
    case 0x36:
      if ( (*(_BYTE *)(v6 + 17) & 4) != 0 )
        goto LABEL_5;
LABEL_14:
      v14 = sub_F424A0(a1, *(_QWORD *)(v6 + 40));
      v9 = v14 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v10 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
      v9 = v14;
      if ( v14 == *(_QWORD *)(v6 + 40) )
        goto LABEL_5;
      goto LABEL_7;
    case 0x39:
      v61 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v61 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v61 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v61 == *(_QWORD *)(v6 + 32) )
        goto LABEL_5;
      v9 = sub_A4C5C0(*a1, v61, *(_DWORD *)(v6 + 20), (*(_BYTE *)(v6 + 18) >> 3) & 0xF);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x3A:
      v16 = sub_F424A0(a1, *(_QWORD *)(v6 + 32));
      v9 = v16 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v16 == *(_QWORD *)(v6 + 32) )
      {
LABEL_5:
        v9 = v6 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v9 = sub_A52D20(*a1, v16, *(_DWORD *)(v6 + 20));
        v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      }
      goto LABEL_6;
  }
  do
  {
    v76 = *v73;
    v77 = sub_F424A0(a1, *v73);
    v9 = v77 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v77 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_144:
      v10 = nullptr;
      goto LABEL_145;
    }
    v78 = (unsigned int)v108;
    if ( v77 != v76 )
      v74 = 1;
    if ( (unsigned __int64)(unsigned int)v108 + 1 <= HIDWORD(v108) )
    {
      v75 = v107;
    }
    else
    {
      v104 = v77;
      sub_22134E0(&v107, v109, (unsigned int)v108 + 1LL, 8);
      v78 = (unsigned int)v108;
      v75 = v107;
      v77 = v104;
    }
    v75[v78] = v77;
    ++v73;
    LODWORD(v108) = v108 + 1;
  }
  while ( (_QWORD *)v98 != v73 );
LABEL_147:
  sub_A3A3D0(&v113, v6);
  v99 = 0;
  if ( v115 == 2 )
  {
    ptr = v112;
    v111 = 0x400000000LL;
    v105 = (_QWORD *)(v116 + 8 * v117);
    if ( (_QWORD *)v116 != v105 )
    {
      v82 = (_QWORD *)v116;
      do
      {
        v88 = *v82;
        v89 = sub_F424A0(a1, *v82);
        v9 = v89 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v89 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          if ( ptr != v112 )
          {
            free(ptr);
            v9 = 0;
          }
          goto LABEL_144;
        }
        v83 = v99;
        if ( v89 != v88 )
          v83 = 1;
        ++v82;
        v99 = v83;
        sub_A46760((__int64)&ptr, v89);
      }
      while ( v105 != v82 );
      if ( v83 )
      {
        v92 = (_QWORD *)*a1;
        v106[0] = ptr;
        v106[1] = (unsigned int)v111;
        v116 = sub_F3D0B0((__int64)v106, v92, v84, v85, v86, v87);
        v117 = v93;
      }
      if ( ptr != v112 )
        free(ptr);
    }
  }
  if ( v103 != *(_QWORD *)(v6 + 24) || v99 || v74 )
  {
    v9 = sub_A4F8D0(*a1, v103, (__int64 *)v107, (unsigned int)v108, (const __m128i *)&v113, 0);
    v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v9 = v6 & 0xFFFFFFFFFFFFFFF0LL;
    v10 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_145:
  v90 = v107;
  if ( v107 != v109 )
  {
LABEL_146:
    v101 = v9;
    free(v90);
    v9 = v101;
  }
LABEL_6:
  if ( !v10 )
    return v9;
LABEL_7:
  v11 = v9 & 7;
  if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return (unsigned int)v11 | (unsigned int)v5 | v9 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v5 | v11;
  if ( (v9 & 8) != 0 )
  {
    v12 |= v10[3];
    v10 = (_QWORD *)*v10;
  }
  return sub_A4CF00(*a1, (__int64)v10, v12);
}

