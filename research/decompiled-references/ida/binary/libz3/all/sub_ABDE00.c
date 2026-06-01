__int64 __fastcall sub_ABDE00(__int64 a1, unsigned int *a2)
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
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v25[1] = 0;
  v7 = (_QWORD *)sub_AB3F30(a1, a2, v3, v4, v5, v6);
  v21 = *(_QWORD *)(a1 + 24);
  v23 = v21;
  v25[0] = v21;
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
  v22 = 0;
  sub_AB6A00(a1, v10, (__int64)&v21);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = v22;
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
  v24 = 0;
  sub_AB6A00(a1, v14, (__int64)&v23);
  v15 = a1 + 120;
  v26 = 0;
  v27 = *(_QWORD *)(a1 + 24);
  if ( v12 )
    v16 = *(unsigned int *)(v12 - 4);
  else
    v16 = 0;
  sub_FDB330(v15, v16, v12, v24, v25, &v26);
  sub_ABDB30(a1, (__int64)v7, (__int64)v25);
  v17 = v26;
  if ( v26 )
  {
    v18 = v27;
    if ( (*(_DWORD *)(v26 + 8))-- == 1 )
      sub_15D7BC0(v18, v17);
  }
  sub_2334C0(v25);
  sub_2334C0(&v23);
  return sub_2334C0(&v21);
}

