unsigned __int8 *__fastcall sub_6A69D0(__int64 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  _BYTE *v8; // rcx
  unsigned __int8 v9; // dl
  int v11; // eax
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a1[1];
  v15[1] = __readfsqword(0x28u);
  if ( v4 < a3 )
  {
    v13 = *a1;
    if ( a1[2] < (unsigned __int64)a3 )
    {
      v14 = qvector_reserve(a1, v13, a3, 8);
      v4 = a1[1];
      *a1 = v14;
      v13 = v14;
    }
    memset((void *)(v13 + 8 * v4), 0, 8 * (v3 - v4));
    a1[1] = v3;
    v4 = v3;
  }
  else if ( a3 != v4 )
  {
    a1[1] = a3;
    v4 = a3;
  }
  v6 = *a1;
  v7 = *a1 + 8 * v4;
  if ( *a1 >= v7 )
    return a2;
  v15[0] = a2;
  if ( a2 )
  {
    while ( *a2 )
    {
      v8 = a2 + 1;
      v15[0] = a2 + 1;
      v9 = *a2;
      if ( (*a2 & 0x80u) != 0 )
      {
        if ( v9 == 0xFF )
        {
          v11 = sub_6B3760(v15);
          v8 = (_BYTE *)v15[0];
        }
        else
        {
          v11 = v9 & 0x7F;
        }
        if ( !*v8 )
          return nullptr;
        a2 = v8 + 1;
        v6 += 8LL;
        v15[0] = v8 + 1;
        v12 = (unsigned __int8)*v8;
        *(_DWORD *)(v6 - 8) = v11;
        *(_DWORD *)(v6 - 4) = v12;
        if ( v6 >= v7 )
          return a2;
      }
      else
      {
        v6 += 8LL;
        ++a2;
        *(_DWORD *)(v6 - 4) = (char)((v9 >> 4) + 1);
        *(_DWORD *)(v6 - 8) = (unsigned __int8)((v9 & 0xF) - 1);
        if ( v6 >= v7 )
          return a2;
      }
      v15[0] = a2;
    }
  }
  return nullptr;
}
