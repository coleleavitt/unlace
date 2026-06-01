unsigned __int64 __fastcall sub_86F610(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 result; // rax

  v3 = a1 + 17;
  v4 = 2;
  v5 = (_QWORD *)(a2 + 136);
  v6 = *a1;
  v7 = a1[16] + 2;
  while ( 1 )
  {
    v9 = *(unsigned __int16 *)(v6 + 1);
    v6 += 3;
    LOWORD(v9) = __ROL2__(v9, 8);
    v10 = (2 * v9) & 0x1FFFE;
    v11 = v10 - v4;
    if ( v10 >= v7 )
      break;
    if ( v11 == 2 )
    {
      *v3 = *v5;
      v3[1] = v5[1];
    }
    else if ( v11 > 3 )
    {
      v3 = memcpy(v3, v5, 8 * v11);
    }
    v8 = v11 + 2;
    v4 += v8;
    v8 *= 8LL;
    v3 = (_QWORD *)((char *)v3 + v8);
    v5 = (_QWORD *)((char *)v5 + v8);
    if ( *(_BYTE *)v6 != 0x93 )
      goto LABEL_10;
  }
  for ( ; *(_BYTE *)v6 == 0x93; v6 += 3 )
    ;
LABEL_10:
  v12 = v7 - v4;
  if ( v12 == 2 )
  {
    *v3 = *v5;
    v3[1] = v5[1];
  }
  else if ( v12 > 3 )
  {
    memcpy(v3, v5, 8 * v12);
  }
  *a1 = v6;
  result = *(_QWORD *)(a2 + 128);
  if ( result < v4 )
    result = v4 - 2;
  a1[16] = result;
  return result;
}

