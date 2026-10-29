__int64 __fastcall sub_77E5A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // r9d
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  void *ptr; // [rsp+0h] [rbp-5098h] BYREF
  __int128 v13; // [rsp+8h] [rbp-5090h]
  _BYTE v14[4]; // [rsp+20h] [rbp-5078h] BYREF
  _BYTE v15[8228]; // [rsp+24h] [rbp-5074h] BYREF
  __int64 v16; // [rsp+2048h] [rbp-3050h]
  int v17; // [rsp+2054h] [rbp-3044h]
  _BYTE v18[4104]; // [rsp+4060h] [rbp-1038h] BYREF
  unsigned __int64 v19; // [rsp+5068h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v3 = qfileexist(a1, a2);
  if ( !(_BYTE)v3 )
  {
    v18[0] = 0;
    ptr = nullptr;
    v13 = 0;
    while ( 1 )
    {
      v5 = qbasename(a1);
      v7 = v13;
      v8 = ptr;
      if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v13 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v13 + 1, 8);
        v8 = ptr;
        v7 = v13;
      }
      v8[v7] = v5;
      v4 = v13 + 1;
      *(_QWORD *)&v13 = v13 + 1;
      if ( a1 == v5 )
        break;
      *(_BYTE *)(v5 - 1) = 0;
      if ( (unsigned __int8)qisdir(a1) )
      {
        qstrncpy(v18, a1, 4096);
        v4 = v13;
        break;
      }
    }
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)ptr + v4 - 1);
        *(_QWORD *)&v13 = v4 - 1;
        if ( v18[0] )
          qmakepath((int)v18, 4096, (int)v18, v11, 0, v6, (char)ptr);
        else
          qstrncpy(v18, v11, 4096);
        v16 = 0;
        v17 = 0;
        if ( (unsigned int)qfindfirst(v18, v14, (unsigned __int8)((_QWORD)v13 != 0) << 14) )
          break;
        v10 = qbasename(v18);
        qstrncpy(v10, v15, &v18[-v10 + 4096]);
        qfindclose(v14);
        v4 = v13;
        if ( !(_QWORD)v13 )
          goto LABEL_7;
      }
      qfindclose(v14);
    }
    else
    {
LABEL_7:
      qstrncpy(a1, v18, a2);
      v3 = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
  }
  return v3;
}

