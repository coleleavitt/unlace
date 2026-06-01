__int64 __fastcall sub_31210(__int64 a1, __int64 *a2, const char *a3, const char *a4, const char *a5)
{
  size_t v8; // r15
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r14
  size_t v12; // rax
  size_t v13; // r14
  size_t v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // r8d
  int v18; // r9d
  int v19; // r12d
  const char *v21; // rax
  const char *v22; // rbp
  size_t v23; // rax
  size_t v24; // r12
  void *v25; // rdi
  size_t v26; // r15
  __int64 v27; // rax
  __int64 (__fastcall **v28)(); // [rsp+8h] [rbp-A8h] BYREF
  char v29; // [rsp+10h] [rbp-A0h]
  void *ptr; // [rsp+18h] [rbp-98h] BYREF
  __int128 v31; // [rsp+20h] [rbp-90h]
  void *v32; // [rsp+30h] [rbp-80h] BYREF
  __int128 v33; // [rsp+38h] [rbp-78h]
  int v34; // [rsp+48h] [rbp-68h]
  void *v35; // [rsp+50h] [rbp-60h] BYREF
  __int128 v36; // [rsp+58h] [rbp-58h]
  char v37; // [rsp+68h] [rbp-48h]
  unsigned __int64 v38; // [rsp+70h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v29 = 89;
  v31 = 0;
  v28 = &off_1622B8;
  ptr = nullptr;
  if ( a3 )
  {
    v8 = strlen(a3);
    ptr = (void *)sub_96080(&ptr, 0, v8 + 1, 1);
    *(_QWORD *)&v31 = v8 + 1;
    memmove(ptr, a3, v8);
    *((_BYTE *)ptr + v8) = 0;
  }
  v32 = nullptr;
  v33 = 0;
  if ( a4 )
  {
    v9 = strlen(a4);
    v10 = v9 + 1;
    v11 = v9;
    v32 = (void *)sub_96080(&v32, 0, v9 + 1, 1);
    *(_QWORD *)&v33 = v10;
    memmove(v32, a4, v11);
    *((_BYTE *)v32 + v11) = 0;
  }
  v34 = 8;
  v35 = nullptr;
  v36 = 0;
  if ( a5 )
  {
    v12 = strlen(a5);
    v13 = v12 + 1;
    v14 = v12;
    v35 = (void *)sub_96080(&v35, 0, v12 + 1, 1);
    *(_QWORD *)&v36 = v13;
    memmove(v35, a5, v14);
    *((_BYTE *)v35 + v14) = 0;
  }
  v15 = *(_QWORD *)(a1 + 40);
  v37 = 0;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v15 + 80))(a1 + 40, &v28);
  v19 = sub_2A6A0((_QWORD *)(a1 + 40), v16, 10, nullptr, v17, v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  LOBYTE(v16) = v19 == 0;
  if ( v19 )
  {
    v21 = (const char *)sub_8FA30(0);
    v22 = v21;
    if ( v21 && (v23 = strlen(v21), (v24 = v23) != 0) )
    {
      v25 = (void *)*a2;
      v26 = v23 + 1;
      if ( a2[2] < v23 + 1 )
      {
        v27 = sub_96080(a2, *a2, v23 + 1, 1);
        *a2 = v27;
        v25 = (void *)v27;
      }
      a2[1] = v26;
      memmove(v25, v22, v24);
      *(_BYTE *)(*a2 + v24) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 109) = 1;
  }
  sub_3C070(&v28);
  return (unsigned int)v16;
}

