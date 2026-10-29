__int64 __fastcall sub_25F920(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm0_8
  __int32 v10; // eax
  char **v11; // rsi
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned int v14; // r15d
  char *v15; // rax
  char v16; // r14
  int v17; // r13d
  __int64 debugger_plugins; // rax
  int v19; // r8d
  int v20; // r9d
  double v21; // xmm4_8
  double v22; // xmm5_8
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v32; // [rsp+0h] [rbp-30D0h] BYREF
  _QWORD *v33; // [rsp+8h] [rbp-30C8h] BYREF
  char *v34; // [rsp+10h] [rbp-30C0h] BYREF
  __int128 v35; // [rsp+18h] [rbp-30B8h]
  __int64 v36; // [rsp+30h] [rbp-30A0h] BYREF
  __int128 v37; // [rsp+38h] [rbp-3098h]
  __int64 v38; // [rsp+50h] [rbp-3080h] BYREF
  __int128 v39; // [rsp+58h] [rbp-3078h]
  __int64 v40; // [rsp+70h] [rbp-3060h] BYREF
  __int128 v41; // [rsp+78h] [rbp-3058h]
  char v42; // [rsp+88h] [rbp-3048h]
  char v43[4096]; // [rsp+90h] [rbp-3040h] BYREF
  char v44[4096]; // [rsp+1090h] [rbp-2040h] BYREF
  char v45[4104]; // [rsp+2090h] [rbp-1040h] BYREF
  unsigned __int64 v46; // [rsp+3098h] [rbp-38h]

  v9 = 0.0;
  v46 = __readfsqword(0x28u);
  v42 = 1;
  v34 = nullptr;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v10 = sub_2297A0(dbg);
  v11 = &v34;
  v14 = sub_25DAA0(
          v10,
          (__int64 *)&v34,
          &v36,
          v43,
          v44,
          (const char *)&stru_1000,
          0.0,
          a3,
          a4,
          a5,
          v12,
          v13,
          a8,
          a9,
          v45,
          &v38,
          (__int64)&v40,
          &v32,
          a1);
  if ( (_BYTE)v14 )
  {
    v15 = &byte_8CBC80;
    if ( (_QWORD)v35 )
      v15 = v34;
    v16 = *v15 != 0;
    v17 = *(_DWORD *)(dbg + 16);
    debugger_plugins = get_debugger_plugins(&v33);
    if ( debugger_plugins )
    {
      v23 = v33;
      v24 = 0;
      while ( 1 )
      {
        v25 = v23[1];
        if ( v17 == *(_DWORD *)(v25 + 16) )
        {
          v11 = (char **)(*(_BYTE *)(v25 + 32) & 1);
          if ( v16 == (_BYTE)v11 )
            break;
        }
        ++v24;
        v23 += 2;
        if ( debugger_plugins == v24 )
          goto LABEL_12;
      }
      if ( v23 && v25 != dbg )
      {
        v11 = (char **)(&dword_0 + 1);
        sub_258CA0(v23, 1, v24, (char *)v25, v19, v20, (__m128)0LL, a3, a4, a5, v21, v22, a8, a9);
      }
    }
LABEL_12:
    dword_8CC55C |= 1u;
  }
  v26 = v40;
  if ( v40 )
  {
    v27 = v41;
    if ( (_QWORD)v41 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30, (const char *)v11);
          v26 = v40;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v41 = 0;
    v9 = qfree(v26, (const char *)v11);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    v9 = qfree(v38, (const char *)v11, v9);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    v9 = qfree(v36, (const char *)v11, v9);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, (const char *)v11, v9);
  }
  return v14;
}
