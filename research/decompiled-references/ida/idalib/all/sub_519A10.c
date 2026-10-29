__int64 __fastcall sub_519A10(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  unsigned __int64 v8; // rsi
  unsigned __int64 **v9; // rdi
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  unsigned __int64 *v12; // r14
  _QWORD *v13; // r9
  __int64 v14; // rdi
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // r9
  unsigned __int64 *v18; // rax
  _QWORD *v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // r9
  unsigned __int64 v22; // r14
  unsigned __int64 *v23; // rax
  _QWORD *v24; // r9
  unsigned __int64 *v26; // [rsp+0h] [rbp-58h]
  unsigned __int64 v27; // [rsp+0h] [rbp-58h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-49h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  v28 = *(_BYTE *)(a1 + 936) & 1;
  if ( v28 )
  {
    v3 = *(_QWORD *)(a1 + 1768);
    v4 = *(_DWORD *)(a1 + 996);
    if ( (signed int)v4 <= *(_DWORD *)(a1 + 1000) )
    {
      v29 = *(_QWORD *)(a1 + 1672);
      do
      {
        if ( !*(_BYTE *)(v3 + 152) )
        {
LABEL_38:
          if ( under_debugger )
            goto LABEL_43;
          goto LABEL_39;
        }
        v16 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v16 >= *(_QWORD *)(v3 + 40) )
          goto LABEL_36;
        v17 = v16 << 6;
        *(_DWORD *)(*(_QWORD *)(v3 + 32) + v17 + 56) = v4;
        v18 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v3 + 32) + v17), a2);
        v27 = a2;
        if ( v18 != (unsigned __int64 *)(*v19 + 33LL * v19[1]) && a2 >= *v18 )
        {
          v27 = v18[1];
          if ( a2 < v27 && v18 )
            sub_519690((__int64 *)v3, v4, a2);
          else
            v27 = a2;
        }
        if ( !*(_BYTE *)(v3 + 152) )
        {
          if ( under_debugger )
            goto LABEL_43;
LABEL_39:
          interr(1336);
        }
        v20 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v20 >= *(_QWORD *)(v3 + 40) )
        {
LABEL_36:
          if ( !under_debugger )
            interr(1335);
LABEL_43:
          BUG();
        }
        v21 = v20 << 6;
        v8 = a3;
        v22 = a3;
        *(_DWORD *)(*(_QWORD *)(v3 + 32) + v21 + 56) = v4;
        v9 = (unsigned __int64 **)(*(_QWORD *)(v3 + 32) + v21);
        v23 = sub_5168B0(v9, a3);
        if ( v23 != (unsigned __int64 *)(*v24 + 33LL * v24[1]) )
        {
          v22 = *v23;
          if ( a3 >= *v23 && a3 < v23[1] && v23 )
          {
            v8 = v4;
            v9 = (unsigned __int64 **)v3;
            sub_519690((__int64 *)v3, v4, a3);
          }
          else
          {
            v22 = a3;
          }
        }
        if ( (get_merge_state(v9, v8) & 2) == 0 )
        {
          if ( v27 < v22 )
          {
            v8 = v4;
            v9 = (unsigned __int64 **)v3;
            v28 = sub_518160((__int64 *)v3, v4, v27, v22);
          }
          if ( !*(_BYTE *)(v3 + 152) )
            goto LABEL_38;
          v10 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
          if ( v10 >= *(_QWORD *)(v3 + 40) )
            sub_5144F0(v9, v8);
          v11 = v10 << 6;
          *(_DWORD *)(*(_QWORD *)(v3 + 32) + v11 + 56) = v4;
          v12 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v3 + 32) + v11), a2);
          if ( v12 == (unsigned __int64 *)(*v13 + 33LL * v13[1]) || a2 < *v12 )
          {
            v14 = v29 + 1624;
          }
          else
          {
            v14 = v29 + 1624;
            if ( a2 < v12[1] )
            {
              v15 = sub_505D70(v14, a2);
              if ( v12 && v15 )
              {
                v26 = v15;
                sub_514ED0(v4, (__int64 *)v12, v15[(int)(v4 - *(_DWORD *)(a1 + 996)) + 7], *((_BYTE *)v12 + 24));
                v12[2] = v26[(int)(v4 - *(_DWORD *)(a1 + 996)) + 7];
              }
              goto LABEL_18;
            }
          }
          sub_505D70(v14, a2);
        }
LABEL_18:
        ++v4;
      }
      while ( *(_DWORD *)(a1 + 1000) >= (signed int)v4 );
    }
  }
  else
  {
    return 1;
  }
  return v28;
}
