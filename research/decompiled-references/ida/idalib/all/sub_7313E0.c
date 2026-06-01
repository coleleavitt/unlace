__int64 __fastcall sub_7313E0(__int64 a1, char *a2)
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
  void *v13; // [rsp+8h] [rbp-2118h] BYREF
  __int128 v14; // [rsp+10h] [rbp-2110h]
  void *v15; // [rsp+28h] [rbp-20F8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20F0h]
  _BYTE v17[8]; // [rsp+48h] [rbp-20D8h] BYREF
  int v18; // [rsp+50h] [rbp-20D0h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-20C8h]
  int *v20; // [rsp+60h] [rbp-20C0h]
  int *v21; // [rsp+68h] [rbp-20B8h]
  __int64 v22; // [rsp+70h] [rbp-20B0h]
  _BYTE v23[80]; // [rsp+78h] [rbp-20A8h] BYREF
  __int128 v24; // [rsp+C8h] [rbp-2058h] BYREF
  char dest[4096]; // [rsp+D8h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+10D8h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+20E0h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  qdirname(dest);
  qmakepath((unsigned int)s, 4096, (unsigned int)dest, (unsigned int)".vault_cache", 0, v2);
  v3 = qopen(s, 0);
  v4 = v3;
  if ( v3 != -1 )
  {
    v6 = qfilelength(v3);
    if ( v6 )
    {
      v14 = 0;
      v13 = nullptr;
      v18 = 0;
      v19 = nullptr;
      v20 = &v18;
      v21 = &v18;
      v22 = 0;
      v24 = 0;
      v13 = (void *)qvector_reserve(&v13, 0, v6, 1);
      *(_QWORD *)&v14 = v6;
      if ( (int)qread(v4, v13, v6) == v6
        && (unsigned __int8)sub_732F10(v17, &v13)
        && !(unsigned int)qstat(a2)
        && (unsigned __int8)sub_7329F0(&v24, v17, a2, v23) )
      {
        qmakepath((unsigned int)s, 4096, (unsigned int)dest, (unsigned int)".vault", 0, v7);
        qmkdir(s, 511);
        sub_838DD0(&v15, &v24);
        v9 = haystack;
        if ( v16 )
          LODWORD(v9) = (_DWORD)v15;
        qmakepath((unsigned int)s, 4096, (unsigned int)s, (_DWORD)v9, 0, v8);
        if ( v15 )
        {
          v16 = 0;
          qfree(v15);
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
      sub_731120(v19);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13);
      }
    }
  }
  return a1;
}
