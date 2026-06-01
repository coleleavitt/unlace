unsigned __int64 __fastcall sub_9C260(char *a1, char *a2, char *a3)
{
  char *v4; // rbp
  char *v6; // r13
  _BYTE *v7; // rdi
  pthread_mutex_t *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // rbp
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  _BYTE *v18; // rsi
  const char *v19; // rdx
  const char *v20; // rbp
  unsigned __int8 *v21; // rax
  void *v22; // [rsp+0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v4 = a2;
  v6 = a1 + 1032;
  v26 = __readfsqword(0x28u);
  *(_QWORD *)a1 = sub_98180();
  memset(a1 + 1032, 0, 0x1000u);
  v7 = a1 + 8;
  *(_OWORD *)(a1 + 5128) = 0;
  *(_OWORD *)(a1 + 5144) = 0;
  *(_OWORD *)(a1 + 5160) = 0;
  *(_OWORD *)(a1 + 5176) = 0;
  *(_OWORD *)(a1 + 5192) = 0;
  *(_OWORD *)(a1 + 5208) = 0;
  *(_OWORD *)(a1 + 5224) = 0;
  *(_OWORD *)(a1 + 5240) = 0;
  *(_OWORD *)(a1 + 5256) = 0;
  *(_OWORD *)(a1 + 5272) = 0;
  *(_OWORD *)(a1 + 5288) = 0;
  *(_OWORD *)(a1 + 5304) = 0;
  *(_OWORD *)(a1 + 5320) = 0;
  *(_OWORD *)(a1 + 5336) = 0;
  *(_OWORD *)(a1 + 5352) = 0;
  *(_OWORD *)(a1 + 5368) = 0;
  *(_OWORD *)(a1 + 5384) = 0;
  *(_OWORD *)(a1 + 5400) = 0;
  *(_OWORD *)(a1 + 5416) = 0;
  *(_OWORD *)(a1 + 5432) = 0;
  *(_OWORD *)(a1 + 5448) = 0;
  *(_OWORD *)(a1 + 5464) = 0;
  *(_OWORD *)(a1 + 5480) = 0;
  *(_OWORD *)(a1 + 5496) = 0;
  *(_OWORD *)(a1 + 5512) = 0;
  *(_OWORD *)(a1 + 5528) = 0;
  *(_OWORD *)(a1 + 5544) = 0;
  *(_OWORD *)(a1 + 5560) = 0;
  *(_OWORD *)(a1 + 5576) = 0;
  *(_OWORD *)(a1 + 5592) = 0;
  *(_OWORD *)(a1 + 5608) = 0;
  *((_QWORD *)a1 + 709) = a1 + 5656;
  *((_QWORD *)a1 + 710) = a1 + 5656;
  if ( !a2 )
    v4 = "ida";
  a1[5640] = 0;
  *((_DWORD *)a1 + 1414) = 0;
  *((_QWORD *)a1 + 708) = 0;
  *((_QWORD *)a1 + 711) = 0;
  *((_QWORD *)a1 + 712) = -1;
  *((_QWORD *)a1 + 713) = 0;
  *((_DWORD *)a1 + 1428) = -1;
  *((_QWORD *)a1 + 715) = 0;
  *((_DWORD *)a1 + 1432) = 0;
  *(_OWORD *)(a1 + 5624) = 0;
  sub_976E0(v7, v4, 1024);
  v22 = nullptr;
  v23 = 0;
  if ( (unsigned __int8)sub_98D10("IDAREG_SPEC", (__int64)&v22) && (unsigned __int64)v23 > 1 )
  {
    sub_976E0(v6, (char *)v22, 4096);
  }
  else if ( a3 )
  {
    sub_976E0(v6, a3, 4096);
  }
  else
  {
    ptr = nullptr;
    v25 = 0;
    v12 = strlen(a1 + 8);
    v13 = v12 + 1;
    v14 = v12;
    ptr = sub_96080((__int64)&ptr, nullptr, v12 + 1, 1u);
    *(_QWORD *)&v25 = v13;
    memmove(ptr, a1 + 8, v14);
    *((_BYTE *)ptr + v14) = 0;
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v17 = v25 + 3;
      v16 = v25 + 4;
      v15 = v25 - 1;
    }
    else
    {
      v16 = 5;
      v17 = 4;
    }
    v18 = ptr;
    if ( *((_QWORD *)&v25 + 1) < v16 )
    {
      ptr = sub_96080((__int64)&ptr, ptr, v16, 1u);
      v18 = ptr;
    }
    *(_QWORD *)&v25 = v16;
    v19 = haystack;
    v18[v17] = 0;
    *(_DWORD *)((char *)ptr + v15) = 1734701614;
    if ( (_QWORD)v25 )
      LODWORD(v19) = (_DWORD)ptr;
    if ( !sub_90F90((int)v6, 4096, (int)v19, nullptr) )
    {
      v20 = haystack;
      if ( (_QWORD)v25 )
        v20 = (const char *)ptr;
      v21 = (unsigned __int8 *)sub_90C80();
      sub_94CC0(v6, 4096, v21, v20, 0);
    }
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      j__free(ptr);
    }
  }
  v8 = (pthread_mutex_t *)qword_167200;
  sub_98400((pthread_mutex_t *)qword_167200);
  v9 = xmmword_1671E8;
  if ( !(_QWORD)xmmword_1671E8 )
  {
    sub_97040((__int64)sub_9C850);
    v9 = xmmword_1671E8;
  }
  ptr = a1;
  v10 = qword_1671E0;
  if ( *((_QWORD *)&xmmword_1671E8 + 1) < (unsigned __int64)(v9 + 1) )
  {
    qword_1671E0 = (__int64)sub_96080((__int64)&qword_1671E0, (void *)qword_1671E0, v9 + 1, 8u);
    v10 = qword_1671E0;
    v9 = xmmword_1671E8;
  }
  *(_QWORD *)(v10 + 8 * v9) = a1;
  *(_QWORD *)&xmmword_1671E8 = xmmword_1671E8 + 1;
  sub_98450(v8);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    j__free(v22);
  }
  return v26 - __readfsqword(0x28u);
}

