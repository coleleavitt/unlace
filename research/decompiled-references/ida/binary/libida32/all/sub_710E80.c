__int64 __fastcall sub_710E80(__int64 a1, char *a2)
{
  int v2; // r9d
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v6; // r15
  int v7; // r9d
  int v8; // r9d
  const char *v9; // rcx
  size_t v10; // rax
  size_t v11; // rbp
  size_t v12; // r12
  char v13; // [rsp-8h] [rbp-2128h]
  char v14; // [rsp-8h] [rbp-2128h]
  char v15; // [rsp-8h] [rbp-2128h]
  void *v16; // [rsp+8h] [rbp-2118h] BYREF
  __int128 v17; // [rsp+10h] [rbp-2110h]
  void *v18; // [rsp+28h] [rbp-20F8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20F0h]
  _BYTE v20[8]; // [rsp+48h] [rbp-20D8h] BYREF
  int v21; // [rsp+50h] [rbp-20D0h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-20C8h]
  int *v23; // [rsp+60h] [rbp-20C0h]
  int *v24; // [rsp+68h] [rbp-20B8h]
  __int64 v25; // [rsp+70h] [rbp-20B0h]
  _BYTE v26[80]; // [rsp+78h] [rbp-20A8h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-2058h] BYREF
  char dest[4096]; // [rsp+D8h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+10D8h] [rbp-1048h] BYREF
  unsigned __int64 v30; // [rsp+20E0h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  qdirname(dest);
  qmakepath((int)s, 4096, (int)dest, (int)".vault_cache", 0, v2, v13);
  v3 = qopen(s, 0);
  v4 = v3;
  if ( v3 != -1 )
  {
    v6 = qfilelength(v3);
    if ( v6 )
    {
      v17 = 0;
      v16 = nullptr;
      v21 = 0;
      v22 = nullptr;
      v23 = &v21;
      v24 = &v21;
      v25 = 0;
      v27 = 0;
      v16 = (void *)qvector_reserve(&v16, 0, v6, 1);
      *(_QWORD *)&v17 = v6;
      if ( (int)qread(v4, v16, v6) == v6
        && (unsigned __int8)sub_7129B0(v20, &v16)
        && !(unsigned int)qstat(a2)
        && (unsigned __int8)sub_712490(&v27, v20, a2, v26) )
      {
        qmakepath((int)s, 4096, (int)dest, (int)".vault", 0, v7, v14);
        qmkdir(s, 511);
        sub_815A10(&v18, &v27);
        v9 = haystack;
        if ( v19 )
          LODWORD(v9) = (_DWORD)v18;
        qmakepath((int)s, 4096, (int)s, (int)v9, 0, v8, v15);
        if ( v18 )
        {
          v19 = 0;
          qfree(v18);
        }
        v10 = strlen(s);
        v11 = v10;
        if ( v10 )
        {
          v12 = v10 + 1;
          if ( *(_QWORD *)(a1 + 16) < v10 + 1 )
            *(_QWORD *)a1 = qvector_reserve(a1, *(_QWORD *)a1, v10 + 1, 1);
          *(_QWORD *)(a1 + 8) = v12;
          memmove(*(void **)a1, s, v11);
          *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
      sub_710BC0(v22);
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
    }
  }
  return a1;
}

