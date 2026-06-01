__int64 __fastcall sub_20CDE70(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r13
  __int64 v8; // rsi
  size_t v9; // rax
  size_t v10; // r15
  __int64 *v11; // r12
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 *v15; // rsi
  __int64 v16; // rdx
  char *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r8d
  _QWORD *v22; // rcx
  _QWORD *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rbx
  bool v27; // [rsp+14h] [rbp-C4h]
  unsigned int v28; // [rsp+14h] [rbp-C4h]
  unsigned int v29; // [rsp+18h] [rbp-C0h]
  _QWORD *v30; // [rsp+18h] [rbp-C0h]
  __int64 *v32[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-90h]
  __int64 (__fastcall **v34)(); // [rsp+60h] [rbp-78h] BYREF
  int v35; // [rsp+68h] [rbp-70h]
  __int128 v36; // [rsp+70h] [rbp-68h]
  _BYTE *v37; // [rsp+80h] [rbp-58h]
  char v38; // [rsp+88h] [rbp-50h]
  int v39; // [rsp+8Ch] [rbp-4Ch]
  __int64 **v40; // [rsp+90h] [rbp-48h]

  v5 = a3[1];
  v29 = (unsigned int)v5;
  if ( (unsigned __int8)(*(_BYTE *)a2 - 13) > 3u )
  {
    v27 = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 40);
    v27 = 1;
    if ( v6 )
      v27 = (unsigned int)(*(_DWORD *)(v6 + 264) - 41) > 1;
  }
  v7 = (__int64 *)(unsigned int)v5;
  while ( 1 )
  {
    if ( v7 != v5 )
    {
      if ( v7 >= v5 )
      {
        if ( v7 > a3[2] )
        {
          sub_2236E10(a3, a3 + 3, v7, 1);
          v5 = a3[1];
        }
        v17 = (char *)v5 + (_QWORD)*a3;
        if ( v17 != (char *)*a3 + (_QWORD)v7 )
          memset(v17, 0, (char *)v7 - (char *)v5);
      }
      a3[1] = v7;
    }
    v35 = 2;
    v38 = 0;
    v39 = 1;
    v37 = nullptr;
    v36 = 0;
    v34 = &off_2BEBEE0;
    v40 = a3;
    sub_227B8B0(&v34, 0, 0, 0);
    if ( v27 )
    {
      if ( *((_BYTE **)&v36 + 1) == v37 )
        sub_227BF10(&v34, ".", 1);
      else
        *v37++ = 46;
    }
    v8 = (unsigned int)(*(_DWORD *)(a1 + 28) + 1);
    *(_DWORD *)(a1 + 28) = v8;
    sub_227B910(&v34, v8);
    v9 = *(int *)(a1 + 24);
    v10 = (size_t)a3[1];
    if ( (v9 & 0x80000000) != 0LL || v9 >= v10 )
      break;
    v29 -= v10 - v9;
    v7 = (__int64 *)v29;
LABEL_10:
    v34 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v34);
    v5 = a3[1];
  }
  v11 = *a3;
  v33 = a3[1];
  v32[1] = v11;
  v12 = sub_2244B30(v11, v33);
  v13 = sub_2244CB0(a1, v11, v10, v12);
  v15 = (__int64 *)(*(_QWORD *)a1 + 8LL * v13);
  v16 = *v15;
  if ( !*v15 )
  {
    v18 = v13;
    v19 = *(_QWORD *)a1 + 8LL * v13;
    goto LABEL_22;
  }
  if ( v16 != -8 )
  {
    sub_20CDE30(v32, v15, 0);
    goto LABEL_10;
  }
  v18 = v13;
  v19 = *(_QWORD *)a1 + 8LL * v13;
  --*(_DWORD *)(a1 + 16);
LABEL_22:
  v30 = (_QWORD *)v19;
  v28 = v18;
  v20 = sub_22300B0(v10 + 17, 8, v16, v19, v18, v14);
  v21 = v28;
  v22 = v30;
  v23 = (_QWORD *)v20;
  if ( v10 )
  {
    memcpy((void *)(v20 + 16), v11, v10);
    v22 = v30;
    v21 = v28;
  }
  *((_BYTE *)v23 + v10 + 16) = 0;
  *v23 = v10;
  v23[1] = a2;
  *v22 = v23;
  ++*(_DWORD *)(a1 + 12);
  v24 = sub_22450D0(a1, v21);
  sub_20CDE30(v32, (__int64 *)(*(_QWORD *)a1 + 8LL * v24), 0);
  v25 = *v32[0];
  v34 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v34);
  return v25;
}
