__int64 __fastcall sub_4B7620(const char *a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v11; // rdx

  if ( !a1[16] )
    goto LABEL_13;
  if ( *(_DWORD *)a1 != 3 )
  {
    sub_4B56A0(a5, (__int64)a1, (__int64)a2, a3, a4);
LABEL_13:
    sub_4B56C0(a5, (__int64)a1, (__int64)a2, a3, a4);
    goto LABEL_14;
  }
  v5 = *((__int64 **)a1 + 1);
  v6 = v5[1];
  if ( v6 )
  {
    v7 = *v5;
    v8 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 8) )
      {
        a1 = *(const char **)v7;
        a2 = "layout";
        if ( !strcmp(*(const char **)v7, "layout") )
          break;
      }
      ++v8;
      v7 += 40;
      if ( v6 == v8 )
        goto LABEL_9;
    }
    v9 = v7 + 24;
  }
  else
  {
LABEL_9:
    v9 = 0;
  }
  if ( *(_DWORD *)v9 == 3 )
    return *(_QWORD *)(v9 + 8);
LABEL_14:
  sub_4B5660(a5, (__int64)a1, (__int64)a2, a3, a4);
  return sub_4B76C0(a1, a2, v11);
}
