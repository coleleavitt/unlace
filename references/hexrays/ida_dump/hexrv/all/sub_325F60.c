unsigned __int64 __fastcall sub_325F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  const char *v15; // r12
  char *v16; // r12
  __int16 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rax
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r13
  int v27; // r12d
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rsi
  int tinfo_size; // eax
  __int64 v34; // rcx
  const char *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r13
  const char *v38; // r15
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // [rsp+0h] [rbp-68h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 idati; // [rsp+10h] [rbp-58h] BYREF
  const char *v45; // [rsp+18h] [rbp-50h] BYREF
  __int16 v46; // [rsp+20h] [rbp-48h]
  char v47; // [rsp+22h] [rbp-46h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  get_stock_tinfo(a1 + 200, 0, a3, a4);
  get_stock_tinfo(a1 + 208, 2, v5, v6);
  get_stock_tinfo(a1 + 216, 4, v7, v8);
  get_stock_tinfo(a1 + 224, 5, v9, v10);
  get_stock_tinfo(a1 + 232, 7, v11, v12);
  get_stock_tinfo(a1 + 240, 9, v13, v14);
  sub_325A00(&idati, (__int64)"va_list");
  copy_tinfo_t(a1 + 248, &idati);
  clear_tinfo_t(&idati);
  v46 = 0;
  idati = 0;
  v45 = nullptr;
  v47 = 48;
  v15 = "__m64";
  if ( (unsigned __int8)sub_325400((__int64)&idati, 8, 48, 0, 0) )
    v15 = (const char *)idati;
  clear_tinfo_t(&v45);
  sub_325A00(&idati, (__int64)v15);
  copy_tinfo_t(a1 + 296, &idati);
  v16 = (char *)&unk_4B6520;
  clear_tinfo_t(&idati);
  do
  {
    v17 = *v16;
    v46 = 0;
    v18 = *((_QWORD *)v16 + 1);
    v47 = 48;
    idati = 0;
    v45 = nullptr;
    if ( (unsigned __int8)sub_325400((__int64)&idati, v17, 7, 0, 0) )
      v18 = idati;
    clear_tinfo_t(&v45);
    v19 = *((_QWORD *)v16 + 2);
    v46 = 0;
    v20 = v16[2];
    v42 = v19;
    idati = 0;
    v45 = nullptr;
    v47 = 48;
    if ( (unsigned __int8)sub_325400((__int64)&idati, v17, v20, 0, 0) )
      v42 = idati;
    clear_tinfo_t(&v45);
    v21 = *((_QWORD *)v16 + 3);
    v47 = 48;
    v43 = v21;
    idati = 0;
    v45 = nullptr;
    v46 = 0;
    if ( (unsigned __int8)sub_325400((__int64)&idati, v17, 25, 0, 0) )
      v43 = idati;
    clear_tinfo_t(&v45);
    v22 = v16[1];
    sub_325A00(&idati, v18);
    copy_tinfo_t(a1 + 8LL * (v22 + 25), &idati);
    clear_tinfo_t(&idati);
    sub_325A00(&idati, v42);
    copy_tinfo_t(a1 + 8LL * (v22 + 26), &idati);
    clear_tinfo_t(&idati);
    sub_325A00(&idati, v43);
    copy_tinfo_t(a1 + 8LL * (v22 + 27), &idati);
    v16 += 32;
    clear_tinfo_t(&idati);
  }
  while ( &off_4B6580 != (_UNKNOWN **)v16 );
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) == 8 )
  {
    idati = 21;
    copy_tinfo_t(a1 + 264, &idati);
    clear_tinfo_t(&idati);
    idati = 37;
  }
  else
  {
    idati = 7;
    copy_tinfo_t(a1 + 264, &idati);
    clear_tinfo_t(&idati);
    idati = 39;
  }
  copy_tinfo_t(a1 + 272, &idati);
  clear_tinfo_t(&idati);
  clear_tinfo_t(a1 + 256);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL) == 8 )
  {
    idati = 21;
    copy_tinfo_t(a1 + 280, &idati);
    clear_tinfo_t(&idati);
    idati = 37;
  }
  else
  {
    idati = 7;
    copy_tinfo_t(a1 + 280, &idati);
    clear_tinfo_t(&idati);
    idati = 39;
  }
  copy_tinfo_t(a1 + 288, &idati);
  clear_tinfo_t(&idati);
  v45 = "wchar_t";
  v46 = 256;
  idati = get_idati(&idati, &idati, v23, v24);
  v25 = create_tinfo(a1 + 376, 61, 61, &idati);
  v46 = 256;
  v26 = v25;
  v27 = v25 + 1;
  v28 = a1 + 8LL * (v25 + 47);
  v45 = "WCHAR";
  idati = get_idati(a1 + 376, 61, v29, v30);
  if ( !(unsigned __int8)create_tinfo(v28, 61, 61, &idati) )
  {
    if ( !v26 )
      return v48 - __readfsqword(0x28u);
    v27 = 1;
  }
  v32 = *(_QWORD *)(a1 + 376);
  tinfo_size = get_tinfo_size(0, v32, 0);
  if ( ((tinfo_size - 2) & 0xFFFFFFFD) == 0 )
  {
    v46 = 256;
    v35 = "wchar16_t";
    v36 = v27 + 47;
    if ( tinfo_size != 2 )
      v35 = "wchar32_t";
    v37 = a1 + 8 * v36;
    v45 = v35;
    v38 = v35 + 1;
    v39 = v37;
    idati = get_idati(0, v32, v36, v34);
    if ( (unsigned __int8)create_tinfo(v37, 61, 61, &idati) )
      v37 = a1 + 8LL * (v27 + 48);
    v46 = 256;
    v45 = v38;
    idati = get_idati(v39, 61, v40, v41);
    create_tinfo(v37, 61, 61, &idati);
  }
  return v48 - __readfsqword(0x28u);
}
