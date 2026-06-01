__int64 __fastcall sub_1745420(unsigned __int64 *a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+Ch] [rbp-1Ch]

  v8 = a2[294];
  a2[304] += 16LL;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v9 + 16 && v8 )
  {
    a2[294] = v9 + 16;
    v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v14 = a5;
    v10 = sub_986170((__int64)(a2 + 294), 16, 16, 3, a5, a6);
    LODWORD(a5) = v14;
    v9 = v10 & 0xFFFFFFFFFFFFFFFBLL;
  }
  v11 = *a3;
  *a3 = 0;
  *(_QWORD *)v10 = v11;
  v12 = *a4;
  *a4 = 0;
  *(_QWORD *)(v10 + 8) = v12;
  *a1 = v9 & 0xFFFFFFFFFFFFFFFCLL | (4LL * (unsigned int)a5) | 2;
  return (unsigned int)a5;
}
