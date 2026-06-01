__int64 __fastcall sub_BC9DE0(__int64 a1, int a2, unsigned int **a3, __int64 *a4)
{
  unsigned int *v7; // r14
  unsigned int *v8; // r15
  __int64 v9; // r13
  unsigned int v10; // r13d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // r14
  _DWORD *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // r11
  unsigned int v29; // [rsp+0h] [rbp-78h]
  _QWORD *v30; // [rsp+8h] [rbp-70h]
  _QWORD *v31; // [rsp+8h] [rbp-70h]
  _QWORD *v32; // [rsp+10h] [rbp-68h]
  _QWORD *v33; // [rsp+10h] [rbp-68h]
  unsigned __int8 v34; // [rsp+1Fh] [rbp-59h]
  __int64 v35; // [rsp+28h] [rbp-50h] BYREF
  int v36[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+38h] [rbp-40h]

  v7 = *a3;
  v8 = (unsigned int *)*a4;
  v35 = 0;
  v9 = sub_15D1F10(v7);
  if ( v9 == sub_15D1F10(v8) )
  {
    v10 = sub_8E77E0(*(_QWORD *)(a1 + 16), (__int64)a3, (__int64)a4);
    if ( !(_BYTE)v10 )
    {
      if ( *v8 < *v7 )
      {
        v12 = (__int64)v7;
        v13 = (__int64)v8;
      }
      else
      {
        v12 = (__int64)v8;
        v13 = (__int64)v7;
      }
      if ( !sub_BB03E0(*(_QWORD *)(a1 + 928), *(_DWORD *)(a1 + 936), v13, v12) )
      {
        v14 = *(_QWORD *)(a1 + 24);
        v15 = *a4;
        *(_QWORD *)v36 = 0;
        v37 = v14;
        v34 = sub_BC9C90(a1, v15, &v35, (__int64 *)v36);
        if ( v34 )
        {
          v16 = *(_QWORD **)(a1 + 4144);
          if ( v16 )
          {
            v17 = &v16[2 * *((unsigned int *)v16 - 1)];
            if ( v16 >= v17 )
              goto LABEL_22;
            do
            {
              v20 = *v16;
              v21 = *(_QWORD *)(a1 + 4136);
              if ( *v16 )
              {
                v19 = (*(_DWORD *)(v20 + 8))-- == 1;
                if ( v19 )
                {
                  v32 = v17;
                  v30 = v16;
                  sub_15D7BC0(v21, v20);
                  v21 = *(_QWORD *)(a1 + 4136);
                  v17 = v32;
                  v16 = v30;
                }
              }
              v18 = v16[1];
              if ( v18 )
              {
                v19 = (*(_DWORD *)(v18 + 8))-- == 1;
                if ( v19 )
                {
                  v33 = v17;
                  v31 = v16;
                  sub_15D7BC0(v21, v18);
                  v17 = v33;
                  v16 = v31;
                }
              }
              v16 += 2;
            }
            while ( v16 < v17 );
            v16 = *(_QWORD **)(a1 + 4144);
            if ( v16 )
LABEL_22:
              *((_DWORD *)v16 - 1) = 0;
          }
          if ( (unsigned __int8)sub_15783F0((int)a1 + 1224, a2, v36[0], (int)a1 + 4136) )
          {
            v22 = *(_QWORD *)(a1 + 4144);
            if ( !v22 || v22 + 16LL * *(unsigned int *)(v22 - 4) == v22 )
            {
LABEL_32:
              sub_8F5D90(*(_QWORD *)(a1 + 16), (__int64)a3, (__int64)a4);
              goto LABEL_9;
            }
            v23 = *(_QWORD *)(a1 + 928);
            v24 = *(_QWORD *)(a1 + 4144);
            v29 = *(_DWORD *)(a1 + 936);
            while ( 1 )
            {
              v25 = *(_DWORD **)v24;
              v26 = *(_DWORD **)(v24 + 8);
              if ( *v26 >= **(_DWORD **)v24 )
              {
                v26 = *(_DWORD **)v24;
                v25 = *(_DWORD **)(v24 + 8);
              }
              if ( sub_BB03E0(v23, v29, (__int64)v26, (__int64)v25) )
                break;
              v24 += 16;
              if ( v27 == v24 )
                goto LABEL_32;
            }
          }
          else
          {
            sub_BB7160(a1 + 920, v7, v8);
          }
          v10 = v34;
        }
LABEL_9:
        sub_BB0560(*(__int64 *)v36, v37);
        return v10;
      }
    }
  }
  return 1;
}

