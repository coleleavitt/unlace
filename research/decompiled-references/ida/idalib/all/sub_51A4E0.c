__int64 __fastcall sub_51A4E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebp
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  __int64 v13; // r9
  unsigned __int64 *v14; // rax
  _QWORD *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r14
  unsigned __int64 *v25; // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // r9
  __int64 v29; // r9
  unsigned __int64 *v30; // rax
  unsigned __int64 *v31; // rsi
  _QWORD *v32; // r9
  unsigned __int64 v33; // [rsp+0h] [rbp-48h]

  if ( a2 < a3 )
  {
    v3 = *(_QWORD *)(a1 + 1768);
    v4 = *(_DWORD *)(a1 + 996);
    if ( (signed int)v4 <= *(_DWORD *)(a1 + 1000) )
    {
      while ( *(_BYTE *)(v3 + 152) )
      {
        v7 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v7 >= *(_QWORD *)(v3 + 40) )
          goto LABEL_38;
        v8 = v7 << 6;
        v9 = a3 - 1;
        *(_DWORD *)(*(_QWORD *)(v3 + 32) + v8 + 56) = v4;
        v10 = *(_QWORD *)(v3 + 32);
        v11 = v10 + v8;
        if ( !*(_BYTE *)(v3 + 152) )
        {
          if ( under_debugger )
            goto LABEL_45;
LABEL_41:
          interr(1336);
        }
        v12 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v12 >= *(_QWORD *)(v3 + 40) )
        {
LABEL_38:
          if ( !under_debugger )
            interr(1335);
LABEL_45:
          BUG();
        }
        v13 = v12 << 6;
        *(_DWORD *)(v10 + v13 + 56) = v4;
        v14 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v3 + 32) + v13), v9);
        if ( v14 != (unsigned __int64 *)(*v15 + 33LL * v15[1]) && v9 >= *v14 )
        {
          v16 = v14[1];
          if ( v9 < v16 && v14 && a3 < v16 )
          {
            v27 = v14[2];
            sub_518160((__int64 *)v3, v4, a3, v16);
            if ( !*(_BYTE *)(v3 + 152) )
              break;
            v28 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
            if ( v28 >= *(_QWORD *)(v3 + 40) )
              sub_5144F0(v3, v4);
            v29 = v28 << 6;
            *(_DWORD *)(*(_QWORD *)(v3 + 32) + v29 + 56) = v4;
            v30 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v3 + 32) + v29), a3);
            v31 = nullptr;
            if ( v30 != (unsigned __int64 *)(*v32 + 33LL * v32[1]) && a3 >= *v30 && a3 < v30[1] )
              v31 = v30;
            sub_514ED0(v4, (__int64 *)v31, v27, 3);
            v31[2] = v27;
            *((_BYTE *)v31 + 24) = 3;
          }
        }
        v17 = sub_5168B0((unsigned __int64 **)v11, a2);
        if ( v17 != (unsigned __int64 *)(*(_QWORD *)v11 + 33LL * *(_QWORD *)(v11 + 8)) )
        {
          v18 = *v17;
          if ( a2 >= *v17 )
          {
            v19 = v17[1];
            if ( a2 < v19 && a2 != v18 )
            {
              sub_5154D0(*(unsigned int *)(v11 + 56), v18, v19, a2);
              v17[1] = a2;
              *((_BYTE *)v17 + 32) = 1;
            }
          }
        }
        sub_516950(v11, a2);
        v20 = sub_5168B0((unsigned __int64 **)v11, a2);
        v21 = *(unsigned __int64 **)v11;
        v22 = *(_QWORD *)v11 + 33LL * *(_QWORD *)(v11 + 8);
        if ( v20 == (unsigned __int64 *)v22
          || a2 >= *v20 && a2 < v20[1] && (v20 = (unsigned __int64 *)((char *)v20 + 33), (unsigned __int64 *)v22 == v20)
          || (v23 = 1041204193 * ((_DWORD)v20 - (_DWORD)v21), v23 == -1)
          || (unsigned __int64)v23 >= *(_QWORD *)(v11 + 8)
          || (v33 = v23, v24 = 33LL * v23, (v25 = (unsigned __int64 *)((char *)v21 + v24)) == nullptr) )
        {
LABEL_4:
          if ( *(_DWORD *)(a1 + 1000) < (signed int)++v4 )
            return 1;
        }
        else
        {
          do
          {
            if ( *v25 >= a3 )
              goto LABEL_4;
            sub_516950(v11, *v25);
            if ( v33 >= *(_QWORD *)(v11 + 8) )
              goto LABEL_4;
            v25 = (unsigned __int64 *)(v24 + *(_QWORD *)v11);
          }
          while ( v25 );
          if ( *(_DWORD *)(a1 + 1000) < (signed int)++v4 )
            return 1;
        }
      }
      if ( under_debugger )
        goto LABEL_45;
      goto LABEL_41;
    }
  }
  return 1;
}
