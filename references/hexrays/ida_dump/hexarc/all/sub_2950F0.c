unsigned __int64 __fastcall sub_2950F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  __int64 v5; // r15
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v10; // bp
  int v11; // edx
  int v12; // eax
  __int64 tinfo_property; // rax
  char v15; // r14
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  char v20; // bp
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v3 = a1 + 16;
  v5 = *(_QWORD *)(a2 + 1504);
  v23 = __readfsqword(0x28u);
  sub_294040(a1, a2, (_QWORD *)(a1 + 16));
  v7 = *(_DWORD *)(a1 + 4) | sub_294D40(a1, *(_QWORD *)(v5 + 96));
  *(_DWORD *)(a1 + 4) = v7;
  if ( (a3 & 0x40) != 0 )
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 16), 9);
    v15 = tinfo_property;
    v22 = tinfo_property;
    clear_tinfo_t(&v22);
    if ( (v15 & 0x40) != 0 )
      sub_3251D0(v5, v3, 0, v16, v17, v18);
    v7 = *(_DWORD *)(a1 + 4);
  }
  if ( (((unsigned __int8)v7 | a3) & 0x10) != 0 && (get_tinfo_property(*(_QWORD *)(a1 + 16), 2) & 0xF) == 0xA )
  {
    v19 = *(_QWORD *)(a1 + 16);
    v22 = 0;
    v22 = get_tinfo_property(v19, 9);
    v20 = get_tinfo_property(v22, 2) & 0xF;
    clear_tinfo_t(&v22);
    if ( v20 == 10 )
    {
      sub_324D40(&v21, v5, *(unsigned int *)(v5 + 84));
      sub_325010(&v22, v5, &v21);
      copy_tinfo_t(v3, &v22);
      clear_tinfo_t(&v22);
      clear_tinfo_t(&v21);
    }
  }
  v8 = *(_QWORD *)(a1 + 16);
  v21 = 0;
  v21 = get_tinfo_property(v8, 9);
  if ( (get_tinfo_property(v21, 2) & 0xF) == 0xB )
  {
    v22 = 0;
    v22 = get_tinfo_property(v21, 289);
    copy_tinfo_t(&v21, &v22);
    clear_tinfo_t(&v22);
    sub_325010(&v22, v5, &v21);
    copy_tinfo_t(v3, &v22);
    clear_tinfo_t(&v22);
  }
  v9 = *(_QWORD *)(a1 + 16);
  v22 = 0;
  v22 = get_tinfo_property(v9, 9);
  v10 = get_tinfo_property(v22, 2);
  clear_tinfo_t(&v22);
  v11 = 1;
  if ( (v10 & 0x3F) != 1 )
    v11 = sub_326E00(v3);
  v12 = v11 + 1;
  if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v12 = v11;
  *(_DWORD *)(a1 + 28) = v12;
  clear_tinfo_t(&v21);
  return v23 - __readfsqword(0x28u);
}
