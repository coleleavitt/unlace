/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004BA10
// Address: 0x000000010004BA10

//----- (000000010004BA10) ----------------------------------------------------
__int64 __fastcall sub_10004BA10(char *a1, __int64 a2)
{
  __int128 *v2; // r15
  char *v3; // r12
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int128 v10; // [rsp+10h] [rbp-1490h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-1480h]
  _BYTE v12[4]; // [rsp+30h] [rbp-1470h] BYREF
  _BYTE v13[2084]; // [rsp+34h] [rbp-146Ch] BYREF
  __int64 v14; // [rsp+858h] [rbp-C48h]
  int v15; // [rsp+864h] [rbp-C3Ch]
  char v16[1024]; // [rsp+1070h] [rbp-430h] BYREF
  __int64 v17; // [rsp+1470h] [rbp-30h] BYREF

  LOBYTE(v2) = 1;
  if ( !qfileexist(a1) )
  {
    v16[0] = 0;
    v10 = 0;
    v11 = 0;
    v2 = &v10;
    while ( 1 )
    {
      v3 = qbasename(a1);
      v5 = *((_QWORD *)&v10 + 1);
      v4 = (_QWORD *)v10;
      if ( v11 < *((_QWORD *)&v10 + 1) + 1LL )
      {
        v4 = qvector_reserve((__int64)&v10, (void *)v10, *((_QWORD *)&v10 + 1) + 1LL, 8u);
        *(_QWORD *)&v10 = v4;
        v5 = *((_QWORD *)&v10 + 1);
      }
      v4[v5] = v3;
      v6 = ++*((_QWORD *)&v10 + 1);
      if ( v3 == a1 )
        break;
      *(v3 - 1) = 0;
      if ( qisdir(a1) )
      {
        qstrncpy(v16, (__int64)a1, 1024);
        v6 = *((_QWORD *)&v10 + 1);
        break;
      }
    }
    if ( v6 )
    {
      v2 = (__int128 *)v13;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v10 + 8 * v6 - 8);
        *((_QWORD *)&v10 + 1) = v6 - 1;
        if ( v16[0] )
          qmakepath(v16, 1024, (__int64)v16, v7, 0);
        else
          qstrncpy(v16, v7, 1024);
        v14 = 0;
        v15 = 0;
        if ( (unsigned int)qfindfirst(v16, (__int64)v12, (unsigned __int8)(*((_QWORD *)&v10 + 1) != 0) << 14) )
          break;
        v8 = qbasename(v16);
        qstrncpy(v8, (__int64)v13, (char *)&v17 - v8);
        qfindclose((__int64)v12);
        v6 = *((_QWORD *)&v10 + 1);
        if ( !*((_QWORD *)&v10 + 1) )
          goto LABEL_15;
      }
      qfindclose((__int64)v12);
      LODWORD(v2) = 0;
    }
    else
    {
LABEL_15:
      LOBYTE(v2) = 1;
      qstrncpy(a1, (__int64)v16, a2);
    }
    if ( (_QWORD)v10 )
    {
      *((_QWORD *)&v10 + 1) = 0;
      qfree((void *)v10);
    }
  }
  return (unsigned int)v2;
}
// 10004BC4B: variable 'v2' is possibly undefined
