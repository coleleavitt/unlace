__int64 __fastcall sub_4B6140(_QWORD *a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = a1[18];
  v3 = *(_QWORD **)(v2 + 152);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(v2 + 144);
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = *(_QWORD **)(v2 + 152);
    if ( v3 )
LABEL_9:
      *((_DWORD *)v3 - 1) = 0;
  }
  *(_DWORD *)(v2 + 136) = 0;
  sub_1584740(a1);
  v8 = a1[20];
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = a1[66];
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  sub_1584740(a1 + 21);
  return sub_1584740(a1 + 41);
}

