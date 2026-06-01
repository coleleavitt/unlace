__int64 __fastcall sub_121FA90(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v5; // rax
  _QWORD *v6; // rax
  _BYTE *v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rdx
  _BYTE *v10; // rdi
  __int64 v11; // rax
  size_t v12; // rax
  char *v13; // rsi
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[56]; // [rsp+10h] [rbp+10h] BYREF

  vars0.m128i_i64[0] = (__int64)vars10;
  v5 = j__strlen("/include");
  sub_1213C40(&vars0, "/include", (__int64)&aUsrLocalInclud[v5 + 10]);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v6 = (_QWORD *)operator new(0x20u);
  v7 = (_BYTE *)vars0.m128i_i64[0];
  v8 = v6 + 4;
  *(_QWORD *)a1 = v6;
  *v6 = v6 + 2;
  v9 = vars0.m128i_i64[1];
  *(_QWORD *)(a1 + 16) = v6 + 4;
  sub_1213B80(v6, v7, (__int64)&v7[v9]);
  v10 = (_BYTE *)vars0.m128i_i64[0];
  *(_QWORD *)(a1 + 8) = v8;
  if ( v10 != vars10 )
    operator delete(v10);
  v11 = *(_QWORD *)(a3 + 64);
  if ( *(_QWORD *)(a3 + 72) > 6u
    && *(_DWORD *)v11 == 1818457391
    && *(_WORD *)(v11 + 4) == 25193
    && *(_BYTE *)(v11 + 6) == 99 )
  {
    vars0.m128i_i64[0] = (__int64)vars10;
    v12 = j__strlen("/../../../../sysroot/uclibc/usr/include");
    v13 = "/../../../../sysroot/uclibc/usr/include";
  }
  else
  {
    vars0.m128i_i64[0] = (__int64)vars10;
    v12 = j__strlen("/../../../../sysroot/usr/include");
    v13 = "/../../../../sysroot/usr/include";
  }
  sub_1213C40(&vars0, v13, (__int64)&v13[v12]);
  sub_A82C60(a1, &vars0);
  if ( (_BYTE *)vars0.m128i_i64[0] != vars10 )
    operator delete((void *)vars0.m128i_i64[0]);
  return a1;
}
