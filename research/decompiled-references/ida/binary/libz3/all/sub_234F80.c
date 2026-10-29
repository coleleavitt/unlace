void __fastcall sub_234F80(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  bool v4; // zf
  unsigned int *v5; // rsi
  __int64 v6; // rsi

  v2 = *a1;
  v3 = a1[1];
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v4 )
    {
      sub_15D7BC0(v2, v3);
      v2 = *a1;
    }
  }
  v5 = (unsigned int *)a1[3];
  if ( v5 )
  {
    sub_234C20((__int64 *)(v2 + 648), v5);
    v2 = *a1;
  }
  v6 = a1[2];
  if ( v6 )
  {
    v4 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v2, v6);
  }
}

