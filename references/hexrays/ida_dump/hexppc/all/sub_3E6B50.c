__int64 __fastcall sub_3E6B50(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  __int64 v6; // rsi
  int tinfo_size; // eax
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // eax
  int v15; // eax
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
    if ( (get_tinfo_property(*a4, 2) & 0xF) == 9 )
    {
      if ( *(_BYTE *)(a2 + 4413) )
      {
        v14 = *a3;
        if ( *a3 <= 8 )
        {
          LODWORD(v11) = 1;
        }
        else if ( v14 == 16 )
        {
          LODWORD(v11) = 2;
        }
        else
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 144LL) || v14 != 32 )
            goto LABEL_28;
          LODWORD(v11) = 4;
        }
        v10 = *(_DWORD *)(a2 + 420);
        v17 = 0;
        v18 = 0;
        if ( v10 == -1 )
          goto LABEL_15;
        v12 = *(_QWORD *)(a2 + 96);
        goto LABEL_33;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 144LL) )
      {
LABEL_28:
        v17 = 0;
        v18 = 0;
        goto LABEL_15;
      }
      v15 = *a3;
      v10 = *(_DWORD *)(a2 + 364);
      if ( *a3 <= 4 )
        goto LABEL_6;
      if ( v15 != 8 )
      {
        if ( v15 != 16 )
          goto LABEL_28;
        v11 = 4;
LABEL_7:
        v17 = 0;
        v18 = 0;
        if ( v10 == -1 )
          goto LABEL_15;
        v12 = *(_QWORD *)(a2 + 96);
        if ( *(_DWORD *)(a2 + 420) != v10 )
        {
          if ( *(_BYTE *)(v12 + 145) )
            v10 -= *(_DWORD *)(a2 + 4408) * (v11 - 1);
          if ( v11 != 1 )
          {
            v13 = *(_DWORD *)(a2 + 4408);
            if ( *(_DWORD *)(a2 + 80) != v13 )
            {
              if ( v11 == 2 )
              {
                v16 = v13 + v10;
                cleanup_argloc(&v17);
                LODWORD(v17) = 4;
                LODWORD(v18) = v10 | (v16 << 16);
              }
              goto LABEL_15;
            }
          }
          goto LABEL_35;
        }
LABEL_33:
        if ( *(_BYTE *)(v12 + 145) )
          v10 -= 8 * v11 - 8;
LABEL_35:
        cleanup_argloc(&v17);
        LODWORD(v17) = 3;
        LODWORD(v18) = v10;
LABEL_15:
        *(_DWORD *)a1 = 0;
        copy_argloc(a1, &v17);
        cleanup_argloc(&v17);
        return a1;
      }
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 364);
      if ( *a3 <= *(_DWORD *)(a2 + 80) )
      {
LABEL_6:
        v11 = 1;
        goto LABEL_7;
      }
      if ( *a3 != 8 )
        goto LABEL_28;
    }
    v11 = 2;
    goto LABEL_7;
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}
