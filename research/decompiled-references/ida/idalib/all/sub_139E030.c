__int64 __fastcall sub_139E030(__int64 a1, __int32 a2, unsigned __int32 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // r14
  int v33; // ebp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 result; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v61; // [rsp+8h] [rbp-A0h]
  __m128i v62; // [rsp+10h] [rbp-98h] BYREF
  __m128i v63; // [rsp+20h] [rbp-88h] BYREF
  const char *v64; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v65; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v66; // [rsp+40h] [rbp-68h]
  __m128i v67; // [rsp+50h] [rbp-58h] BYREF
  int v68; // [rsp+60h] [rbp-48h]

  v63.m128i_i32[0] = a2;
  v63.m128i_i64[1] = a6;
  sub_101B340(&v64, (unsigned int *)&v63, 1u);
  v12 = v65;
  v13 = v66;
  v67 = _mm_load_si128(&v63);
  if ( v64 )
  {
    LODWORD(v18) = sub_139DC10(a1, v64, v8, v9, v10, v11);
    v16 = *(unsigned int *)(a5 + 8);
    v17 = *(unsigned int *)(a5 + 12);
    v18 = (unsigned int)v18;
    if ( v16 + 1 > v17 )
    {
      v17 = a5 + 16;
      v61 = (unsigned int)v18;
      sub_2237220(a5, a5 + 16, v16 + 1, 8);
      v16 = *(unsigned int *)(a5 + 8);
      v18 = v61;
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v16) = v18;
    v19 = *(unsigned int *)(a5 + 12);
    v20 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v20;
    if ( v20 + 1 > v19 )
    {
      v17 = a5 + 16;
      sub_2237220(a5, a5 + 16, v20 + 1, 8);
      v20 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v20) = v12;
    v21 = *(unsigned int *)(a5 + 12);
    v22 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v22;
    if ( v22 + 1 > v21 )
    {
      v17 = a5 + 16;
      sub_2237220(a5, a5 + 16, v22 + 1, 8);
      v22 = *(unsigned int *)(a5 + 8);
    }
    v23 = *(_QWORD *)a5;
    *(_QWORD *)(v23 + 8 * v22) = v13;
    ++*(_DWORD *)(a5 + 8);
    v24 = (unsigned int)sub_101BA60((__int64)&v67, v17, v23, v21, v14, v15);
    v25 = *(unsigned int *)(a5 + 8);
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      sub_2237220(a5, a5 + 16, v25 + 1, 8);
      v25 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v25) = v24;
    ++*(_DWORD *)(a5 + 8);
  }
  else
  {
    v46 = *(unsigned int *)(a5 + 8);
    if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      sub_2237220(a5, a5 + 16, v46 + 1, 8);
      v46 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v46) = 0;
    v47 = *(unsigned int *)(a5 + 12);
    v48 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v48;
    if ( v48 + 1 > v47 )
    {
      sub_2237220(a5, a5 + 16, v48 + 1, 8);
      v48 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v48) = 0;
    v49 = *(unsigned int *)(a5 + 12);
    v50 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v50;
    if ( v50 + 1 > v49 )
    {
      sub_2237220(a5, a5 + 16, v50 + 1, 8);
      v50 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v50) = 0;
    v51 = *(unsigned int *)(a5 + 12);
    v52 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v52;
    if ( v52 + 1 > v51 )
    {
      sub_2237220(a5, a5 + 16, v52 + 1, 8);
      v52 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v52) = 0;
    ++*(_DWORD *)(a5 + 8);
  }
  v26 = 0;
  if ( a4 )
    v26 = sub_13DC0F0(a3, a6, *(_QWORD *)(a1 + 16));
  v62.m128i_i64[1] = a6;
  v62.m128i_i32[0] = a3;
  sub_101B340(&v67, (unsigned int *)&v62, 1u);
  v31 = v67.m128i_i64[0];
  v32 = v67.m128i_u32[3];
  v33 = v68;
  v63 = _mm_load_si128(&v62);
  if ( v67.m128i_i64[0] )
  {
    v36 = (unsigned int)sub_139DC10(a1, (const char *)v67.m128i_i64[0], v27, v28, v29, v30);
    v37 = *(unsigned int *)(a5 + 8);
    if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      v31 = a5 + 16;
      sub_2237220(a5, a5 + 16, v37 + 1, 8);
      v37 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v37) = v36;
    v38 = *(unsigned int *)(a5 + 12);
    v39 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v39;
    if ( v39 + 1 > v38 )
    {
      v31 = a5 + 16;
      sub_2237220(a5, a5 + 16, v39 + 1, 8);
      v39 = *(unsigned int *)(a5 + 8);
    }
    v40 = (unsigned int)(v33 + v26);
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v39) = v32;
    v41 = *(unsigned int *)(a5 + 12);
    v42 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v42;
    if ( v42 + 1 > v41 )
    {
      v31 = a5 + 16;
      sub_2237220(a5, a5 + 16, v42 + 1, 8);
      v42 = *(unsigned int *)(a5 + 8);
    }
    v43 = *(_QWORD *)a5;
    *(_QWORD *)(v43 + 8 * v42) = v40;
    ++*(_DWORD *)(a5 + 8);
    v44 = (unsigned int)sub_101BA60((__int64)&v63, v31, v43, v41, v34, v35);
    result = *(unsigned int *)(a5 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      sub_2237220(a5, a5 + 16, result + 1, 8);
      result = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * result) = v44;
    ++*(_DWORD *)(a5 + 8);
  }
  else
  {
    v53 = *(unsigned int *)(a5 + 8);
    if ( v53 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      sub_2237220(a5, a5 + 16, v53 + 1, 8);
      v53 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v53) = 0;
    v54 = *(unsigned int *)(a5 + 12);
    v55 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v55;
    if ( v55 + 1 > v54 )
    {
      sub_2237220(a5, a5 + 16, v55 + 1, 8);
      v55 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v55) = 0;
    v56 = *(unsigned int *)(a5 + 12);
    v57 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v57;
    if ( v57 + 1 > v56 )
    {
      sub_2237220(a5, a5 + 16, v57 + 1, 8);
      v57 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v57) = 0;
    v58 = *(unsigned int *)(a5 + 12);
    result = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = result;
    if ( result + 1 > v58 )
    {
      sub_2237220(a5, a5 + 16, result + 1, 8);
      result = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * result) = 0;
    ++*(_DWORD *)(a5 + 8);
  }
  return result;
}
