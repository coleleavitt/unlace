__int64 __fastcall sub_7571C0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, char *a5, __int64 a6)
{
  char *v8; // r11
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v17; // rdx
  __int64 v18; // r10

  v8 = a5;
  v10 = a1[6] + 176LL * a2;
  v11 = *(_QWORD *)(v10 + 32);
  v12 = *(_QWORD *)(v10 + 24);
  v13 = v12 + 5 * v11;
  if ( (*(_BYTE *)(v10 + 164) & 4) != 0 )
  {
    if ( *(_BYTE *)(a4 + 4) )
    {
      v14 = *(_QWORD *)(v10 + 24);
      if ( v11 )
      {
        do
        {
          if ( !*(_BYTE *)(v14 + 4) )
            break;
          if ( *(_DWORD *)v14 == *(_DWORD *)a4 )
            goto LABEL_7;
          v14 += 5;
        }
        while ( v14 != v13 );
      }
    }
    else
    {
      v14 = sub_7534D0(*(_QWORD *)(v10 + 24), v12 + 5 * v11, a4);
      if ( v14 != v18 && *(_DWORD *)v14 == *v17 && !*(_BYTE *)(v14 + 4) )
        goto LABEL_8;
    }
LABEL_21:
    if ( !under_debugger )
      interr(1787);
    BUG();
  }
  if ( v12 == v13 )
    goto LABEL_21;
  v14 = *(_QWORD *)(v10 + 24);
  while ( *(_DWORD *)a4 != *(_DWORD *)v14 || *(_BYTE *)(a4 + 4) != *(_BYTE *)(v14 + 4) )
  {
    v14 += 5;
    if ( v14 == v13 )
      goto LABEL_21;
  }
LABEL_7:
  if ( v14 == v13 )
    goto LABEL_21;
LABEL_8:
  v15 = 0xCCCCCCCCCCCCCCCDLL * (v14 - v12);
  if ( v15 == -1 )
    goto LABEL_21;
  if ( !v8 || (unsigned int)sub_756AE0((__int64)a1, a3, v8) == -1 )
    return sub_756500(a1, a2, a3, v15, a6, 1);
  else
    return 1;
}

