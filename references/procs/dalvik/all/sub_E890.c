__int64 __fastcall sub_E890(unsigned __int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rbx
  char *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int64 v20; // r9
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  struct _Unwind_Exception *v25; // rbx
  char v26; // [rsp+0h] [rbp-148h]
  unsigned __int16 v27; // [rsp+Ch] [rbp-13Ch] BYREF
  unsigned __int16 v28; // [rsp+Eh] [rbp-13Ah]
  __int64 v29; // [rsp+10h] [rbp-138h] BYREF
  __m128i v30; // [rsp+18h] [rbp-130h] BYREF
  unsigned int v31[8]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v32[200]; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v33; // [rsp+118h] [rbp-30h] BYREF

  v6 = (unsigned int)(a3 - 1);
  v33 = __readfsqword(0x28u);
  if ( v6 >= a1[7] )
  {
    sub_BBD0((__int64)a1, (int)a2, a3, a4, a5, a6, v26);
    goto LABEL_18;
  }
  v7 = a1;
  v8 = a2;
  a1 = *(unsigned __int64 **)(a1[6] + 8 * v6);
  if ( netnode_supval(a1, (unsigned int)a4, &v27, 4, 72) <= 0 )
    return 0;
  a2 = (char *)v28;
  v29 = 0;
  v30 = 0;
  if ( v27 <= 3u )
  {
    if ( v6 < v7[7] )
    {
      if ( netnode_supval(*(_QWORD *)(v7[6] + 8 * v6), v28, v31, 24, 70) <= 23 )
        goto LABEL_6;
      a2 = (char *)&v29;
      v21 = sub_CA60(v7, (__int64)&v29, v28, v31, nullptr, v20);
      goto LABEL_13;
    }
LABEL_19:
    v25 = (struct _Unwind_Exception *)sub_BBD0((__int64)a1, (int)a2, v9, v10, v11, v12, v26);
    if ( v29 )
    {
      v30.m128i_i64[0] = 0;
      qfree(v29, a2);
    }
    _Unwind_Resume(v25);
  }
  memset(v32, 0, sizeof(v32));
  a1 = &v33;
  v13 = 0;
  if ( v6 >= v7[7] )
  {
LABEL_18:
    sub_BBD0((__int64)a1, (int)a2, v9, v13, v11, v12, v26);
    goto LABEL_19;
  }
  if ( netnode_supval(*(_QWORD *)(v7[6] + 8 * v6), v28, v32, 200, 77) <= 199 )
  {
LABEL_6:
    v17 = v29;
    v18 = 0;
    goto LABEL_7;
  }
  a2 = (char *)&v29;
  v21 = sub_CE40(v7, (__int64)&v29, (__int64)v32, v14, v15, v16);
LABEL_13:
  if ( !v21 )
    goto LABEL_6;
  v17 = *(_QWORD *)v8;
  v22 = *((_QWORD *)v8 + 2);
  v18 = 1;
  v23 = v29;
  v24 = _mm_loadu_si128(&v30);
  v29 = *(_QWORD *)v8;
  *(_QWORD *)v8 = v23;
  v30.m128i_i64[1] = v22;
  *(__m128i *)(v8 + 8) = v24;
LABEL_7:
  if ( v17 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v17, a2);
  }
  return v18;
}
