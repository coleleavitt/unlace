__int64 __fastcall sub_B45CA0(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 result; // rax
  __int64 v13; // [rsp-10h] [rbp-50h]
  int v14; // [rsp-8h] [rbp-48h]
  int v15; // [rsp+0h] [rbp-40h]
  int v16; // [rsp+8h] [rbp-38h]
  int v17; // [rsp+Ch] [rbp-34h]
  int v18; // [rsp+10h] [rbp-30h]
  __int64 v19; // [rsp+18h] [rbp-28h] BYREF

  v1 = *a1;
  v2 = *(_QWORD *)(**a1 + 24);
  v3 = sub_15E1B70(v2);
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v5 = sub_15E1B70(*(_QWORD *)(*v1 + 24));
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      sub_15D7BC0(v2, v4);
  }
  v8 = (__int64 *)v1[1];
  v9 = *v1;
  v19 = 0;
  v10 = *v8;
  v11 = (_QWORD *)sub_186B270(0x28u);
  v11[1] = v10;
  v19 = (__int64)(v11 + 1);
  v11[2] = 0;
  *v11 = 0x100000002LL;
  sub_966750(v9, v6, -1, 0, 0, -1, (__int64 ***)&v19, v14, v15, v16, v18, (void *)v19);
  result = v13;
  if ( v19 )
    result = sub_186B220((void *)(v19 - 8));
  if ( v6 )
  {
    v17 = *(_DWORD *)(v6 + 8);
    result = (unsigned int)(v17 - 1);
    *(_DWORD *)(v6 + 8) = result;
    if ( v17 == 1 )
      return sub_15D7BC0(v2, v6);
  }
  return result;
}

