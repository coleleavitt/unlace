__int64 __fastcall sub_1A098F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  __int64 i; // r9
  __int64 result; // rax
  _DWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 j; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx

  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v8 = (_DWORD *)(a1 + 12 * a2);
    result = a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
    goto LABEL_14;
  }
  for ( i = a2; ; i = result )
  {
    result = 2 * (i + 1);
    v8 = (_DWORD *)(a1 + 24 * (i + 1));
    if ( *(v8 - 3) > *v8 )
    {
      --result;
      v8 = (_DWORD *)(a1 + 12 * result);
    }
    v9 = a1 + 12 * i;
    *(_QWORD *)v9 = *(_QWORD *)v8;
    *(_DWORD *)(v9 + 8) = v8[2];
    if ( v5 <= result )
      break;
  }
  if ( (a3 & 1) == 0 )
  {
LABEL_14:
    if ( (a3 - 2) / 2 == result )
    {
      v13 = result + 1;
      v14 = 2 * (result + 1);
      v15 = v14 + 4 * v13;
      result = v14 - 1;
      v16 = a1 + 4 * v15;
      *(_QWORD *)v8 = *(_QWORD *)(v16 - 12);
      v8[2] = *(_DWORD *)(v16 - 4);
      v8 = (_DWORD *)(a1 + 12 * result);
    }
  }
LABEL_8:
  v10 = (result - 1) / 2;
  if ( result > a2 )
  {
    for ( j = a1 + 12 * v10; (unsigned int)a4 > *(_DWORD *)j; v10 = (v10 - 1) / 2 )
    {
      v12 = a1 + 12 * result;
      *(_QWORD *)v12 = *(_QWORD *)j;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(j + 8);
      result = 3 * v10;
      v8 = (_DWORD *)(a1 + 12 * v10);
      if ( a2 >= v10 )
        break;
      j = a1 + 12 * ((v10 - 1) / 2);
      result = v10;
    }
  }
  *(_QWORD *)v8 = a4;
  v8[2] = a5;
  return result;
}
