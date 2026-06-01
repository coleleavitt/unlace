unsigned __int64 __fastcall sub_55B450(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  char v4; // dl
  int v5; // r8d
  const char *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // di
  int v14; // edx
  __int64 v15; // rdx
  int v16; // esi
  void *ptr; // [rsp+0h] [rbp-30h] BYREF
  __int128 v18; // [rsp+8h] [rbp-28h]
  unsigned __int64 v19; // [rsp+18h] [rbp-18h]

  v2 = *(__int64 **)(a1 + 248);
  v19 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = *((_BYTE *)v2 + 100);
  v18 = 0;
  if ( v4 == 61 )
  {
    *(_DWORD *)(a1 + 144) |= 0x10u;
    if ( *((_BYTE *)v2 + 100) != 12 )
      goto LABEL_3;
  }
  else
  {
    a2 = (unsigned int)a2 | 0x4000;
    if ( v4 != 12 )
    {
LABEL_3:
      v5 = a2 | 0x83F;
      goto LABEL_4;
    }
  }
  v12 = *v2;
  if ( !*v2 )
    sub_555E20(a1, a2);
  v13 = *(_BYTE *)(v12 + 88);
  v14 = v13 & 0xF0;
  if ( (v13 & 0xF0) == 0xC0 )
    v14 = *(_DWORD *)(v12 + 28);
  if ( v14 == 64 || v14 == 208 )
  {
    v15 = *(_QWORD *)(v12 + 8) + 1LL;
  }
  else
  {
    v5 = 2105;
    if ( v14 == 32 )
      goto LABEL_4;
    v15 = *(_QWORD *)(v12 + 8);
  }
  v16 = a2 | 0x839;
  v5 = 2105;
  if ( v15 )
    v5 = v16;
LABEL_4:
  v6 = haystack;
  if ( v2[2] )
    v6 = (const char *)v2[1];
  print_tinfo((unsigned int)&ptr, 0, 0, 0, v5, (_DWORD)v2 + 88, (__int64)v6, 0);
  sub_55B170(a1, (__int64)&ptr, 0x80000000);
  v7 = *(_QWORD *)(a1 + 248);
  v8 = *(unsigned __int8 *)(v7 + 100);
  if ( (unsigned __int8)v8 <= 0x2Du )
  {
    v9 = 0x200020002000LL;
    if ( _bittest64(&v9, v8) )
    {
      if ( !*(_BYTE *)(v7 + 102) )
      {
        v11 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 144) |= 0x10u;
        (*(void (__fastcall **)(__int64, const char *, _QWORD))(v11 + 136))(a1, &byte_22D5CF8, 0);
      }
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v19 - __readfsqword(0x28u);
}
