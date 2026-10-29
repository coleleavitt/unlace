__int64 __fastcall sub_1F1ECA0(__int64 a1, __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r15d
  _QWORD *v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  char v26; // r12
  __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  _QWORD *v30; // rbx
  __int64 v31; // rax
  unsigned __int64 **v32; // rax
  bool v33; // zf
  unsigned __int64 v34; // [rsp+0h] [rbp-48h]
  bool v35; // [rsp+Fh] [rbp-39h]

  v5 = sub_1EE13A0(*(_QWORD *)(a2[2] + 8), *(_QWORD *)(a2[2] + 16), (__int64 *)(a2[2] + 32), (_DWORD *)(a2[2] + 24));
  v10 = a2[5];
  v34 = v5;
  if ( v5 )
  {
    v11 = a2[2];
    v12 = *(unsigned int *)(v11 + 24);
    v7 = *(_QWORD *)(v11 + 32);
    v13 = *(_QWORD *)(v7 + 8 * v12);
    v14 = (unsigned int)(v12 + 1);
    *(_DWORD *)(v11 + 24) = v14;
    if ( (_DWORD)v13 )
    {
      v35 = (_DWORD)v13 == 1;
      v15 = v13 - 1;
      if ( v15 )
      {
        v16 = 0;
        do
        {
          v17 = *(_QWORD **)(v11 + 8);
          ++v16;
          v18 = sub_1EE13A0((__int64)v17, *(_QWORD *)(v11 + 16), (__int64 *)(v11 + 32), (_DWORD *)(v11 + 24));
          v23 = sub_1EDB980(v17, v18, v19, v20, v21, v22);
          v11 = a2[2];
          v24 = v23;
        }
        while ( v16 != v15 );
        v14 = *(unsigned int *)(v11 + 24);
        v7 = *(_QWORD *)(v11 + 32);
      }
      else
      {
        v24 = 0;
      }
      v6 = (unsigned int)(v14 + 1);
      v25 = *(_QWORD *)(v7 + 8 * v14);
      v10 = v34;
      *(_DWORD *)(v11 + 24) = v6;
      if ( v25 )
      {
        v26 = 1;
        v7 = a2[4] - v25;
        v34 = v7;
      }
      else
      {
        v34 = 0;
        v26 = 1;
      }
    }
    else
    {
      v33 = v34 == v10;
      v10 = v34;
      v35 = v33;
      v26 = 0;
      v24 = 0;
      sub_1EE1670(v11);
      v34 = 0;
    }
  }
  else
  {
    v35 = 1;
    v26 = 1;
    v24 = 0;
  }
  v27 = sub_1EDB980((_QWORD *)*a2, v10, v6, v7, v8, v9);
  v28 = (unsigned __int64 *)(v27 + 72);
  if ( !v27 )
    v28 = nullptr;
  if ( v28 != a3 )
  {
    *a3 = v27 & 0xFFFFFFFFFFFFFFFCLL;
    a3[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
LABEL_14:
    a3 -= 9;
    goto LABEL_15;
  }
  if ( a3 )
    goto LABEL_14;
LABEL_15:
  if ( v26 )
  {
    v30 = (_QWORD *)*a2;
    v31 = *(unsigned int *)(*a2 + 11032);
    if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(*a2 + 11036) )
    {
      sub_2237220(v30 + 1378, v30 + 1380, v31 + 1, 16);
      v31 = *((unsigned int *)v30 + 2758);
    }
    v32 = (unsigned __int64 **)(v30[1378] + 16 * v31);
    *v32 = a3;
    v32[1] = (unsigned __int64 *)v34;
    ++*((_DWORD *)v30 + 2758);
  }
  *(_QWORD *)a1 = v24;
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 16) = v35;
  return a1;
}
