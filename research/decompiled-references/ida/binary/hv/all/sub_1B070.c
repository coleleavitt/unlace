__int64 __fastcall sub_1B070(_QWORD *a1, __int64 a2)
{
  const char *v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // eax
  const char *v7; // rdx
  __int64 v8; // rax
  const char *v9; // rdx
  char *v10; // rdi
  const char **v11; // r12
  const char **v12; // rbx
  const char *v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  char *v16; // rdx
  void *v17; // rax
  const char *v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  const char *v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // eax
  const char *v25; // rdx
  void *v26; // rdi
  const char *v27; // rsi
  __int64 v28; // rdi
  unsigned int v29; // eax
  const char *v30; // rdx
  const char *v31; // rdx
  const char *v32; // rdx
  const char *v33; // rdx
  void *v34; // [rsp+0h] [rbp-78h] BYREF
  __int128 v35; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  switch ( *(_DWORD *)(a1[5] + 28LL) )
  {
    case '/':
      v22 = haystack;
      v23 = *(_QWORD *)(a1[4] + 56LL);
      if ( *(_QWORD *)(a2 + 8) )
        v22 = *(const char **)a2;
      v24 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v23 + 56LL))(v23, v22);
      if ( v24 )
      {
        ptr = nullptr;
        v37 = 0;
        sub_65C40(&ptr, v24, 0);
        v25 = haystack;
        if ( (_QWORD)v37 )
          v25 = (const char *)ptr;
        sub_19CE0((__int64)a1, (__int64)"%s\n", v25);
        v26 = ptr;
        if ( ptr )
          goto LABEL_47;
      }
      return 0;
    case '0':
      v18 = haystack;
      v19 = *(_QWORD *)(a1[4] + 56LL);
      if ( *(_QWORD *)(a2 + 8) )
        v18 = *(const char **)a2;
      v20 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v19 + 40LL))(v19, v18, 0);
      if ( v20 )
      {
        ptr = nullptr;
        v37 = 0;
        sub_65C40(&ptr, v20, 0);
        v31 = haystack;
        if ( (_QWORD)v37 )
          v31 = (const char *)ptr;
        sub_19CE0((__int64)a1, (__int64)"%s\n", v31);
        v26 = ptr;
        if ( ptr )
          goto LABEL_47;
      }
      return 0;
    case '1':
      v27 = haystack;
      v28 = *(_QWORD *)(a1[4] + 56LL);
      if ( *(_QWORD *)(a2 + 8) )
        v27 = *(const char **)a2;
      v29 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v28 + 64LL))(v28, v27);
      if ( v29 )
      {
        ptr = nullptr;
        v37 = 0;
        sub_65C40(&ptr, v29, 0);
        v30 = haystack;
        if ( (_QWORD)v37 )
          v30 = (const char *)ptr;
        sub_19CE0((__int64)a1, (__int64)"%s\n", v30);
        v26 = ptr;
        if ( ptr )
        {
LABEL_47:
          *(_QWORD *)&v37 = 0;
          j__free(v26);
        }
      }
      return 0;
    case '2':
      v4 = haystack;
      v5 = *(_QWORD *)(a1[4] + 56LL);
      if ( *(_QWORD *)(a2 + 8) )
        v4 = *(const char **)a2;
      v6 = (*(__int64 (__fastcall **)(__int64, void **, const char *, __int64))(*(_QWORD *)v5 + 32LL))(v5, &v34, v4, 1);
      if ( v6 )
      {
        ptr = nullptr;
        v37 = 0;
        sub_65C40(&ptr, v6, 0);
        v32 = haystack;
        if ( (_QWORD)v37 )
          v32 = (const char *)ptr;
        sub_19CE0((__int64)a1, (__int64)"%s\n", v32);
        if ( ptr )
        {
          *(_QWORD *)&v37 = 0;
          j__free(ptr);
        }
      }
      else
      {
        if ( a1[1] > 1u )
        {
          v7 = haystack;
          if ( *(_QWORD *)(a2 + 8) )
            v7 = *(const char **)a2;
          sub_19CE0((__int64)a1, (__int64)"### %s\n", v7);
        }
        sub_18290((__int64 *)v34);
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 48LL))(v34, 1);
      }
      return 0;
    case '3':
      v8 = a1[4];
      v34 = nullptr;
      v9 = haystack;
      v35 = 0;
      if ( *(_QWORD *)(a2 + 8) )
        v9 = *(const char **)a2;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void **, const char *))(**(_QWORD **)(v8 + 56) + 72LL))(
             *(_QWORD *)(v8 + 56),
             &v34,
             v9) )
      {
        v10 = (char *)v34;
        v11 = (const char **)((char *)v34 + 24 * v35);
        if ( v11 == v34 )
          goto LABEL_19;
        v12 = (const char **)v34;
        do
        {
          v13 = haystack;
          if ( v12[1] )
            v13 = *v12;
          sub_19CE0((__int64)a1, (__int64)"%s\n", v13);
          v12 += 3;
        }
        while ( v11 != v12 );
      }
      else
      {
        ptr = nullptr;
        v37 = 0;
        sub_65C40(&ptr, 33, 0);
        v33 = haystack;
        if ( (_QWORD)v37 )
          v33 = (const char *)ptr;
        sub_19CE0((__int64)a1, (__int64)"%s\n", v33);
        if ( ptr )
        {
          *(_QWORD *)&v37 = 0;
          j__free(ptr);
        }
      }
      v10 = (char *)v34;
LABEL_19:
      if ( v10 )
      {
        v14 = v35;
        if ( (_QWORD)v35 )
        {
          v15 = 0;
          do
          {
            v16 = &v10[24 * v15];
            v17 = *(void **)v16;
            if ( *(_QWORD *)v16 )
            {
              *((_QWORD *)v16 + 1) = 0;
              j__free(v17);
              v10 = (char *)v34;
            }
            ++v15;
          }
          while ( v14 != v15 );
        }
        *(_QWORD *)&v35 = 0;
        j__free(v10);
      }
      return 0;
    default:
      if ( !byte_1671A1 )
        sub_96F80(2616);
      BUG();
  }
}

