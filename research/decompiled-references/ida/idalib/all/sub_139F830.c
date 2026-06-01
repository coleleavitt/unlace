_QWORD *__fastcall sub_139F830(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  const char *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  const char *v15; // [rsp+8h] [rbp-40h]
  const char *v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+1Ch] [rbp-2Ch]
  unsigned int v18; // [rsp+20h] [rbp-28h]

  v8 = *(_QWORD *)(a1 + 40);
  v14 = a2;
  v9 = *(_QWORD *)(v8 + 32);
  v15 = (const char *)a3;
  sub_A25970(v9 + 1312, 9u, 4u);
  v10 = v15;
  if ( v15 )
  {
    sub_101B340(&v16, (unsigned int *)&v14, 1u);
    v10 = v16;
    v11 = v17;
    v12 = v18;
  }
  else
  {
    v12 = 0;
    v11 = 0;
  }
  sub_139EAF0(*(_QWORD *)(a1 + 40), (unsigned int)v14, (__int64)v15, v10, v11, v12, 1u, a4, a5, 0);
  return sub_A25550(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL) + 1312LL);
}
