__int64 __fastcall sub_1A5B730(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 *v25; // r14
  unsigned __int64 *v26; // rbx
  unsigned int v27; // eax
  unsigned __int64 v29[6]; // [rsp+8h] [rbp-30h] BYREF

  v12 = sub_1A5A1A0(a1, a2, a3, a4, a5, a6, a7, a8);
  v17 = sub_B91570(a3, a2, v13, v14, v15, v16);
  v18 = *(unsigned int *)(a4 + 16);
  v19 = *(_QWORD *)(a4 + 8);
  v29[0] = v17;
  v20 = sub_1A384D0(v19, v19 + 16 * v18, v29);
  if ( (unsigned __int64 *)v20 != v21 )
  {
    v25 = v21;
    v26 = (unsigned __int64 *)v20;
    do
    {
      v27 = sub_1A5A1A0(a1, a2, *v26, v22, v23, v24, a7, a8);
      if ( (_BYTE)v27 )
        v12 = v27;
      v26 += 2;
    }
    while ( v25 != v26 );
  }
  sub_1A43500(a2);
  return v12;
}
