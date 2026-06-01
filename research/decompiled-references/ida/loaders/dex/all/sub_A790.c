__int64 __fastcall sub_A790(_QWORD *a1, __int64 *a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned int v6; // ebx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  struct _Unwind_Exception *v12; // rbx
  unsigned __int16 v13; // [rsp+Ch] [rbp-13Ch] BYREF
  unsigned __int16 v14; // [rsp+Eh] [rbp-13Ah]
  __int64 v15; // [rsp+10h] [rbp-138h] BYREF
  __m128i v16; // [rsp+18h] [rbp-130h] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v18[200]; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v19; // [rsp+118h] [rbp-30h]

  v4 = (unsigned int)(a3 - 1);
  v19 = __readfsqword(0x28u);
  if ( v4 >= a1[7] )
  {
    sub_59F0();
    goto LABEL_18;
  }
  if ( netnode_supval(*(_QWORD *)(a1[6] + 8 * v4), a4, &v13, 4, 72) <= 0 )
    return 0;
  v15 = 0;
  v16 = 0;
  if ( v13 <= 3u )
  {
    if ( v4 < a1[7] )
    {
      if ( netnode_supval(*(_QWORD *)(a1[6] + 8 * v4), v14, v17, 24, 70) <= 23 )
        goto LABEL_6;
      v8 = sub_8D60(a1, (__int64)&v15, v14, (__int64)v17, nullptr);
      goto LABEL_13;
    }
LABEL_19:
    v12 = (struct _Unwind_Exception *)sub_59F0();
    if ( v15 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v15);
    }
    _Unwind_Resume(v12);
  }
  memset(v18, 0, sizeof(v18));
  if ( v4 >= a1[7] )
  {
LABEL_18:
    sub_59F0();
    goto LABEL_19;
  }
  if ( netnode_supval(*(_QWORD *)(a1[6] + 8 * v4), v14, v18, 200, 77) <= 199 )
  {
LABEL_6:
    v5 = v15;
    v6 = 0;
    goto LABEL_7;
  }
  v8 = sub_96C0(a1, (__int64)&v15, (__int64)v18);
LABEL_13:
  if ( !v8 )
    goto LABEL_6;
  v5 = *a2;
  v9 = a2[2];
  v6 = 1;
  v10 = v15;
  v11 = _mm_loadu_si128(&v16);
  v15 = *a2;
  *a2 = v10;
  v16.m128i_i64[1] = v9;
  *(__m128i *)(a2 + 1) = v11;
LABEL_7:
  if ( v5 )
  {
    v16.m128i_i64[0] = 0;
    qfree(v5);
  }
  return v6;
}

