__int64 __fastcall sub_3E5500(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  __int64 v6; // rsi
  int tinfo_size; // eax
  char tinfo_property; // al
  int v11; // ecx
  int v12; // edx
  int v13; // r12d
  int v14; // eax
  int v15; // r12d
  int v16; // r13d
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v6 = *a4;
  v19 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v6, 0);
  *a3 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    tinfo_property = get_tinfo_property(*a4, 2);
    v11 = *a3;
    v12 = *(_DWORD *)(a2 + 80);
    if ( (tinfo_property & 0xF) == 9 )
    {
      if ( v12 < v11 && v11 != 8 )
      {
        if ( v11 == 16 )
        {
          v17 = 0;
          v18 = 0;
          if ( v12 == 8 )
          {
            v15 = *(_DWORD *)(a2 + 492);
            v16 = *(_DWORD *)(a2 + 484);
            cleanup_argloc(&v17);
            *(_DWORD *)a1 = 0;
            LODWORD(v17) = 4;
            LODWORD(v18) = v16 | (v15 << 16);
            copy_argloc(a1, &v17);
            cleanup_argloc(&v17);
            return a1;
          }
          goto LABEL_10;
        }
        goto LABEL_9;
      }
      v13 = *(_DWORD *)(a2 + 484);
    }
    else
    {
      if ( *(_DWORD *)(a2 + 748) == 5 )
      {
        v13 = *(_DWORD *)(a2 + 372);
        v14 = *(_DWORD *)(a2 + 376);
      }
      else
      {
        v13 = *(_DWORD *)(a2 + 364);
        v14 = *(_DWORD *)(a2 + 368);
      }
      if ( v12 < v11 )
      {
        if ( 2 * v12 != v11 )
        {
LABEL_9:
          v17 = 0;
          v18 = 0;
LABEL_10:
          *(_DWORD *)a1 = 0;
          copy_argloc(a1, &v17);
          cleanup_argloc(&v17);
          return a1;
        }
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
          v13 = v14;
      }
    }
    v17 = 0;
    v18 = 0;
    if ( v13 != -1 )
    {
      cleanup_argloc(&v17);
      LODWORD(v17) = 3;
      LODWORD(v18) = v13;
    }
    goto LABEL_10;
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}
