unsigned __int64 __fastcall sub_1EE830(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 *v20; // rdi
  __int64 *v21; // r15
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 *v27; // [rsp+8h] [rbp-A0h]
  __int64 *v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+8h] [rbp-A0h]
  __int64 v30; // [rsp+10h] [rbp-98h] BYREF
  __int64 v31; // [rsp+18h] [rbp-90h]
  __int64 v32; // [rsp+20h] [rbp-88h] BYREF
  __m128i v33; // [rsp+28h] [rbp-80h] BYREF
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h]
  __int64 v36; // [rsp+50h] [rbp-58h] BYREF
  __m128i v37; // [rsp+58h] [rbp-50h]
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    sub_11E900((_BYTE *)i, a2);
    sub_127A20((__int64)&v30, a1, i, 4096, v22, v23);
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    if ( *(_DWORD *)i == 61 )
    {
      v24 = v30;
      v25 = _mm_loadu_si128(&v33);
      v33 = 0;
      v30 = 0;
      v34 = v24;
      v37 = v25;
      v35 = v31;
      v31 = 0;
      v36 = v32;
      v32 = 0;
    }
    else
    {
      sub_11F2D0((_BYTE *)i, (__int64)&v34, *(_QWORD *)(a1 + 64));
    }
    sub_1ECF20((__int64)&v30, *(_QWORD **)(a1 + 64), v4, v5);
    sub_1ECF20((__int64)&v34, *(_QWORD **)(a1 + 64), v6, v7);
    sub_64640(&v34, &v30, v8, v9, v10, v11);
    sub_317C60(&v36, &v32);
    v27 = *(__int64 **)(a2 + 48);
    sub_64280(v27, &v30);
    sub_316CB0(v27 + 2, &v32);
    v28 = *(__int64 **)(a2 + 48);
    sub_64640(v28, &v34, v12, v13, v14, v15);
    sub_317C60(v28 + 2, &v36);
    v20 = *(__int64 **)(a2 + 56);
    if ( v20 )
    {
      v29 = *(_QWORD *)(a2 + 56);
      sub_64640(v20, &v30, v16, v17, v18, v19);
      sub_317C60(v29 + 16, &v32);
      v21 = *(__int64 **)(a2 + 56);
      sub_64280(v21, &v34);
      sub_316CB0(v21 + 2, &v36);
    }
    if ( v36 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v36);
    }
    qfree(v34);
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    qfree(v30);
  }
  return v38 - __readfsqword(0x28u);
}
