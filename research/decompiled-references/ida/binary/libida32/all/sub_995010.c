__int64 __fastcall sub_995010(_QWORD *a1, unsigned __int64 a2, __int32 *a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int32 *v13; // rdx
  unsigned int v15; // eax
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  unsigned int v18; // eax
  __int32 *v19; // r15
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  if ( !a2 )
  {
    if ( a4 )
    {
      v15 = 2;
      v6 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF;
      goto LABEL_14;
    }
LABEL_11:
    v13 = a3;
    return sub_994E90(a1, a2, v13, a4);
  }
  v5 = *(_DWORD *)(a2 + 40) & 0xFFFFFFF;
  if ( !a4 )
  {
    if ( v5 > 2 )
      goto LABEL_4;
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF;
  if ( v6 + 2 < v5 )
  {
LABEL_4:
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 16);
    v9 = 0;
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 40) & 0xFFFFFFF;
    if ( v8 && v9 < (*(_DWORD *)(v8 + 40) & 0xFFFFFFFu) )
    {
      v10 = *(_QWORD *)(v8 + 8);
      v11 = sub_994E90(a1, *(_QWORD *)(v8 + 16), a3, a4);
      v12 = sub_994E90(a1, v7, (__int32 *)(a2 + 44), v10);
      v13 = (__int32 *)(v8 + 44);
      a4 = v11;
      a2 = v12;
    }
    else
    {
      v22 = sub_994E90(a1, v8, a3, a4);
      v13 = (__int32 *)(a2 + 44);
      a2 = v7;
      a4 = v22;
    }
    return sub_994E90(a1, a2, v13, a4);
  }
  v15 = v5 + 2;
LABEL_14:
  if ( v6 <= v15 )
    goto LABEL_11;
  v16 = *(_QWORD *)(a4 + 16);
  v17 = *(_QWORD *)(a4 + 8);
  v18 = 0;
  if ( v16 )
    v18 = *(_DWORD *)(v16 + 40) & 0xFFFFFFF;
  v19 = (__int32 *)(a4 + 44);
  if ( v17 && (*(_DWORD *)(v17 + 40) & 0xFFFFFFFu) > v18 )
  {
    v24 = *(_QWORD *)(v17 + 8);
    v20 = sub_994E90(a1, *(_QWORD *)(v17 + 16), v19, *(_QWORD *)(a4 + 16));
    v21 = sub_994E90(a1, a2, a3, v24);
    v13 = (__int32 *)(v17 + 44);
    a4 = v20;
    a2 = v21;
  }
  else
  {
    v23 = sub_994E90(a1, a2, a3, *(_QWORD *)(a4 + 8));
    a4 = v16;
    v13 = v19;
    a2 = v23;
  }
  return sub_994E90(a1, a2, v13, a4);
}

