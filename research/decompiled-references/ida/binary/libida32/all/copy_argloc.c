void __fastcall copy_argloc(__int64 a1, int *a2)
{
  int *v2; // rbp
  char v3; // zf
  char v4; // sf
  char v5; // of
  int v6; // eax
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  _DWORD *v15; // rax
  __int64 v16; // r12
  __int64 v19; // rdi
  _DWORD *v20; // [rsp+0h] [rbp-48h]
  _QWORD *v21; // [rsp+8h] [rbp-40h]

  v19 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( a2 == (int *)a1 )
  {
    nullsub_1517();
  }
  else
  {
    v2 = a2;
    sub_691870(v19, a1);
    v6 = *v2;
    switch ( *v2 )
    {
      case 0:
        break;
      case 1:
      case 3:
      case 4:
      case 6:
        *(_QWORD *)(a1 + 8) = *((_QWORD *)v2 + 1);
        v6 = *v2;
        break;
      case 2:
        v7 = qalloc_or_throw(24, (const char *)a1);
        v8 = *((_QWORD **)v2 + 1);
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        v9 = v8[1];
        v21 = v8;
        if ( v9 )
        {
          v13 = qalloc_or_throw(24 * v9, (const char *)a1);
          *(_QWORD *)v7 = v13;
          v14 = 0;
          *(_QWORD *)(v7 + 16) = v9;
          while ( 1 )
          {
            v15 = (_DWORD *)(24 * v14 + v13);
            v16 = *v21 + 24 * v14;
            *v15 = 0;
            v20 = v15;
            copy_argloc(v15, v16);
            ++v14;
            v20[4] = *(_DWORD *)(v16 + 16);
            if ( v9 == v14 )
              break;
            v13 = *(_QWORD *)v7;
          }
          *(_QWORD *)(v7 + 8) = v9;
        }
        *(_QWORD *)(a1 + 8) = v7;
        v6 = *v2;
        break;
      case 5:
        v10 = (_QWORD *)operator new(8u);
        *v10 = **((_QWORD **)v2 + 1);
        *(_QWORD *)(a1 + 8) = v10;
        v6 = *v2;
        break;
      default:
        if ( v4 ^ v5 | v3
          || (v11 = v6 - 7, v11 >= *(_QWORD *)(v19 + 2576))
          || (v12 = *(_QWORD *)(*(_QWORD *)(v19 + 2568) + 8 * v11)) == 0 )
        {
          if ( !under_debugger )
            interr(1098);
          BUG();
        }
        (*(void (__fastcall **)(__int64, int *))(v12 + 16))(a1, v2);
        v6 = *v2;
        break;
    }
    *(_DWORD *)a1 = v6;
  }
}

