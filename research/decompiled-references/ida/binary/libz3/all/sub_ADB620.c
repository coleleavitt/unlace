__int64 __fastcall sub_ADB620(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = a1[129];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = a1[130];
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = (_QWORD *)a1[132];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[131];
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (_QWORD *)a1[132];
    if ( v4 )
LABEL_13:
      *((_DWORD *)v4 - 1) = 0;
  }
  result = a1[134];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

