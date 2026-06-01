__int64 __fastcall sub_225A960(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v20; // rdx
  void *v21[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF

  v4 = a3;
  v6 = *((unsigned int *)a1 + 4);
  if ( !(_DWORD)v6 )
  {
    v7 = a3;
    v8 = v6 + 1;
    v9 = a2;
    if ( v6 + 1 <= (unsigned __int64)*((unsigned int *)a1 + 5) )
      goto LABEL_3;
    goto LABEL_9;
  }
  v7 = 0;
  v20 = *(_QWORD *)(a1[1] + 16 * v6 - 8) + 1LL;
  if ( v20 <= a3 )
  {
    v4 = *(_QWORD *)(a1[1] + 16 * v6 - 8) + 1LL;
    v7 = a3 - v20;
  }
  v8 = v6 + 1;
  v9 = a2 + v4;
  if ( v6 + 1 > (unsigned __int64)*((unsigned int *)a1 + 5) )
  {
LABEL_9:
    sub_2237220((__int64)(a1 + 1), a1 + 3, v8, 16);
    v6 = *((unsigned int *)a1 + 4);
  }
LABEL_3:
  v10 = (_QWORD *)(a1[1] + 16 * v6);
  *v10 = a2;
  v10[1] = a3;
  LODWORD(v10) = *((_DWORD *)a1 + 4);
  v11 = *a1;
  *((_DWORD *)a1 + 4) = (_DWORD)v10 + 1;
  v12 = (unsigned int)(4 * ((_DWORD)v10 + 1));
  v13 = sub_227D090(v11, v12);
  sub_995540(v13, "{\n");
  v14 = sub_227D090(*a1, (unsigned int)(v12 + 2));
  sub_995540(v14, "'type': 'directory',\n");
  v15 = sub_227D090(*a1, (unsigned int)(v12 + 2));
  v16 = sub_995540(v15, "'name': \"");
  sub_2275830(v21, v9, v7, 1);
  v17 = sub_227BF10(v16, v21[0], v21[1]);
  sub_995540(v17, "\",\n");
  if ( v21[0] != &v22 )
    operator delete(v21[0]);
  v18 = sub_227D090(*a1, (unsigned int)(v12 + 2));
  return sub_995540(v18, "'contents': [\n");
}
