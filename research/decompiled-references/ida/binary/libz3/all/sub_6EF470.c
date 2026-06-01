__int64 __fastcall sub_6EF470(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, __int64 *a5)
{
  _DWORD *v10; // rax
  int v11; // eax
  _DWORD *v12; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  bool v27; // di
  int v28[2]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-40h] BYREF
  __int64 v30; // [rsp+18h] [rbp-38h]

  v10 = *(_DWORD **)(a2 + 24);
  if ( !v10 || *(_DWORD *)(a1 + 8) != *v10 || v10[1] != 2 || (unsigned __int8)sub_15D26C0(*(_QWORD *)a1, *a4) )
  {
    v11 = sub_15F0200(a1 + 24);
    v12 = *(_DWORD **)(a2 + 24);
    if ( v12 && v11 == *v12 && !v12[1] )
    {
      v20 = *(_QWORD **)sub_15FB1F0(a1 + 24, a2);
      if ( !v20 || (v21 = &v20[*((unsigned int *)v20 - 1)], v20 == v21) )
      {
LABEL_17:
        if ( a3 )
        {
          v23 = *a4;
          if ( !*(_WORD *)(*a4 + 4LL) && *(_QWORD *)(v23 + 16) == *v20 )
          {
            v19 = *(_QWORD *)(v23 + 32);
            if ( a3 <= 1 )
            {
LABEL_26:
              if ( !v19 )
                goto LABEL_10;
              goto LABEL_9;
            }
            v24 = 0;
            while ( 1 )
            {
              v25 = a4[v24 + 1];
              if ( *(_WORD *)(v25 + 4) || v20[v24 + 1] != *(_QWORD *)(v25 + 16) )
                break;
              v26 = *(_QWORD *)(v25 + 32);
              v27 = (int)v24++ + 2 < a3;
              if ( v19 != v26 || !v27 )
              {
                if ( v19 != v26 )
                  return 5;
                goto LABEL_26;
              }
            }
          }
        }
      }
      else
      {
        v22 = v20;
        while ( *(_DWORD *)(*v22 + 32LL) == 1 )
        {
          if ( v21 == ++v22 )
            goto LABEL_17;
        }
      }
    }
    return 5;
  }
  sub_13615B0(&v29, a1 + 48, *a4);
  v14 = *(_QWORD *)(a1 + 56);
  v15 = v30;
  *(_QWORD *)(a1 + 56) = v29;
  v29 = v14;
  sub_6EF400(v14, v15);
  v16 = *(_QWORD *)(a2 + 40);
  v17 = *(_QWORD *)(a1 + 56);
  LOBYTE(v30) = 1;
  v29 = v16;
  v18 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v28 = v17;
  v19 = sub_15DCAD0(v18, (int)v28, 0);
  sub_15D0DF0(&v29);
  if ( v19 )
LABEL_9:
    ++*(_DWORD *)(v19 + 8);
LABEL_10:
  sub_6EF400(*a5, a5[1]);
  *a5 = v19;
  return 4;
}

