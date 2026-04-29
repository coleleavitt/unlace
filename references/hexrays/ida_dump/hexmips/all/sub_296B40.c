__int64 __fastcall sub_296B40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // bp
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // r15
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // rdi
  _DWORD *v22; // rax
  int v23; // esi
  __int64 v24; // rdx
  int *v25; // rdx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  char tinfo_property; // al
  char v30; // bp
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-70h] BYREF
  __int128 v34; // [rsp+10h] [rbp-68h] BYREF
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  int v36; // [rsp+28h] [rbp-50h]
  __int16 v37; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 1504);
  v38 = __readfsqword(0x28u);
  clear_tinfo_t(a3);
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      copy_tinfo_t(a3, a1 + 8);
      v8 = *a3;
      goto LABEL_5;
    case 2:
      if ( !(unsigned __int8)sub_296B40(*(_QWORD *)(a1 + 8), a2, a3) )
        return 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      copy_tinfo_t((char *)&v34 + 8, &v32);
      v35 = 0;
      copy_tinfo_t(&v35, &v33);
      v36 = 0;
      v37 = 0;
      clear_tinfo_t(&v32);
      clear_tinfo_t(&v33);
      copy_tinfo_t(&v34, a3);
      create_tinfo(a3, 10, 10, &v34);
      clear_tinfo_t(&v35);
      clear_tinfo_t((char *)&v34 + 8);
      clear_tinfo_t(&v34);
      return 1;
    case 3:
      return sub_2975A0(*(_QWORD *)(a1 + 8), a2, a3);
    case 4:
      if ( !(unsigned __int8)sub_296B40(*(_QWORD *)(a1 + 8), a2, a3) )
        return 0;
      v34 = 0u;
      copy_tinfo_t(&v34, a3);
      create_tinfo(a3, 11, 11, &v34);
      clear_tinfo_t(&v34);
      v8 = *a3;
      goto LABEL_5;
    case 6:
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_DWORD *)(v11 + 8);
      switch ( v12 )
      {
        case 'A':
          copy_tinfo_t(a3, *(_QWORD *)(*(_QWORD *)(v11 + 24) + 432LL) + 104LL * *(int *)(v11 + 32) + 80);
          v19 = *a3;
          goto LABEL_21;
        case '4':
          v13 = *(_QWORD *)(v11 + 24);
          v14 = *(_DWORD *)(v13 + 8);
          if ( v14 == 65 )
          {
            copy_tinfo_t(a3, *(_QWORD *)(*(_QWORD *)(v13 + 24) + 432LL) + 104LL * *(int *)(v13 + 32) + 80);
            tinfo_property = get_tinfo_property(*a3, 2);
            v19 = *a3;
            if ( (tinfo_property & 0xF) == 0xB )
              goto LABEL_21;
            if ( (get_tinfo_property(v19, 2) & 0xF) != 0xC )
            {
              sub_327610(
                &v34,
                v5,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL) + 432LL)
              + 104LL * *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 32LL)
              + 80);
              copy_tinfo_t(a3, &v34);
              clear_tinfo_t(&v34);
              v19 = *a3;
              goto LABEL_21;
            }
            goto LABEL_32;
          }
          break;
        case '=':
          if ( (unsigned __int8)sub_294B60(*(_QWORD *)(v5 + 96), *(_QWORD *)(a1 + 8), &v33) )
          {
            v15 = v33;
            if ( v33 > 0xFFF
              || (unsigned __int8)sub_25CFF0(v5, v33, nullptr, nullptr)
              || !(unsigned __int8)sub_325950(*(_QWORD *)(v5 + 96)) )
            {
              goto LABEL_16;
            }
          }
          if ( *(_DWORD *)(v11 + 8) != 52 )
            goto LABEL_36;
          v13 = *(_QWORD *)(v11 + 24);
          v14 = *(_DWORD *)(v13 + 8);
          break;
        default:
LABEL_31:
          copy_tinfo_t(a3, v11 + 48);
          goto LABEL_32;
      }
      if ( v14 != 64 )
      {
LABEL_36:
        v11 = *(_QWORD *)(a1 + 8);
        goto LABEL_31;
      }
      v15 = *(_QWORD *)(v13 + 24);
      v33 = v15;
LABEL_16:
      if ( !(unsigned __int8)sub_25D220(v5, v15, 1) )
        goto LABEL_36;
      if ( *(_DWORD *)(v11 + 8) == 61 )
      {
        if ( !(unsigned __int8)sub_37C1A0(*(_QWORD *)(v5 + 96), v15, a3, 3) )
          copy_tinfo_t(a3, *(_QWORD *)(v5 + 96) + 208LL);
        if ( (unsigned __int8)((get_tinfo_property(*a3, 2) & 0xF) - 10) > 1u )
        {
          sub_327610(&v34, v5, a3);
          copy_tinfo_t(a3, &v34);
          clear_tinfo_t(&v34);
          v19 = *a3;
          goto LABEL_21;
        }
LABEL_32:
        v19 = *a3;
        goto LABEL_21;
      }
      copy_tinfo_t(a3, v11 + 48);
      if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xA )
      {
        sub_3277D0(v5, (_DWORD)a3, 1, v16, v17, v18);
        v19 = *a3;
      }
      else
      {
        v19 = *a3;
        if ( (unsigned __int8)*a3 )
        {
          v19 |= 0x40uLL;
          *a3 = v19;
        }
      }
LABEL_21:
      v20 = get_tinfo_property(v19, 2);
      v21 = *a3;
      if ( (v20 & 0xF) == 0xB )
      {
        v33 = 0;
        v33 = get_tinfo_property(v21, 11);
        sub_327610(&v34, v5, &v33);
        copy_tinfo_t(a3, &v34);
        clear_tinfo_t(&v34);
        clear_tinfo_t(&v33);
        v8 = *a3;
        goto LABEL_5;
      }
      *(_QWORD *)&v34 = 0;
      *(_QWORD *)&v34 = get_tinfo_property(v21, 9);
      v30 = v34 & 0x3F;
      clear_tinfo_t(&v34);
      if ( v30 != 48 )
        goto LABEL_29;
      v31 = *(_QWORD *)(a2 + 1496);
      *(_QWORD *)&v34 = 0;
      copy_tinfo_t(&v34, v31 + 232);
      copy_tinfo_t(a3, &v34);
      clear_tinfo_t(&v34);
      v8 = *a3;
LABEL_5:
      *(_QWORD *)&v34 = 0;
      v9 = get_tinfo_property(v8, 9);
      v10 = v9;
      *(_QWORD *)&v34 = v9;
      clear_tinfo_t(&v34);
      if ( (v10 & 0x3F) == 0x30 )
      {
        v28 = *(_QWORD *)(a2 + 1496);
        *(_QWORD *)&v34 = 0;
        copy_tinfo_t(&v34, v28 + 232);
        copy_tinfo_t(a3, &v34);
        clear_tinfo_t(&v34);
      }
      return 1;
    case 8:
      v22 = *(_DWORD **)(a1 + 8);
      v23 = v22[2];
      v24 = *(_QWORD *)(*(_QWORD *)v22 + 24LL);
      *(_QWORD *)&v34 = 0;
      if ( (unsigned int)(v23 + 1) <= 0x100 )
        *(_QWORD *)&v34 = get_tinfo_property(*(_QWORD *)(v24 + 48), (unsigned int)(v23 + 25));
      copy_tinfo_t(a3, &v34);
      clear_tinfo_t(&v34);
      v8 = *a3;
      if ( (unsigned __int8)*a3 )
        goto LABEL_5;
      v25 = *(int **)(a1 + 8);
      v26 = v25[2];
      if ( (v26 & 0x80000000) != 0LL )
      {
        if ( !under_debugger )
          sub_37E160(50470);
      }
      else
      {
        v27 = *(_QWORD **)(*(_QWORD *)v25 + 32LL);
        if ( v26 < v27[1] )
        {
          copy_tinfo_t(a3, *v27 + 72 * v26 + 48);
LABEL_29:
          v8 = *a3;
          goto LABEL_5;
        }
        if ( !under_debugger )
          sub_37E160(50471);
      }
      BUG();
    default:
      return 0;
  }
}
