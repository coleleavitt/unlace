__int64 __fastcall sub_22BBD90(__int64 a1, __m128i *a2, __m128i *a3, __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  _WORD *v19; // rdi
  int v20; // eax
  _WORD *v21; // rdi
  void *v22; // rdi
  _WORD *v23; // rdx
  int v24; // eax
  _WORD *v25; // rdi
  __int64 result; // rax
  __m128i v27[3]; // [rsp+10h] [rbp-158h] BYREF
  __m128i v28[3]; // [rsp+40h] [rbp-128h] BYREF
  __m128i v29[3]; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v30[3]; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v31[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int16 v32; // [rsp+F0h] [rbp-78h]
  __int128 v33; // [rsp+100h] [rbp-68h] BYREF
  _WORD v34[44]; // [rsp+110h] [rbp-58h] BYREF

  v32 = 264;
  v34[8] = 264;
  LOBYTE(v33) = 45;
  v31[0].m128i_i8[0] = 45;
  sub_A41580(v30, a2, v31, (__int64)a4, a5, a6);
  sub_A41580(v29, v30, a3, v9, v10, v11);
  sub_A41580(v28, v29, (const __m128i *)&v33, v12, v13, v14);
  sub_A41580(v27, v28, a4, v15, v16, v17);
  sub_2253560((_QWORD *)a1, v27);
  sub_2253560(&v33, a2);
  v18 = sub_22B8CF0(v33);
  v19 = (_WORD *)v33;
  *(_DWORD *)(a1 + 32) = v18;
  if ( v19 != v34 )
    operator delete(v19);
  sub_2253560(&v33, a2);
  v20 = sub_22B5280((void *)v33, *((size_t *)&v33 + 1));
  v21 = (_WORD *)v33;
  *(_DWORD *)(a1 + 36) = v20;
  if ( v21 != v34 )
    operator delete(v21);
  sub_2253560(&v33, a3);
  v22 = (void *)v33;
  *(_DWORD *)(a1 + 40) = sub_22B3FD0(v33, *((__int64 *)&v33 + 1));
  if ( v23 != v34 )
    operator delete(v22);
  sub_2253560(&v33, a4);
  v24 = sub_22B4390(v33, *((unsigned __int64 *)&v33 + 1));
  v25 = (_WORD *)v33;
  *(_DWORD *)(a1 + 44) = v24;
  if ( v25 != v34 )
    operator delete(v25);
  *(_QWORD *)(a1 + 48) = 0;
  result = sub_22B3F20(a1);
  *(_DWORD *)(a1 + 52) = result;
  return result;
}
