__int64 __fastcall sub_5DB8B0(__int64 a1)
{
  void **p_ptr; // rsi
  _BYTE *v2; // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  const char *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r13d
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  size_t v13; // r14
  void *v14; // rax
  _BYTE *v15; // rax
  void **v16; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v18; // [rsp+10h] [rbp-50h]
  unsigned __int64 v19; // [rsp+20h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  p_ptr = &ptr;
  ptr = nullptr;
  v18 = 0;
  if ( (unsigned __int8)sub_5CC930(a1, (__int64 *)&ptr, *(const void **)(a1 + 552), (int)&v16)
    && (p_ptr = v16, (v2 = (_BYTE *)resolve_typedef(*(_QWORD *)(a1 + 240), v16)) != nullptr)
    && (*v2 & 0x3F) == 0xD )
  {
    v6 = haystack;
    if ( (_QWORD)v18 )
      v6 = (const char *)ptr;
    if ( sub_5CF440((_QWORD *)(*(_QWORD *)(a1 + 120) + 48LL), v6) )
    {
      set_error_string();
      v3 = set_qerrno(107, v6);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 120);
      v8 = *(_QWORD *)(v7 + 40);
      v9 = v8 & 0x1C0000 | 0x200000;
      *(_QWORD *)(v7 + 40) = v8 & 0xFFFFFFFFFFE3FFFFLL;
      v10 = *(_QWORD *)(a1 + 120);
      v11 = sub_5CB650(a1);
      *(_BYTE *)(v11 + 186) = 61;
      v12 = v11;
      v13 = strlen(v6);
      v14 = (void *)qalloc_or_throw(v13 + 1, v6);
      v15 = memcpy(v14, v6, v13);
      v15[v13] = 0;
      *(_QWORD *)(v12 + 72) = v15;
      *(_QWORD *)(v12 + 40) = v9;
      *(_DWORD *)(v12 + 188) = *(_DWORD *)(a1 + 480);
      sub_5DB5D0((__int64 **)(v10 + 48), *(_QWORD *)(a1 + 240), v12, 1);
      v3 = sub_5D8F60(a1, v12, 0);
    }
  }
  else
  {
    v3 = set_qerrno(1499, p_ptr);
  }
  v4 = v3;
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v4;
}

