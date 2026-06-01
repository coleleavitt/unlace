__int64 __fastcall sub_500520(__int64 *a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rbx
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // r15
  unsigned int *v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned int *v21; // rax
  unsigned int *v23; // rax
  unsigned int *v24; // r15
  unsigned int *v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  char *v29; // r8
  __int64 v30; // rax
  char *v31; // [rsp+8h] [rbp-60h]
  unsigned int v32[3]; // [rsp+10h] [rbp-58h] BYREF
  char v33; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v5 = *a1;
  v34 = __readfsqword(0x28u);
  v7 = sub_4EE820(*(_QWORD *)(v5 + 1480) + 1552LL, a3);
  if ( !v7 )
LABEL_17:
    sub_384000(1336, a3, v8, v9);
  v10 = *((unsigned __int8 *)a1 + 144);
  if ( !(_BYTE)v10 )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v11 = a2 - *(_DWORD *)(a1[1] + 68);
  if ( v11 >= a1[5] )
    sub_4FC970();
  v12 = v11 << 6;
  *(_DWORD *)(a1[4] + v12 + 56) = a2;
  v13 = (__int64 *)(a1[4] + v12);
  v14 = v7[a2 - *(_DWORD *)(a1[1] + 68) + 8];
  v15 = sub_4FED00((unsigned int **)v13, a3);
  v8 = v13[1];
  if ( v15 != (unsigned int *)(*v13 + 17 * v8) )
  {
    v8 = *v15;
    if ( a3 >= (unsigned int)v8 && a3 < v15[1] )
    {
      v16 = sub_4FED00((unsigned int **)v13, a3);
      v17 = v16;
      if ( v18 == v16
        || (v19 = *v16, a3 < (unsigned int)v19)
        || (v20 = v16[1], a3 == (_DWORD)v19)
        || a3 >= (unsigned int)v20 )
      {
        sub_4FED90((__int64)v13, a3);
      }
      else
      {
        sub_4FD960(*((unsigned int *)v13 + 14), v19, v20, a3);
        v17[1] = a3;
        *((_BYTE *)v17 + 16) = 1;
      }
      v21 = sub_4FED00((unsigned int **)v13, a3);
      v8 = v13[1];
      if ( v21 == (unsigned int *)(*v13 + 17 * v8) )
        goto LABEL_16;
      v8 = *v21;
    }
    if ( a4 > (unsigned int)v8 )
      a4 = v8;
  }
LABEL_16:
  if ( a3 >= a4 )
    goto LABEL_17;
  v23 = sub_4FED00((unsigned int **)v13, a3);
  v24 = v23;
  if ( v23 != v25 )
  {
    v26 = *v23;
    if ( a3 >= v26 || v26 < a4 )
      goto LABEL_17;
  }
  v27 = *((unsigned int *)v13 + 14);
  v32[0] = a3;
  v32[1] = a4;
  v32[2] = v14;
  v33 = 3;
  sub_4FCEA0(v27, v32, 183);
  v28 = v13[1];
  v29 = (char *)v24 - *v13;
  if ( v13[2] < (unsigned __int64)(v28 + 1) )
  {
    v31 = (char *)v24 - *v13;
    v30 = qvector_reserve(v13, *v13, v28 + 1, 17);
    v29 = v31;
    *v13 = v30;
    v24 = (unsigned int *)&v31[v30];
    v28 = v13[1];
  }
  memmove((char *)v24 + 17, v24, 17 * v28 - (_QWORD)v29);
  *(_QWORD *)v24 = 0;
  v24[2] = 0;
  *((_BYTE *)v24 + 12) = 0;
  *((_BYTE *)v24 + 16) = 0;
  v13[3] = (__int64)v24;
  ++v13[1];
  *v24 = a3;
  v24[1] = a4;
  v24[2] = v14;
  *((_BYTE *)v24 + 12) = 3;
  *(_BYTE *)(v13[3] + 16) = 1;
  return v10;
}

