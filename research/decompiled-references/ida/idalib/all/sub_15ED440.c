__int64 *__fastcall sub_15ED440(__int64 *a1, __int64 a2)
{
  int v3; // ebp
  __int64 *v4; // rbx
  int v5; // r15d
  _QWORD *v6; // rdx
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rdx

  v3 = 0;
  v4 = a1;
  do
  {
    v5 = *((unsigned __int8 *)v4 + 452);
    if ( (_BYTE)v5 )
    {
      v6 = (_QWORD *)v4[54];
      v7 = &v6[*((unsigned int *)v4 + 111)];
      v8 = v6;
      if ( v6 == v7 )
      {
        *(__int64 *)((char *)v4 + 444) = 0;
        goto LABEL_11;
      }
      if ( *v6 == a2 )
      {
        *(__int64 *)((char *)v4 + 444) = 0;
        v3 = v5;
        goto LABEL_24;
      }
      do
      {
        if ( v7 == ++v8 )
        {
          LOBYTE(v5) = 0;
          goto LABEL_9;
        }
      }
      while ( a2 != *v8 );
      v3 = *((unsigned __int8 *)v4 + 452);
    }
    else
    {
      LOBYTE(v5) = sub_2236570(v4 + 54, a2) != 0;
      if ( *((_BYTE *)v4 + 452) )
      {
        v3 |= v5;
      }
      else
      {
        v3 |= v5;
        v10 = 4 * (*((_DWORD *)v4 + 111) - *((_DWORD *)v4 + 112));
        v11 = *((unsigned int *)v4 + 110);
        if ( v10 < 0x20 )
          v10 = 32;
        if ( (unsigned int)v11 > v10 )
        {
          sub_22364B0(v4 + 54);
          goto LABEL_10;
        }
        memset((void *)v4[54], -1, 8 * v11);
      }
    }
LABEL_9:
    *(__int64 *)((char *)v4 + 444) = 0;
LABEL_10:
    if ( !(_BYTE)v5 )
      goto LABEL_11;
    if ( !*((_BYTE *)v4 + 452) )
      goto LABEL_39;
    v6 = (_QWORD *)v4[54];
LABEL_24:
    v12 = v6;
    v13 = *((unsigned int *)v4 + 111);
    v14 = &v6[v13];
    if ( v6 != v14 )
    {
      v15 = v6;
      if ( a2 == *v6 )
        goto LABEL_31;
      while ( v14 != ++v15 )
      {
        if ( a2 == *v15 )
          goto LABEL_31;
      }
    }
    if ( (unsigned int)v13 < *((_DWORD *)v4 + 110) )
    {
      *((_DWORD *)v4 + 111) = v13 + 1;
      *v14 = a2;
      v12 = (_QWORD *)v4[54];
      v15 = &v12[v13];
      goto LABEL_31;
    }
LABEL_39:
    v15 = (_QWORD *)sub_2236760(v4 + 54, a2);
    v12 = (_QWORD *)v4[54];
    if ( !*((_BYTE *)v4 + 452) )
    {
      v16 = &v12[*((unsigned int *)v4 + 110)];
      goto LABEL_32;
    }
LABEL_31:
    v16 = &v12[*((unsigned int *)v4 + 111)];
LABEL_32:
    if ( v15 != v16 && *v15 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v17 = v15 + 1;
      do
      {
        v18 = v17;
        if ( v16 == v17 )
          break;
        ++v17;
      }
      while ( *v18 >= 0xFFFFFFFFFFFFFFFELL );
    }
LABEL_11:
    if ( *((char *)v4 + 8) >= 0 && v4[45] )
      break;
    v4 = (__int64 *)*v4;
  }
  while ( v4 );
  if ( !(_BYTE)v3 )
    a2 = 0;
  a1[52] = a2;
  *((_BYTE *)a1 + 424) = 1;
  return a1;
}
