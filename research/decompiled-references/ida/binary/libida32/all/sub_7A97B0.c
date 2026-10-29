__int64 __fastcall sub_7A97B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  const char *v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // ebx
  __int64 v9; // rax
  size_t v10; // r15
  __int64 v11; // r12
  const char *v12; // rdx
  const char *v13; // rsi
  void *src; // [rsp+0h] [rbp-80h]
  void *ptr; // [rsp+8h] [rbp-78h] BYREF
  __int128 v16; // [rsp+10h] [rbp-70h]
  void *dest; // [rsp+28h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-50h]
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]

  v2 = a1 + 8;
  v19 = __readfsqword(0x28u);
  v16 = 0;
  ptr = nullptr;
  sub_7A5FF0(a1 + 8, (__int64)&ptr, 1);
  v5 = "Secondary";
  if ( *(_BYTE *)(a1 + 172) )
    v5 = "Primary";
  v6 = v16;
  if ( !(_QWORD)v16 )
  {
    reg_str_set();
LABEL_5:
    v7 = 1;
    goto LABEL_6;
  }
  reg_str_set();
  if ( v6 == 1 || *(_QWORD *)(a1 + 72) <= 1u )
    goto LABEL_5;
  v9 = sub_79E140(v5, "Lumina");
  v10 = *(_QWORD *)(a1 + 72);
  v11 = v9;
  dest = nullptr;
  v18 = 0;
  if ( v10 )
  {
    src = *(void **)(a1 + 64);
    dest = (void *)qvector_reserve(&dest, 0, v10, 1);
    memset((char *)dest + v18, 0, v10 - v18);
    *(_QWORD *)&v18 = v10;
    memcpy(dest, src, v10);
  }
  sub_7A5FF0(v2, (__int64)&ptr, 0);
  v12 = haystack;
  if ( (_QWORD)v16 )
    v12 = (const char *)ptr;
  v13 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v13 = *(const char **)(a1 + 40);
  v7 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, char *, void **, __int64))(*(_QWORD *)v11 + 24LL))(
         v11,
         v13,
         v12,
         "lumina",
         &dest,
         a2);
  if ( dest )
  {
    *(_QWORD *)&v18 = 0;
    qfree(dest);
  }
LABEL_6:
  if ( ptr )
    qfree(ptr);
  return v7;
}

