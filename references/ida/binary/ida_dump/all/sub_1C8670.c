unsigned __int64 __fastcall sub_1C8670(__int64 *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbp
  bool v5; // zf
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  _DWORD *v28; // rcx
  unsigned __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  __int64 v30; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v5 = *a2 == 4;
  v31 = __readfsqword(0x28u);
  if ( !v5 )
  {
LABEL_8:
    v11 = a1[1];
    v12 = *a1;
    v13 = v11 + 1;
    if ( a1[2] < (unsigned __int64)(v11 + 1) )
    {
      v16 = qvector_reserve();
      v11 = a1[1];
      *a1 = v16;
      v12 = v16;
      v13 = v11 + 1;
    }
    a1[1] = v13;
    v14 = v12 + 24 * v11;
    *(_QWORD *)v14 = a3;
    *(_QWORD *)(v14 + 8) = v3;
    *(_DWORD *)(v14 + 16) = 0;
    return v31 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v7 = *((_QWORD *)v3 + 1);
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 != 19 )
      break;
    v3 = (_BYTE *)(v7 + 48);
    sub_1C8670(a1, v7 + 32, *(_QWORD *)(v7 + 24));
    a3 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v7 + 48) != 4 )
      goto LABEL_8;
  }
  if ( v8 > 0x13 )
  {
    if ( v8 == 22 && (unsigned __int8)sub_11FD80((char *)(v7 + 48), &v29, 1u) && (v29 & 7) == 0 )
    {
      v30 = v7 + 32;
LABEL_22:
      v22 = a1[1];
      v23 = *a1;
      v24 = v22 + 1;
      if ( a1[2] < (unsigned __int64)(v22 + 1) )
      {
        v23 = qvector_reserve();
        v22 = a1[1];
        *a1 = v23;
        v24 = v22 + 1;
      }
      a1[1] = v24;
      v25 = v23 + 24 * v22;
      *(_QWORD *)v25 = a3;
      v26 = (_DWORD *)v30;
      if ( *(_BYTE *)v30 == 4 )
      {
        v28 = *(_DWORD **)(v30 + 8);
        if ( *v28 == 9 )
          v26 = v28 + 8;
      }
      *(_QWORD *)(v25 + 8) = v26;
      *(_DWORD *)(v25 + 16) = v29 >> 3;
      return v31 - __readfsqword(0x28u);
    }
    goto LABEL_8;
  }
  if ( v8 != 9 )
  {
    if ( v8 == 14 )
    {
      v9 = sub_11C8A0(*((_QWORD *)v3 + 1), &v30);
      if ( v9 )
      {
        v10 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), *(unsigned int *)(v9 + 4), 0);
        if ( (v10 & (v10 - 1)) == 0 )
        {
          v21 = log2ceil();
          v29 = v21;
          if ( (v21 & 7) == 0 )
            goto LABEL_22;
        }
      }
    }
    goto LABEL_8;
  }
  v17 = a1[1];
  v18 = *a1;
  v19 = v17 + 1;
  if ( a1[2] < (unsigned __int64)(v17 + 1) )
  {
    v27 = qvector_reserve();
    v17 = a1[1];
    *a1 = v27;
    v18 = v27;
    v19 = v17 + 1;
  }
  a1[1] = v19;
  v20 = v18 + 24 * v17;
  *(_QWORD *)v20 = a3;
  *(_QWORD *)(v20 + 8) = v7 + 32;
  *(_DWORD *)(v20 + 16) = 0;
  return v31 - __readfsqword(0x28u);
}
