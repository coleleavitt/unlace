unsigned __int64 __fastcall sub_5D6C10(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  unsigned __int64 *v7; // r14
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // cl
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
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
  v7 = sub_5C7FE0(&v15, *(_DWORD *)(a2 + 8), a3, 0);
  v8 = switch_dbctx(*(int *)(a1 + 8));
  v9 = sub_5C3FE0(*(_QWORD *)(v8 + 1672), v7);
  if ( !v9 || (v10 = v9[1], *v7 >= v10) || (v13 = *v9, v14 = v7[1], v13 >= v14) )
  {
    v11 = 1;
    goto LABEL_4;
  }
  if ( v10 >= v14 && *v7 >= v13 )
  {
    v11 = 0;
LABEL_4:
    if ( (unsigned __int8)sub_5D5AA0(
                            *(_QWORD *)(a1 + 32),
                            (__int64)v7,
                            (__int64)&v15,
                            v11,
                            *(_DWORD *)(a1 + 12),
                            *(_DWORD *)(a2 + 12),
                            0.0,
                            a5,
                            a6,
                            1) )
      goto LABEL_5;
  }
  sub_5D0380(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), (__int64)v7);
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
