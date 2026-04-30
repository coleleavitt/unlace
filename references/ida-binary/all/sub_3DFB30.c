__int64 __fastcall sub_3DFB30(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  const char *v6; // rsi
  __int64 v8; // rdx
  const char *v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  const char *v12; // rdx
  unsigned int v13; // ebx
  int v15; // [rsp+4h] [rbp-3Ch] BYREF
  const char *v16; // [rsp+8h] [rbp-38h] BYREF
  __int128 v17; // [rsp+10h] [rbp-30h]
  unsigned __int64 v18; // [rsp+20h] [rbp-20h]

  v5 = a2;
  v6 = (const char *)a1;
  v18 = __readfsqword(0x28u);
  v16 = nullptr;
  v17 = 0;
  if ( get_reg_name(&v16, a1, v5, 0xFFFFFFFFLL) == -1 )
    goto LABEL_10;
  v15 = 0;
  v9 = &s1;
  if ( (_QWORD)v17 )
    v9 = v16;
  v6 = (const char *)&v15;
  v10 = sub_2383E0(v9, (__int64)&v15, v8);
  if ( v10 < 0 || v10 >= (unsigned __int64)xmmword_8CC398 || (v11 = qword_8CC390 + 56LL * v10) == 0 )
  {
LABEL_10:
    v13 = 0;
  }
  else
  {
    v12 = &s1;
    if ( *(_QWORD *)(a3 + 8) )
      v12 = *(const char **)a3;
    v6 = (const char *)&v15;
    v13 = sub_1E1DC0(v11, (const char *)&v15, (__int64)v12, a4);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v6);
  }
  return v13;
}
