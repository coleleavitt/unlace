__int64 __fastcall sub_22321A0(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // r12
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // eax
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx

  v2 = a1 + 6;
  v4 = a1[5] & 0x3F;
  *((_BYTE *)a1 + v4 + 24) = 0x80;
  v5 = (unsigned int *)((char *)a1 + v4 + 25);
  v6 = 64 - (v4 + 1);
  if ( v6 <= 7 )
  {
    if ( (v6 & 4) != 0 )
    {
      *v5 = 0;
      *(_DWORD *)((char *)v5 + (unsigned int)v6 - 4) = 0;
    }
    else if ( (_DWORD)v6 )
    {
      *(_BYTE *)v5 = 0;
      if ( (v6 & 2) != 0 )
        *(_WORD *)((char *)v5 + (unsigned int)v6 - 2) = 0;
    }
    sub_22315B0(a1, v2, 64);
    v5 = a1 + 6;
    v7 = 56;
  }
  else
  {
    v7 = 56 - (v4 + 1);
  }
  if ( v7 >= 8 )
  {
    *(_QWORD *)v5 = 0;
    *(_QWORD *)((char *)v5 + v7 - 8) = 0;
    v10 = (unsigned __int64)(v5 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    if ( ((v7 + (_DWORD)v5 - (_DWORD)v10) & 0xFFFFFFF8) >= 8 )
    {
      v11 = (v7 + (_DWORD)v5 - v10) & 0xFFFFFFF8;
      v12 = 0;
      do
      {
        v13 = v12;
        v12 += 8;
        *(_QWORD *)(v10 + v13) = 0;
      }
      while ( v12 < v11 );
    }
  }
  else if ( (v7 & 4) != 0 )
  {
    *v5 = 0;
    *(_DWORD *)((char *)v5 + v7 - 4) = 0;
  }
  else if ( v7 )
  {
    *(_BYTE *)v5 = 0;
    if ( (v7 & 2) != 0 )
      *(_WORD *)((char *)v5 + v7 - 2) = 0;
  }
  v8 = 8 * a1[5];
  a1[5] = v8;
  a1[20] = v8;
  a1[21] = a1[4];
  sub_22315B0(a1, v2, 64);
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  result = a1[3];
  a2[3] = result;
  return result;
}
