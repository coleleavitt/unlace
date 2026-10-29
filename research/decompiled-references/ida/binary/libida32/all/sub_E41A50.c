__int64 __fastcall sub_E41A50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-88h] BYREF
  __int64 v27; // [rsp+8h] [rbp-80h]
  int v28; // [rsp+10h] [rbp-78h]
  __int16 v29; // [rsp+20h] [rbp-68h] BYREF
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+38h] [rbp-50h]

  v7 = a1[1];
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), a3, a4, a5, a6);
  v12 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
    v13 = sub_B72C40(v12);
  else
    v13 = *(_QWORD *)(v12 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), v8, v9, v10, v11);
  v14 = v13 + 24LL * *(unsigned int *)(*(_QWORD *)(v7 + 128) + 16LL);
  result = (__int64)sub_6E4DB0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), v15, v16, v17, v18);
  v20 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v20 + 24) & 1) != 0 )
  {
    result = sub_B72C40(v20);
    v21 = result;
  }
  else
  {
    v21 = *(_QWORD *)(v20 + 24);
  }
  for ( ; v14 != v21; result = sub_E395A0(&v26) )
  {
    v22 = *a1;
    v23 = v21;
    v21 += 24;
    sub_E41740((__int64)&v26, *a1, v23);
    v29 = 7;
    v24 = v26;
    v26 = 0;
    v30 = v24;
    v25 = v27;
    v27 = 0;
    v31 = v25;
    LODWORD(v25) = v28;
    v28 = 0;
    v32 = v25;
    sub_2208D80(v22 + 1048, &v29);
    sub_2207560(&v29);
  }
  return result;
}

