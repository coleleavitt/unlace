__int64 __fastcall sub_238930(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  __int64 v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+38h] [rbp-30h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) )
    return 1;
  *(_QWORD *)(a1 + 120) = *a2;
  v3 = sub_237940(a1);
  if ( !v3 )
    return 1;
  if ( v3 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 120);
    v12 = 0;
    *a2 = v4;
    v5 = *(_QWORD *)(a1 + 112);
    v6 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 120) = v5;
    *(_QWORD *)(a1 + 128) = -1;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    v13 = -1;
    v14 = -1;
    v15 = 0xFFFFFFFFLL;
    v16 = 0;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree(v6);
    }
LABEL_6:
    *(_QWORD *)(a1 + 144) = 0;
    *(_OWORD *)(a1 + 152) = 0;
    copy_tinfo_t(a1 + 168, &v12);
    *(_QWORD *)(a1 + 176) = v13;
    *(_QWORD *)(a1 + 184) = v14;
    *(_QWORD *)(a1 + 192) = v15;
    *(_DWORD *)(a1 + 200) = v16;
    clear_tinfo_t(&v12);
    if ( !*(_DWORD *)(a1 + 296) )
      *(_DWORD *)(a1 + 300) = 1;
    return 1;
  }
  result = 0;
  if ( (*(_BYTE *)(a1 + 136) & 4) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v8 && (v8 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
    {
      v9 = *(_QWORD *)(a1 + 112);
      v12 = 0;
      *a2 = v9;
      v10 = *(_QWORD *)(a1 + 112);
      v11 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 120) = v10;
      ++*(_DWORD *)(a1 + 296);
      *(_QWORD *)(a1 + 128) = -1;
      *(_DWORD *)(a1 + 136) = 0;
      v13 = -1;
      v14 = -1;
      v15 = 0xFFFFFFFFLL;
      v16 = 0;
      if ( v11 )
      {
        *(_QWORD *)(a1 + 152) = 0;
        qfree(v11);
      }
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(52287);
      BUG();
    }
    return 0;
  }
  return result;
}
