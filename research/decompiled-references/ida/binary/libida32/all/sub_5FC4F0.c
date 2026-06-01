__int64 __fastcall sub_5FC4F0(__int64 *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v6; // r13d
  unsigned int v7; // r13d
  __int64 tinfo_size; // rax
  char tinfo_property; // r10
  char v11; // r11
  char v12; // al
  __int64 v13; // rdx
  char v14; // al
  int v15; // ebp
  char v16; // al
  __int64 v17; // rax
  char v18; // al
  unsigned __int8 v19; // r10
  void *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  char v23; // al
  char data; // al
  int v25[2]; // [rsp+0h] [rbp-178h]
  int v26[2]; // [rsp+8h] [rbp-170h]
  char v27; // [rsp+8h] [rbp-170h]
  char v28; // [rsp+8h] [rbp-170h]
  unsigned __int64 v29; // [rsp+18h] [rbp-160h]
  char v30; // [rsp+20h] [rbp-158h]
  char v31; // [rsp+20h] [rbp-158h]
  char v32; // [rsp+20h] [rbp-158h]
  char v33; // [rsp+28h] [rbp-150h]
  char v34; // [rsp+28h] [rbp-150h]
  int v35[2]; // [rsp+38h] [rbp-140h] BYREF
  int v36[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v37; // [rsp+48h] [rbp-130h] BYREF
  void *v38[2]; // [rsp+50h] [rbp-128h] BYREF
  int v39[2]; // [rsp+60h] [rbp-118h] BYREF
  int v40[2]; // [rsp+78h] [rbp-100h]
  int v41; // [rsp+80h] [rbp-F8h]
  int v42[4]; // [rsp+90h] [rbp-E8h] BYREF
  int v43[2]; // [rsp+A0h] [rbp-D8h]
  int v44[2]; // [rsp+A8h] [rbp-D0h]
  int v45[34]; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v46; // [rsp+138h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v6 = a4 & 1;
  if ( (a4 & 1) == 0 && (get_aflags(a2) & 0x2000000) != 0 )
    return 0;
  *(_QWORD *)v39 = 0;
  *(_QWORD *)v40 = 1;
  v41 = -1;
  *(_QWORD *)v35 = 0;
  copy_tinfo_t(v35);
  sub_532820((__int64 *)v39, (const char **)v35);
  v29 = sub_3B9AA0((__int64)a1, a2, 4);
  *(_QWORD *)v26 = v29 & 0x600;
  if ( *(_QWORD *)v26 == 1536
    && !(unsigned __int8)is_spec_ea(a2)
    && (get_tinfo_property(*(_QWORD *)v35, 2) & 0xF) != 0xC )
  {
    v38[0] = nullptr;
    v38[0] = (void *)get_tinfo_property(*(_QWORD *)v35, 9);
    if ( (get_tinfo_property(v38[0], 2) & 0xF) != 0xC )
    {
      clear_tinfo_t(v38);
      goto LABEL_7;
    }
    v20 = *(void **)v35;
    *(void **)v35 = v38[0];
    v38[0] = v20;
    clear_tinfo_t(v38);
  }
  if ( v6 )
    upd_abits(a2, 3254779904LL, &loc_2000000);
  else
    upd_abits(a2, 3254779904LL, 0);
  v7 = sub_675160(a1, a2, v35, 1, 1);
  if ( (_BYTE)v7 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)v35, 0);
    *(_QWORD *)v25 = tinfo_size;
    while ( 2 )
    {
      *(_QWORD *)v36 = tinfo_size;
      if ( LOBYTE(v35[0]) )
      {
        tinfo_property = get_tinfo_property(*(_QWORD *)v35, 2);
        v11 = tinfo_property & 0xF;
        if ( *(_QWORD *)v25 > 4u && (unsigned __int8)(v11 - 12) > 1u )
        {
          v34 = tinfo_property;
          v31 = tinfo_property & 0xF;
          v14 = is_spec_ea(a2);
          v11 = v31;
          tinfo_property = v34;
          if ( v14 )
          {
LABEL_19:
            v13 = (unsigned int)v25[0];
LABEL_20:
            sub_69E540(v39, a2, v13, a3);
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
            v33 = tinfo_property;
            v30 = v11;
            v12 = is_spec_ea(a2);
            v11 = v30;
            tinfo_property = v33;
            if ( v12 )
              goto LABEL_17;
            v22 = getinf(99);
            if ( v22 == 176 || (v11 = v30, tinfo_property = v33, v22 == 256) )
            {
              v37 = 0;
              v38[0] = nullptr;
              v38[1] = nullptr;
              copy_tinfo_t(v38);
              v7 = create_tinfo(&v37, 11, 11, v38);
              clear_tinfo_t(v38);
              if ( (_BYTE)v7 )
                v7 = sub_675160(a1, a2, &v37, 1, 1);
              clear_tinfo_t(&v37);
              goto LABEL_8;
            }
            if ( (v33 & 0x1F) == 0x12 )
            {
              v23 = sub_5F0030(a1, a2, *(_QWORD *)v25, v29, v35, a4);
              v11 = v30;
              tinfo_property = v33;
              v13 = (unsigned int)v25[0];
              if ( v23 )
                goto LABEL_20;
            }
LABEL_17:
            if ( (v29 & 0x600) == 0 )
            {
              v32 = tinfo_property;
              v28 = v11;
              if ( !get_flags_by_size(*(_QWORD *)v36) )
                break;
              data = create_data(a2);
              v11 = v28;
              tinfo_property = v32;
              if ( !data )
                break;
            }
            if ( (v29 & 0xF00000) == 0 && (~tinfo_property & 0x30) == 0 )
            {
              if ( v11 == 2 )
              {
                set_op_type(a2, 0x33333303300000LL, 0);
              }
              else if ( v11 == 7 )
              {
                sub_3CFD00(a1, a2, 0);
              }
            }
            goto LABEL_19;
          case 9:
            if ( (v29 & 0x600) != 0 )
            {
              if ( *(_QWORD *)v26 != 1024 )
                goto LABEL_19;
              v17 = (unsigned int)v29 & 0xF0000000;
              if ( (v17 != 0x20000000 || *(_QWORD *)v25 != 4) && (v17 != 805306368 || *(_QWORD *)v25 != 8) )
              {
                if ( v17 != 1342177280 )
                  goto LABEL_19;
                v27 = tinfo_property;
                v18 = is_problem_present(13, a2);
                tinfo_property = v27;
                if ( !v18 )
                  goto LABEL_19;
              }
            }
            v19 = tinfo_property & 0x30;
            if ( v19 == 32 )
            {
              if ( (unsigned __int8)getinf(66) )
                getinf(66);
              goto LABEL_82;
            }
            if ( v19 <= 0x20u || v19 == 48 )
            {
LABEL_82:
              create_data(a2);
              goto LABEL_19;
            }
            break;
          case 10:
            if ( (v29 & 0x600) == 0
              || *(_QWORD *)v26 == 1024
              && ((v21 = (unsigned int)v29 & 0xF0000000, *(_QWORD *)v25 == 4) && v21 == 0x80000000LL
               || *(_QWORD *)v25 == 8 && v21 == 2415919104LL) )
            {
              if ( !get_flags_by_size(*(_QWORD *)v36) || !(unsigned __int8)create_data(a2) )
                break;
            }
            if ( (v29 & 0xF00000) == 0 && (unsigned int)sub_4CB9C0(a1, a2, 0) != -1 )
            {
              get_default_reftype(a2);
              op_offset(a2, 0);
            }
            v38[0] = nullptr;
            v38[0] = (void *)get_tinfo_property(*(_QWORD *)v35, 9);
            copy_tinfo_t(v35);
            clear_tinfo_t(v38);
            if ( (get_tinfo_property(*(_QWORD *)v35, 2) & 0xF) != 0xC )
              goto LABEL_19;
            v16 = sub_5FC080(*a1, a2, (__int64 *)v35, a4, 1);
            goto LABEL_33;
          case 11:
            if ( (v29 & 0x600) != 0 )
              goto LABEL_19;
            v38[0] = nullptr;
            v38[0] = (void *)get_tinfo_property(*(_QWORD *)v35, 289);
            copy_tinfo_t(v35);
            clear_tinfo_t(v38);
            tinfo_size = get_tinfo_size(0, *(_QWORD *)v35, 0);
            continue;
          case 12:
            v16 = sub_5FC080(*a1, a2, (__int64 *)v35, a4, 0);
            goto LABEL_33;
          case 13:
            v45[0] = 0;
            if ( !(unsigned __int8)sub_5F2E00((__int64)a1, (__int64 *)v36, (__int64 *)v38, (__int64)v45, v35, nullptr) )
              goto LABEL_7;
            v15 = v45[0];
            if ( (unsigned __int8)is_spec_ea(a2) )
              goto LABEL_19;
            if ( ((__int64)v38[0] & 0x600) == 0x400 && ((__int64)v38[0] & 0xF0000000) == 0x60000000 )
            {
              if ( *(_QWORD *)v26 != 1536 )
              {
                v16 = create_data(a2);
LABEL_33:
                if ( v16 )
                  goto LABEL_19;
              }
            }
            else
            {
              if ( ((__int64)v38[0] & 0xF00000) == 0x800000 )
              {
                if ( (v29 & 0x600) == 0 && (!get_flags_by_size(*(_QWORD *)v36) || !(unsigned __int8)create_data(a2)) )
                  goto LABEL_7;
                if ( (v29 & 0xF00000) == 0 )
                  sub_400A70(a1, a2, 0, v15, 0);
                goto LABEL_19;
              }
              if ( (v29 & 0x600) != 0 )
                goto LABEL_19;
              *(_QWORD *)v43 = 0;
              *(_QWORD *)v44 = 0;
              *(_OWORD *)v42 = 0;
              if ( (unsigned __int8)sub_3CE970(a1, a2, v38[0], v25[0], -1, (const __m128i *)v42) )
              {
                if ( *(_QWORD *)v43 )
                  (*(void (__fastcall **)(int *, int *, __int64))v43)(v42, v42, 3);
                goto LABEL_19;
              }
              if ( *(_QWORD *)v43 )
                (*(void (__fastcall **)(int *, int *, __int64))v43)(v42, v42, 3);
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
  clear_tinfo_t(v35);
  return v7;
}

