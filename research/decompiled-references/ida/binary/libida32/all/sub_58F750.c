unsigned __int64 __fastcall sub_58F750(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  const char *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v11; // rbx
  _BYTE *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  int *v15; // r12
  int *v16; // r9
  _BYTE *v17; // rsi
  int v18; // r8d
  unsigned __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-460h]
  int *v23; // [rsp+10h] [rbp-458h]
  char v24; // [rsp+1Ch] [rbp-44Ch]
  _BYTE v25[1025]; // [rsp+20h] [rbp-448h] BYREF
  _BYTE v26[7]; // [rsp+421h] [rbp-47h] BYREF
  unsigned __int64 v27; // [rsp+428h] [rbp-40h]

  v1 = a1[2];
  v27 = __readfsqword(0x28u);
  if ( (int)v1 > 0 )
  {
    v11 = a1[1];
    v12 = *(_BYTE **)v11;
    if ( *(_QWORD *)v11 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      qfree(v12);
      *(_QWORD *)v11 = 0;
      v13 = 0;
      *(_QWORD *)(v11 + 16) = 0;
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 16);
    }
    v14 = *(_QWORD *)(v11 + 8);
    v15 = (int *)(a1 + 4);
    v16 = (int *)a1 + 11;
    v17 = nullptr;
    v18 = *((_DWORD *)a1 + 8);
    if ( !v14 )
      goto LABEL_16;
    while ( 1 )
    {
      v19 = v14 + 1;
      v20 = v14--;
      if ( v13 < v19 )
        goto LABEL_17;
      while ( 1 )
      {
        *(_QWORD *)(v11 + 8) = v19;
        ++v15;
        v17[v14] = v18;
        *(_BYTE *)(*(_QWORD *)v11 + v20) = 0;
        if ( v16 == v15 )
          goto LABEL_2;
        v14 = *(_QWORD *)(v11 + 8);
        v13 = *(_QWORD *)(v11 + 16);
        v17 = *(_BYTE **)v11;
        v18 = *v15;
        if ( v14 )
          break;
LABEL_16:
        v19 = 2;
        v20 = 1;
        if ( v13 < 2 )
        {
LABEL_17:
          v24 = v18;
          v23 = v16;
          v22 = v19;
          v21 = qvector_reserve(v11, v17, v19, 1);
          LOBYTE(v18) = v24;
          v16 = v23;
          *(_QWORD *)v11 = v21;
          v19 = v22;
          v17 = (_BYTE *)v21;
        }
      }
    }
  }
LABEL_2:
  v3 = pack_dw(v25, v26, (unsigned __int16)v1);
  if ( a1[2] )
  {
    v4 = 0;
    do
    {
      v5 = a1[1] + 24 * v4;
      v6 = haystack;
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 )
      {
        v6 = *(const char **)v5;
        --v7;
      }
      ++v4;
      v3 = pack_ds(v3, v26, v6, v7);
    }
    while ( v4 < a1[2] );
  }
  sub_6160D0(*a1, 78, v25, v3 - (_QWORD)v25);
  v8 = *((int *)a1 + 11);
  v9 = *a1;
  if ( (int)v8 <= 0 )
    sub_6136B0(v9, 96);
  else
    sub_615AB0(v9, 96, v8);
  return v27 - __readfsqword(0x28u);
}

