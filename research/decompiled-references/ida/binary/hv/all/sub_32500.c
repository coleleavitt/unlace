__int64 __fastcall sub_32500(__int64 a1, _QWORD *a2, const char *a3)
{
  __int64 v3; // rcx
  size_t v4; // rax
  size_t v5; // rbp
  size_t v6; // rbx
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebp
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rbx
  size_t v19; // r12
  void *v20; // rax
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int64 v23; // [rsp+8h] [rbp-90h]
  __int64 (__fastcall **v24)(); // [rsp+10h] [rbp-88h] BYREF
  char v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int128 v27; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __int128 v29; // [rsp+40h] [rbp-58h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v3 = a2[1];
  v30 = __readfsqword(0x28u);
  v25 = 42;
  v26 = 0;
  v27 = 0;
  v24 = &off_1619E8;
  if ( v3 )
  {
    v22 = v3;
    v12 = 0;
    v13 = sub_96030(24 * v3);
    v14 = v22;
    v15 = 0;
    v26 = v13;
    v16 = v13;
    *((_QWORD *)&v27 + 1) = v22;
    while ( 1 )
    {
      v17 = 24 * v12 + v16;
      v18 = 24 * v12 + *a2;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = v15;
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v23 = v14;
        ++v12;
        v20 = (void *)sub_96030(*(_QWORD *)(v18 + 8));
        *(_QWORD *)(v17 + 16) = v19;
        *(_QWORD *)v17 = v20;
        memcpy(v20, *(const void **)v18, v19);
        v14 = v23;
        *(_QWORD *)(v17 + 8) = v19;
        v15 = 0;
        if ( v23 == v12 )
        {
LABEL_12:
          *(_QWORD *)&v27 = v14;
          break;
        }
      }
      else if ( v14 == ++v12 )
      {
        goto LABEL_12;
      }
      v16 = v26;
    }
  }
  ptr = nullptr;
  v29 = 0;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)sub_96080(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v29 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v24);
  v10 = sub_2A6A0((_QWORD *)(a1 + 40), v7, 10, nullptr, v8, v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  sub_40050(&v24);
  return v10;
}

