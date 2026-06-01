/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A43A0
// Address: 0x00000000000A43A0

//----- (00000000000A43A0) ----------------------------------------------------
__int64 __fastcall sub_A43A0(int a1, const char **a2, double a3, __m128 a4)
{
  void *v4; // rbx
  const void *v5; // r12
  void *v6; // rax
  void *src[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-98h]
  void *v10[2]; // [rsp+20h] [rbp-88h] BYREF
  void *v11[2]; // [rsp+30h] [rbp-78h]
  __int128 v12; // [rsp+40h] [rbp-68h]
  void *ptr[2]; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 (*v15)(char *, ...); // [rsp+68h] [rbp-40h]
  char v16; // [rsp+70h] [rbp-38h]
  unsigned __int64 v17; // [rsp+78h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_6EC50(a3, a4);
  if ( sub_48760() )
  {
    *(_OWORD *)src = 0;
    v9 = 0;
    if ( (unsigned __int8)qgetenv("IDA_DBGSRV_PASSWD", (__int64)src) )
    {
      v4 = src[1];
      if ( src[1] < (char *)&dword_0 + 2 )
      {
        *(&xmmword_1559D8 + 1) = nullptr;
      }
      else
      {
        v5 = src[0];
        v6 = xmmword_1559D8;
        if ( (void *)qword_1559E8 < src[1] )
        {
          v6 = qvector_reserve((__int64)&xmmword_1559D8, (char *)xmmword_1559D8, (unsigned __int64)src[1], 1u);
          xmmword_1559D8 = v6;
        }
        *(&xmmword_1559D8 + 1) = v4;
        memmove(v6, v5, (size_t)v4 - 1);
        *((_BYTE *)v4 + (_QWORD)xmmword_1559D8 - 1) = 0;
      }
    }
    sub_AD470("IDA Android x86 64-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    byte_1559F0 = qword_155940;
    *(_OWORD *)ptr = 0;
    v12 = 0;
    *(_OWORD *)v11 = 0;
    *(_OWORD *)v10 = 0;
    v14 = 0;
    v15 = sub_AD470;
    v16 = 1;
    sub_A8780((__int64)&qword_155968, (__int64)v10, 1);
    cliopts_t_add((__int64)v10, (__int128 *)&off_14ED80, 1);
    if ( byte_1559F0 )
      cliopts_t_add((__int64)v10, (__int128 *)&qword_14EDB0, 2);
    cliopts_t_apply((__int64)v10, a1, a2, (__int64)&qword_155968);
    sub_A8980((__int64)&qword_155968);
    sub_A89D0((__int64)&qword_155968);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v14 = 0;
    }
    if ( v11[1] )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11[1]);
      v11[1] = nullptr;
      *((_QWORD *)&v12 + 1) = 0;
    }
    if ( v10[0] )
    {
      v10[1] = nullptr;
      qfree(v10[0]);
      v10[0] = nullptr;
      v11[0] = nullptr;
    }
    if ( src[0] )
    {
      src[1] = nullptr;
      qfree(src[0]);
      src[0] = nullptr;
      v9 = 0;
    }
    return 0;
  }
  else
  {
    sub_AD470("Could not initialize subsystem!");
    return 0xFFFFFFFFLL;
  }
}
// 0: using guessed type int dword_0;
// 14ED80: using guessed type int *off_14ED80;
// 14EDB0: using guessed type __int64 qword_14EDB0;
// 155940: using guessed type __int64 qword_155940;
// 155968: using guessed type __int64 qword_155968;
// 1559E8: using guessed type __int64 qword_1559E8;
// 1559F0: using guessed type char byte_1559F0;
