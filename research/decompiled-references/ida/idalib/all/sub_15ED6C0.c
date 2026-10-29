void __fastcall sub_15ED6C0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( !*((_BYTE *)a1 + 424) )
    return;
  v1 = a1[52];
  if ( v1 )
  {
    if ( *((_BYTE *)a1 + 100) )
    {
      v2 = (__int64 *)a1[10];
      v3 = &v2[*((unsigned int *)a1 + 23)];
      if ( v2 == v3 )
        goto LABEL_9;
      while ( 1 )
      {
        v4 = *v2;
        if ( v1 == *v2 )
          break;
        if ( v3 == ++v2 )
          goto LABEL_9;
      }
    }
    else
    {
      if ( !sub_2236570(a1 + 10, v1) )
        goto LABEL_9;
      v4 = a1[52];
    }
    *(_BYTE *)(v4 + 97) |= 4u;
  }
LABEL_9:
  if ( *((char *)a1 + 8) < 0 || !a1[45] )
  {
    v5 = *a1;
    *(_QWORD *)(v5 + 416) = a1[52];
    *(_BYTE *)(v5 + 424) = 1;
  }
}
