__int64 __fastcall sub_5657C0(__int64 *a1)
{
  _WORD *v1; // rax
  __int64 v4; // r10
  unsigned __int16 *v5; // rax
  unsigned int v6; // r8d
  unsigned __int16 v7; // dx
  __int64 v8; // rsi
  unsigned int v9; // edi
  unsigned __int16 *v10; // r9
  __int16 v11; // dx
  unsigned int v12; // edi
  unsigned __int8 *v13; // rax
  __int16 v14; // dx

  v1 = (_WORD *)a1[1];
  if ( !*((_BYTE *)a1 + 32) )
  {
    v4 = *a1;
    v5 = v1 + 1;
    v6 = *(_DWORD *)(*a1 + 4);
    v7 = *((_WORD *)a1 + 24) + 1;
    do
    {
      v9 = v7;
      *((_WORD *)a1 + 24) = v7;
      v10 = v5;
      if ( v7 >= v6 )
      {
        a1[1] = (__int64)v5;
        return 0;
      }
      v8 = *v5;
      ++v7;
      ++v5;
      *((_WORD *)a1 + 13) = v8;
    }
    while ( !(_WORD)v8 );
    a1[1] = (__int64)v10;
    if ( v9 < *(_DWORD *)(v4 + 12) )
      goto LABEL_12;
LABEL_14:
    *((_WORD *)a1 + 25) = v8;
    *((_WORD *)a1 + 26) = 0;
    return 1;
  }
  a1[1] = (__int64)(v1 + 1);
  if ( (_WORD *)a1[2] != v1 + 1 )
  {
    *((_WORD *)a1 + 24) = v1[1];
    return 1;
  }
  v11 = *((_WORD *)a1 + 15);
  if ( !v11 )
    return 0;
  v4 = *a1;
  *((_WORD *)a1 + 15) = v11 - 1;
  v8 = (unsigned __int16)v1[1];
  a1[1] = (__int64)(v1 + 3);
  *((_WORD *)a1 + 13) = v8;
  v12 = (unsigned __int16)v1[3];
  a1[2] = (__int64)&v1[(unsigned __int16)v1[2] + 3];
  *((_WORD *)a1 + 24) = v12;
  if ( v12 >= *(_DWORD *)(v4 + 12) )
    goto LABEL_14;
LABEL_12:
  v13 = (unsigned __int8 *)(*(_QWORD *)(v4 + 64) + 8 * v8);
  v14 = *v13;
  a1[5] = (__int64)(v13 + 8);
  *((_WORD *)a1 + 26) = v14;
  *((_WORD *)a1 + 25) = 0;
  return 1;
}
