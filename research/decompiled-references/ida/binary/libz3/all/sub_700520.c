void __fastcall sub_700520(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rsi

  *a1 = &off_1C53508;
  v2 = a1[3];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( !(_DWORD)v4 )
      goto LABEL_8;
    v5 = 8 * v4;
    v6 = 0;
    do
    {
      v7 = v6 + v3;
      v6 += 8;
      sub_17B1E70(a1[2], v7);
      v3 = a1[1];
    }
    while ( v5 != v6 );
    if ( v3 )
    {
LABEL_8:
      *(_DWORD *)(v3 - 4) = 0;
      sub_186B220((void *)(v3 - 8));
    }
  }
  operator delete(a1, 0x20u);
}

