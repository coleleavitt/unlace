void __fastcall sub_56B570(__int64 a1)
{
  void **v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax
  void *v5; // rdi

  v2 = *(void ***)a1;
  if ( v2 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_6;
    v3 = 0;
    do
    {
      v4 = v3++;
      off_8C52A0(v2[v4]);
      v2 = *(void ***)a1;
    }
    while ( v3 < *(_DWORD *)(a1 + 8) );
    if ( v2 )
    {
LABEL_6:
      off_8C52A0(v2);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    off_8C52A0(v5);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
}
