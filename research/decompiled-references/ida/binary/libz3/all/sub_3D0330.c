__int64 __fastcall sub_3D0330(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rax
  int v7; // edi
  __int64 *v9; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v19; // rax

  v5 = *(unsigned int *)(a2 + 568);
  v7 = *(_DWORD *)(a4 + 12);
  v9 = *(__int64 **)(a2 + 560);
  v11 = v5 - 1;
  v5 *= 16;
  v12 = (__int64 *)((char *)v9 + v5);
  v13 = 16LL * (v7 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 != v5 )
  {
    for ( i = &v9[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v7 && a4 == v16 )
        {
LABEL_11:
          v17 = i[1];
          goto LABEL_9;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v14 != v9; v9 += 2 )
  {
    v19 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v19 + 12) == v7 && a4 == v19 )
      {
        i = v9;
        goto LABEL_11;
      }
    }
    else if ( !v19 )
    {
      break;
    }
  }
LABEL_8:
  v17 = a4;
LABEL_9:
  sub_408670(a1, *(_QWORD *)(a2 + 552), a3, a4, v17);
  return a1;
}

