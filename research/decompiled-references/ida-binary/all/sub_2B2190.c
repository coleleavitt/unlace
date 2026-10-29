unsigned __int64 __fastcall sub_2B2190(__int64 a1, __int64 a2)
{
  bool v2; // zf
  int v3; // ecx
  int v4; // r9d
  int v5; // r8d
  __int64 v6; // rdx
  char *v7; // rbx
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // r12
  char *v11; // rdi
  char *s; // [rsp+8h] [rbp-50h] BYREF
  void *v14; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 264) == 0;
  v16 = __readfsqword(0x28u);
  s = nullptr;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 276);
    v4 = *(_DWORD *)(a1 + 280);
    v3 = -1;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 268);
    v4 = -1;
    v5 = -1;
  }
  v6 = *(_QWORD *)(a1 + 440);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 8);
  if ( (unsigned int)sub_2BB510(a1, 17, v6, v3, v5, v4, (char)&s) )
  {
    v7 = s;
    if ( s )
    {
      v14 = nullptr;
      v15 = 0;
      v8 = strlen(s);
      v9 = v8 + 1;
      v10 = v8;
      v14 = (void *)qvector_reserve(&v14, 0, v8 + 1, 1);
      *(_QWORD *)&v15 = v9;
      memmove(v14, v7, v10);
      *((_BYTE *)v14 + v10) = 0;
      sub_2D4060(a2, &v14);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14, (const char *)&v14);
      }
      v11 = s;
      *(_DWORD *)(a2 + 100) = *(_QWORD *)(a2 + 8);
      qfree(v11, (const char *)&v14);
    }
    else
    {
      ((void (__fastcall *)(__int64))sub_2D1400)(a2);
    }
  }
  else
  {
    sub_2BF910(a1, a2);
  }
  return v16 - __readfsqword(0x28u);
}
