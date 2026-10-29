__int64 __fastcall sub_73EB60(unsigned __int64 a1, _DWORD *a2, int a3, unsigned __int8 a4)
{
  bool v6; // zf
  _BOOL8 v7; // rdi
  bool v8; // al
  __int64 *v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int8 v17; // al
  signed int v18; // eax
  __int64 v20; // [rsp+8h] [rbp-70h]
  unsigned int *v21; // [rsp+10h] [rbp-68h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  signed int v25; // [rsp+34h] [rbp-44h]
  unsigned __int8 v26; // [rsp+3Bh] [rbp-3Dh]
  unsigned __int8 v27; // [rsp+3Bh] [rbp-3Dh]
  unsigned int v28; // [rsp+3Ch] [rbp-3Ch]

  v6 = a2[3] == *(_DWORD *)(a1 + 36);
  v20 = (__int64)a2;
  v23 = *(_QWORD *)(a1 + 16);
  v7 = a2[3] != *(_DWORD *)(a1 + 36);
  v26 = 0;
  v24 = *(_QWORD *)(v23 + 8);
  v25 = !v6;
  v21 = *(unsigned int **)a2;
  v22 = 0;
  v8 = *(__int16 *)(*(_QWORD *)a2 + 4LL) < a3;
  v9 = nullptr;
  v10 = 0;
  v11 = a3 - v8;
  v28 = a4;
LABEL_2:
  if ( !v11 )
  {
    v12 = *v21;
    if ( *v21 )
      goto LABEL_4;
LABEL_18:
    sub_743130(v7, a2, v10);
  }
  while ( 1 )
  {
    v12 = *(unsigned int *)((char *)v21 + 6 * (int)(v11 - 1) + 6);
    if ( !v12 )
      goto LABEL_18;
LABEL_4:
    if ( v12 != (_DWORD)v10 )
    {
      if ( (_DWORD)v10 )
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = v22;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v13 = sub_73AFA0(a1, v12, 1u);
      v9 = (__int64 *)v13;
      if ( !v13 || *(__int16 *)(v13 + 8) < 0 )
        sub_743130(a1, v12, v14);
    }
    v15 = *v9;
    v16 = *(_QWORD *)(a1 + 8);
    sub_7385E0(v16, *v9);
    v17 = sub_73E380(a1, (__int64)v9, v20, v11);
    if ( v17 )
    {
      if ( unk_2CCC5C9 )
      {
        v27 = v17;
        sub_740180(a1, v20, v9, v11, v28);
        byte_2CCC62D = 1;
        v17 = v27;
      }
      v26 = v17;
    }
    a2 = (_DWORD *)v15;
    v7 = v16;
    sub_7385F0(v16, v15);
    if ( !byte_2CCC62D )
      break;
    v18 = *((__int16 *)v21 + 2);
    if ( v18 <= v25 )
      break;
    if ( (int)v11 <= v18 )
    {
      v10 = v12;
      goto LABEL_2;
    }
    --v11;
    v10 = v12;
  }
  unk_2CCC5C9 = *(_DWORD *)a1 >> 1 < (unsigned int)*(__int16 *)(v20 + 8);
  *(_QWORD *)(v23 + 8) = v24;
  return v26;
}
