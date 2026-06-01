void __fastcall sub_22B9ED0(__int64 a1, __m128i *a2)
{
  char *v2; // rax
  __int64 v3; // rax
  int v4; // eax
  __int64 *v5; // r12
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // eax
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  char *v15; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-A0h]
  int v17; // [rsp+10h] [rbp-98h]
  int v18; // [rsp+14h] [rbp-94h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  _BYTE v21[120]; // [rsp+30h] [rbp-78h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  if ( &a2[1] == (__m128i *)a2->m128i_i64[0] )
  {
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    *(_QWORD *)a1 = a2->m128i_i64[0];
    *(_QWORD *)(a1 + 16) = a2[1].m128i_i64[0];
  }
  *(_QWORD *)(a1 + 8) = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  ptr = v21;
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  v20 = 0x400000000LL;
  v2 = *(char **)a1;
  *(_QWORD *)(a1 + 48) = 0;
  v15 = v2;
  v3 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)(a1 + 32) = 0;
  v16 = v3;
  sub_22476F0(&v15, (__int64)&ptr, 45, 3, 1);
  if ( !(_DWORD)v20 )
    goto LABEL_4;
  *(_DWORD *)(a1 + 32) = sub_22B8CF0(*(_OWORD *)ptr);
  v6 = sub_22B5280(*(void **)ptr, *((_QWORD *)ptr + 1));
  v7 = v20;
  v5 = (__int64 *)ptr;
  *(_DWORD *)(a1 + 36) = v6;
  if ( v7 <= 1 )
  {
    v8 = *v5;
    v9 = v5[1];
    v18 = 0;
    v15 = (char *)v8;
    v16 = v9;
    if ( sub_9C7D00((__int64)&v15, "mipsn32", 7u) )
    {
      v17 = 3;
LABEL_13:
      v10 = v17;
LABEL_14:
      *(_DWORD *)(a1 + 48) = v10;
LABEL_15:
      v4 = *(_DWORD *)(a1 + 52);
      goto LABEL_5;
    }
    if ( sub_9C7D00((__int64)&v15, "mips64", 6u) || sub_9C7D00((__int64)&v15, "mipsisa64", 9u) )
    {
      v17 = 4;
      goto LABEL_13;
    }
    if ( sub_9C7D00((__int64)&v15, "mipsisa32", 9u) )
    {
LABEL_24:
      v17 = 1;
      goto LABEL_13;
    }
    switch ( v9 )
    {
      case 4LL:
        if ( *(_DWORD *)v8 != 1936746861 )
        {
          v10 = 0;
          goto LABEL_14;
        }
        goto LABEL_24;
      case 6LL:
        if ( *(_DWORD *)v8 == 1936746861 && *(_WORD *)(v8 + 4) == 27749 )
          goto LABEL_24;
        if ( *(_DWORD *)v8 == 1936746861 )
        {
          if ( *(_WORD *)(v8 + 4) != 13938 )
          {
            v10 = 0;
            goto LABEL_14;
          }
          goto LABEL_24;
        }
        break;
      case 8LL:
        v10 = 0;
        if ( *(_QWORD *)v8 != 0x6C6536727370696DLL )
          goto LABEL_14;
        goto LABEL_24;
    }
    v10 = 0;
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 40) = sub_22B3FD0(v5[2], v5[3]);
  if ( v11 == 2 )
    goto LABEL_15;
  v12 = sub_22B4390(v5[4], v5[5]);
  v13 = (unsigned int)v20 <= 3;
  *(_DWORD *)(a1 + 44) = v12;
  if ( v13 )
  {
LABEL_4:
    v4 = *(_DWORD *)(a1 + 52);
    v5 = (__int64 *)ptr;
    goto LABEL_5;
  }
  v14 = sub_22B4A60(*((_QWORD *)ptr + 6), *((_QWORD *)ptr + 7));
  v5 = (__int64 *)ptr;
  *(_DWORD *)(a1 + 48) = v14;
  v4 = sub_22B4190((_DWORD *)v5[6], v5[7]);
  *(_DWORD *)(a1 + 52) = v4;
LABEL_5:
  if ( !v4 )
    *(_DWORD *)(a1 + 52) = sub_22B3F20(a1);
  if ( v5 != (__int64 *)v21 )
    free(v5);
}
