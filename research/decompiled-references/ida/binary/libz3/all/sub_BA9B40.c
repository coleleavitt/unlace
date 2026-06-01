signed int *__fastcall sub_BA9B40(__int64 a1, unsigned int a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  unsigned int *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // r12
  unsigned int v20; // ebp
  signed int *result; // rax
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  unsigned int *v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]

  if ( !(unsigned __int8)sub_163B2D0(a1 + 56, a3) || *(_DWORD *)(a3 + 24) != 2 )
  {
    sub_1872CE0("");
    sub_1873130(114, 149);
  }
  v9 = *(unsigned int **)(a3 + 40);
  v10 = (unsigned int)sub_B39350(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **(unsigned int **)(a3 + 32)),
                        *(_DWORD *)(a1 + 8));
  v11 = (unsigned int)sub_B39350(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v9),
                        *(_DWORD *)(a1 + 8));
  sub_BA8A20((_QWORD *)a1, v10, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v11, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v10, a4, a5, a6);
  v12 = *(_QWORD *)(a1 + 200) + 16 * v10;
  sub_BA8A20((_QWORD *)a1, v11, a4, a5, a6);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_QWORD *)(a1 + 200) + 16 * v11;
  v25 = nullptr;
  v16 = a1 + 224;
  v26 = v13;
  if ( v14 )
    v17 = *(unsigned int *)(v14 - 4);
  else
    v17 = 0;
  sub_FD8930(v16, v17, v14, *(_QWORD *)(v15 + 8), &v25);
  v18 = sub_966440(a1, v25);
  v19 = *(_QWORD *)(a1 + 16);
  v20 = v18;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v19 + 7488) + 48LL))(
    *(_QWORD *)(v19 + 7488),
    *(_QWORD *)(*(_QWORD *)(v19 + 8840) + 8LL * (v18 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 7488) + 64LL))(*(_QWORD *)(v19 + 7488));
  sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), a2 ^ 1, v20, 0, 0);
  result = sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), a2, v20 ^ 1, 0, 0);
  v22 = v25;
  if ( v25 )
  {
    v23 = v26;
    if ( v25[2]-- == 1 )
      return (signed int *)sub_15D7BC0(v23, v22);
  }
  return result;
}

