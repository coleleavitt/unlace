__int64 __fastcall sub_2B52D0(__int64 *a1, __int64 *a2, double a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rdi
  __int64 v18; // rdi
  __int64 *v19; // r12
  char *v20; // rbx
  char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = a1[55];
  v23[1] = __readfsqword(0x28u);
  v8 = a2;
  if ( !v7 || (v9 = *(__int64 **)(v7 + 8)) == nullptr )
  {
    v23[0] = 0;
LABEL_13:
    v5 = 0;
    v14 = 0;
    goto LABEL_6;
  }
  v10 = *v9;
  v23[0] = 0;
  v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 168))(v9);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 232LL))(v11) )
  {
    if ( v11 )
    {
      v12 = *(_QWORD *)v11;
      v13 = v11;
      v5 = 0;
      v14 = 0;
      (*(void (__fastcall **)(__int64))(v12 + 8))(v13);
      goto LABEL_6;
    }
    goto LABEL_13;
  }
  a2 = v23;
  sub_2B5270(a1, v23, v11);
  v14 = v23[0];
  LOBYTE(v5) = v23[0] != 0;
LABEL_6:
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 600);
  if ( v15 != sub_2B23B0 )
  {
    a2 = (__int64 *)v14;
    v15((__int64)a1, v14);
    if ( v14 )
      goto LABEL_10;
    goto LABEL_20;
  }
  v16 = a1[55];
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  a1[55] = v14;
  if ( !v14 )
  {
LABEL_20:
    v22 = a1[2];
    a2 = *(__int64 **)(v22 + 888);
    sub_1F8250(v22, a2, 0, a5, a3);
  }
LABEL_10:
  sub_2B4F60(a1, (const char *)a2);
  if ( *((_BYTE *)v8 + 48) )
  {
    v18 = a1[24];
    v19 = a1 + 24;
    if ( v18 )
    {
      a1[25] = 0;
      qfree(v18, (const char *)a2);
      a1[24] = 0;
      a1[26] = 0;
    }
    sub_2B38C0((__int64)(a1 + 24));
    v20 = (char *)v8[3];
    if ( 20 * v8[4] )
    {
      do
      {
        v21 = v20;
        v20 += 20;
        sub_2B2D00(v19, v21);
      }
      while ( v20 != (char *)(v8[3] + 20 * v8[4]) );
    }
    sub_2B38C0((__int64)v19);
  }
  return v5;
}
