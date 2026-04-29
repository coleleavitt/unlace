__int64 __fastcall sub_6D480(__int64 a1, __int64 a2, void *a3)
{
  _QWORD *v4; // rax
  int v5; // edx
  __int64 result; // rax
  _BYTE v7[360]; // [rsp+0h] [rbp-188h] BYREF
  _QWORD v8[4]; // [rsp+168h] [rbp-20h] BYREF

  v8[0] = __readfsqword(0x28u);
  v4 = &v7[40];
  memset(v7, 255, 24);
  *(_QWORD *)&v7[24] = 0;
  *(_QWORD *)&v7[32] = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v8 != v4 );
  v5 = decode_insn(v7, a2, v8, 0.0);
  result = 0;
  if ( v5 )
  {
    qmemcpy(a3, v7, 0x168u);
    return 1;
  }
  return result;
}
