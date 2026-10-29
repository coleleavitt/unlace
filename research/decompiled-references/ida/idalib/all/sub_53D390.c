unsigned __int64 __fastcall sub_53D390(
        _QWORD **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        const char *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rbx
  int v13; // ecx
  _BOOL4 v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  unsigned int alias_target; // eax
  unsigned int v32; // eax
  __int16 v33; // cx
  __int16 v34; // bx
  __int64 v35; // rbx
  __int64 v36; // rbp
  __int64 tinfo_property; // rax
  int v38; // eax
  _QWORD *v39; // rax
  unsigned __int8 v40; // cl
  int v41; // eax
  __int64 v42; // rbx
  _QWORD *v43; // r12
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  const char *v47; // rsi
  __int64 v48; // rsi
  unsigned int v49; // esi
  __int64 v50; // rax
  __int64 *v51; // [rsp+0h] [rbp-78h]
  char v52; // [rsp+0h] [rbp-78h]
  void *v54; // [rsp+20h] [rbp-58h] BYREF
  __int128 v55; // [rsp+28h] [rbp-50h]
  unsigned __int64 v56; // [rsp+38h] [rbp-40h]

  v12 = a3;
  v56 = __readfsqword(0x28u);
  v51 = *(__int64 **)(a2 + 1824);
  if ( a3 == 15 || a3 == 21 )
    v13 = 2;
  else
    v13 = (a3 == 309 || a3 == 296) + 1;
  v14 = sub_53CE30((__int64)a1, a2, a4, v13);
  v17 = v14;
  if ( !v14 )
  {
    v21 = (unsigned int)v12;
    v20 = 0;
    return get_tinfo_property(v20, v21);
  }
  v18 = *((unsigned __int8 *)a1 + 70);
  v19 = *((_BYTE *)a1 + 70) & 0xF;
  if ( (_BYTE)v19 != 10 )
  {
    switch ( (int)v12 )
    {
      case 1:
      case 2:
        if ( (_BYTE)v18 )
          return v18 | (unsigned __int8)a4 & 0xC0;
        return 0;
      case 3:
        if ( (v18 & 0x3F) == 0x2D )
          return (((*a1)[6] & 0x40) != 0) + 1LL;
        if ( (_BYTE)v19 == 14 )
          return *((unsigned __int8 *)a1 + 2) + 1LL;
        v23 = 1;
        if ( (_BYTE)v19 == 8 )
          return v23;
        if ( (unsigned __int8)v19 > 8u )
          return 2LL * ((_BYTE)v19 == 10);
        v23 = 0;
        if ( (unsigned __int8)(v19 - 2) > 5u )
          return v23;
        if ( (v18 & 0x30) != 0x20 )
          return 1;
        return 2;
      case 4:
        return *((_BYTE *)a1 + 68) >> 7;
      case 5:
        return (*((_BYTE *)a1 + 68) & 0x40) != 0;
      case 6:
      case 9:
      case 285:
      case 307:
        return 0;
      case 7:
        goto LABEL_31;
      case 8:
        goto LABEL_29;
      case 10:
        goto LABEL_156;
      case 11:
      case 13:
        if ( (_BYTE)v19 != 11 )
          return 0;
        v23 = (unsigned __int64)*a1 | (unsigned __int8)a4 & 0xC0;
        goto LABEL_23;
      case 12:
        v23 = -1;
        if ( (_BYTE)v19 == 11 )
          return *((unsigned int *)a1 + 3);
        return v23;
      case 14:
        v23 = -1;
        if ( (_BYTE)v19 == 11 )
          return get_tinfo_size(0, *a1, 0);
        return v23;
      case 15:
        goto LABEL_61;
      case 16:
        goto LABEL_63;
      case 17:
        return sub_53D2C0(a1, a2, a4);
      case 18:
        if ( (_BYTE)v19 != 11 )
          goto LABEL_140;
        if ( *((_DWORD *)a1 + 3) != 1 )
          return 0;
        return get_tinfo_property(*a1, 18);
      case 19:
        goto LABEL_78;
      case 20:
        if ( (_BYTE)v19 != 12 )
          return 0;
        v23 = (_BYTE)(*a1)[11] & 0xF0;
        if ( ((*a1)[11] & 0xF0) == 0xC0 )
          v23 = *((unsigned int *)*a1 + 7);
        if ( (unsigned int)v23 <= 0x10 )
          return (unsigned int)getinf(99);
        return v23;
      case 21:
        LODWORD(v54) = -1;
        v23 = -1;
        if ( (_BYTE)v19 != 12 )
          return v23;
        v42 = (__int64)*a1;
        if ( ((*a1)[11] & 0xF0) == 0xC0 )
        {
          v49 = *(_DWORD *)(v42 + 28);
          if ( v49 > 0x10 )
            goto LABEL_187;
        }
        else if ( ((_BYTE)(*a1)[11] & 0xF0u) > 0x10 )
        {
          goto LABEL_136;
        }
        v49 = getinf(99);
LABEL_187:
        if ( v49 <= 0x1FF && (v49 > 0xFF || (v49 & 0xFFFFFF0F) == 0) )
        {
LABEL_136:
          if ( (*(_BYTE *)(a2 + 937) & 0x10) != 0 )
            sub_3792E0(0x7D7u, &v54, v42, v17);
          return (int)v54;
        }
        sub_3DD980(*(_QWORD *)(a2 + 1672));
        if ( !v50 )
          return (int)v54;
        v23 = (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v50 + 56LL))(v50, v42, -1);
        break;
      case 22:
        if ( (_BYTE)v19 != 12 )
          return 0;
        return ((*a1)[3] & 8) != 0;
      case 23:
        v23 = -1;
        if ( (_BYTE)v19 == 12 )
          return (*a1)[1];
        return v23;
      case 281:
        goto LABEL_80;
      case 282:
        return (unsigned __int8)sub_535830((__int64)a1);
      case 283:
        goto LABEL_93;
      case 284:
        goto LABEL_95;
      case 286:
        goto LABEL_33;
      case 287:
        goto LABEL_82;
      case 288:
        goto LABEL_86;
      case 289:
        goto LABEL_90;
      case 290:
        goto LABEL_91;
      case 291:
        goto LABEL_106;
      case 292:
        goto LABEL_108;
      case 293:
        goto LABEL_114;
      case 294:
        goto LABEL_116;
      case 295:
        goto LABEL_118;
      case 296:
        goto LABEL_39;
      case 297:
        goto LABEL_41;
      case 298:
        goto LABEL_45;
      case 299:
        goto LABEL_48;
      case 300:
        goto LABEL_51;
      case 301:
        goto LABEL_54;
      case 302:
        goto LABEL_57;
      case 303:
        goto LABEL_59;
      case 304:
        goto LABEL_70;
      case 305:
        goto LABEL_74;
      case 306:
        goto LABEL_37;
      case 308:
        if ( (_BYTE)v19 != 11 )
          return 0;
        return (unsigned __int64)a1;
      case 309:
        goto LABEL_66;
      case 310:
        goto LABEL_15;
      case 311:
        if ( (_BYTE)v19 != 12 )
          return 0;
        return (unsigned __int64)*a1;
      case 312:
        if ( (_BYTE)v19 == 14 )
          return (unsigned __int64)a1;
        return 0;
      case 313:
        goto LABEL_76;
      case 314:
        goto LABEL_104;
      default:
        if ( (unsigned int)(v12 - 24) > 0x100 || (_BYTE)v19 != 12 )
          return 0;
        v24 = *a1;
        v25 = v12 - 25;
        if ( (_DWORD)v12 == 24 )
        {
          v23 = v24[4];
        }
        else
        {
          if ( (unsigned __int64)v25 >= v24[1] )
            return 0;
          v23 = *(_QWORD *)(*v24 + 80LL * v25 + 64);
        }
        goto LABEL_23;
    }
    return v23;
  }
  if ( (unsigned int)(v12 - 20) <= 3 || (unsigned int)(v12 - 24) <= 0x100 )
  {
    v20 = (__int64)*a1;
    if ( (_QWORD *)a4 == *a1 )
      return 0;
    v21 = (unsigned int)v12;
    return get_tinfo_property(v20, v21);
  }
  switch ( v12 )
  {
    case 1LL:
    case 2LL:
      return v18 | (unsigned __int8)a4 & 0xC0;
    case 3LL:
      if ( (v18 & 0x3F) == 0x2D )
        return (((*a1)[6] & 0x40) != 0) + 1LL;
      else
        return 2LL * ((_BYTE)v19 == 10);
    case 4LL:
      return *((_BYTE *)a1 + 68) >> 7;
    case 5LL:
      return (*((_BYTE *)a1 + 68) & 0x40) != 0;
    case 6LL:
      return (get_tinfo_property(*a1, 2) & 0xF) == 12;
    case 7LL:
      goto LABEL_31;
    case 8LL:
LABEL_29:
      v27 = a1[4];
      if ( !v27 )
        return 0;
      v23 = *((unsigned int *)v27 + 6);
      if ( (_DWORD)v23 )
        return v23;
LABEL_31:
      if ( (*((_BYTE *)a1 + 68) & 8) == 0 )
        return 0;
      return *((unsigned int *)a1[4] + 2);
    case 9LL:
    case 10LL:
    case 13LL:
      v23 = (unsigned __int64)*a1;
      if ( (_QWORD *)a4 == *a1 )
        return 0;
      goto LABEL_23;
    case 12LL:
      return -1;
    case 14LL:
      return get_tinfo_size(0, *a1, 0);
    case 15LL:
LABEL_61:
      if ( (v18 & 0x2F) == 0xD )
        return (*a1)[4];
      else
        return (unsigned __int64)a1[6];
    case 16LL:
LABEL_63:
      v23 = -1;
      if ( (v18 & 0x2F) != 0xD )
        return v23;
      return (*a1)[1];
    case 17LL:
      return sub_53D2C0(a1, a2, a4);
    case 18LL:
LABEL_140:
      if ( (v18 & 0x2F) != 0xD )
      {
LABEL_156:
        v23 = a4;
LABEL_23:
        if ( v23 > 0xFF )
        {
          v26 = sub_5340D0((__int64)v51, v23);
          ++*(_DWORD *)(v26 + 64);
        }
        return v23;
      }
      if ( (*a1)[1] != 1 )
        return 0;
      return get_tinfo_property(*(_QWORD *)(**a1 + 64LL), 18);
    case 19LL:
LABEL_78:
      if ( (v18 & 0x3F) != 0x2D )
        return 0;
      return (unsigned __int8)sub_535950((__int64)*a1) | (unsigned __int64)((unsigned __int8)a4 & 0xC0);
    case 281LL:
LABEL_80:
      v32 = sub_53D190(a1, a2, nullptr, 0, a4);
      return (unsigned __int8)sub_541EB0(a1, v32);
    case 282LL:
      return (unsigned __int8)sub_535830((__int64)a1);
    case 283LL:
LABEL_93:
      v23 = 0;
      if ( (v18 & 0x3F) == 0xD )
        return *((_BYTE *)*a1 + 45) & 1;
      return v23;
    case 284LL:
LABEL_95:
      v23 = 0;
      if ( (v18 & 0x3F) != 0xD )
        return v23;
      v35 = **a1;
      v36 = v35 + 144LL * (*a1)[1];
      if ( v35 == v36 )
        goto LABEL_183;
      while ( 1 )
      {
        v38 = *(_DWORD *)(v35 + 132);
        if ( (v38 & 0x100) != 0 )
          break;
        v52 = v17;
        if ( (v38 & 0x20) != 0 && get_tinfo_size(0, *(_QWORD *)(v35 + 64), 3) != -1 )
        {
          tinfo_property = get_tinfo_property(*(_QWORD *)(v35 + 64), 284);
          LOBYTE(v17) = v52;
          if ( tinfo_property )
            return (unsigned __int8)v17;
          v35 += 144;
          if ( v36 != v35 )
            continue;
        }
LABEL_183:
        LOBYTE(v17) = 0;
        return (unsigned __int8)v17;
      }
      return (unsigned __int8)v17;
    case 285LL:
      return *((_DWORD *)a1 + 6) != 0;
    case 286LL:
      goto LABEL_33;
    case 287LL:
LABEL_82:
      if ( sub_53F1C0(*(_QWORD *)(a2 + 1672), 0, a4, 0) == -1 )
        return 0;
      LOBYTE(v18) = *((_BYTE *)a1 + 70);
      if ( (v18 & 0xF) == 0xB )
      {
        v23 = 1;
        if ( *((_DWORD *)a1 + 3) )
        {
          v28 = (__int64)*a1;
          return get_tinfo_property(v28, 287) != 0;
        }
      }
      else
      {
LABEL_33:
        if ( (v18 & 0x2F) != 0xD )
          return 0;
        v23 = (*a1)[1];
        if ( v23 )
        {
          v28 = *(_QWORD *)(**a1 + 144 * v23 - 80);
          return get_tinfo_property(v28, 287) != 0;
        }
      }
      break;
    case 288LL:
LABEL_86:
      if ( !a1[4] )
        return 0;
      v33 = *((_WORD *)a1 + 34);
      if ( (v33 & 0x200) == 0 )
        return ((_BYTE)v18 != 0) & (unsigned __int8)((unsigned __int8)v19 <= 0xCu);
      v23 = 1;
      if ( (v33 & 0x40) != 0 )
        return ((_BYTE)v18 != 0) & (unsigned __int8)((unsigned __int8)v19 <= 0xCu);
      return v23;
    case 289LL:
LABEL_90:
      v23 = sub_53D0A0(v51, (__int64)a1, a4);
      goto LABEL_23;
    case 290LL:
LABEL_91:
      v34 = *((_WORD *)a1 + 34);
      if ( (v34 & 0x40) == 0 )
        return 0;
      return v34 & 0x30 | 0xDLL;
    case 291LL:
LABEL_106:
      v23 = 0;
      if ( (v18 & 0x3F) == 0x2D )
        return (*((_BYTE *)*a1 + 52) & 0x10) != 0;
      return v23;
    case 292LL:
LABEL_108:
      if ( (v18 & 0x3F) != 0x2D )
        return 0;
      v23 = 1;
      v40 = *((_BYTE *)*a1 + 52) & 0x60;
      if ( v40 != 32 )
      {
        if ( v40 > 0x20u )
        {
          return (*((_BYTE *)*a1 + 52) & 0x40) == 0 ? 16LL : 10LL;
        }
        else
        {
          v41 = *((_DWORD *)*a1 + 12);
          if ( (v41 & 0x200) != 0 )
          {
            return 2;
          }
          else if ( (v41 & 0x100) != 0 )
          {
            return 8;
          }
          else
          {
            return 16;
          }
        }
      }
      return v23;
    case 293LL:
LABEL_114:
      v23 = -5;
      if ( (v18 & 0x3F) == 0x2D )
        return (int)sub_415E30(*a1, (__int64 *)a5, (unsigned __int64)a6, v17, v15, v16);
      return v23;
    case 294LL:
LABEL_116:
      v23 = -1;
      if ( (v18 & 0x3F) != 0x2D )
        return v23;
      return sub_415FA0(*a1, (__int64 *)a5, (__int64)a6, a7, a8);
    case 295LL:
LABEL_118:
      v23 = -1;
      if ( (v18 & 0x3F) != 0x2D )
        return v23;
      return sub_416490(*a1, (__int64 *)a5, a6);
    case 296LL:
LABEL_39:
      v23 = 0;
      if ( (v18 & 0x2F) == 0xD )
        return (unsigned __int8)sub_53E2E0(*a1, a2, v19, v17);
      return v23;
    case 297LL:
LABEL_41:
      v29 = a1[4];
      if ( v29 && (v18 & 0x2F) == 0xD )
      {
        v30 = *((unsigned int *)v29 + 6);
        if ( (_DWORD)v30 )
          return sub_6BCE60(*a1, v30, a5, v17);
        if ( (*((_BYTE *)a1 + 68) & 8) != 0 )
        {
          v30 = *((unsigned int *)v29 + 2);
          if ( (_DWORD)v30 )
            return sub_6BCE60(*a1, v30, a5, v17);
        }
        v48 = v29[2];
        if ( !v48 )
          v48 = v29[1];
        return sub_6BCE30(*a1, v48, a5, 0);
      }
      if ( (*((_BYTE *)a1 + 69) & 0x40) == 0 )
        return -1;
      v23 = (unsigned __int64)a1[2];
      if ( v23 != -1 )
      {
        v43 = *(_QWORD **)(a2 + 1672);
        v44 = (__int64)a1[2];
        v54 = nullptr;
        v55 = 0;
        v45 = sub_3BDE50(v43, v44);
        sub_5BC010(v43, &v54, v45);
        v46 = (__int64)*a1;
        v47 = haystack;
        if ( (_QWORD)v55 )
          v47 = (const char *)v54;
        v23 = sub_6BCE30(v46, v47, a5, 1);
        if ( v54 )
        {
          *(_QWORD *)&v55 = 0;
          qfree(v54);
        }
      }
      return v23;
    case 298LL:
LABEL_45:
      if ( (*((_BYTE *)a1 + 68) & 8) == 0 )
        return 0;
      alias_target = get_alias_target(*a1[4], *((unsigned int *)a1[4] + 2));
      if ( *((_DWORD *)a1[4] + 2) == alias_target )
        return 0;
      return alias_target;
    case 299LL:
LABEL_48:
      if ( !a1[4] )
        return -1;
      v23 = -1;
      if ( (v18 & 0x3F) != 0x2D )
        return v23;
      return sub_416F70(*a1, a5);
    case 300LL:
LABEL_51:
      if ( (*((_BYTE *)a1 + 69) & 0x40) == 0 )
        return -1;
      v23 = (unsigned __int64)a1[2];
      if ( v23 == -1 )
        return v23;
      return node2ea(a1[2]);
    case 301LL:
LABEL_54:
      if ( (v18 & 0x2F) != 0xD )
        return 0;
      v23 = 0;
      if ( a5 < (*a1)[1] )
        return (*(_BYTE *)(**a1 + 144 * a5 + 133) & 0x40) != 0;
      return v23;
    case 302LL:
LABEL_57:
      if ( (v18 & 0x3F) != 0xD )
        return 0;
      return (*((_BYTE *)*a1 + 45) & 4) != 0;
    case 303LL:
LABEL_59:
      v23 = -1;
      if ( (v18 & 0x3F) != 0x2D )
        return v23;
      return (*a1)[1];
    case 304LL:
LABEL_70:
      v23 = -1;
      if ( (v18 & 0x3F) == 0x2D )
      {
        if ( (*((_BYTE *)*a1 + 52) & 7) != 0 )
          LODWORD(v23) = 1 << ((*((_BYTE *)*a1 + 52) & 7) - 1);
        else
          LODWORD(v23) = (unsigned __int8)getinf(61);
        return (int)v23;
      }
      return v23;
    case 305LL:
LABEL_74:
      v23 = -5;
      if ( (v18 & 0x3F) == 0x2D )
        return (int)enum_type_data_t__get_value_repr(*a1, a5, v19, v17);
      return v23;
    case 306LL:
LABEL_37:
      if ( (v18 & 0x3F) != 0xD )
        return 0;
      return *((unsigned int *)*a1 + 11);
    case 307LL:
      return (unsigned __int64)a1;
    case 309LL:
LABEL_66:
      if ( (v18 & 0x2F) != 0xD )
        return 0;
      return (unsigned __int64)*a1;
    case 310LL:
LABEL_15:
      if ( (v18 & 0x3F) != 0x2D )
        return 0;
      return (unsigned __int64)*a1;
    case 313LL:
LABEL_76:
      if ( (v18 & 0x2F) != 0xD )
        return 0;
      return (unsigned __int64)a1[1];
    case 314LL:
LABEL_104:
      v39 = a1[4];
      if ( !v39 && (*((_BYTE *)a1 + 68) & 8) != 0 )
        return 0;
      return v39[1];
    default:
      return 0;
  }
  return v23;
}
