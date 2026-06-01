unsigned __int64 __fastcall sub_5BB9D0(__int64 a1, __int64 a2, unsigned int a3, double a4, double a5, __m128i a6)
{
  unsigned int *v7; // r14
  __int64 v8; // rax
  unsigned int *v9; // rax
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v13; // esi
  unsigned int v14; // eax
  void *v15; // [rsp+0h] [rbp-60h] BYREF
  __int128 v16; // [rsp+8h] [rbp-58h]
  void *ptr; // [rsp+18h] [rbp-48h]
  __int128 v18; // [rsp+20h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v15 = nullptr;
  ptr = nullptr;
  v16 = 0;
  v18 = 0;
  v7 = sub_5AD4A0(&v15, *(_DWORD *)(a2 + 8), a3, 0);
  v8 = switch_dbctx(*(int *)(a1 + 8));
  v9 = sub_5A9760(*(_QWORD *)(v8 + 1480), v7);
  if ( !v9 || (v10 = v9[1], *v7 >= v10) || (v13 = *v9, v14 = v7[1], v13 >= v14) )
  {
    v11 = 1;
    goto LABEL_4;
  }
  if ( v10 >= v14 && *v7 >= v13 )
  {
    v11 = 0;
LABEL_4:
    if ( (unsigned __int8)sub_5BA8B0(
                            *(_QWORD *)(a1 + 32),
                            v7,
                            (__int64)&v15,
                            v11,
                            *(_DWORD *)(a1 + 12),
                            *(_DWORD *)(a2 + 12),
                            (__m128i)0LL,
                            a5,
                            a6,
                            1) )
      goto LABEL_5;
  }
  sub_5B52D0(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), (__int64)v7);
LABEL_5:
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v19 - __readfsqword(0x28u);
}

