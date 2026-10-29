__int64 __fastcall sub_968080(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // edx
  __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  unsigned int v11; // esi

  result = sub_180C1C0();
  if ( *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 104) )
  {
    v3 = *(char **)(a1 + 88);
    v4 = 0;
    v5 = *(unsigned int *)(a1 + 96);
    v6 = &v3[24 * v5];
    result = *(_QWORD *)(a1 + 88);
    if ( v3 == v6 )
      goto LABEL_19;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v6 == (char *)result )
          goto LABEL_8;
      }
      result += 24;
      ++v4;
    }
    while ( v6 != (char *)result );
LABEL_8:
    if ( (unsigned int)v5 <= 0x10 )
      goto LABEL_19;
    result = (unsigned int)(3 * v5);
    if ( (unsigned int)result >= 4 * v4 )
      goto LABEL_19;
    if ( v3 )
    {
      sub_186B220(v3);
      v7 = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v8 = v7 >> 1;
      *(_DWORD *)(a1 + 96) = v8;
      result = sub_186B270(24LL * v8);
      if ( !v8 )
      {
LABEL_18:
        *(_QWORD *)(a1 + 88) = result;
LABEL_19:
        *(_QWORD *)(a1 + 100) = 0;
        return result;
      }
      if ( v8 == 1 )
      {
        v10 = (_QWORD *)result;
LABEL_17:
        *v10 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v11 = (unsigned int)v5 >> 1;
      *(_QWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 96) = v11;
      v8 = v11;
      result = sub_186B270(24LL * v11);
    }
    v9 = (_QWORD *)result;
    do
    {
      *v9 = 0;
      v9 += 6;
      *(v9 - 3) = 0;
    }
    while ( (_QWORD *)(result + 48LL * (v8 >> 1)) != v9 );
    if ( (v8 & 1) == 0 )
      goto LABEL_18;
    v10 = (_QWORD *)(result + 24LL * (v8 & 0x7FFFFFFE));
    goto LABEL_17;
  }
  return result;
}

