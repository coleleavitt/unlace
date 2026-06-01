__int64 __fastcall sub_3FF360(_QWORD *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // r12
  __int64 i; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r9
  int v30; // [rsp+0h] [rbp-B8h]
  int v31; // [rsp+8h] [rbp-B0h]
  __int64 *v33; // [rsp+18h] [rbp-A0h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+50h] [rbp-68h] BYREF
  __int64 v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+60h] [rbp-58h]
  __int64 v39; // [rsp+68h] [rbp-50h]
  __int64 v40; // [rsp+70h] [rbp-48h]
  __int64 v41; // [rsp+78h] [rbp-40h]

  v31 = a2;
  v35 = a1[1];
  v7 = sub_15E1A70(v35);
  v8 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v9 = a1[1];
  v10 = *(_QWORD *)(a3 + 216);
  v34 = a1[1];
  if ( v10 )
  {
    v33 = (__int64 *)(v10 + 8LL * *(unsigned int *)(v10 - 4));
    if ( (__int64 *)v10 != v33 )
    {
      v11 = (__int64 *)v10;
      for ( i = 0; ; i = v10 )
      {
        v27 = *v11;
        v37 = v9;
        v36 = 0;
        v28 = *(_QWORD *)(v27 + 48);
        if ( i )
        {
          v39 = i;
          v13 = *(_QWORD *)(v27 + 8);
          v38 = v8;
          v40 = v13;
          v41 = v28;
          v14 = sub_15E1AF0(v9);
        }
        else
        {
          sub_15E1A70(v9);
          v14 = sub_15E1BF0(v9);
        }
        v15 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v16 = v36;
        if ( v36 )
        {
          v17 = v37;
          v18 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v17, v16);
        }
        v19 = a1[1];
        v36 = v15;
        v20 = sub_15E1A70(v19);
        v10 = v20;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        if ( i )
        {
          v18 = (*(_DWORD *)(i + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v34, i);
        }
        sub_43D1D0(*a1 + 8LL, v36, 0, (unsigned int)(a5 + 1), &v36, 1);
        sub_428900(v31, v36, v21, v22, v23, v24, v30, v31);
        v25 = v36;
        if ( v36 && (v26 = v37, v18 = *(_DWORD *)(v36 + 8) == 1, --*(_DWORD *)(v36 + 8), v18) )
        {
          sub_15D7BC0(v26, v25);
          if ( v33 == ++v11 )
            goto LABEL_24;
        }
        else if ( v33 == ++v11 )
        {
          goto LABEL_24;
        }
        v9 = a1[1];
      }
    }
    v10 = 0;
  }
LABEL_24:
  sub_3FCDF0(v10, v34);
  return sub_3FCDF0(v8, v35);
}

