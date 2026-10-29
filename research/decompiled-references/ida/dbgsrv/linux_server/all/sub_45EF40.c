/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EF40
// Address: 0x000000000045EF40

//----- (000000000045EF40) ----------------------------------------------------
__int64 __fastcall sub_45EF40(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  void *v11; // rbp
  unsigned int v12; // r14d
  char *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r15
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  void *v22; // rbx
  char v23; // al
  __int64 (__fastcall **v25)(); // [rsp+0h] [rbp-518h] BYREF
  void *v26; // [rsp+8h] [rbp-510h]
  __int128 v27; // [rsp+10h] [rbp-508h]
  _BYTE v28[32]; // [rsp+260h] [rbp-2B8h] BYREF
  void *v29; // [rsp+280h] [rbp-298h]
  __int64 v30; // [rsp+288h] [rbp-290h]
  void *v31; // [rsp+2D0h] [rbp-248h]
  __int64 v32; // [rsp+2D8h] [rbp-240h]
  void *v33; // [rsp+380h] [rbp-198h]
  __int64 v34; // [rsp+388h] [rbp-190h]
  void *ptr; // [rsp+4A0h] [rbp-78h]
  __int64 v36; // [rsp+4A8h] [rbp-70h]
  __int64 v37; // [rsp+4B8h] [rbp-60h]
  unsigned __int64 v38; // [rsp+4D8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v10 = sub_47F560(a1, 0);
  if ( v10 )
  {
    v11 = (void *)v10;
    sub_428130((__int64)v28, v10, 0);
    if ( (unsigned __int8)sub_424C50((__int64)v28) && (unsigned __int8)sub_4251B0((__int64)v28) )
      v12 = 18;
    else
      v12 = -1;
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    if ( ptr )
    {
      v36 = 0;
      j__free(ptr);
    }
    v13 = (char *)v33;
    if ( v33 )
    {
      v14 = v34;
      if ( v34 )
      {
        v15 = 0;
        do
        {
          v16 = &v13[96 * v15];
          v17 = *((void **)v16 + 3);
          if ( v17 )
          {
            *((_QWORD *)v16 + 4) = 0;
            j__free(v17);
          }
          v18 = *(void **)v16;
          if ( *(_QWORD *)v16 )
          {
            *((_QWORD *)v16 + 1) = 0;
            j__free(v18);
          }
          ++v15;
          v13 = (char *)v33;
        }
        while ( v14 != v15 );
      }
      v34 = 0;
      j__free(v13);
    }
    if ( v31 )
    {
      v32 = 0;
      j__free(v31);
    }
    if ( v29 )
    {
      v30 = 0;
      j__free(v29);
    }
    sub_47F680(v11);
  }
  else
  {
    v12 = -1;
  }
  v19 = sub_47F560(a1, 0);
  v22 = (void *)v19;
  if ( v19 )
  {
    v25 = off_4C33F8;
    v26 = nullptr;
    v27 = 0;
    v23 = sub_45D5F0((__int64)&v25, v19, 0, 1u, (__m128)0LL, a3, a4, a5, v20, v21, a8, a9);
    v25 = off_4C33F8;
    if ( v23 )
      v12 = 11;
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      j__free(v26);
    }
    sub_47F680(v22);
  }
  return v12;
}
// 45F0DC: variable 'v20' is possibly undefined
// 45F0DC: variable 'v21' is possibly undefined
// 4C33F8: using guessed type __int64 (__fastcall *off_4C33F8[2])();
