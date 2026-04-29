_QWORD *__fastcall sub_24AF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  bool v7; // zf
  _BOOL4 v8; // r15d
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v20[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = *(_DWORD *)a3 == 8;
  v18 = 0;
  v8 = !v7;
  copy_tinfo_t(&v18, a4);
  v9 = v8 + 1;
  v10 = *(unsigned int *)(a3 + 68);
  v19 = 0;
  if ( (*(_BYTE *)(a3 + 65) & 4) == 0 )
  {
    if ( sub_11CA80(v10)
      || !(unsigned __int8)sub_23F100(
                             &v19,
                             *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL),
                             *(_QWORD *)(a3 + 24),
                             a3 + 64,
                             *(_DWORD *)(a3 + 68),
                             0) )
    {
      sub_32C430(v20, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a3 + 68), v9);
      copy_tinfo_t(&v19, v20);
      clear_tinfo_t(v20);
    }
LABEL_13:
    v11 = v18;
    v12 = v18;
    if ( !(_BYTE)v18 )
      goto LABEL_8;
    if ( (v18 & 0xE) != 0 )
      goto LABEL_4;
LABEL_15:
    if ( (v12 & 0x30) != 0 )
      goto LABEL_8;
    goto LABEL_4;
  }
  sub_32C150(v20, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v10);
  copy_tinfo_t(&v19, v20);
  clear_tinfo_t(v20);
  v11 = v18;
  v12 = v18;
  if ( !(_BYTE)v18 )
  {
    copy_tinfo_t(&v18, &v19);
    goto LABEL_13;
  }
  if ( (v18 & 0xE) == 0 )
    goto LABEL_15;
LABEL_4:
  if ( *(_DWORD *)(a3 + 68) != get_tinfo_size(0, v11, 0) )
  {
    if ( !under_debugger )
      sub_383060(50986);
    BUG();
  }
  if ( (unsigned int)(*(_DWORD *)a3 - 8) <= 1 )
    a2 = sub_244E70(a2, &v19);
  copy_tinfo_t(&v19, &v18);
LABEL_8:
  if ( !(unsigned __int8)sub_246B40(a2, *(_QWORD *)(a1 + 328), &v19) )
  {
    v13 = j__qalloc_or_throw(64);
    *(_QWORD *)(v13 + 24) = a2;
    v14 = v13;
    *(_QWORD *)v13 = -1;
    *(_DWORD *)(v13 + 8) = 48;
    *(_QWORD *)(v13 + 12) = -1;
    *(_QWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 56) = 0;
    copy_tinfo_t(v13 + 48, &v19);
    a2 = v14;
  }
  v15 = sub_24AE20(a1, a3, a2, &v18, a5);
  clear_tinfo_t(&v19);
  clear_tinfo_t(&v18);
  return v15;
}
