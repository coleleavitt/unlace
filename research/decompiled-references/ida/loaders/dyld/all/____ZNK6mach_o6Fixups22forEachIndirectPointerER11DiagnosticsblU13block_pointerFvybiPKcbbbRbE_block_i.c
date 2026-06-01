__int64 __fastcall ___ZNK6mach_o6Fixups22forEachIndirectPointerER11DiagnosticsblU13block_pointerFvybiPKcbbbRbE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  __int64 v6; // x20
  __int64 v7; // x24
  unsigned int *v8; // x9
  int v9; // w8
  _BOOL4 v11; // w22
  unsigned int v13; // w10
  unsigned int v14; // w11
  bool v15; // cf
  unsigned int v16; // w10
  unsigned __int64 v17; // x25
  unsigned __int64 v18; // x9
  int v19; // w27
  __int64 v20; // x26
  __int64 v21; // x23
  __int64 v22; // x10
  _DWORD *v23; // x10
  char v24; // w8

  v6 = result;
  v7 = *(_QWORD *)(result + 48);
  v8 = (unsigned int *)(a2 + 104);
  v9 = *(_DWORD *)(a2 + 92);
  v11 = (v9 & 0x40000FF) == 0x4000008 && *(_DWORD *)(a2 + 104) == 5 && *(_DWORD *)(**(_QWORD **)v7 + 4LL) == 7;
  if ( (*(_DWORD *)(a2 + 92) & 0xFE) == 6 || v11 )
  {
    if ( (v9 & 0x4000000) == 0 || v11 )
    {
      if ( !v11 )
        v8 = (unsigned int *)(result + 96);
      v13 = *(_DWORD *)(a2 + 100);
      v14 = *(_DWORD *)(result + 100);
      v15 = v14 >= v13;
      v16 = v14 - v13;
      if ( v15 )
      {
        v17 = *v8;
        v18 = *(_QWORD *)(a2 + 72) / v17;
        if ( v16 >= (unsigned int)v18 )
        {
          if ( (_DWORD)v18 )
          {
            v19 = 0;
            v20 = 0;
            v21 = (unsigned int)(*(_QWORD *)(a2 + 72) / v17);
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL) + 24LL) )
                goto LABEL_31;
              v22 = *(unsigned int *)(*(_QWORD *)(v6 + 64) + 4LL * (unsigned int)(v20 + *(_DWORD *)(a2 + 100)));
              if ( (_DWORD)v22 != 0x40000000 )
                break;
LABEL_30:
              ++v20;
              v19 += v17;
              if ( v20 == v21 )
                goto LABEL_31;
            }
            if ( (_DWORD)v22 == 0x80000000 )
            {
LABEL_29:
              result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32));
              goto LABEL_30;
            }
            if ( (unsigned int)v22 > *(_DWORD *)(v6 + 104) )
            {
              result = Diagnostics::error(
                         *(Diagnostics **)(v6 + 56),
                         "indirect symbol[%d] = %d which is invalid symbol index");
              goto LABEL_34;
            }
            if ( (*(_BYTE *)(**(_QWORD **)v7 + 24LL) & 0x80) != 0 )
            {
              if ( *(_BYTE *)(v6 + 112) )
                goto LABEL_25;
            }
            else if ( *(_BYTE *)(v6 + 112) )
            {
LABEL_25:
              v23 = (_DWORD *)(*(_QWORD *)(v6 + 72) + 16 * v22);
              goto LABEL_28;
            }
            v23 = (_DWORD *)(*(_QWORD *)(v6 + 80) + 12 * v22);
LABEL_28:
            if ( *v23 > *(_DWORD *)(v6 + 108) )
            {
              result = Diagnostics::error(*(Diagnostics **)(v6 + 56), "symbol[%d] string offset out of range");
              goto LABEL_34;
            }
            goto LABEL_29;
          }
LABEL_31:
          v24 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL) + 24LL);
          goto LABEL_35;
        }
      }
      result = Diagnostics::error(*(Diagnostics **)(result + 56), "section %s overflows indirect symbol table");
    }
    else
    {
      result = Diagnostics::error(
                 *(Diagnostics **)(result + 56),
                 "S_ATTR_SELF_MODIFYING_CODE section type only valid in old i386 binaries");
    }
LABEL_34:
    v24 = 1;
LABEL_35:
    *a4 = v24;
  }
  return result;
}
