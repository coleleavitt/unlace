__int64 __fastcall sub_4CCA80(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  char *v4; // rax
  int v5; // edx
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-188h] BYREF
  __int64 v8; // [rsp+10h] [rbp-178h]
  __int64 v9; // [rsp+18h] [rbp-170h]
  __int64 v10; // [rsp+20h] [rbp-168h]
  char v11; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v12[4]; // [rsp+168h] [rbp-20h] BYREF

  v12[0] = __readfsqword(0x28u);
  v4 = &v11;
  v7 = -1;
  v8 = -1;
  v9 = 0;
  v10 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v12 != (_QWORD *)v4 );
  v5 = decode_insn(&v7, a2, v12, 0, 0, 0, 0.0);
  result = 0;
  if ( v5 > 0 )
    return sub_4CC920(a1, (__int64)&v7, a3);
  return result;
}
