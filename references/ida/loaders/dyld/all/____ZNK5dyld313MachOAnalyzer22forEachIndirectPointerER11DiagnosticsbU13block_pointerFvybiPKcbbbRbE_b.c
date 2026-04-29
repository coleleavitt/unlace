__int64 __fastcall ___ZNK5dyld313MachOAnalyzer22forEachIndirectPointerER11DiagnosticsbU13block_pointerFvybiPKcbbbRbE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  __int64 v6; // x20
  __int64 v7; // x24
  unsigned int *v8; // x9
  _BOOL4 v10; // w22
  unsigned int v12; // w10
  unsigned int v13; // w11
  bool v14; // cf
  unsigned int v15; // w10
  unsigned __int64 v16; // x25
  unsigned __int64 v17; // x9
  int v18; // w27
  __int64 v19; // x26
  __int64 v20; // x23
  __int64 v21; // x10
  _DWORD *v22; // x10
  char v23; // w8

  v6 = result;
  v7 = *(_QWORD *)(result + 48);
  v8 = (unsigned int *)(a2 + 104);
  v10 = (*(_DWORD *)(a2 + 92) & 0x40000FF) == 0x4000008 && *(_DWORD *)(a2 + 104) == 5 && *(_DWORD *)(v7 + 4) == 7;
  if ( (*(_DWORD *)(a2 + 92) & 0xFE) == 6 || v10 )
  {
    if ( (*(_BYTE *)(v7 + 27) & 4) == 0 || v10 )
    {
      if ( !v10 )
        v8 = (unsigned int *)(result + 96);
      v12 = *(_DWORD *)(a2 + 100);
      v13 = *(_DWORD *)(result + 100);
      v14 = v13 >= v12;
      v15 = v13 - v12;
      if ( v14 )
      {
        v16 = *v8;
        v17 = *(_QWORD *)(a2 + 72) / v16;
        if ( v15 >= (unsigned int)v17 )
        {
          if ( (_DWORD)v17 )
          {
            v18 = 0;
            v19 = 0;
            v20 = (unsigned int)(*(_QWORD *)(a2 + 72) / v16);
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL) + 24LL) )
                goto LABEL_31;
              v21 = *(unsigned int *)(*(_QWORD *)(v6 + 64) + 4LL * (unsigned int)(v19 + *(_DWORD *)(a2 + 100)));
              if ( (_DWORD)v21 != 0x40000000 )
                break;
LABEL_30:
              ++v19;
              v18 += v16;
              if ( v19 == v20 )
                goto LABEL_31;
            }
            if ( (_DWORD)v21 == 0x80000000 )
            {
LABEL_29:
              result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32));
              goto LABEL_30;
            }
            if ( (unsigned int)v21 > *(_DWORD *)(v6 + 104) )
            {
              result = Diagnostics::error(
                         *(Diagnostics **)(v6 + 56),
                         "indirect symbol[%d] = %d which is invalid symbol index");
              goto LABEL_34;
            }
            if ( (*(_BYTE *)(v7 + 24) & 0x80) != 0 )
            {
              if ( *(_BYTE *)(v6 + 112) )
                goto LABEL_25;
            }
            else if ( *(_BYTE *)(v6 + 112) )
            {
LABEL_25:
              v22 = (_DWORD *)(*(_QWORD *)(v6 + 72) + 16 * v21);
              goto LABEL_28;
            }
            v22 = (_DWORD *)(*(_QWORD *)(v6 + 80) + 12 * v21);
LABEL_28:
            if ( *v22 > *(_DWORD *)(v6 + 108) )
            {
              result = Diagnostics::error(*(Diagnostics **)(v6 + 56), "symbol[%d] string offset out of range");
              goto LABEL_34;
            }
            goto LABEL_29;
          }
LABEL_31:
          v23 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL) + 24LL);
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
    v23 = 1;
LABEL_35:
    *a4 = v23;
  }
  return result;
}
