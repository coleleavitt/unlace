__int64 __fastcall sub_F62360(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char v7; // r15
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // al
  unsigned int v19; // ebp
  _QWORD *v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  char v23; // al
  char v24; // bp
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  _QWORD *v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+8h] [rbp-40h]

  v7 = a6;
  if ( a5 )
    goto LABEL_2;
  v19 = *(_DWORD *)(a4 + 8);
  if ( v19 > 0x40 )
  {
    v25 = sub_2206780(a4);
    a5 = 0;
    if ( v19 - v25 > 0x40 )
    {
LABEL_2:
      v10 = a1[294];
      v11 = (__int64)(a1 + 294);
      a1[304] += 24LL;
      v12 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a1[295] >= v12 + 24 && v10 )
      {
        a1[294] = v12 + 24;
      }
      else
      {
        v32 = a5;
        v26 = sub_986170((__int64)(a1 + 294), 24, 24, 3, a5, v11);
        a5 = v32;
        v11 = (__int64)(a1 + 294);
        v12 = v26;
      }
      v13 = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(v12 + 8) = v13;
      if ( v13 > 0x40 )
      {
        v31 = a5;
        v29 = v11;
        sub_2205510(v12);
        a5 = v31;
        v11 = v29;
      }
      else
      {
        *(_QWORD *)v12 = *(_QWORD *)a4;
      }
      *(_QWORD *)(v12 + 16) = a5;
      v14 = a1[294];
      a1[304] += 48LL;
      v15 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( a1[295] >= v15 + 48 && v14 )
      {
        a1[294] = v15 + 48;
        v16 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v16 = sub_986170(v11, 48, 48, 4, a5, v11);
      }
      sub_F56B60(v16, 2, a2, a3, v7, a7, *(_DWORD **)(v12 + 16));
      v17 = *(_BYTE *)(v16 + 19);
      *(_QWORD *)(v16 + 40) = v12;
      *(_BYTE *)(v16 + 19) = v17 & 0x81 | 2;
      return v16;
    }
    v20 = **(_QWORD ***)a4;
  }
  else
  {
    v20 = *(_QWORD **)a4;
  }
  if ( v19 > 0xFF || (unsigned __int64)v20 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_2;
  v21 = a1[294];
  a1[304] += 48LL;
  v22 = (v21 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[295] >= v22 + 48 && v21 )
  {
    a1[294] = v22 + 48;
    v16 = (v21 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v30 = v20;
    v27 = sub_986170((__int64)(a1 + 294), 48, 48, 4, a5, a6);
    v20 = v30;
    v16 = v27;
  }
  v28 = v20;
  sub_F56B60(v16, 2, a2, a3, v7, a7, nullptr);
  v23 = 4 * ((unsigned __int8)v19 >> 3);
  v24 = *(_BYTE *)(v16 + 19) & 0x81;
  *(_QWORD *)(v16 + 40) = v28;
  *(_BYTE *)(v16 + 19) = v23 | v24;
  return v16;
}
