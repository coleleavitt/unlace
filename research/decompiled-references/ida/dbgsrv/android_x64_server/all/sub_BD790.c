/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD790
// Address: 0x00000000000BD790

//----- (00000000000BD790) ----------------------------------------------------
__int64 __fastcall sub_BD790(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v3; // rbx
  const char *v4; // rax
  const char **v5; // rbp
  const char *v6; // rcx
  __int64 v7; // rax
  size_t v8; // rbx
  void *v9; // rax
  const void *v10; // r15
  char *v11; // rdi
  pthread_mutex_t *v13; // [rsp+8h] [rbp-1040h] BYREF
  __int128 v14; // [rsp+10h] [rbp-1038h] BYREF
  char src[4096]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v16; // [rsp+1020h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  sub_C5BE0(&v13);
  v3 = (unsigned __int64)*(&xmmword_157AE8 + 1);
  if ( (unsigned __int64)*(&xmmword_157AE8 + 1) <= 1 )
  {
    v14 = *(_OWORD *)&off_1505A0;
    v4 = sub_BD640();
    qstrncpy(src, (__int64)v4, 4096);
    if ( src[0] )
    {
      v5 = (const char **)&v14 + 1;
      v6 = ".idapro";
      do
      {
        qmakepath(src, 4096, src, v6, 0);
        if ( !qfileexist(src) )
          qmkdir(src, 0x1FFu);
        v6 = *v5++;
      }
      while ( v6 );
      v7 = __strlen_chk(src, 4096);
      v8 = v7;
      if ( !v7 )
      {
        *(&xmmword_157AE8 + 1) = nullptr;
        goto LABEL_18;
      }
      v1 = v7 + 1;
      v9 = xmmword_157AE8;
      if ( qword_157AF8 < v8 + 1 )
      {
        v9 = qvector_reserve((__int64)&xmmword_157AE8, (char *)xmmword_157AE8, v8 + 1, 1u);
        xmmword_157AE8 = v9;
      }
      *(&xmmword_157AE8 + 1) = (void *)(v8 + 1);
      memmove(v9, src, v8);
      *((_BYTE *)xmmword_157AE8 + v8) = 0;
    }
    v3 = (unsigned __int64)*(&xmmword_157AE8 + 1);
    if ( (unsigned __int64)*(&xmmword_157AE8 + 1) >= 2 )
      goto LABEL_12;
LABEL_18:
    v1 = 0;
    goto LABEL_19;
  }
LABEL_12:
  LOBYTE(v1) = 1;
  if ( (void **)a1 != &xmmword_157AE8 )
  {
    v10 = xmmword_157AE8;
    if ( *(_QWORD *)(a1 + 16) >= v3 )
    {
      v11 = *(char **)a1;
    }
    else
    {
      v11 = (char *)qvector_reserve(a1, *(char **)a1, v3, 1u);
      *(_QWORD *)a1 = v11;
    }
    *(_QWORD *)(a1 + 8) = v3;
    memmove(v11, v10, v3 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
  }
LABEL_19:
  qmutex_unlock(v13);
  return v1;
}
// BD945: variable 'v1' is possibly undefined
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 1505A0: using guessed type char *off_1505A0;
// 157AF8: using guessed type __int64 qword_157AF8;
