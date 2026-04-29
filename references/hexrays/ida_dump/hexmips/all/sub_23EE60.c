__int64 *__fastcall sub_23EE60(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6, char a7)
{
  unsigned __int8 v12; // bp
  char v14; // al
  int v15; // edx
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // r9
  char tinfo_property; // al
  char v26; // al
  _QWORD *v27; // r9
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // r12
  __int64 v32; // rdi
  unsigned int v33; // ebp
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 tinfo_size; // rax
  __int64 v39; // rsi
  unsigned __int8 v40; // [rsp+8h] [rbp-A0h]
  _QWORD *v42; // [rsp+8h] [rbp-A0h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+18h] [rbp-90h] BYREF
  __int64 v45; // [rsp+20h] [rbp-88h] BYREF
  __int64 v46; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v47[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v48; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+50h] [rbp-58h] BYREF
  int v50; // [rsp+58h] [rbp-50h]
  __int16 v51; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 0:
      goto LABEL_16;
    case 1:
      goto LABEL_17;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      goto LABEL_3;
    case 0x10:
      if ( !(unsigned __int8)*a5
        || !*(_BYTE *)a6
        || (get_tinfo_property(*a5, 2) & 0x3F) == 1
        || (get_tinfo_property(*a6, 2) & 0x3F) == 1 )
      {
        *a1 = 1;
        return a1;
      }
      v20 = sub_23B1B0(*(_QWORD *)(a3 + 32), 0, v17, v18, v19);
      v24 = a6;
      if ( v20 )
        goto LABEL_72;
      if ( sub_23B1B0(*(_QWORD *)(a3 + 40), 0, v21, v22, v23)
        || (unsigned __int8)((get_tinfo_property(*a5, 2) & 0xF) - 10) <= 2u )
      {
        goto LABEL_17;
      }
      tinfo_property = get_tinfo_property(*a6, 2);
      v24 = a6;
      if ( (unsigned __int8)((tinfo_property & 0xF) - 10) <= 2u )
        goto LABEL_72;
      v26 = get_tinfo_property(*a5, 2);
      v27 = a6;
      if ( (v26 & 0xF) == 8 )
      {
        v28 = sub_298810(*(_QWORD *)(a3 + 40));
        v27 = a6;
        if ( v28 )
          goto LABEL_17;
      }
      v42 = v27;
      v29 = get_tinfo_property(*v27, 2);
      v24 = v42;
      if ( (v29 & 0xF) == 8 && (v30 = sub_298810(*(_QWORD *)(a3 + 32)), v24 = v42, v30) )
      {
LABEL_72:
        *a1 = 0;
        copy_tinfo_t(a1, v24);
      }
      else
      {
        v43 = (__int64)v24;
        if ( (unsigned __int8)compare_tinfo(*a5, *v24, 17) )
          goto LABEL_17;
        sub_23E0A0(a1, a2, (__int64)a5, v43, 1);
      }
      return a1;
    case 0x11:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x31:
      *a1 = 8;
      return a1;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
      goto LABEL_10;
    case 0x20:
    case 0x21:
    case 0x22:
      v12 = *(_BYTE *)(a2 + 130);
      if ( get_tinfo_size(0, *a4, 0) >= (unsigned __int64)v12 )
        goto LABEL_3;
      sub_327340(&v48, *(_QWORD *)(a2 + 112), v12);
      sub_23E0A0(a1, a2, (__int64)a4, (__int64)&v48, 1);
      clear_tinfo_t(&v48);
      return a1;
    case 0x23:
    case 0x24:
      v40 = (get_tinfo_property(*a4, 2) & 0xF) - 10;
      v14 = get_tinfo_property(*a5, 2);
      v15 = *(_DWORD *)(a3 + 8);
      v16 = (v14 & 0xF) - 10;
      if ( v15 != 36 )
      {
        if ( v15 == 35 && v16 <= 2u )
        {
          if ( v40 <= 2u )
          {
            if ( !a7 )
            {
              if ( !under_debugger )
                sub_37E160(51654);
              goto LABEL_77;
            }
            goto LABEL_16;
          }
          goto LABEL_9;
        }
        if ( v40 > 2u )
        {
LABEL_9:
          if ( v16 <= 2u )
          {
LABEL_17:
            *a1 = 0;
            copy_tinfo_t(a1, a5);
            return a1;
          }
          goto LABEL_10;
        }
        goto LABEL_3;
      }
      if ( v16 > 2u )
      {
        if ( v40 > 2u )
        {
LABEL_10:
          sub_23E0A0(a1, a2, (__int64)a4, (__int64)a5, 1);
          return a1;
        }
LABEL_3:
        *a1 = 0;
        copy_tinfo_t(a1, a4);
        return a1;
      }
      if ( v40 > 2u )
      {
        if ( a7 )
        {
LABEL_16:
          *a1 = 0;
          return a1;
        }
        if ( !under_debugger )
          sub_37E160(51653);
LABEL_77:
        BUG();
      }
      tinfo_size = get_tinfo_size(0, *a4, 0);
      v39 = *(_QWORD *)(a2 + 112);
      if ( *(_DWORD *)(v39 + 84) == tinfo_size )
      {
        *a1 = 0;
        copy_tinfo_t(a1, a2 + 280);
      }
      else
      {
        sub_327500(a1, v39, (unsigned int)tinfo_size, 1);
      }
      return a1;
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
      sub_23E0A0((__int64 *)&v48, a2, (__int64)a4, (__int64)a5, 1);
      if ( get_tinfo_size(0, v48, 0) != 4 )
        goto LABEL_51;
      *a1 = 25;
      goto LABEL_13;
    case 0x2E:
      if ( get_tinfo_size(0, *a4, 0) != 4 )
        goto LABEL_3;
      *a1 = 25;
      return a1;
    case 0x2F:
    case 0x32:
      *(_QWORD *)&v48 = 7;
      sub_23E0A0(a1, a2, (__int64)a4, (__int64)&v48, 1);
      clear_tinfo_t(&v48);
      return a1;
    case 0x33:
      v34 = get_tinfo_property(*a4, 13);
      *(_QWORD *)&v48 = v34;
      if ( (_BYTE)v34 )
      {
        if ( (get_tinfo_property(v34, 2) & 0xF) != 0xB && *(int *)(a3 + 40) > 0 )
        {
          v35 = get_tinfo_size(0, v48, 0);
          v36 = *(int *)(a3 + 40);
          if ( v36 != v35 )
          {
LABEL_41:
            sub_327340(a1, *(_QWORD *)(a2 + 112), v36);
LABEL_13:
            clear_tinfo_t(&v48);
            return a1;
          }
        }
      }
      else if ( !a7 )
      {
        if ( (get_tinfo_property(*a4, 2) & 0x2F) != 0xD )
        {
          if ( !under_debugger )
            sub_37E160(51091);
          goto LABEL_77;
        }
        v36 = *(unsigned int *)(a3 + 40);
        goto LABEL_41;
      }
LABEL_51:
      *a1 = 0;
      copy_tinfo_t(a1, &v48);
      goto LABEL_13;
    case 0x34:
      v44 = 0;
      copy_tinfo_t(&v44, a4);
      v47[0] = 0;
      v47[1] = 0;
      if ( (unsigned __int8)get_tinfo_details(v44, 11, v47) )
      {
        v46 = 0;
        v48 = 0;
        v45 = 0;
        copy_tinfo_t((char *)&v48 + 8, &v45);
        v49 = 0;
        copy_tinfo_t(&v49, &v46);
        v50 = 0;
        v51 = 0;
        clear_tinfo_t(&v45);
        clear_tinfo_t(&v46);
        v37 = v48;
        *(_QWORD *)&v48 = v47[0];
        v47[0] = v37;
        create_tinfo(&v44, 10, 10, &v48);
        clear_tinfo_t(&v49);
        clear_tinfo_t((char *)&v48 + 8);
        clear_tinfo_t(&v48);
        clear_tinfo_t(v47);
        *a1 = 0;
        copy_tinfo_t(a1, &v44);
      }
      else
      {
        clear_tinfo_t(v47);
        sub_327610(a1, *(_QWORD *)(a2 + 112), &v44);
      }
      clear_tinfo_t(&v44);
      return a1;
    case 0x3A:
      v47[0] = get_tinfo_property(*a4, 13);
      if ( LOBYTE(v47[0]) )
      {
        *a1 = 0;
        copy_tinfo_t(a1, v47);
        clear_tinfo_t(v47);
        return a1;
      }
      if ( !under_debugger )
        sub_37E160(50397);
      goto LABEL_77;
    case 0x3B:
      sub_239A00(a1, (__int64)a4, *(_DWORD *)(a3 + 32), *(_BYTE *)(a3 + 57) & 1);
      return a1;
    case 0x3C:
      if ( (get_tinfo_property(*a4, 2) & 0xF) == 0xA )
      {
        v31 = *(_BYTE *)(a3 + 57);
        v32 = *a4;
        *(_QWORD *)&v48 = 0;
        v33 = *(_DWORD *)(a3 + 32);
        *(_QWORD *)&v48 = get_tinfo_property(v32, 9);
        sub_239A00(a1, (__int64)&v48, v33, v31 & 1);
        clear_tinfo_t(&v48);
        return a1;
      }
      if ( !under_debugger )
        sub_37E160(50398);
      goto LABEL_77;
    default:
      *a1 = 0;
      copy_tinfo_t(a1, a3 + 48);
      return a1;
  }
}
