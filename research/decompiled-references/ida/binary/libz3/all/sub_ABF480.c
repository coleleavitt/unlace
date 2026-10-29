__int64 __fastcall sub_ABF480(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned int v14; // ebp
  int v15; // r9d
  int v16; // edi
  int v17; // esi
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v23[1] = 0;
  v7 = (_QWORD *)sub_AB3F30(a1, a2, v3, v4, v5, v6);
  v19 = *(_QWORD *)(a1 + 24);
  v21 = v19;
  v23[0] = v19;
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 112) + 429LL) )
    v9 = v7[14];
  else
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8656) + 8LL * **(unsigned int **)(*v7 + 32LL));
  v10 = sub_B39350(v9, *(unsigned int *)(a1 + 8));
  if ( v10 == -1 )
  {
    v10 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v9);
    sub_AB6BC0((__int64 *)a1, v10);
  }
  v20 = 0;
  sub_AB6A00(a1, v10, (__int64)&v19);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = v20;
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 112) + 429LL) )
    v13 = v7[15];
  else
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8656) + 8LL * **(unsigned int **)(*v7 + 40LL));
  v14 = sub_B39350(v13, *(unsigned int *)(a1 + 8));
  if ( v14 == -1 )
  {
    v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v13);
    sub_AB6BC0((__int64 *)a1, v14);
  }
  v22 = 0;
  sub_AB6A00(a1, v14, (__int64)&v21);
  v16 = a1 + 120;
  if ( v12 )
    v17 = *(_DWORD *)(v12 - 4);
  else
    v17 = 0;
  sub_FE0090(v16, v17, v12, v22, (unsigned int)v23, v15, v22);
  sub_ABDB30(a1, (__int64)v7, (__int64)v23);
  sub_2334C0(v23);
  sub_2334C0(&v21);
  return sub_2334C0(&v19);
}

