/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005E1D0
// Address: 0x000000014005E1D0

//----- (000000014005E1D0) ----------------------------------------------------
__int64 __fastcall sub_14005E1D0(void **a1)
{
  unsigned __int64 v2; // rax
  const char *v3; // rdi
  const char **v4; // rbx
  size_t v5; // rax
  size_t v6; // rbx
  __int64 v7; // rdi
  void *v8; // rax
  unsigned __int8 v9; // bl
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-150h] BYREF
  __int8 Src[272]; // [rsp+50h] [rbp-138h] BYREF

  sub_14005BA20(&v11);
  v2 = qword_1400CB878;
  if ( (unsigned __int64)qword_1400CB878 <= 1 )
  {
    v3 = "Hex-Rays";
    v12[0] = "Hex-Rays";
    v12[1] = "IDA Pro";
    v12[2] = 0;
    if ( sub_14005E820(Src, 0x104u, 0x1Au) && Src[0] )
    {
      v4 = (const char **)v12;
      do
      {
        sub_14005DE20(Src, 260, Src, v3, 0);
        if ( !sub_14005EF30(Src) )
          sub_14005EFF0(Src);
        v3 = *++v4;
      }
      while ( *v4 );
      v5 = strlen(Src);
      v6 = v5;
      if ( !v5 )
      {
        v2 = 0;
        qword_1400CB878 = 0;
        goto LABEL_14;
      }
      v7 = v5 + 1;
      if ( v5 + 1 <= qword_1400CB880 )
      {
        v8 = qword_1400CB870;
      }
      else
      {
        v8 = sub_14005ABE0((__int64)&qword_1400CB870, qword_1400CB870, v5 + 1, 1u);
        qword_1400CB870 = v8;
      }
      qword_1400CB878 = v7;
      memcpy(v8, Src, v6);
      *((_BYTE *)qword_1400CB870 + v6) = 0;
    }
    v2 = qword_1400CB878;
  }
LABEL_14:
  v9 = 0;
  if ( v2 > 1 )
  {
    v9 = 1;
    if ( a1 != &qword_1400CB870 )
      sub_140001810((__int64)a1, qword_1400CB870, v2 - 1);
  }
  sub_14005D6D0(v11);
  return v9;
}
// 14005E33F: conditional instruction was optimized away because rax.8>=2u
// 14005E346: conditional instruction was optimized away because rax.8>=2u
// 1400CB878: using guessed type __int64 qword_1400CB878;
// 1400CB880: using guessed type __int64 qword_1400CB880;
