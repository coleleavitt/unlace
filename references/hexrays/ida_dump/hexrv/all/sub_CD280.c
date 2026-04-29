void __fastcall sub_CD280(__int64 *a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned int v4; // edx
  _DWORD *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = a1[1];
  v3 = *a1;
  v4 = v2 - 1;
  if ( (int)v2 - 1 < 0 )
  {
LABEL_9:
    if ( v3 )
    {
      a1[1] = 0;
      qfree(v3);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  else
  {
    v5 = (_DWORD *)(v3 + 4LL * v4);
    while ( *v5 == -1 )
    {
      --v4;
      --v5;
      if ( v4 == -1 )
        goto LABEL_9;
    }
    v6 = v4 + 1;
    v7 = (int)v6;
    if ( v2 < (int)v6 )
    {
      if ( a1[2] < (unsigned __int64)(int)v6 )
      {
        v8 = qvector_reserve(a1, v3, (int)v6, 4);
        v2 = a1[1];
        *a1 = v8;
        v3 = v8;
      }
      memset((void *)(v3 + 4 * v2), 0, 4 * (v7 - v2));
      a1[1] = v7;
    }
    else if ( v6 != v2 )
    {
      a1[1] = (int)v6;
    }
  }
}
