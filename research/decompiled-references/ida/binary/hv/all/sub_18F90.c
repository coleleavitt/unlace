__int64 __fastcall sub_18F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  const char *v7; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v13; // rdx
  const void *v14; // r12
  size_t n; // [rsp+8h] [rbp-68h]
  __int64 v16; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+28h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v6 = a1;
  v7 = *(const char **)(a1 + 16);
  v20 = __readfsqword(0x28u);
  ptr = nullptr;
  v19 = 0;
  if ( v7 )
  {
    if ( &ptr == (void **)(v7 + 8) )
      goto LABEL_4;
    v9 = *((_QWORD *)v7 + 2);
    if ( v9 <= 1 )
      goto LABEL_4;
    v13 = *((_QWORD *)v7 + 2);
    n = v9 - 1;
    v16 = v13;
    v14 = *((const void **)v7 + 1);
    ptr = (void *)sub_96080(&ptr, 0, v13, 1);
    *(_QWORD *)&v19 = v16;
    memmove(ptr, v14, n);
    *((char *)ptr + v16 - 1) = 0;
  }
  else if ( !(unsigned __int8)sub_96250(&ptr) )
  {
    goto LABEL_5;
  }
  if ( !(_QWORD)v19 )
  {
LABEL_4:
    v7 = haystack;
    goto LABEL_5;
  }
  v7 = (const char *)ptr;
LABEL_5:
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, const char *, _QWORD))(*(_QWORD *)a3 + 48LL))(
          a3,
          a2,
          a4,
          a5,
          *(_QWORD *)(a1 + 24),
          v7,
          0);
  v11 = ptr;
  *(_QWORD *)(v6 + 8) = v10;
  LOBYTE(v6) = v10 != 0;
  if ( v11 )
  {
    *(_QWORD *)&v19 = 0;
    j__free(v11);
  }
  return (unsigned int)v6;
}

