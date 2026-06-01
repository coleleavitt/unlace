__int64 __fastcall sub_8D69E0(__int64 a1)
{
  unsigned __int8 (*v2)(void); // rax
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  __int64 **v6; // rdx
  __int64 **v7; // rsi
  int v8; // edi
  __int64 **v9; // rax
  __int64 v10; // rcx
  int *v11; // rdx
  int v12; // edx
  int *v13; // rdx
  int v14; // edx

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 176LL);
  if ( (char *)v2 != (char *)sub_894050 )
  {
    if ( !v2() )
      goto LABEL_5;
LABEL_28:
    sub_8D6820(a1);
    return 1;
  }
  v3 = *(_QWORD *)(a1 + 672);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  if ( *(_DWORD *)(a1 + 680) != v4 )
    goto LABEL_28;
LABEL_5:
  if ( !*(_BYTE *)(a1 + 584) )
    return 1;
  result = 2;
  if ( !*(_BYTE *)(a1 + 740) )
  {
    v6 = *(__int64 ***)(*(_QWORD *)(a1 + 16) + 8664LL);
    if ( !v6 || (v7 = &v6[*((unsigned int *)v6 - 1)], v6 == v7) )
    {
LABEL_22:
      sub_8D34C0(a1 + 216, *(_DWORD *)(a1 + 588), *(_DWORD *)(a1 + 592));
      return 0;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 8);
      v9 = v6;
      if ( v8 != -1 )
      {
        while ( 1 )
        {
          v10 = **v9;
          v11 = *(int **)(*(_QWORD *)(v10 + 16) + 24LL);
          if ( v11 )
          {
            v12 = *v11;
            if ( v12 && v8 != v12 && (*(_WORD *)(v10 + 4) || *(_DWORD *)(v10 + 24) || v12 != -1) )
              return 2;
          }
          else if ( *(_WORD *)(v10 + 4) || *(_DWORD *)(v10 + 24) )
          {
            return 2;
          }
          if ( v7 == ++v9 )
            goto LABEL_22;
        }
      }
      while ( 1 )
      {
        v13 = *(int **)(*(_QWORD *)(**v9 + 16) + 24LL);
        if ( v13 )
        {
          v14 = *v13;
          if ( v14 != -1 )
          {
            if ( v14 )
              return 2;
          }
        }
        if ( v7 == ++v9 )
          goto LABEL_22;
      }
    }
  }
  return result;
}

