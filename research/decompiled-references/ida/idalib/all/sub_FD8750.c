__int64 __fastcall sub_FD8750(
        __int64 a1,
        __int64 a2,
        size_t *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rbx
  __int64 v11; // rdi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v18; // rdi
  size_t i; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  size_t v22; // r11
  void *v23; // rdx
  void (__fastcall *v24)(__int64 *, __int64, __int64 *, __int64, _QWORD, _QWORD); // r13
  char v25; // dl
  __int64 v26; // rax
  __int64 v27[2]; // [rsp+0h] [rbp-78h] BYREF
  char v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  size_t v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  __int16 v33; // [rsp+40h] [rbp-38h]

  v9 = (unsigned __int64)a3;
  do
  {
    v11 = *(_QWORD *)(v9 + 8);
    if ( !v11 )
    {
      v9 = 0;
      goto LABEL_9;
    }
    v9 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v11 & 4) != 0 && v9 );
  if ( *(_QWORD *)(v9 + 88) )
  {
    sub_2230760(&v29, *(_QWORD *)(v9 + 88));
    sub_2230390((unsigned int)v27, 1, v12, v13, v14, v15, v29, v30, v31, v32);
    v16 = v27[0];
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v16;
    return a1;
  }
LABEL_9:
  if ( !(_BYTE)a8 )
    a7 = *(_QWORD *)(v9 + 32);
  v18 = a7;
  if ( a4 )
  {
    v18 = -1;
  }
  else if ( *(_BYTE *)(v9 + 76) )
  {
    v18 = -1;
  }
  for ( i = a3[1]; i; i = *(_QWORD *)(v20 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v20 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v20 )
      break;
    a3 = (size_t *)v20;
  }
  v21 = *(_QWORD *)(v9 + 80);
  v22 = *a3;
  v23 = a3 + 4;
  if ( !v21 )
  {
    sub_FD7D70(a1, a2, v23, v22, v18, a4, a5, a6);
    return a1;
  }
  v24 = *(void (__fastcall **)(__int64 *, __int64, __int64 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 32LL);
  v33 = 261;
  v29 = (__int64)v23;
  v30 = v22;
  v24(v27, v21, &v29, v18, a5, a4);
  sub_FD6430(v9);
  v25 = v28 & 1;
  if ( (v28 & 1) != 0 )
  {
    *(_DWORD *)a1 = v27[0];
    *(_QWORD *)(a1 + 8) = v27[1];
  }
  else
  {
    v26 = v27[0];
    v27[0] = 0;
    *(_QWORD *)a1 = v26;
  }
  *(_BYTE *)(a1 + 16) = v25 | *(_BYTE *)(a1 + 16) & 0xFE;
  sub_FC2AF0(v27);
  return a1;
}
