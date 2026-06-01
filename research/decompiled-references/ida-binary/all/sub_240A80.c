__int64 __fastcall sub_240A80(unsigned int a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 result; // rax
  char *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-180h] BYREF
  __int128 v18; // [rsp+10h] [rbp-178h] BYREF
  __int64 v19; // [rsp+20h] [rbp-168h]
  __int64 v20; // [rsp+28h] [rbp-160h]
  __int64 v21; // [rsp+30h] [rbp-158h]
  char v22; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v23[2]; // [rsp+178h] [rbp-10h] BYREF

  v23[0] = __readfsqword(0x28u);
  v17 = -1;
  if ( !a1 )
    return -1;
  v5 = a1;
  v6 = (_DWORD *)qword_8CC430;
  v7 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v7 )
    return -1;
  while ( (_DWORD)v5 != *v6 )
  {
    v6 += 64;
    if ( (_DWORD *)v7 == v6 )
      return -1;
  }
  if ( !v6 )
    return -1;
  v8 = sub_23F1C0((__int64)v6, -1, a2, v5, a5);
  if ( !v8 )
    return v17;
  v9 = (char *)dword_8BA594;
  v10 = *(_QWORD *)(v8 + 32LL * dword_8BA594 + 8);
  v11 = dbg;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v12 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v10;
        v10 = -1;
        v12[1] = v8;
        *((_DWORD *)v12 + 4) = (_DWORD)v9;
        if ( (unsigned int)sub_23D480((__int64)v12, 11, v11, v9, a2) == 1 )
          v10 = *(_QWORD *)qword_8CC600;
      }
    }
  }
  v13 = sub_1E73C0(0x3E9u, &v17, v10, v9);
  result = v17;
  if ( v13 == 1 && v17 == -1 )
  {
    v19 = -1;
    v16 = &v22;
    v20 = 0;
    v21 = 0;
    v18 = -1;
    do
    {
      *(_WORD *)v16 = 0;
      v16 += 40;
      *((_WORD *)v16 - 19) = 0;
      *((_WORD *)v16 - 18) = 0;
      *((_DWORD *)v16 - 2) = 0;
      *((_WORD *)v16 - 17) = 0;
      *((_OWORD *)v16 - 2) = 0;
      *((_QWORD *)v16 - 2) = 0;
    }
    while ( v16 != (char *)v23 );
    if ( (int)decode_insn(&v18, v10, v23, 0, 0, v14, 0.0) > 0 && (v21 & 0x10000) != 0 )
      return v19 + WORD1(v20);
    return v17;
  }
  return result;
}
