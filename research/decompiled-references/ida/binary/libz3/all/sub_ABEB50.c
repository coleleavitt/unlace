__int64 __fastcall sub_ABEB50(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // r13d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned int v19; // r14d
  _QWORD *v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rsi
  _QWORD *v24; // r15
  _QWORD *v26; // [rsp+8h] [rbp-A0h]
  __int64 *v27; // [rsp+10h] [rbp-98h]
  _QWORD *v28; // [rsp+30h] [rbp-78h]
  __int64 v29; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-60h]
  __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v34; // [rsp+68h] [rbp-40h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v6 = sub_AB3F30(a1, a2, v2, v3, v4, v5);
  v7 = a2[6];
  v8 = *(_QWORD *)(a1 + 24);
  v28 = (_QWORD *)v6;
  v9 = v7 - 1;
  v31 = v8;
  v33 = v8;
  v34 = nullptr;
  v10 = sub_AC4B80(a1, v6, v7 - 1);
  v32 = nullptr;
  sub_AB6A00(a1, v10, (__int64)&v31);
  v26 = v32;
  if ( v7 == 1 )
  {
    v24 = v32;
    v12 = nullptr;
  }
  else
  {
    v11 = v7 - 2;
    v12 = nullptr;
    v27 = &v28[v11 + 14];
    while ( 1 )
    {
      --v9;
      if ( v12 )
      {
        v13 = v12;
        v14 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
        if ( (unsigned __int64)v12 < v14 )
        {
          do
          {
            while ( 1 )
            {
              v15 = *v13;
              if ( *v13 )
              {
                v16 = (*(_DWORD *)(v15 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( (unsigned __int64)++v13 >= v14 )
                goto LABEL_10;
            }
            sub_15D7BC0(v8, v15);
            ++v13;
          }
          while ( (unsigned __int64)v13 < v14 );
        }
LABEL_10:
        *((_DWORD *)v12 - 1) = 0;
      }
      v17 = *(_QWORD *)(a1 + 16);
      if ( *(_BYTE *)(*(_QWORD *)(v17 + 112) + 429LL) )
        v18 = *v27;
      else
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8656) + 8LL * **(unsigned int **)(*v28 + 8LL * v9 + 32));
      v19 = sub_B39350(v18, *(unsigned int *)(a1 + 8));
      if ( v19 == -1 )
      {
        v19 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v18);
        sub_AB6BC0((__int64 *)a1, v19);
      }
      v29 = v8;
      v30 = v12;
      sub_AB6A00(a1, v19, (__int64)&v29);
      v20 = v34;
      v8 = v29;
      v12 = v30;
      if ( v34 )
      {
        v21 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
        if ( (unsigned __int64)v34 >= v21 )
          goto LABEL_23;
        do
        {
          while ( 1 )
          {
            v22 = *v20;
            if ( *v20 )
            {
              v16 = (*(_DWORD *)(v22 + 8))-- == 1;
              if ( v16 )
                break;
            }
            if ( (unsigned __int64)++v20 >= v21 )
              goto LABEL_22;
          }
          sub_15D7BC0(v33, v22);
          ++v20;
        }
        while ( (unsigned __int64)v20 < v21 );
LABEL_22:
        v20 = v34;
        if ( v34 )
LABEL_23:
          *((_DWORD *)v20 - 1) = 0;
      }
      v23 = v12 ? *((unsigned int *)v12 - 1) : 0LL;
      sub_FE1B20(a1 + 120, v23, v12, v26);
      v24 = v34;
      --v27;
      v34 = v26;
      if ( !v9 )
        break;
      v26 = v24;
    }
  }
  v32 = v24;
  sub_ABDB30(a1, (__int64)v28, (__int64)&v31);
  sub_2334C0(&v33);
  sub_2334C0(&v31);
  v29 = v8;
  v30 = v12;
  return sub_2334C0(&v29);
}

