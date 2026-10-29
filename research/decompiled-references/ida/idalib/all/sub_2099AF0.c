void __fastcall sub_2099AF0(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // rax
  _BYTE *v22; // rdx
  size_t v23; // rdx
  const void *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE *v28; // rdx
  void *v29[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v30[72]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a5 + 8) )
  {
    v9 = sub_221A480(a6);
    v10 = sub_227B9B0(v9, a4);
    v11 = *(_DWORD *)(a1 + 376);
    v29[0] = v30;
    sub_2096AC0(v29, (unsigned int)(2 * v11 + 3), 32);
    v12 = sub_227BF10(v10, v29[0], v29[1]);
    v13 = sub_9954E0(v12, a2, a3);
    sub_995540(v13, " Analyses:");
    if ( v29[0] != v30 )
      operator delete(v29[0]);
    v18 = 0;
    v19 = 0;
    if ( *(_DWORD *)(a5 + 8) )
    {
      while ( 1 )
      {
        v20 = sub_2099960(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)a5 + 8 * v19), (__int64)v14, v15, v16, v17);
        if ( v20 )
        {
          v21 = sub_221A480(a6);
          v22 = *(_BYTE **)(v21 + 32);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
          {
            v21 = sub_227BA10(v21, 32);
          }
          else
          {
            *(_QWORD *)(v21 + 32) = v22 + 1;
            *v22 = 32;
          }
          v23 = *(_QWORD *)(v20 + 8);
          v24 = *(const void **)v20;
          v19 = (unsigned int)++v18;
          sub_9954E0(v21, v24, v23);
          if ( v18 == *(_DWORD *)(a5 + 8) )
            break;
        }
        else
        {
          v26 = sub_221A480(a6);
          v19 = (unsigned int)++v18;
          sub_995540(v26, " Uninitialized Pass");
          if ( v18 == *(_DWORD *)(a5 + 8) )
            break;
        }
        if ( v18 )
        {
          v25 = sub_221A480(a6);
          v14 = *(_BYTE **)(v25 + 32);
          if ( (unsigned __int64)v14 >= *(_QWORD *)(v25 + 24) )
          {
            sub_227BA10(v25, 44);
          }
          else
          {
            v15 = (__int64)(v14 + 1);
            *(_QWORD *)(v25 + 32) = v14 + 1;
            *v14 = 44;
          }
        }
      }
    }
    v27 = sub_221A480(a6);
    v28 = *(_BYTE **)(v27 + 32);
    if ( (unsigned __int64)v28 >= *(_QWORD *)(v27 + 24) )
    {
      sub_227BA10(v27, 10);
    }
    else
    {
      *(_QWORD *)(v27 + 32) = v28 + 1;
      *v28 = 10;
    }
  }
}
