__int64 __fastcall sub_22BBF50(__int64 a1, __m128i *a2, __m128i *a3, __m128i *a4, __m128i *a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  _WORD *v24; // rdi
  int v25; // eax
  _WORD *v26; // rdi
  void *v27; // rdi
  _WORD *v28; // rdx
  int v29; // eax
  _WORD *v30; // rdi
  int v31; // eax
  _WORD *v32; // rdi
  __int64 result; // rax
  _WORD *v34; // rcx
  __m128i v35[3]; // [rsp+10h] [rbp-1E8h] BYREF
  __m128i v36[3]; // [rsp+40h] [rbp-1B8h] BYREF
  __m128i v37[3]; // [rsp+70h] [rbp-188h] BYREF
  __m128i v38[3]; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v39[3]; // [rsp+D0h] [rbp-128h] BYREF
  __m128i v40[3]; // [rsp+100h] [rbp-F8h] BYREF
  __m128i v41[2]; // [rsp+130h] [rbp-C8h] BYREF
  __int16 v42; // [rsp+150h] [rbp-A8h]
  __m128i v43[2]; // [rsp+160h] [rbp-98h] BYREF
  __int16 v44; // [rsp+180h] [rbp-78h]
  __int128 v45; // [rsp+190h] [rbp-68h] BYREF
  _WORD v46[44]; // [rsp+1A0h] [rbp-58h] BYREF

  v44 = 264;
  v42 = 264;
  v46[8] = 264;
  LOBYTE(v45) = 45;
  v43[0].m128i_i8[0] = 45;
  v41[0].m128i_i8[0] = 45;
  sub_A41580(v40, a2, v41, 264, (__int64)a5, a6);
  sub_A41580(v39, v40, a3, v10, v11, v12);
  sub_A41580(v38, v39, v43, v13, v14, v15);
  sub_A41580(v37, v38, a4, v16, v17, v18);
  sub_A41580(v36, v37, (const __m128i *)&v45, (__int64)v36, v19, v20);
  sub_A41580(v35, v36, a5, (__int64)v36, v21, v22);
  sub_2253560((_QWORD *)a1, v35);
  sub_2253560(&v45, a2);
  v23 = sub_22B8CF0(v45);
  v24 = (_WORD *)v45;
  *(_DWORD *)(a1 + 32) = v23;
  if ( v24 != v46 )
    operator delete(v24);
  sub_2253560(&v45, a2);
  v25 = sub_22B5280((void *)v45, *((size_t *)&v45 + 1));
  v26 = (_WORD *)v45;
  *(_DWORD *)(a1 + 36) = v25;
  if ( v26 != v46 )
    operator delete(v26);
  sub_2253560(&v45, a3);
  v27 = (void *)v45;
  *(_DWORD *)(a1 + 40) = sub_22B3FD0(v45, *((__int64 *)&v45 + 1));
  if ( v28 != v46 )
    operator delete(v27);
  sub_2253560(&v45, a4);
  v29 = sub_22B4390(v45, *((unsigned __int64 *)&v45 + 1));
  v30 = (_WORD *)v45;
  *(_DWORD *)(a1 + 44) = v29;
  if ( v30 != v46 )
    operator delete(v30);
  sub_2253560(&v45, a5);
  v31 = sub_22B4A60(v45, *((__int64 *)&v45 + 1));
  v32 = (_WORD *)v45;
  *(_DWORD *)(a1 + 48) = v31;
  if ( v32 != v46 )
    operator delete(v32);
  sub_2253560(&v45, a5);
  result = sub_22B4190((_DWORD *)v45, *((unsigned __int64 *)&v45 + 1));
  *(_DWORD *)(a1 + 52) = result;
  if ( v34 != v46 )
  {
    operator delete(v34);
    result = *(unsigned int *)(a1 + 52);
  }
  if ( !(_DWORD)result )
  {
    result = sub_22B3F20(a1);
    *(_DWORD *)(a1 + 52) = result;
  }
  return result;
}
