__int64 __fastcall sub_8A2440(__int64 a1, _QWORD *a2, const char *a3)
{
  __int64 v3; // rcx
  size_t v4; // rax
  size_t v5; // rbp
  size_t v6; // rbx
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebp
  _QWORD *v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rbx
  size_t v20; // r12
  void *v21; // rax
  __int64 v23; // [rsp+8h] [rbp-90h]
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 (__fastcall **v25)(); // [rsp+10h] [rbp-88h] BYREF
  char v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int128 v28; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __int128 v30; // [rsp+40h] [rbp-58h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v3 = a2[1];
  v31 = __readfsqword(0x28u);
  v26 = 42;
  v27 = 0;
  v28 = 0;
  v25 = &off_2B14728;
  if ( v3 )
  {
    v23 = v3;
    v12 = a2;
    v13 = 0;
    v14 = qalloc_or_throw(24 * v3, (const char *)a2);
    v15 = v23;
    v16 = 0;
    v27 = v14;
    v17 = v14;
    *((_QWORD *)&v28 + 1) = v23;
    while ( 1 )
    {
      v18 = 24 * v13 + v17;
      v19 = 24 * v13 + *v12;
      *(_QWORD *)v18 = 0;
      *(_OWORD *)(v18 + 8) = v16;
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
      {
        v24 = v15;
        ++v13;
        v21 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 8), (const char *)a2);
        *(_QWORD *)(v18 + 16) = v20;
        *(_QWORD *)v18 = v21;
        a2 = *(_QWORD **)v19;
        memcpy(v21, *(const void **)v19, v20);
        v15 = v24;
        *(_QWORD *)(v18 + 8) = v20;
        v16 = 0;
        if ( v24 == v13 )
        {
LABEL_12:
          *(_QWORD *)&v28 = v15;
          break;
        }
      }
      else if ( v15 == ++v13 )
      {
        goto LABEL_12;
      }
      v17 = v27;
    }
  }
  ptr = nullptr;
  v30 = 0;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v30 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v25);
  v10 = sub_89A5C0((_QWORD *)(a1 + 40), v7, 10, nullptr, v8, v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  sub_8B5EA0(&v25);
  return v10;
}

