__int64 __fastcall sub_EDCC0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // r13
  int v8; // r14d
  const char *v9; // rdi
  int v10; // r15d
  unsigned int v11; // ebx
  char v13; // al
  unsigned __int64 v14; // rcx
  int v15; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  const char *v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 24);
  v20 = __readfsqword(0x28u);
  v18 = nullptr;
  v19 = 0;
  v7 = 80LL * a3;
  v8 = sub_E45E0(a1, (__int64 *)&v18, *(_QWORD *)(*a1 + 56), v7 + v5, 0);
  if ( !v8 )
    goto LABEL_5;
  v9 = s1;
  if ( (_QWORD)v19 )
    v9 = v18;
  v10 = sub_CCB80(v9);
  if ( !v10 )
    goto LABEL_5;
  v13 = getinf_flag(67, 16);
  v14 = *(_QWORD *)(a2 + 32);
  if ( v13 )
  {
    v15 = a3 + 1;
    v16 = a3 + 1;
    if ( v16 < v14 )
    {
      v17 = *(_QWORD *)(a2 + 24);
      while ( (unsigned int)(*(_DWORD *)(v17 + 80 * v16 + 56) - 3) > 1 )
      {
        v16 = ++v15;
        if ( v15 >= v14 )
          goto LABEL_15;
      }
      goto LABEL_5;
    }
  }
LABEL_15:
  if ( (_DWORD)v14 - a3 == 2 && v10 > 1 )
  {
LABEL_5:
    v11 = 0;
    goto LABEL_6;
  }
  if ( v8 == 1 )
    copy_tinfo_t(*(_QWORD *)(a2 + 24) + v7 + 24, a1[2] + 208);
  v11 = 1;
LABEL_6:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v11;
}
