__int64 *__fastcall sub_66160(__int64 *a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r11d
  unsigned __int64 v5; // rax
  int v7; // r10d
  __int64 *result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  unsigned int v11; // edi
  __int64 **v12; // r8
  __int64 **v13; // rcx

  v4 = *(_DWORD *)(a4 + 4);
  v5 = *a3;
  v7 = v4 + *((_DWORD *)a3 + 2);
  *((_DWORD *)a3 + 2) = v7;
  *a1 = ~(-1LL << v4) & (v5 >> -(char)v7);
  result = (__int64 *)*((unsigned int *)a3 + 2);
  if ( (unsigned int)result > 0x40 )
  {
    result = qword_A9B00;
    a3[2] = (unsigned __int64)qword_A9B00;
LABEL_7:
    *a2 = a4 + 8;
    return result;
  }
  v9 = a3[2];
  if ( v9 < a3[4] )
  {
    v10 = a3[3];
    if ( v9 != v10 )
    {
      v11 = (unsigned int)result >> 3;
      v12 = (__int64 **)(v9 - ((unsigned int)result >> 3));
      if ( v10 > (unsigned __int64)v12 )
      {
        v11 = v9 - v10;
        v12 = (__int64 **)(v9 - (unsigned int)(v9 - v10));
      }
      a3[2] = (unsigned __int64)v12;
      *((_DWORD *)a3 + 2) = (_DWORD)result - 8 * v11;
      result = *v12;
      *a3 = (unsigned __int64)*v12;
    }
    goto LABEL_7;
  }
  *((_DWORD *)a3 + 2) &= 7u;
  v13 = (__int64 **)(v9 - ((unsigned int)result >> 3));
  a3[2] = (unsigned __int64)v13;
  result = *v13;
  *a3 = (unsigned __int64)*v13;
  *a2 = a4 + 8;
  return result;
}

