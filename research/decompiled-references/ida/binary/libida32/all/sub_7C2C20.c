unsigned __int64 __fastcall sub_7C2C20(int *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rdi
  _BYTE v20[3]; // [rsp+5h] [rbp-43h] BYREF
  unsigned __int64 v21[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *a1;
  v21[0] = __readfsqword(0x28u);
  v8 = a3;
  sub_7BE190(a2, v7 + 1, a3, a4, a5);
  sub_7BE190(a2, (unsigned int)a1[1] + 1LL, v9, v10, v11);
  v12 = pack_dw(v20, v21, *((unsigned __int16 *)a1 + 4)) - (_QWORD)v20;
  if ( v12 )
    sub_7BB300(a2, v20, v12);
  v13 = *((_QWORD *)a1 + 3);
  sub_407AD0(a2, v13);
  if ( v13 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      ++v17;
      v18 = v16 + *((_QWORD *)a1 + 2);
      v16 += 280;
      sub_7C2760(v18, a2, v8, v14, v15);
    }
    while ( v13 != v17 );
  }
  return v21[0] - __readfsqword(0x28u);
}

