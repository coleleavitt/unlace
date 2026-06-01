__int64 __fastcall sub_7E3440(unsigned __int64 *a1)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // r8
  __int64 v3; // rdx
  char *v4; // rsi
  signed __int64 v5; // rax
  char *v6; // rbx
  bool v7; // dl
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // ebp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  _DWORD v17[551]; // [rsp+Ch] [rbp-8DCh] BYREF
  unsigned __int64 v18; // [rsp+8A8h] [rbp-40h]

  v1 = (__int64 *)a1[5];
  v2 = a1[3];
  v18 = __readfsqword(0x28u);
  memset(&v17[1], 0, 0x890u);
  *(_QWORD *)&v17[1] = v2;
  v3 = v1[1];
  v4 = (char *)(*v1 + 2192 * v3);
  v5 = 0xE21A291C077975B9LL * ((2192 * v3) >> 4);
  if ( v5 >> 2 > 0 )
  {
    v6 = (char *)*v1;
    while ( *(_QWORD *)v6 != v2 )
    {
      if ( *((_QWORD *)v6 + 274) == v2 )
      {
        v6 += 2192;
        break;
      }
      if ( *((_QWORD *)v6 + 548) == v2 )
      {
        v6 += 4384;
        break;
      }
      if ( *((_QWORD *)v6 + 822) == v2 )
      {
        v6 += 6576;
        break;
      }
      v6 += 8768;
      if ( v6 == (char *)(*v1 + 8768 * (v5 >> 2)) )
      {
        v5 = 0xE21A291C077975B9LL * ((v4 - v6) >> 4);
        goto LABEL_22;
      }
    }
LABEL_8:
    if ( v4 != v6 )
      goto LABEL_9;
    goto LABEL_27;
  }
  v6 = (char *)*v1;
LABEL_22:
  if ( v5 == 2 )
  {
    v12 = v2;
LABEL_33:
    if ( *(_QWORD *)v6 == v12 )
      goto LABEL_8;
    v6 += 2192;
    goto LABEL_26;
  }
  if ( v5 == 3 )
  {
    v12 = v2;
    if ( *(_QWORD *)v6 == v2 )
      goto LABEL_8;
    v6 += 2192;
    goto LABEL_33;
  }
  if ( v5 != 1 )
    goto LABEL_27;
  v12 = v2;
LABEL_26:
  if ( *(_QWORD *)v6 == v12 )
    goto LABEL_8;
LABEL_27:
  v13 = v3 + 1;
  if ( v1[2] < v13 )
  {
    v15 = qvector_reserve(v1, *v1, v13, 2192);
    v16 = 2192 * v1[1];
    *v1 = v15;
    v4 = (char *)(v15 + v16);
  }
  *(_QWORD *)v4 = 0;
  v6 = v4;
  *((_QWORD *)v4 + 273) = 0;
  memset(
    (void *)((unsigned __int64)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v4 - (((_DWORD)v4 + 8) & 0xFFFFFFF8) + 2192) >> 3));
  v14 = v17[1];
  ++v1[1];
  *(_QWORD *)v4 = __PAIR64__(v17[2], v14);
LABEL_9:
  v7 = sub_7E30F0(v17, a1 + 1);
  result = 1;
  if ( v7 )
  {
    v9 = (__int64)(v6 + 560);
    v10 = 2;
    v11 = *((_QWORD *)v6 + 1) | ((unsigned __int64)v17[0] << 32);
    for ( *((_QWORD *)v6 + 1) = v11; ; v11 = *((_QWORD *)v6 + 1) )
    {
      if ( (v11 & (15LL << (4 * (unsigned __int8)v10 + 24))) != 0 && !(unsigned __int8)sub_7E31C0(v9, v11, v10, a1 + 1) )
        return 1;
      ++v10;
      v9 += 272;
      if ( v10 == 8 )
        break;
    }
    return 0;
  }
  return result;
}
