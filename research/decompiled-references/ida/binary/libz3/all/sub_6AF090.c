__int64 __fastcall sub_6AF090(_QWORD *a1)
{
  __int64 v2; // r15
  void *v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r12
  int v25[2]; // [rsp+0h] [rbp-98h]
  int v26[2]; // [rsp+0h] [rbp-98h]
  int *v27; // [rsp+8h] [rbp-90h]
  int v28; // [rsp+8h] [rbp-90h]
  int v29[2]; // [rsp+10h] [rbp-88h] BYREF
  int v30[2]; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+20h] [rbp-78h] BYREF
  char v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+40h] [rbp-58h]
  void *v36; // [rsp+48h] [rbp-50h]

  v2 = *a1;
  sub_1694970(&v31, *a1);
  v27 = v29;
  *(_QWORD *)v29 = 0;
  v3 = (void *)sub_1434DA0(v2, (unsigned int)v29);
  sub_18572D0(v29);
  v4 = a1[3];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    if ( v5 > 1 )
    {
      v6 = 8LL * (v5 - 1);
      while ( 1 )
      {
        *(_QWORD *)v29 = 0;
        v18 = *(_QWORD *)(v4 + v6);
        *(_QWORD *)v30 = v2;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        *(_QWORD *)v29 = v18;
        (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v31);
        v19 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
        v23 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 )
        {
          ++*(_DWORD *)(*(_QWORD *)v29 + 8LL);
          sub_1435270(
            (_DWORD)v3,
            v23,
            (_DWORD)v27,
            v20,
            v21,
            v22,
            v19,
            (__int64)v27,
            *(__int64 *)v29,
            *(__int64 *)v30,
            v31);
          v9 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(*(_QWORD *)v25, v23);
        }
        else
        {
          sub_1435270((_DWORD)v3, 0, (_DWORD)v27, v20, v21, v22, v19, (__int64)v27, 0, *(__int64 *)v30, v31);
        }
        v10 = *(_QWORD *)v29;
        v11 = sub_15DC610(
                v2,
                *(_QWORD *)(a1[1] + v6),
                0,
                0,
                v7,
                v8,
                v25[0],
                v28,
                v29[0],
                v30[0],
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
        sub_1692DB0(&v31, v11, v10, 0, 0);
        v12 = *(_QWORD *)v29;
        v13 = a1[2];
        v14 = (__int64 *)(v6 + a1[3]);
        if ( *(_QWORD *)v29 )
          ++*(_DWORD *)(*(_QWORD *)v29 + 8LL);
        v15 = *v14;
        if ( *v14 )
        {
          v9 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v9 )
          {
            *(_QWORD *)v26 = v14;
            sub_15D7BC0(v13, v15);
            v14 = *(__int64 **)v26;
          }
        }
        *v14 = v12;
        v16 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29
          && (v17 = *(_QWORD *)v30, v9 = *(_DWORD *)(*(_QWORD *)v29 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v29 + 8LL), v9) )
        {
          sub_15D7BC0(v17, v16);
          v6 -= 8;
          if ( v6 == -8 )
          {
LABEL_20:
            (**(void (__fastcall ***)(void *))v3)(v3);
            sub_186B220(v3);
            return sub_1695230(&v31);
          }
        }
        else
        {
          v6 -= 8;
          if ( v6 == -8 )
            goto LABEL_20;
        }
        v4 = a1[3];
      }
    }
  }
  sub_41EA70((void (***)(void))v3);
  return sub_1695230(&v31);
}

