/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82290
// Address: 0x0000000000082290

//----- (0000000000082290) ----------------------------------------------------
void __fastcall sub_82290(__int64 a1)
{
  char *v1; // rbx
  char *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax

  if ( !*(_BYTE *)(a1 + 504) )
    sub_83DD0(*(void ***)(a1 + 456));
  *(_QWORD *)(a1 + 456) = 0;
  *(_BYTE *)(a1 + 504) = 0;
  if ( *(_QWORD *)(a1 + 488) )
  {
    v1 = *(char **)(a1 + 480);
    if ( v1 )
    {
      do
      {
        v2 = *(char **)v1;
        sub_8BE80((char **)v1 + 5);
        if ( (v1[16] & 1) != 0 )
          operator delete(*((void **)v1 + 4));
        operator delete(v1);
        v1 = v2;
      }
      while ( v2 );
    }
    *(_QWORD *)(a1 + 480) = 0;
    v3 = *(_QWORD *)(a1 + 472);
    if ( !v3 )
      goto LABEL_17;
    v4 = *(_QWORD *)(a1 + 472) & 3LL;
    if ( (unsigned __int64)(v3 - 1) >= 3 )
    {
      v6 = v3 - v4;
      v5 = 0;
      do
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v5) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v5 + 8) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v5 + 16) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v5 + 24) = 0;
        v5 += 4;
      }
      while ( v6 != v5 );
      if ( !v4 )
        goto LABEL_17;
    }
    else
    {
      v5 = 0;
      if ( (v3 & 3) == 0 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 488) = 0;
        return;
      }
    }
    v7 = -v4;
    do
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v5++) = 0;
      ++v7;
    }
    while ( v7 );
    goto LABEL_17;
  }
}
