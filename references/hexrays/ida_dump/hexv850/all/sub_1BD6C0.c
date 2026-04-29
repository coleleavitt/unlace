__int64 __fastcall sub_1BD6C0(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  int v7; // edx
  __int64 v8; // r14
  _WORD *v9; // rbx
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rsi
  _DWORD *v13; // r13
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rsi
  _DWORD *v18; // r12
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+10h] [rbp-A8h] BYREF
  __int64 *v24; // [rsp+18h] [rbp-A0h]
  int v25; // [rsp+20h] [rbp-98h]
  _DWORD v26[4]; // [rsp+30h] [rbp-88h] BYREF
  int v27; // [rsp+40h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+68h] [rbp-50h]
  int v31; // [rsp+70h] [rbp-48h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v23 = 0;
  copy_argloc(&v23, a2);
  LOWORD(v25) = a3;
  v28 = 0;
  v30 = 0;
  v31 = -1;
  HIWORD(v25) = a4;
  v29 = 0;
  if ( a3 < (unsigned __int64)a4 )
  {
    v28 = qvector_reserve(&v28, 0, 1, 16);
    v21 = (_QWORD *)(16 * v29 + v28);
    *v21 = a3;
    v21[1] = a4;
    *(_QWORD *)&v29 = v29 + 1;
  }
  if ( (unsigned __int8)rangeset_t_sub2(&v28, *(_QWORD *)(a1 + 16)) )
  {
    v7 = v23;
    if ( v23 == 5 )
    {
      v8 = *v24;
      goto LABEL_9;
    }
    if ( v23 > 5 )
    {
      if ( v23 != 6 )
        goto LABEL_26;
    }
    else if ( v23 != 1 )
    {
      if ( v23 == 3 )
      {
        v8 = (unsigned __int16)v24;
LABEL_9:
        v9 = (_WORD *)v28;
        if ( 16LL * (_QWORD)v29 )
        {
          while ( 1 )
          {
            HIWORD(v25) = v9[4] - *v9;
            LOWORD(v25) = *(_QWORD *)v9;
            if ( v7 == 3 )
            {
              LODWORD(v24) = v8 + (unsigned __int16)v25;
            }
            else
            {
              if ( v7 != 1 )
              {
                if ( !under_debugger )
                  sub_37CFE0(51459);
                BUG();
              }
              v24 = (__int64 *)(v8 + (unsigned __int16)v25);
            }
            v10 = *(__int64 **)(a1 + 8);
            v26[0] = 0;
            copy_argloc(v26, &v23);
            v27 = v25;
            v11 = v10[1];
            v12 = *v10;
            if ( v10[2] < (unsigned __int64)(v11 + 1) )
            {
              v20 = qvector_reserve(v10, v12, v11 + 1, 24);
              *v10 = v20;
              v11 = v10[1];
              v12 = v20;
            }
            v13 = (_DWORD *)(v12 + 24 * v11);
            *v13 = 0;
            copy_argloc(v13, v26);
            v9 += 8;
            v13[4] = v27;
            ++v10[1];
            cleanup_argloc(v26);
            v14 = v28;
            if ( v9 == (_WORD *)(v28 + 16 * v29) )
              break;
            v7 = v23;
          }
        }
        else
        {
          v14 = v28;
        }
        ++*(_DWORD *)(a1 + 24);
        goto LABEL_22;
      }
LABEL_26:
      v8 = -1;
      goto LABEL_9;
    }
    v8 = (__int64)v24;
    goto LABEL_9;
  }
  v15 = *(__int64 **)(a1 + 8);
  v26[0] = 0;
  copy_argloc(v26, &v23);
  v27 = v25;
  v16 = v15[1];
  v17 = *v15;
  if ( v15[2] < (unsigned __int64)(v16 + 1) )
  {
    v22 = qvector_reserve(v15, v17, v16 + 1, 24);
    *v15 = v22;
    v16 = v15[1];
    v17 = v22;
  }
  v18 = (_DWORD *)(v17 + 24 * v16);
  *v18 = 0;
  copy_argloc(v18, v26);
  v18[4] = v27;
  ++v15[1];
  cleanup_argloc(v26);
  v14 = v28;
LABEL_22:
  if ( v14 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v14);
  }
  cleanup_argloc(&v23);
  return 0;
}
