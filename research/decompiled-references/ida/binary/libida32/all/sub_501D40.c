__int64 __fastcall sub_501D40(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  __int64 v8; // rsi
  unsigned int **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // r9
  unsigned int *v14; // r14
  _QWORD *v15; // r9
  __int64 v16; // rdi
  unsigned int *v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  unsigned int *v20; // rax
  _QWORD *v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // r9
  unsigned int v25; // r14d
  unsigned int *v26; // rax
  _QWORD *v27; // r9
  unsigned int *v29; // [rsp+0h] [rbp-58h]
  unsigned int v30; // [rsp+0h] [rbp-58h]
  unsigned __int8 v31; // [rsp+Fh] [rbp-49h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v31 = *(_BYTE *)(a1 + 768) & 1;
  if ( v31 )
  {
    v3 = *(_QWORD *)(a1 + 1576);
    v4 = *(_DWORD *)(a1 + 828);
    if ( (signed int)v4 <= *(_DWORD *)(a1 + 832) )
    {
      v32 = *(_QWORD *)(a1 + 1480);
      do
      {
        if ( !*(_BYTE *)(v3 + 144) )
        {
LABEL_38:
          if ( under_debugger )
            goto LABEL_43;
          goto LABEL_39;
        }
        v18 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v18 >= *(_QWORD *)(v3 + 40) )
          goto LABEL_36;
        v19 = v18 << 6;
        *(_DWORD *)(*(_QWORD *)(v3 + 32) + v19 + 56) = v4;
        v20 = sub_4FED00((unsigned int **)(*(_QWORD *)(v3 + 32) + v19), a2);
        v22 = v21[1];
        v30 = a2;
        if ( v20 != (unsigned int *)(*v21 + 17 * v22) && a2 >= *v20 )
        {
          v30 = v20[1];
          if ( a2 < v30 && v20 )
            sub_5019E0((__int64 *)v3, v4, a2, v22);
          else
            v30 = a2;
        }
        if ( !*(_BYTE *)(v3 + 144) )
        {
          if ( under_debugger )
            goto LABEL_43;
LABEL_39:
          interr(1336);
        }
        v23 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v23 >= *(_QWORD *)(v3 + 40) )
        {
LABEL_36:
          if ( !under_debugger )
            interr(1335);
LABEL_43:
          BUG();
        }
        v24 = v23 << 6;
        v8 = a3;
        v25 = a3;
        *(_DWORD *)(*(_QWORD *)(v3 + 32) + v24 + 56) = v4;
        v9 = (unsigned int **)(*(_QWORD *)(v3 + 32) + v24);
        v26 = sub_4FED00(v9, a3);
        if ( v26 != (unsigned int *)(*v27 + 17LL * v27[1]) )
        {
          v25 = *v26;
          if ( a3 >= *v26 && a3 < v26[1] && v26 )
          {
            v8 = v4;
            v9 = (unsigned int **)v3;
            sub_5019E0((__int64 *)v3, v4, a3, v27[1]);
          }
          else
          {
            v25 = a3;
          }
        }
        if ( (get_merge_state(v9, v8) & 2) == 0 )
        {
          if ( v30 < v25 )
          {
            v8 = v4;
            v9 = (unsigned int **)v3;
            v31 = sub_500520((__int64 *)v3, v4, v30, v25);
          }
          if ( !*(_BYTE *)(v3 + 144) )
            goto LABEL_38;
          v12 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
          if ( v12 >= *(_QWORD *)(v3 + 40) )
            sub_4FC970(v9, v8, v10, v11);
          v13 = v12 << 6;
          *(_DWORD *)(*(_QWORD *)(v3 + 32) + v13 + 56) = v4;
          v14 = sub_4FED00((unsigned int **)(*(_QWORD *)(v3 + 32) + v13), a2);
          if ( v14 == (unsigned int *)(*v15 + 17LL * v15[1]) || a2 < *v14 )
          {
            v16 = v32 + 1552;
          }
          else
          {
            v16 = v32 + 1552;
            if ( a2 < v14[1] )
            {
              v17 = sub_4EE820(v16, a2);
              if ( v14 && v17 )
              {
                v29 = v17;
                sub_4FD360(v4, v14, v17[v4 - *(_DWORD *)(a1 + 828) + 8], *((_BYTE *)v14 + 12));
                v14[2] = v29[v4 - *(_DWORD *)(a1 + 828) + 8];
              }
              goto LABEL_18;
            }
          }
          sub_4EE820(v16, a2);
        }
LABEL_18:
        ++v4;
      }
      while ( *(_DWORD *)(a1 + 832) >= (signed int)v4 );
    }
  }
  else
  {
    return 1;
  }
  return v31;
}

