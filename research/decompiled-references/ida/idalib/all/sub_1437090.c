__int64 (__fastcall *__fastcall sub_1437090(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  __int64 v7; // rbp
  char *v9; // rsi
  __int64 v10; // rdi
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall *result)(); // rax
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  unsigned int v20; // r13d
  __int64 (__fastcall *v21)(__int64); // rax

  v7 = *(_QWORD *)(a1 + 1120);
  if ( v7 )
  {
    v9 = *(char **)(a1 + 1176);
    if ( v9 != *(char **)(a1 + 1184) )
    {
LABEL_3:
      v10 = *(_QWORD *)(a1 + 1152);
      v11 = v9 + 56;
      v12 = *(_QWORD *)(a1 + 1128);
      v13 = *(_QWORD *)(a1 + 1136);
      *((_QWORD *)v11 - 6) = *(_QWORD *)(a1 + 1160);
      v14 = *(_QWORD *)(a1 + 1112);
      *((_QWORD *)v11 - 7) = v10;
      *(_QWORD *)(a1 + 1112) = 0;
      *((_QWORD *)v11 - 5) = v14;
      v15 = *(_QWORD *)(a1 + 1144);
      *((_QWORD *)v11 - 4) = v7;
      *(_QWORD *)(a1 + 1144) = 0;
      *((_QWORD *)v11 - 3) = v15;
      *((_QWORD *)v11 - 2) = v12;
      *((_QWORD *)v11 - 1) = v13;
      *(_QWORD *)(a1 + 1176) = v11;
LABEL_4:
      *(_QWORD *)(a1 + 1120) = 0;
      goto LABEL_5;
    }
LABEL_20:
    sub_1417C50(
      a1 + 1168,
      v9,
      (_QWORD *)(a1 + 1152),
      (_QWORD *)(a1 + 1160),
      (_QWORD *)(a1 + 1112),
      (_QWORD *)(a1 + 1120),
      (__int64 *)(a1 + 1144),
      (__int64 *)(a1 + 1128));
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 1144) )
  {
    v9 = *(char **)(a1 + 1176);
    if ( v9 != *(char **)(a1 + 1184) )
      goto LABEL_3;
    goto LABEL_20;
  }
LABEL_5:
  v16 = *(_QWORD *)(a1 + 1112);
  *(_QWORD *)(a1 + 1112) = a2;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *(_QWORD *)(a1 + 1120) = a2;
  result = sub_1436080;
  *(_QWORD *)(a1 + 1128) = a3;
  *(_QWORD *)(a1 + 1136) = a4;
  *(_QWORD *)(a1 + 1160) = 0;
  if ( *(__int64 (__fastcall **)())(a1 + 1152) != sub_1436080 )
  {
    result = (__int64 (__fastcall *)())sub_1436070;
    if ( !*(_QWORD *)(a2 + 192) )
      result = (__int64 (__fastcall *)())sub_1436060;
    *(_QWORD *)(a1 + 1152) = result;
  }
  if ( *(_QWORD *)(a1 + 1192) )
  {
    result = *(__int64 (__fastcall **)())(a1 + 1112);
    if ( !*((_BYTE *)result + 145) )
    {
      v18 = 0;
      v19 = 0;
      v20 = sub_1021680(*(_QWORD *)(a1 + 88), *((_DWORD *)result + 32));
      if ( v7 )
      {
        v18 = *(_DWORD *)(v7 + 16);
        v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
        if ( v21 == sub_13D0890 )
          v19 = sub_13D1500(v7, *(_QWORD *)(v7 + 152), 1);
        else
          v19 = v21(v7);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1192) + 16LL))(
        *(_QWORD *)(a1 + 1192),
        *(unsigned int *)(*(_QWORD *)(a1 + 1112) + 128LL),
        0,
        v20,
        v18);
      return (__int64 (__fastcall *)())(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1192) + 24LL))(
                                         *(_QWORD *)(a1 + 1192),
                                         *(unsigned int *)(*(_QWORD *)(a1 + 1112) + 16LL),
                                         0,
                                         v20,
                                         v18,
                                         v19);
    }
  }
  return result;
}
