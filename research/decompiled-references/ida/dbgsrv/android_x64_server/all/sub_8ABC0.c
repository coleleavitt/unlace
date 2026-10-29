/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8ABC0
// Address: 0x000000000008ABC0

//----- (000000000008ABC0) ----------------------------------------------------
__int64 __fastcall sub_8ABC0(char *a1, __int64 a2)
{
  char *v2; // rbp
  void *v4; // rcx
  void *v5; // rax
  char *v6; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  void *ptr[2]; // [rsp+0h] [rbp-5098h] BYREF
  char *v11; // [rsp+10h] [rbp-5088h]
  _BYTE v12[4]; // [rsp+20h] [rbp-5078h] BYREF
  char v13[8228]; // [rsp+24h] [rbp-5074h] BYREF
  __int64 v14; // [rsp+2048h] [rbp-3050h]
  int v15; // [rsp+2054h] [rbp-3044h]
  char v16[4096]; // [rsp+4060h] [rbp-1038h] BYREF
  _QWORD v17[7]; // [rsp+5060h] [rbp-38h] BYREF

  v17[0] = __readfsqword(0x28u);
  LOBYTE(v2) = 1;
  if ( !qfileexist(a1) )
  {
    v16[0] = 0;
    *(_OWORD *)ptr = 0;
    v11 = nullptr;
    while ( 1 )
    {
      v2 = qbasename(a1);
      v4 = ptr[1];
      if ( v11 >= (char *)ptr[1] + 1 )
      {
        v5 = ptr[0];
      }
      else
      {
        v5 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)ptr[1] + 1, 8u);
        ptr[0] = v5;
        v4 = ptr[1];
      }
      *((_QWORD *)v5 + (_QWORD)v4) = v2;
      v6 = (char *)++ptr[1];
      if ( v2 == a1 )
        break;
      *(v2 - 1) = 0;
      if ( qisdir(a1) )
      {
        qstrncpy(v16, (__int64)a1, 4096);
        v6 = (char *)ptr[1];
        break;
      }
    }
    if ( v6 )
    {
      v2 = (char *)v17;
      while ( 1 )
      {
        v7 = *((_QWORD *)ptr[0] + (_QWORD)v6 - 1);
        ptr[1] = v6 - 1;
        if ( v16[0] )
          qmakepath(v16, 4096, v16, v7, 0);
        else
          qstrncpy(v16, v7, 4096);
        v14 = 0;
        v15 = 0;
        if ( (unsigned int)qfindfirst((__int64)v16, (__int64)v12, (unsigned __int8)(ptr[1] != nullptr) << 14) )
          break;
        v8 = qbasename(v16);
        qstrncpy(v8, (__int64)v13, (char *)v17 - v8);
        qfindclose((__int64)v12);
        v6 = (char *)ptr[1];
        if ( !ptr[1] )
          goto LABEL_16;
      }
      qfindclose((__int64)v12);
      LODWORD(v2) = 0;
    }
    else
    {
LABEL_16:
      LOBYTE(v2) = 1;
      qstrncpy(a1, (__int64)v16, a2);
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v11 = nullptr;
    }
  }
  return (unsigned int)v2;
}
// 8ADE2: variable 'v2' is possibly undefined
