__int64 __fastcall sub_3A86A0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // eax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // [rsp+4h] [rbp-84h] BYREF
  __int64 v27; // [rsp+8h] [rbp-80h] BYREF
  __int64 v28; // [rsp+10h] [rbp-78h] BYREF
  __int64 v29; // [rsp+18h] [rbp-70h] BYREF
  char v30; // [rsp+20h] [rbp-68h]
  unsigned int v31; // [rsp+24h] [rbp-64h]
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  const char *v33; // [rsp+38h] [rbp-50h]
  __int16 v34; // [rsp+40h] [rbp-48h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 80);
  v35 = __readfsqword(0x28u);
  v30 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  if ( v4 == 1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    v14 = *(_DWORD *)(v13 + 8);
    if ( (unsigned int)(v14 - 59) <= 1 )
    {
      v24 = *(_QWORD *)(v13 + 24);
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v24 + 48), 10);
      copy_tinfo_t(&v29, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
      v28 = *(unsigned int *)(v13 + 32);
      if ( a3 )
      {
        sub_3A51B0((__int64)&tinfo_property, &v29, v28);
        sub_3A4550(a3, &tinfo_property);
        if ( tinfo_property )
        {
          v33 = nullptr;
          qfree(tinfo_property);
        }
      }
      goto LABEL_8;
    }
    v15 = (unsigned int)(v14 - 48);
    if ( (unsigned int)v15 <= 0x15 )
    {
      v16 = 2294273;
      if ( _bittest64(&v16, v15) )
      {
        if ( (unsigned __int8)sub_3A4850((__int64)&v28, v13 + 48) )
          goto LABEL_7;
      }
    }
    v17 = sub_3879E0(a1, &v27, (int *)&v26);
    v18 = v17;
    if ( v17 )
    {
      v19 = (unsigned int)*((char *)v17 + 12);
      v20 = v17[5];
      if ( (unsigned __int8)is_enum(v20, v19) )
      {
        v22 = s1;
        if ( v18[3] )
          v22 = (const char *)v18[2];
        if ( v22 )
        {
          v33 = v22;
          v34 = 256;
          tinfo_property = get_idati(v20, v19, 256, v21);
          if ( (unsigned __int8)create_tinfo(&v29, 61, 61, &tinfo_property) )
          {
            v31 = v26 & 0xF | v31 & 0xFFFFFFF0;
            v23 = sub_325C90(v27, v26, 0);
            v28 = v23;
            if ( a3 )
              sub_25CA60(a3, (__int64)&v29, *((_BYTE *)v18 + 14), v23, v26, 0);
            goto LABEL_8;
          }
        }
      }
    }
LABEL_13:
    v11 = 0;
    goto LABEL_11;
  }
  if ( (unsigned int)(v4 - 2) > 1 )
    goto LABEL_13;
  if ( v4 == 2 )
  {
    v25 = *(_QWORD *)(a1 + 88);
    tinfo_property = 0;
    copy_tinfo_t(&tinfo_property, v25 + 80);
  }
  else
  {
    sub_368820(&tinfo_property, *(_QWORD *)(a1 + 24), 0);
  }
  if ( !(unsigned __int8)sub_3A4850((__int64)&v28, (__int64)&tinfo_property) )
  {
    clear_tinfo_t(&tinfo_property);
    goto LABEL_13;
  }
  clear_tinfo_t(&tinfo_property);
LABEL_7:
  if ( a3 && (v29 & 0x100) != 0 )
    get_tinfo_pdata(a3, v29, 0);
LABEL_8:
  if ( a2 )
  {
    sub_3A4470(&v29);
    v6 = v31;
    v31 = *(_DWORD *)(a2 + 20);
    v7 = *(_QWORD *)a2;
    *(_DWORD *)(a2 + 20) = v6;
    v8 = v28;
    v28 = v7;
    v9 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v8;
    v10 = v29;
    v29 = v9;
    LOBYTE(v9) = *(_BYTE *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = v10;
    LOBYTE(v10) = v30;
    v30 = v9;
    *(_BYTE *)(a2 + 16) = v10;
  }
  v11 = 1;
LABEL_11:
  clear_tinfo_t(&v29);
  return v11;
}
