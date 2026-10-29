__int64 __fastcall sub_674600(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 *v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rbp
  const char *v9; // rdi
  __int64 v10; // rdx
  const char *v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  const char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  _BYTE *v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 result; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+0h] [rbp-68h]
  _BYTE *v37; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  _QWORD v41[9]; // [rsp+20h] [rbp-48h] BYREF

  v41[1] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 16) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 16) & 0x8000) != 0 )
    return 0;
  v38 = *(int *)(a2 + 80);
  if ( *(_DWORD *)(a2 + 80) )
  {
    v5 = *(__int64 **)(a2 + 88);
    if ( !v5 )
    {
      if ( !under_debugger )
        interr(1487);
      BUG();
    }
    v6 = 0;
    v7 = *(_QWORD **)(a2 + 88);
    v8 = 20 * v38;
    while ( 1 )
    {
      v9 = (const char *)v7[2];
      v10 = 1;
      if ( v9 )
        v10 = (int)(strlen(v9) + 5);
      v11 = (const char *)v7[3];
      v12 = 1;
      if ( v11 )
      {
        v35 = v10;
        v13 = strlen(v11);
        v10 = v35;
        v12 = v13 + 5;
      }
      v14 = (const char *)v7[4];
      v15 = v12 + v10;
      v16 = 1;
      if ( v14 )
      {
        v36 = v15;
        v17 = strlen(v14);
        v15 = v36;
        v16 = v17 + 5;
      }
      v7 += 5;
      v8 += v16 + v15;
      if ( v38 == v6 + 1 )
        break;
      ++v6;
    }
    v18 = qalloc(v8);
    v19 = (_BYTE *)v18;
    if ( !v18 )
      sub_3BC000((int)"write_regvars");
    v20 = v18 + v8;
    v21 = *(_QWORD *)a2;
    v22 = (__int64)v19;
    do
    {
      v23 = *v5;
      v5 += 5;
      v24 = pack_dq(v22, v20, v23 - v21);
      v25 = pack_dq(v24, v20, *(v5 - 4) - *(v5 - 5));
      v26 = pack_ds(v25, v20, *(v5 - 3), 0);
      v27 = pack_ds(v26, v20, *(v5 - 2), 0);
      v28 = pack_ds(v27, v20, *(v5 - 1), 0);
      v29 = v4++;
      v22 = v28;
      v21 = *(v5 - 5);
    }
    while ( v29 != v6 );
    v37 = (_BYTE *)v22;
    v30 = sub_3BDD60(a1, *(_QWORD *)a2);
    v31 = *a1;
    v41[0] = v30;
    sub_7BEF30(v41, v31, v19, v37 - v19, 0x4000, 83);
    qfree(v19);
  }
  else
  {
    v33 = sub_3BDD60(a1, *(_QWORD *)a2);
    v34 = *a1;
    v41[0] = v33;
    sub_7BEF80(v41, v34, 0x4000, 83);
  }
  result = 1;
  if ( a3 )
    return sub_5C77B0((__int64)a1, (unsigned __int64 *)a2, 0);
  return result;
}
