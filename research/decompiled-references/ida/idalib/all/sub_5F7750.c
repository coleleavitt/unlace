__int64 __fastcall sub_5F7750(__int64 a1)
{
  char *v1; // rax
  unsigned int v2; // eax
  unsigned int v3; // ebx
  const char *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r13d
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r12
  size_t v12; // r14
  void *v13; // rax
  _BYTE *v14; // rax
  char *v15; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v17 = 0;
  if ( (unsigned __int8)sub_5E8720(a1, (__int64 *)&ptr, *(const void **)(a1 + 560), (int)&v15)
    && (v1 = resolve_typedef(*(_QWORD *)(a1 + 248), v15)) != nullptr
    && (*v1 & 0x3F) == 0xD )
  {
    v5 = haystack;
    if ( (_QWORD)v17 )
      v5 = (const char *)ptr;
    if ( sub_5EB210((_QWORD *)(*(_QWORD *)(a1 + 128) + 48LL), v5) )
    {
      set_error_string(0, v5);
      v2 = set_qerrno(107);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 128);
      v7 = *(_QWORD *)(v6 + 40);
      v8 = v7 & 0x1C0000 | 0x200000;
      *(_QWORD *)(v6 + 40) = v7 & 0xFFFFFFFFFFE3FFFFLL;
      v9 = *(_QWORD *)(a1 + 128);
      v10 = sub_5E7430(a1);
      *(_BYTE *)(v10 + 186) = 61;
      v11 = v10;
      v12 = strlen(v5);
      v13 = (void *)qalloc_or_throw(v12 + 1);
      v14 = memcpy(v13, v5, v12);
      v14[v12] = 0;
      *(_QWORD *)(v11 + 72) = v14;
      *(_QWORD *)(v11 + 40) = v8;
      *(_DWORD *)(v11 + 188) = *(_DWORD *)(a1 + 488);
      sub_5F7470((__int64 **)(v9 + 48), *(_QWORD *)(a1 + 248), v11, 1);
      v2 = sub_5F4DE0(a1, v11, 0);
    }
  }
  else
  {
    v2 = set_qerrno(1499);
  }
  v3 = v2;
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return v3;
}
