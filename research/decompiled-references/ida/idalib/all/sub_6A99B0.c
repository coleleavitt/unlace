__int64 __fastcall sub_6A99B0(__int64 *a1, const char *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax

  v3 = strlen(a2);
  if ( v3 == 1 && *a2 == 35 )
    return 0;
  v4 = sub_6B2CF0(a1, v3);
  if ( !(_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    v6 = a1[1];
    v7 = (int)v3;
    if ( v6 )
    {
      --v6;
      v7 = (int)v3 + v6;
    }
    v8 = *a1;
    v9 = v7 + 1;
    if ( a1[2] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(a1, v8, v9, 1);
      v9 = v7 + 1;
      *a1 = v10;
      v8 = v10;
    }
    a1[1] = v9;
    *(_BYTE *)(v8 + v7) = 0;
    memmove((void *)(v6 + *a1), a2, (int)v3);
  }
  return v4;
}
