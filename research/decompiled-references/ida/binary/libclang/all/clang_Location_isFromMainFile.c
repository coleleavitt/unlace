_BOOL8 __fastcall clang_Location_isFromMainFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  _BOOL8 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // r12
  int v12; // r13d
  int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  _DWORD *v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rsi
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rcx
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  _QWORD *v34; // [rsp+8h] [rbp-40h]

  result = 0;
  if ( a9 )
  {
    v10 = a9 & 0x7FFFFFFF;
    v11 = *(int *)(a7 + 408);
    v12 = *(_DWORD *)(a7 + 448);
    v13 = v11 + 1;
    if ( (unsigned int)(v11 + 1) <= 1 )
    {
      v14 = *(_DWORD **)(a7 + 184);
      if ( v10 < (*v14 & 0x7FFFFFFFu) )
        goto LABEL_11;
    }
    else
    {
      if ( (int)v11 < 0 )
      {
        v17 = (unsigned int)(-2 - v11);
        v18 = *(_QWORD *)(*(_QWORD *)(a7 + 256) + 8LL * ((unsigned int)(-2 - v11) >> 6));
        if ( _bittest64(&v18, v17) )
        {
          v24 = (_QWORD *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v17 >> 5));
          v25 = *v24;
          if ( !*v24 )
          {
            v26 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
            v27 = *v26;
            v26[10] += 768;
            v28 = (_DWORD *)((v27 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v26[1] >= (unsigned __int64)(v28 + 192) && v27 )
            {
              *v26 = (__int64)(v28 + 192);
            }
            else
            {
              v34 = v24;
              v28 = (_DWORD *)sub_68E100((__int64)v26, 768, 3);
              v24 = v34;
            }
            *v24 = v28;
            v29 = v28 + 192;
            do
            {
              *v28 = 0;
              v28 += 6;
              *((_OWORD *)v28 - 1) = 0;
            }
            while ( v28 != v29 );
            v25 = *v24;
          }
          v19 = (_DWORD *)(v25 + 24LL * ((-2 - (_BYTE)v11) & 0x1F));
        }
        else
        {
          v19 = (_DWORD *)sub_CA9380(a7, (unsigned int)v17, 0);
        }
        if ( v10 < (*v19 & 0x7FFFFFFFu) )
          goto LABEL_11;
        if ( (_DWORD)v11 == -2 )
          goto LABEL_8;
        if ( *(_DWORD *)(a7 + 192) != v13 )
        {
          v20 = (unsigned int)(-2 - v13);
          v21 = *(_QWORD *)(*(_QWORD *)(a7 + 256) + 8LL * ((unsigned int)(-2 - v13) >> 6));
          if ( _bittest64(&v21, v20) )
          {
            v22 = (__int64 *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v20 >> 5));
            v23 = *v22;
            if ( !*v22 )
            {
              v30 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
              v31 = *v30;
              v30[10] += 768;
              v32 = (_DWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v30[1] >= (unsigned __int64)(v32 + 192) && v31 )
                *v30 = (__int64)(v32 + 192);
              else
                v32 = (_DWORD *)sub_68E100((__int64)v30, 768, 3);
              *v22 = (__int64)v32;
              v33 = v32 + 192;
              do
              {
                *v32 = 0;
                v32 += 6;
                *((_OWORD *)v32 - 1) = 0;
              }
              while ( v33 != v32 );
              v23 = *v22;
            }
            v15 = (_DWORD *)(v23 + 24 * (v20 & 0x1F));
          }
          else
          {
            v15 = (_DWORD *)sub_CA9380(a7, (unsigned int)v20, 0);
          }
LABEL_7:
          if ( v10 < (*v15 & 0x7FFFFFFFu) )
          {
LABEL_8:
            v16 = *(_DWORD *)(a7 + 408);
            return v16 == v12;
          }
LABEL_11:
          v16 = sub_CA9700(a7, v10);
          return v16 == v12;
        }
LABEL_12:
        if ( v10 < *(_DWORD *)(a7 + 248) )
          goto LABEL_8;
        goto LABEL_11;
      }
      v14 = *(_DWORD **)(a7 + 184);
      if ( v10 < (v14[6 * v11] & 0x7FFFFFFFu) )
        goto LABEL_11;
    }
    if ( *(_DWORD *)(a7 + 192) != v13 )
    {
      v15 = &v14[6 * v13];
      goto LABEL_7;
    }
    goto LABEL_12;
  }
  return result;
}

