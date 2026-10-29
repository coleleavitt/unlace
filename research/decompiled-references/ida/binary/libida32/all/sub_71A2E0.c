__int64 __fastcall sub_71A2E0(int *a1)
{
  __int64 *v1; // rsi
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbp
  int v8; // r12d
  __int64 v9; // rdx
  unsigned int *v10; // rsi

  sub_724BA0(a1, 1);
  v1 = *(__int64 **)(*((_QWORD *)a1 + 333) + 8LL);
  if ( !v1 && *((__int16 *)a1 + 817) > 0 )
  {
    v7 = (unsigned int *)(a1 + 410);
    v8 = 0;
    do
    {
      v9 = *v7;
      v10 = v7;
      ++v8;
      v7 += 8;
      sub_724B00(a1, v10, v9);
    }
    while ( v8 < *((__int16 *)a1 + 817) );
    v1 = *(__int64 **)(*((_QWORD *)a1 + 333) + 8LL);
  }
  v2 = *a1;
  *((_QWORD *)a1 + 5) = v1;
  v3 = *v1;
  if ( *((__int16 *)v1 + 4) <= (int)(v2 >> 1) )
  {
    if ( !under_debugger )
      interr(831);
    BUG();
  }
  if ( *(_WORD *)(v3 + 4) )
    return sub_71A620(a1, v1);
  v4 = a1[9];
  a1[9] = *(_DWORD *)v3;
  sub_71BAE0(a1, 1);
  result = sub_71B320(a1, v4);
  if ( !(_BYTE)result )
    sub_722BC0((unsigned int)dword_2CA2738, 0, v6);
  return result;
}

