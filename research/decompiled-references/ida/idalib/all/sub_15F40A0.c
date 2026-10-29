__int64 __fastcall sub_15F40A0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  __int64 i; // rax
  unsigned __int64 v17; // rax
  size_t v18; // r12
  const char *v19; // r14
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  _QWORD *v27; // r14
  char v28; // dl
  char v29; // dl
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // r14
  _DWORD *v33; // rax
  _DWORD *v34; // rdx
  _DWORD *v35; // rax
  _DWORD *v36; // rdx
  __int64 v37; // [rsp+0h] [rbp-40h]
  _BYTE v38[41]; // [rsp+17h] [rbp-29h] BYREF

  result = *(_QWORD *)(a1 + 8);
  if ( !result )
    return result;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      result = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)result )
      {
        if ( sub_224A940() )
        {
          v5 = *(_DWORD *)(a1 + 72);
          v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * v5 - 8);
          *(_DWORD *)(a1 + 72) = v5 - 1;
          sub_224D6D0(v6);
        }
        v7 = *(_QWORD *)(a1 + 8);
        v8 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a1 + 24))-- - 4);
        return sub_16658F0(v7, 1, v8);
      }
    }
    return result;
  }
  v9 = *(_QWORD *)(result + 272);
  v10 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFFu) < *(_DWORD *)(v9 + 476) || v10 >= *(_DWORD *)(v9 + 480) )
    result = sub_101D590(*(_QWORD *)(result + 272), v10);
  else
    result = *(unsigned int *)(v9 + 472);
  v38[0] = 0;
  if ( (unsigned int)(result + 1) > 1 )
  {
    if ( (int)result < 0 )
    {
      v25 = (unsigned int)(-2 - result);
      v26 = *(_QWORD *)(*(_QWORD *)(v9 + 320) + 8LL * ((unsigned int)(-2 - result) >> 6));
      if ( _bittest64(&v26, v25) )
      {
        v27 = (_QWORD *)(*(_QWORD *)(v9 + 272) + 8 * ((unsigned __int64)(int)v25 >> 5));
        if ( *v27 )
        {
          result = *v27 + 24 * (v25 & 0x1F);
          goto LABEL_15;
        }
        v33 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v9 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        *v27 = v33;
        v34 = v33 + 192;
        do
        {
          *v33 = 0;
          v33 += 6;
          *((_OWORD *)v33 - 1) = 0;
          *((_QWORD *)v33 - 1) = 0;
        }
        while ( v33 != v34 );
        v28 = v38[0];
        result = *v27 + 24 * (v25 & 0x1F);
      }
      else
      {
        result = sub_101F930(v9, v25, v38);
        v28 = v38[0];
      }
      if ( v28 )
        return result;
    }
    else
    {
      result = *(_QWORD *)(v9 + 184) + 24LL * (unsigned int)result;
    }
LABEL_15:
    if ( !result )
      return result;
    if ( *(char *)(result + 3) < 0 )
      return result;
    v11 = *(_DWORD *)(result + 8);
    if ( !v11 )
      return result;
    if ( !sub_224A940() )
      goto LABEL_36;
    if ( v10 < *(_DWORD *)(v9 + 476) || v10 >= *(_DWORD *)(v9 + 480) )
      v12 = sub_101D590(v9, v10);
    else
      v12 = *(_DWORD *)(v9 + 472);
    v38[0] = 0;
    if ( (unsigned int)(v12 + 1) > 1 )
    {
      if ( v12 >= 0 )
      {
        v13 = *(_QWORD *)(v9 + 184) + 24LL * (unsigned int)v12;
        goto LABEL_25;
      }
      v30 = (unsigned int)(-2 - v12);
      v31 = *(_QWORD *)(*(_QWORD *)(v9 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
      if ( _bittest64(&v31, v30) )
      {
        v32 = (_QWORD *)(*(_QWORD *)(v9 + 272) + 8 * ((unsigned __int64)(int)v30 >> 5));
        if ( *v32 )
        {
          v13 = *v32 + 24 * (v30 & 0x1F);
          goto LABEL_25;
        }
        v35 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v9 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        *v32 = v35;
        v36 = v35 + 192;
        do
        {
          *v35 = 0;
          v35 += 6;
          *((_OWORD *)v35 - 1) = 0;
          *((_QWORD *)v35 - 1) = 0;
        }
        while ( v35 != v36 );
        v29 = v38[0];
        v13 = *v32 + 24 * (v30 & 0x1F);
      }
      else
      {
        v13 = sub_101F930(v9, v30, v38);
        v29 = v38[0];
      }
      if ( !v29 )
      {
LABEL_25:
        v14 = a1 + 64;
        if ( v13 )
        {
          if ( *(char *)(v13 + 3) >= 0 )
          {
            v15 = *(_QWORD **)((*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
            if ( v15 )
            {
              for ( i = v15[1]; i; i = *(_QWORD *)(v17 + 8) )
              {
                if ( (i & 4) == 0 )
                  break;
                v17 = i & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v17 )
                  break;
                v15 = (_QWORD *)v17;
              }
              v18 = *v15;
              v19 = (const char *)(v15 + 4);
              goto LABEL_33;
            }
          }
        }
LABEL_51:
        v19 = "<unknown>";
        v18 = j__strlen("<unknown>");
LABEL_33:
        v20 = j__strlen("Source");
        v21 = sub_224BAE0("Source", v20, v19, v18);
        v22 = *(unsigned int *)(a1 + 72);
        if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
        {
          v37 = v21;
          sub_2237220(v14, a1 + 80, v22 + 1, 8);
          v22 = *(unsigned int *)(a1 + 72);
          v21 = v37;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v22) = v21;
        ++*(_DWORD *)(a1 + 72);
LABEL_36:
        v23 = *(unsigned int *)(a1 + 24);
        if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
        {
          sub_2237220(a1 + 16, a1 + 32, v23 + 1, 4);
          v23 = *(unsigned int *)(a1 + 24);
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v23) = v11;
        v24 = *(_QWORD *)(a1 + 8);
        ++*(_DWORD *)(a1 + 24);
        return sub_16658F0(v24, 0, v11);
      }
    }
    v14 = a1 + 64;
    goto LABEL_51;
  }
  return result;
}
