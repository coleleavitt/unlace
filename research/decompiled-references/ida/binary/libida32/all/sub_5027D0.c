__int64 __fastcall sub_5027D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebp
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  __int64 v13; // r9
  unsigned int *v14; // rax
  _QWORD *v15; // r9
  unsigned int v16; // ecx
  unsigned int *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int *v20; // rax
  unsigned int *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r14
  unsigned int *v25; // rcx
  unsigned int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  __int64 v31; // r9
  unsigned int *v32; // rax
  unsigned int *v33; // rsi
  _QWORD *v34; // r9
  unsigned __int64 v35; // [rsp+0h] [rbp-48h]

  if ( a2 < a3 )
  {
    v3 = *(_QWORD *)(a1 + 1576);
    v4 = *(_DWORD *)(a1 + 828);
    if ( (signed int)v4 <= *(_DWORD *)(a1 + 832) )
    {
      while ( *(_BYTE *)(v3 + 144) )
      {
        v7 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
        if ( v7 >= *(_QWORD *)(v3 + 40) )
          goto LABEL_38;
        v8 = v7 << 6;
        v9 = a3 - 1;
        *(_DWORD *)(*(_QWORD *)(v3 + 32) + v8 + 56) = v4;
        v10 = *(_QWORD *)(v3 + 32);
        v11 = v10 + v8;
        if ( !*(_BYTE *)(v3 + 144) )
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
        v14 = sub_4FED00((unsigned int **)(*(_QWORD *)(v3 + 32) + v13), v9);
        if ( v14 != (unsigned int *)(*v15 + 17LL * v15[1]) && v9 >= *v14 )
        {
          v16 = v14[1];
          if ( v9 < v16 && v14 && a3 < v16 )
          {
            v27 = v14[2];
            sub_500520((__int64 *)v3, v4, a3, v16);
            if ( !*(_BYTE *)(v3 + 144) )
              break;
            v30 = (int)(v4 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL));
            if ( v30 >= *(_QWORD *)(v3 + 40) )
              sub_4FC970(v3, v4, v28, v29);
            v31 = v30 << 6;
            *(_DWORD *)(*(_QWORD *)(v3 + 32) + v31 + 56) = v4;
            v32 = sub_4FED00((unsigned int **)(*(_QWORD *)(v3 + 32) + v31), a3);
            v33 = nullptr;
            if ( v32 != (unsigned int *)(*v34 + 17LL * v34[1]) && a3 >= *v32 && a3 < v32[1] )
              v33 = v32;
            sub_4FD360(v4, v33, v27, 3);
            v33[2] = v27;
            *((_BYTE *)v33 + 12) = 3;
          }
        }
        v17 = sub_4FED00((unsigned int **)v11, a2);
        if ( v17 != (unsigned int *)(*(_QWORD *)v11 + 17LL * *(_QWORD *)(v11 + 8)) )
        {
          v18 = *v17;
          if ( a2 >= (unsigned int)v18 )
          {
            v19 = v17[1];
            if ( a2 < (unsigned int)v19 && a2 != (_DWORD)v18 )
            {
              sub_4FD960(*(unsigned int *)(v11 + 56), v18, v19, a2);
              v17[1] = a2;
              *((_BYTE *)v17 + 16) = 1;
            }
          }
        }
        sub_4FED90(v11, a2);
        v20 = sub_4FED00((unsigned int **)v11, a2);
        v21 = *(unsigned int **)v11;
        v22 = *(_QWORD *)v11 + 17LL * *(_QWORD *)(v11 + 8);
        if ( v20 == (unsigned int *)v22
          || a2 >= *v20 && a2 < v20[1] && (v20 = (unsigned int *)((char *)v20 + 17), (unsigned int *)v22 == v20)
          || (v23 = -252645135 * ((_DWORD)v20 - (_DWORD)v21), v23 == -1)
          || (unsigned __int64)v23 >= *(_QWORD *)(v11 + 8)
          || (v35 = v23, v24 = 17LL * v23, (v25 = (unsigned int *)((char *)v21 + v24)) == nullptr) )
        {
LABEL_4:
          if ( *(_DWORD *)(a1 + 832) < (signed int)++v4 )
            return 1;
        }
        else
        {
          do
          {
            if ( *v25 >= a3 )
              goto LABEL_4;
            sub_4FED90(v11, *v25);
            if ( v35 >= *(_QWORD *)(v11 + 8) )
              goto LABEL_4;
            v25 = (unsigned int *)(v24 + *(_QWORD *)v11);
          }
          while ( v25 );
          if ( *(_DWORD *)(a1 + 832) < (signed int)++v4 )
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

