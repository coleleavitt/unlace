_QWORD *__fastcall sub_20B2CF0(int *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *result; // rax
  _QWORD *v13; // [rsp+8h] [rbp-20h] BYREF

  v7 = *a1;
  v13 = a3;
  v8 = (v7 >> 1) + 1;
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v11 = 12;
    v10 = (unsigned int)(4 * v8);
    v9 = 4;
    if ( (unsigned int)v10 < 0xC )
    {
LABEL_3:
      v10 = v9 - (v8 + a1[1]);
      v11 = v9 >> 3;
      if ( (unsigned int)v10 > (unsigned int)v11 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = a1[4];
    v10 = (unsigned int)(4 * v8);
    v11 = 3 * v9;
    if ( (unsigned int)v10 < (unsigned int)v11 )
      goto LABEL_3;
  }
  v9 *= 2;
LABEL_9:
  sub_20B2A90((__int64)a1, v9, v11, v10, a5, a6);
  sub_20A1250((__int64)a1, a2, &v13);
  v8 = ((unsigned int)*a1 >> 1) + 1;
LABEL_4:
  *a1 = *a1 & 1 | (2 * v8);
  result = v13;
  if ( *v13 != -4096 )
    --a1[1];
  return result;
}
