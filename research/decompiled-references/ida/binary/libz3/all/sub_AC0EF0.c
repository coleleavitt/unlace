__int64 __fastcall sub_AC0EF0(__int64 a1, unsigned int *a2)
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
  int v20; // r9d
  _QWORD *v21; // r15
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  int v24; // esi
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  int v28; // [rsp+0h] [rbp-A8h]
  _QWORD *v29; // [rsp+8h] [rbp-A0h]
  __int64 *v30; // [rsp+10h] [rbp-98h]
  __int64 v31; // [rsp+10h] [rbp-98h]
  __int64 *v32; // [rsp+18h] [rbp-90h]
  __int64 *v33; // [rsp+20h] [rbp-88h]
  _QWORD *v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v40; // [rsp+68h] [rbp-40h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v6 = sub_AB3F30(a1, a2, v2, v3, v4, v5);
  v7 = a2[6];
  v8 = *(_QWORD *)(a1 + 24);
  v34 = (_QWORD *)v6;
  v9 = v7 - 1;
  v37 = v8;
  v39 = v8;
  v40 = nullptr;
  v10 = sub_AC4B80(a1, v6, v7 - 1);
  v38 = nullptr;
  sub_AB6A00(a1, v10, (__int64)&v37);
  v29 = v38;
  if ( v7 == 1 )
  {
    v26 = v38;
    v12 = nullptr;
    v32 = &v35;
    v33 = &v39;
  }
  else
  {
    v11 = v7 - 2;
    v12 = nullptr;
    v30 = &v34[v11 + 14];
    v32 = &v35;
    v33 = &v39;
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
        v18 = *v30;
      else
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8656) + 8LL * **(unsigned int **)(*v34 + 8LL * v9 + 32));
      v19 = sub_B39350(v18, *(unsigned int *)(a1 + 8));
      if ( v19 == -1 )
      {
        v19 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v18);
        sub_AB6BC0((__int64 *)a1, v19);
      }
      v35 = v8;
      v36 = v12;
      sub_AB6A00(a1, v19, (__int64)v32);
      v21 = v40;
      v8 = v35;
      v12 = v36;
      if ( v40 )
      {
        v22 = (unsigned __int64)&v40[*((unsigned int *)v40 - 1)];
        if ( (unsigned __int64)v40 >= v22 )
          goto LABEL_23;
        do
        {
          while ( 1 )
          {
            v23 = *v21;
            if ( *v21 )
            {
              v16 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v16 )
                break;
            }
            if ( (unsigned __int64)++v21 >= v22 )
              goto LABEL_22;
          }
          sub_15D7BC0(v39, v23);
          ++v21;
        }
        while ( (unsigned __int64)v21 < v22 );
LABEL_22:
        v21 = v40;
        if ( v40 )
LABEL_23:
          *((_DWORD *)v21 - 1) = 0;
      }
      v24 = v12 ? *((_DWORD *)v12 - 1) : 0;
      v25 = v29;
      sub_FD93A0(
        a1 + 120,
        v24,
        (_DWORD)v12,
        (_DWORD)v29,
        (_DWORD)v33,
        v20,
        v28,
        (_DWORD)v29,
        (_DWORD)v30,
        (__int64)v32,
        (__int64)v33);
      v26 = v40;
      v30 = (__int64 *)(v31 - 8);
      v40 = v25;
      if ( !v9 )
        break;
      v29 = v26;
    }
  }
  v38 = v26;
  sub_ABDB30(a1, (__int64)v34, (__int64)&v37);
  sub_2334C0(v33);
  sub_2334C0(&v37);
  v35 = v8;
  v36 = v12;
  return sub_2334C0(v32);
}

