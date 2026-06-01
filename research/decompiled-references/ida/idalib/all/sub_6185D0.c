__int64 __fastcall sub_6185D0(__int64 *a1, void *a2, __int64 a3, unsigned int a4)
{
  int v6; // r13d
  unsigned int v7; // r13d
  __int64 tinfo_size; // rax
  char tinfo_property; // r10
  char v11; // r11
  char v12; // al
  char v13; // al
  __int64 v14; // rbp
  char v15; // al
  __int64 v16; // rax
  char v17; // al
  unsigned __int8 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  char v22; // al
  char data; // al
  unsigned __int8 default_reftype; // al
  char *v25; // [rsp+0h] [rbp-218h]
  int v26[2]; // [rsp+8h] [rbp-210h]
  char v27; // [rsp+8h] [rbp-210h]
  char v28; // [rsp+8h] [rbp-210h]
  __int64 v29; // [rsp+8h] [rbp-210h]
  unsigned __int64 v30; // [rsp+18h] [rbp-200h]
  char v31; // [rsp+20h] [rbp-1F8h]
  char v32; // [rsp+20h] [rbp-1F8h]
  char v33; // [rsp+20h] [rbp-1F8h]
  char v34; // [rsp+28h] [rbp-1F0h]
  char v35; // [rsp+28h] [rbp-1F0h]
  int v36[2]; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v39[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v40[2]; // [rsp+60h] [rbp-1B8h] BYREF
  int v41[2]; // [rsp+88h] [rbp-190h]
  int v42; // [rsp+90h] [rbp-188h]
  int v43[4]; // [rsp+A0h] [rbp-178h] BYREF
  int v44[2]; // [rsp+B0h] [rbp-168h]
  int v45[2]; // [rsp+B8h] [rbp-160h]
  int v46[2]; // [rsp+C0h] [rbp-158h] BYREF
  unsigned __int64 v47; // [rsp+1D8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v6 = a4 & 1;
  if ( (a4 & 1) == 0 && (get_aflags(a2) & 0x2000000) != 0 )
    return 0;
  *(_QWORD *)v40 = 0;
  *(_QWORD *)v41 = 1;
  v42 = -1;
  *(_QWORD *)v36 = 0;
  copy_tinfo_t(v36);
  sub_54B890((__int64 *)v40, (unsigned __int64 *)v36);
  v30 = sub_3BE900(a1, (unsigned __int64)a2, 4);
  *(_QWORD *)v26 = v30 & 0x600;
  if ( *(_QWORD *)v26 == 1536
    && !(unsigned __int8)is_spec_ea(a2)
    && (get_tinfo_property(*(_QWORD *)v36, 2) & 0xF) != 0xC )
  {
    v39[0] = 0;
    v39[0] = get_tinfo_property(*(_QWORD *)v36, 9);
    if ( (get_tinfo_property(v39[0], 2) & 0xF) != 0xC )
    {
      clear_tinfo_t(v39);
      goto LABEL_7;
    }
    v19 = *(_QWORD *)v36;
    *(_QWORD *)v36 = v39[0];
    v39[0] = v19;
    clear_tinfo_t(v39);
  }
  if ( v6 )
    upd_abits(a2, -1040187392, 0x2000000u);
  else
    upd_abits(a2, -1040187392, 0);
  v7 = sub_694E60(a1, a2, v36, 1, 1);
  if ( (_BYTE)v7 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)v36, 0);
    v25 = (char *)tinfo_size;
    while ( 2 )
    {
      v37 = tinfo_size;
      if ( LOBYTE(v36[0]) )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)v36, 2);
        v11 = tinfo_property & 0xF;
        if ( (unsigned __int64)v25 > 4 && (unsigned __int8)(v11 - 12) > 1u )
        {
          v35 = tinfo_property;
          v32 = tinfo_property & 0xF;
          v13 = is_spec_ea(a2);
          v11 = v32;
          tinfo_property = v35;
          if ( v13 )
          {
LABEL_19:
            sub_6BF000(v40, a2, v25, a3);
            goto LABEL_8;
          }
        }
        switch ( v11 )
        {
          case 0:
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            goto LABEL_17;
          case 2:
            v34 = tinfo_property;
            v31 = v11;
            v12 = is_spec_ea(a2);
            v11 = v31;
            tinfo_property = v34;
            if ( v12 )
              goto LABEL_17;
            v21 = getinf(99);
            if ( v21 == 176 || (v11 = v31, tinfo_property = v34, v21 == 256) )
            {
              v38 = 0;
              v39[0] = 0;
              v39[1] = 0;
              copy_tinfo_t(v39);
              v7 = create_tinfo(&v38, 11, 11, v39);
              clear_tinfo_t(v39);
              if ( (_BYTE)v7 )
                v7 = sub_694E60(a1, a2, &v38, 1, 1);
              clear_tinfo_t(&v38);
              goto LABEL_8;
            }
            if ( (v34 & 0x1F) != 0x12
              || (v22 = sub_60BFC0(a1, a2, v25, v30, v36, a4), v11 = v31, tinfo_property = v34, !v22) )
            {
LABEL_17:
              if ( (v30 & 0x600) == 0 )
              {
                v33 = tinfo_property;
                v28 = v11;
                if ( !get_flags_by_size(v37) )
                  break;
                data = create_data((__int64)a2);
                v11 = v28;
                tinfo_property = v33;
                if ( !data )
                  break;
              }
              if ( (v30 & 0xF00000) == 0 && (~tinfo_property & 0x30) == 0 )
              {
                if ( v11 == 2 )
                {
                  set_op_type(a2, 0x33333303300000LL, 0);
                }
                else if ( v11 == 7 )
                {
                  sub_3D5870(a1, (unsigned __int64)a2, 0);
                }
              }
            }
            goto LABEL_19;
          case 9:
            if ( (v30 & 0x600) != 0 )
            {
              if ( *(_QWORD *)v26 != 1024 )
                goto LABEL_19;
              v16 = (unsigned int)v30 & 0xF0000000;
              if ( (v16 != 0x20000000 || v25 != &byte_4) && (v16 != 805306368 || v25 != &byte_8) )
              {
                if ( v16 != 1342177280 )
                  goto LABEL_19;
                v27 = tinfo_property;
                v17 = is_problem_present(13, a2);
                tinfo_property = v27;
                if ( !v17 )
                  goto LABEL_19;
              }
            }
            v18 = tinfo_property & 0x30;
            if ( v18 == 32 )
            {
              if ( (unsigned __int8)getinf(66) )
                getinf(66);
              goto LABEL_81;
            }
            if ( v18 <= 0x20u || v18 == 48 )
            {
LABEL_81:
              create_data((__int64)a2);
              goto LABEL_19;
            }
            break;
          case 10:
            if ( (v30 & 0x600) == 0
              || *(_QWORD *)v26 == 1024
              && ((v20 = (unsigned int)v30 & 0xF0000000, v25 == &byte_4) && v20 == 0x80000000LL
               || v25 == &byte_8 && v20 == 2415919104LL) )
            {
              if ( !get_flags_by_size(v37) || !(unsigned __int8)create_data((__int64)a2) )
                break;
            }
            if ( (v30 & 0xF00000) == 0 )
            {
              v29 = sub_4E3180(a1, (__int64 *)a2, 0);
              if ( v29 != -1 )
              {
                default_reftype = get_default_reftype(a2);
                op_offset((int)a2, 0, default_reftype, -1, v29, 0);
              }
            }
            v39[0] = 0;
            v39[0] = get_tinfo_property(*(_QWORD *)v36, 9);
            copy_tinfo_t(v36);
            clear_tinfo_t(v39);
            if ( (get_tinfo_property(*(_QWORD *)v36, 2) & 0xF) != 0xC )
              goto LABEL_19;
            v15 = sub_618140(*a1, (unsigned __int64)a2, (__int64 *)v36, a4, 1);
            goto LABEL_32;
          case 11:
            if ( (v30 & 0x600) != 0 )
              goto LABEL_19;
            v39[0] = 0;
            v39[0] = get_tinfo_property(*(_QWORD *)v36, 289);
            copy_tinfo_t(v36);
            clear_tinfo_t(v39);
            tinfo_size = get_tinfo_size(0, *(_QWORD *)v36, 0);
            continue;
          case 12:
            v15 = sub_618140(*a1, (unsigned __int64)a2, (__int64 *)v36, a4, 0);
            goto LABEL_32;
          case 13:
            *(_QWORD *)v46 = 0;
            if ( !(unsigned __int8)sub_60EE60((__int64)a1, &v37, v39, (__int64)v46, v36, nullptr) )
              goto LABEL_7;
            v14 = *(_QWORD *)v46;
            if ( (unsigned __int8)is_spec_ea(a2) )
              goto LABEL_19;
            if ( (v39[0] & 0x600) == 0x400 && (v39[0] & 0xF0000000) == 0x60000000 )
            {
              if ( *(_QWORD *)v26 != 1536 )
              {
                v15 = create_data((__int64)a2);
LABEL_32:
                if ( v15 )
                  goto LABEL_19;
              }
            }
            else
            {
              if ( (_UNKNOWN *)(v39[0] & 0xF00000) == &loc_800000 )
              {
                if ( (v30 & 0x600) == 0 && (!get_flags_by_size(v37) || !(unsigned __int8)create_data((__int64)a2)) )
                  goto LABEL_7;
                if ( (v30 & 0xF00000) == 0 )
                  sub_413D70(a1, (unsigned __int64)a2, 0, v14, 0);
                goto LABEL_19;
              }
              if ( (v30 & 0x600) != 0 )
                goto LABEL_19;
              *(_QWORD *)v44 = 0;
              *(_OWORD *)v43 = 0;
              *(_QWORD *)v45 = 0;
              if ( (unsigned __int8)sub_3D4400(
                                      a1,
                                      (__int64 *)a2,
                                      v39[0],
                                      v25,
                                      (void *)0xFFFFFFFFFFFFFFFFLL,
                                      (const __m128i *)v43) )
              {
                if ( *(_QWORD *)v44 )
                  (*(void (__fastcall **)(int *, int *, __int64))v44)(v43, v43, 3);
                goto LABEL_19;
              }
              if ( *(_QWORD *)v44 )
                (*(void (__fastcall **)(int *, int *, __int64))v44)(v43, v43, 3);
            }
            goto LABEL_7;
          default:
            goto LABEL_7;
        }
      }
      break;
    }
  }
LABEL_7:
  v7 = 0;
LABEL_8:
  clear_tinfo_t(v36);
  return v7;
}
