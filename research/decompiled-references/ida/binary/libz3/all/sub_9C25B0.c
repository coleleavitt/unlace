int *__fastcall sub_9C25B0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  int *v4; // r13
  int v5; // eax
  __int64 v6; // rax
  int v7; // esi
  int *v8; // rax
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rdx
  void *v12; // rbx
  int *v13; // rax
  __int64 v14; // rdx
  int *result; // rax
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  size_t v18; // rdi
  __int64 v19; // rax
  int *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  int *v23; // rdx
  int *v24; // rdi
  int *i; // rax
  int v26; // ecx
  char v27; // si
  __int64 v28; // rcx
  char v29; // si
  __int64 v30; // rcx
  __int64 v31; // rax
  int *v32; // r15
  void *v33; // rbp
  _QWORD *v34; // rsi
  char **exception; // rbp
  _DWORD *v36; // [rsp+8h] [rbp-90h]
  __int64 v37[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v38; // [rsp+30h] [rbp-68h] BYREF
  __int64 v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+48h] [rbp-50h]
  __int64 v42; // [rsp+50h] [rbp-48h]

  v3 = *(unsigned int *)(a1 + 16);
  ++*(_DWORD *)(a1 + 8);
  v4 = *(int **)a1;
  if ( (_DWORD)v3 == -1 )
  {
    if ( v4 )
    {
      v5 = *(v4 - 1);
      v38 = 0;
      v40 = 1;
      *a2 = v5;
      v42 = 0;
      v6 = (unsigned int)*(v4 - 1);
      v39 = 0;
      v41 = 0;
      if ( (_DWORD)v6 == *(v4 - 2) )
      {
        v17 = (unsigned int)(3 * v6 + 1) >> 1;
        v18 = 40 * v17 + 8;
        if ( 40 * (int)v6 + 8 >= (unsigned int)v18 || (unsigned int)v6 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v37, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = sub_186B270(v18);
        v20 = *(int **)a1;
        v36 = (_DWORD *)v19;
        v4 = (int *)(v19 + 8);
        if ( *(_QWORD *)a1 )
        {
          v21 = v19;
          v22 = (unsigned int)*(v20 - 1);
          v23 = v4;
          *(_DWORD *)(v21 + 4) = v22;
          v24 = &v20[10 * v22];
          for ( i = v20; v24 != i; *(v23 - 1) = *(i - 1) )
          {
            v26 = *i;
            v27 = *((_BYTE *)i + 4);
            i += 10;
            v23 += 10;
            *(v23 - 10) = v26;
            *((_BYTE *)v23 - 36) = v27 & 3 | *(_BYTE *)(v23 - 9) & 0xFC;
            v28 = *((_QWORD *)i - 4);
            *((_QWORD *)i - 4) = 0;
            *((_QWORD *)v23 - 4) = v28;
            v29 = *((_BYTE *)i - 20);
            *(v23 - 6) = *(i - 6);
            *((_BYTE *)v23 - 20) = v29 & 3 | *(_BYTE *)(v23 - 5) & 0xFC;
            v30 = *((_QWORD *)i - 2);
            *((_QWORD *)i - 2) = 0;
            *((_QWORD *)v23 - 2) = v30;
            *(v23 - 2) = *(i - 2);
          }
          v31 = (unsigned int)*(v20 - 1);
          if ( (_DWORD)v31 )
          {
            v32 = &v20[10 * v31];
            do
            {
              v33 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v20);
              v34 = v20 + 4;
              v20 += 10;
              sub_182CBA0(v33, v34);
            }
            while ( v20 != v32 );
            v20 = *(int **)a1;
          }
          sub_186B220(v20 - 2);
          v8 = &v4[10 * v36[1]];
        }
        else
        {
          *(_DWORD *)(v19 + 4) = 0;
          v8 = (int *)(v19 + 8);
        }
        v7 = v42;
        *(_QWORD *)a1 = v4;
        *v36 = v17;
      }
      else
      {
        v7 = 0;
        v8 = &v4[10 * v6];
      }
    }
    else
    {
      *a2 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 1;
      v41 = 0;
      v42 = 0;
      v16 = (_QWORD *)sub_186B270(0x58u);
      v4 = (int *)(v16 + 1);
      *v16 = 2;
      v7 = v42;
      *(_QWORD *)a1 = v16 + 1;
      v8 = (int *)(v16 + 1);
    }
    v9 = v38;
    v8[8] = v7;
    *v8 = v9;
    *((_BYTE *)v8 + 4) = BYTE4(v38) & 3 | v8[1] & 0xFC;
    v10 = v39;
    v39 = 0;
    *((_QWORD *)v8 + 1) = v10;
    v8[4] = v40;
    *((_BYTE *)v8 + 20) = BYTE4(v40) & 3 | v8[5] & 0xFC;
    v11 = v41;
    v41 = 0;
    *((_QWORD *)v8 + 3) = v11;
    v8[9] = HIDWORD(v42);
    ++*(v4 - 1);
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v38);
    sub_182CBA0(v12, &v40);
    v13 = *(int **)a1;
    v14 = 0x9FFFFFFF6LL;
    if ( *(_QWORD *)a1 )
      v14 = 10LL * (unsigned int)(*(v13 - 1) - 1);
    return &v13[v14];
  }
  else
  {
    *a2 = v3;
    result = &v4[10 * v3];
    *(_DWORD *)(a1 + 16) = result[9];
  }
  return result;
}

