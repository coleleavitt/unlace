unsigned __int64 __fastcall sub_552450(__int64 a1)
{
  unsigned __int64 v1; // r12
  char v3; // al
  unsigned __int64 v4; // r12
  double v5; // xmm0_8
  int v6; // r9d
  double v7; // xmm0_8
  int v8; // r9d
  double v9; // xmm0_8
  bool v10; // r13
  int v11; // r9d
  double v12; // xmm0_8
  int v13; // r9d
  double v14; // xmm0_8
  __int64 v15; // rax
  int v16; // r9d
  _BOOL4 v17; // r8d
  double v18; // xmm0_8
  double v20; // xmm0_8
  int v21; // r9d
  double v22; // xmm0_8
  int v23; // r9d
  double v24; // xmm0_8
  int v25; // r9d
  double v26; // xmm0_8
  int v27; // r9d
  const void *v28; // r14
  void *v29; // rdi
  const void *v30; // r13
  char *v31; // [rsp+0h] [rbp-88h] BYREF
  __int128 v32; // [rsp+8h] [rbp-80h]
  __int16 v33; // [rsp+18h] [rbp-70h]
  char v34; // [rsp+1Ah] [rbp-6Eh]
  char v35; // [rsp+20h] [rbp-68h]
  void *dest; // [rsp+28h] [rbp-60h] BYREF
  __int128 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+40h] [rbp-48h]
  __int128 v39; // [rsp+48h] [rbp-40h]
  unsigned __int64 v40; // [rsp+58h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 304);
  v40 = __readfsqword(0x28u);
  v33 = 0;
  v3 = *(_BYTE *)(a1 + 264);
  v31 = nullptr;
  v34 = 1;
  dest = nullptr;
  v38 = 0;
  v35 = v3;
  v32 = 0;
  v37 = 0;
  v39 = 0;
  if ( v1 >= 2 )
  {
    v30 = *(const void **)(a1 + 296);
    v31 = (char *)qvector_reserve(&v31, 0, v1, 1);
    *(_QWORD *)&v32 = v1;
    memmove(v31, v30, v1 - 1);
    v31[v1 - 1] = 0;
  }
  v4 = *(_QWORD *)(a1 + 280);
  v33 = *(_QWORD *)(a1 + 320);
  v34 = *(_BYTE *)(a1 + 266);
  if ( v4 > 1 )
  {
    v28 = *(const void **)(a1 + 272);
    v29 = dest;
    if ( *((_QWORD *)&v37 + 1) < v4 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v4, 1);
      v29 = dest;
    }
    *(_QWORD *)&v37 = v4;
    memmove(v29, v28, v4 - 1);
    *((char *)dest + v4 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v37 = 0;
  }
  if ( v35 )
  {
    v5 = callui(203, 10, a1, 3, 1, (_DWORD)callui);
    v7 = callui(203, 10, a1, 4, 1, v6, v5);
    v9 = callui(203, 10, a1, 5, (unsigned __int64)v32 > 1, v8, v7);
    v10 = *(_QWORD *)(a1 + 824) != 0;
    v12 = callui(203, 8, a1, 8, v10, v11, v9);
    *(_BYTE *)(a1 + 1008) = v10;
    v14 = callui(203, 10, a1, 2, 0, v13, v12);
  }
  else
  {
    v20 = callui(203, 10, a1, 2, 1, (_DWORD)callui);
    v22 = callui(203, 10, a1, 3, 0, v21, v20);
    v24 = callui(203, 10, a1, 4, 0, v23, v22);
    v26 = callui(203, 10, a1, 5, 0, v25, v24);
    v14 = callui(203, 8, a1, 8, 0, v27, v26);
    *(_BYTE *)(a1 + 1008) = 0;
  }
  v15 = sub_552140(a1 + 352);
  v17 = 1;
  if ( v15 == -1 )
    v17 = sub_552140(a1 + 624) != -1;
  v18 = callui(203, 10, a1, 9, v17, v16, v14, v31);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    v18 = qfree(v38, &byte_9[1], v18);
  }
  if ( dest )
  {
    *(_QWORD *)&v37 = 0;
    v18 = qfree(dest, &byte_9[1], v18);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, &byte_9[1], v18);
  }
  return v40 - __readfsqword(0x28u);
}
