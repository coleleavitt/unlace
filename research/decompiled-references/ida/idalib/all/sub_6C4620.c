__int64 __fastcall sub_6C4620(unsigned int a1, __int64 *a2, char a3, int a4, unsigned __int64 a5)
{
  __int64 v9; // rdi
  bool v11; // r14
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 tinfo_size; // rax
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  bool v24; // cf
  unsigned __int64 v25; // rax
  char tinfo_property; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  unsigned __int64 v35; // [rsp+10h] [rbp-88h]
  __int64 v36; // [rsp+10h] [rbp-88h]
  char v37; // [rsp+1Fh] [rbp-79h]
  unsigned __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h] BYREF
  int v41; // [rsp+48h] [rbp-50h]
  int v42; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v9 = a2[8];
  v43 = __readfsqword(0x28u);
  v11 = a5 == 0;
  v32 = qword_2CCB598;
  v31 = a2 + 8;
  if ( (get_tinfo_property(v9, 2) & 0xF) != 0xE )
  {
    tinfo_size = get_tinfo_size(0, a2[8], 0);
    v20 = tinfo_size;
    if ( tinfo_size == -1 )
      return 4294967291LL;
    if ( a4 >= 0 )
    {
      if ( !v11 )
      {
        v21 = a2[1];
        v14 = 8 * tinfo_size;
        if ( v21 != 8 * tinfo_size )
          goto LABEL_78;
LABEL_14:
        v22 = *a2;
        if ( (*a2 & 7) != 0 )
          goto LABEL_51;
        if ( (a4 & 0x10) != 0 && (get_tinfo_property(a2[8], 2) & 0xF) == 0xB )
          return 4294967288LL;
        v18 = *((_DWORD *)a2 + 33);
        if ( (unsigned __int64)a2[3] <= 1 && (v18 & 0x20) == 0 )
        {
          set_error_string(0, &byte_22F0C30);
          return 4294967293LL;
        }
        goto LABEL_17;
      }
LABEL_42:
      a2[1] = 8 * v20;
      goto LABEL_14;
    }
    if ( (*((_BYTE *)a2 + 133) & 0x10) != 0 && v11 )
      return 4294967283LL;
    if ( tinfo_size || (v20 = get_tinfo_property(a2[8], 287)) == 0 )
    {
LABEL_68:
      if ( (a4 & 0x100) == 0 )
      {
        v33 = v20;
        v35 = a2[1];
        tinfo_property = get_tinfo_property(a2[8], 2);
        v20 = v33;
        if ( (tinfo_property & 0xF) != 0xB )
        {
          v27 = v35 >> 3;
          if ( v33 )
          {
            if ( v33 < v27 )
            {
              v39 = 0;
              if ( (a4 & 0x10) == 0 && v27 / v33 != 1 )
              {
                v38 = v27 / v33;
                v41 = 0;
                v40 = 0;
                v42 = v27 / v33;
                copy_tinfo_t(&v40);
                v37 = create_tinfo(&v39, 11, 11, &v40);
                clear_tinfo_t(&v40);
                v20 = v33;
                if ( v37 )
                {
                  v30 = a2[8];
                  v20 = v38 * v33;
                  a2[8] = v39;
                  v39 = v30;
                }
              }
              v36 = v20;
              clear_tinfo_t(&v39);
              v20 = v36;
            }
          }
        }
      }
      goto LABEL_42;
    }
    v40 = get_tinfo_property(a2[8], 289);
    v28 = v40;
    if ( a5 )
    {
      if ( get_tinfo_size(0, v40, 0) )
      {
        sub_60BC50(*(_QWORD *)(v32 + 1672), v31, 1024, 1, 0, 0);
        v28 = a2[8];
        goto LABEL_82;
      }
      v28 = v40;
    }
    v29 = a2[8];
    a2[8] = v28;
    v40 = v29;
LABEL_82:
    v34 = get_tinfo_size(0, v28, 0);
    clear_tinfo_t(&v40);
    v20 = v34;
    goto LABEL_68;
  }
  result = 4294967274LL;
  if ( a3 )
    return result;
  v13 = a2[8];
  LOWORD(v40) = 0;
  BYTE2(v40) = 0;
  if ( !(unsigned __int8)get_tinfo_details(v13, 14, &v40) )
    return 4294967291LL;
  v16 = (unsigned __int8)(v40 - 4) & 0xFB;
  if ( (((_BYTE)v40 - 4) & 0xFB) != 0 )
  {
    v16 = (unsigned int)(unsigned __int8)v40 - 1;
    if ( (unsigned __int8)(v40 - 1) > 1u )
      return 4294967291LL;
  }
  v17 = BYTE1(v40);
  if ( BYTE1(v40) > 8 * (unsigned __int8)v40 )
    return 4294967291LL;
  if ( a5 )
  {
    v21 = a2[1];
    if ( v21 == BYTE1(v40) )
    {
      if ( (a4 & 0x10) == 0 )
      {
        if ( a5 != 1 )
          return 4294967292LL;
        goto LABEL_9;
      }
      return 4294967287LL;
    }
LABEL_78:
    set_error_data(0, v21, v16, v17, v14, v15);
    return 4294967290LL;
  }
  a2[1] = BYTE1(v40);
  if ( (a4 & 0x10) != 0 )
    return 4294967287LL;
LABEL_9:
  v18 = *((_DWORD *)a2 + 33);
LABEL_17:
  if ( (v18 & 0xFFFF808F) != 0 )
    return 4294967273LL;
  if ( (v18 & 0x100) != 0 )
  {
    if ( (get_tinfo_property(a2[8], 2) & 0xF) != 0xA )
      return 4294967273LL;
    v18 = *((_DWORD *)a2 + 33);
  }
  if ( (v18 & 0x200) != 0 )
    return 4294967273LL;
  if ( (v18 & 0x400) != 0 )
  {
    if ( (*((_BYTE *)a2 + 65) & 1) == 0 )
    {
      v39 = 0;
      copy_tinfo_t(&v39);
      if ( (get_tinfo_property(v39, 2) & 0xF) == 0xB )
      {
        v40 = 0;
        v40 = get_tinfo_property(v39, 11);
        copy_tinfo_t(&v39);
        clear_tinfo_t(&v40);
      }
      if ( (_BYTE)v39 == 17 )
      {
        clear_tinfo_t(&v39);
        v18 = *((_DWORD *)a2 + 33);
        goto LABEL_26;
      }
      clear_tinfo_t(&v39);
    }
    return 4294967271LL;
  }
LABEL_26:
  if ( (v18 & 0x20) != 0 && (a5 > 1 || (get_tinfo_property(a2[8], 2) & 0x3F) != 0xD || get_tinfo_property(a2[8], 287)) )
    return 4294967272LL;
  if ( a1 && (unsigned __int8)sub_6C0750(a1, v31) )
    return 4294967270LL;
  v23 = a2[1];
  if ( !v23 )
  {
    if ( a5 <= 1 && (unsigned __int64)*a2 <= 0x7FFFFFFF7LL )
    {
      if ( !a3 )
        return 0;
      goto LABEL_47;
    }
    return 4294967292LL;
  }
  if ( !v11 )
  {
    v23 *= a5;
    if ( !is_mul_ok(a5, a2[1]) )
      return 4294967292LL;
  }
  v24 = __CFADD__(*a2, v23);
  v25 = *a2 + v23;
  if ( v24 || v25 > 0x7FFFFFFF7LL )
    return 4294967292LL;
  if ( !a3 )
  {
    if ( a5 <= 1 || a4 < 0 || !get_tinfo_property(a2[8], 287) )
      return 0;
    return 4294967284LL;
  }
LABEL_47:
  if ( !get_tinfo_property(a2[8], 287) )
  {
    if ( a5 > 1 && a4 >= 0 && get_tinfo_property(a2[8], 287) )
      return 4294967284LL;
    v22 = *a2;
    if ( *a2 )
    {
LABEL_51:
      sub_6C3C60(v22);
      return 4294967286LL;
    }
    return 0;
  }
  return 4294967285LL;
}
