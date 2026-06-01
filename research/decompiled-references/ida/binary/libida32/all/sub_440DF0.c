__int64 __fastcall sub_440DF0(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11)
{
  int v11; // ebx
  _QWORD *v12; // rbp
  __int64 v13; // rdi
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  unsigned int *v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // edx
  _QWORD v21[7]; // [rsp+0h] [rbp-38h] BYREF

  v11 = (int)a1;
  v12 = a1 + 194;
  v13 = *a1;
  v21[1] = __readfsqword(0x28u);
  v21[0] = 0;
  sub_6141A0(v13, 26, v21, 8);
  v15 = v21[0];
  v16 = HIDWORD(v21[0]);
  v17 = (unsigned int *)sub_4EEBF0(v12);
  if ( !v17 )
    return sub_6558F0(v11, a7, a8, a9, a10, a11);
  while ( 1 )
  {
    v18 = *v17;
    v19 = a2 + v17[1];
    if ( (int)v18 + a2 >= v19 || v15 < v19 && (int)v18 + a2 < v16 )
      break;
    v17 = (unsigned int *)sub_4EE960(v12, v18);
    if ( !v17 )
      return sub_6558F0(v11, a7, a8, a9, a10, a11);
  }
  return 4294967285LL;
}

