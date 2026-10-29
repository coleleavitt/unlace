__int64 __fastcall sub_1A6A360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rbp
  __int64 result; // rax
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(_QWORD *); // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // [rsp+Fh] [rbp-39h]

  *(_BYTE *)(a1 + 1081) = 1;
  v6 = *(_QWORD **)(a2 + 24);
  v7 = &v6[2 * *(unsigned int *)(a2 + 32)];
  while ( v7 != v6 )
  {
    if ( *v6 )
      a2 = *v6 + 48LL;
    else
      a2 = 0;
    v6 += 2;
    sub_1A3E8C0((_QWORD **)(a1 + 656), a2, a3, a4, a5, a6);
  }
  v8 = *(_QWORD *)(a1 + 464);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v19 = 0;
    if ( v9 )
    {
      if ( ((*(__int64 *)(v9 + 8) >> 1) & 3) == 2 )
      {
        v18 = *(_QWORD *)(v9 + 16);
        if ( v18 )
          v19 = *(_BYTE *)(v18 + 16) == 49;
      }
    }
  }
  else
  {
    v19 = 0;
  }
  v10 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 248LL);
  result = 0;
  if ( *(_DWORD *)(v11 + 16) )
  {
    do
    {
      v13 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * result), a2, *(_QWORD *)(v11 + 8), a4, a5, a6);
      if ( v13 )
      {
        v14 = *(__int64 (__fastcall **)(_QWORD *))(*v13 + 32LL);
        v15 = (char *)v14 == (char *)sub_A01140 ? sub_B70A60((__int64)v13) : v14(v13);
        if ( !(unsigned __int8)sub_B8E180(v15 + 64) && (*(_BYTE *)(v15 + 75) & 1) == 0 && *(_BYTE *)(v15 + 73) >> 5 != 2 )
        {
          v17 = *(_QWORD *)(v15 + 40);
          if ( (v17 & 7) == 0
            && (v17 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && (v19 || (*(_BYTE *)(v15 + 28) & 0x7Fu) - 60 > 1)
            && ((*(_QWORD *)(v15 + 72) & 0x20000LL) != 0 || (*(_QWORD *)(v15 + 72) & 0x10000LL) != 0) )
          {
            a2 = v15 + 64;
            sub_1A3E8C0((_QWORD **)(a1 + 656), v15 + 64, v16, a4, a5, a6);
          }
        }
      }
      result = (unsigned int)(v10 + 1);
      v10 = result;
    }
    while ( (_DWORD)result != *(_DWORD *)(v11 + 16) );
  }
  return result;
}
