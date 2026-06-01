__int64 __fastcall sub_49FFC0(__int64 a1, __int64 a2, int *a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rdx
  __int64 result; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  size_t v16; // rbx
  size_t v17; // r15
  __int64 v18; // rsi
  _DWORD *v19; // rax
  void *v20; // rbx
  void *v21; // rdi
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+8h] [rbp-470h]
  unsigned __int64 v24; // [rsp+8h] [rbp-470h]
  int v25; // [rsp+1Ch] [rbp-45Ch] BYREF
  _DWORD *v26; // [rsp+20h] [rbp-458h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-450h]
  _BYTE src[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v29; // [rsp+438h] [rbp-40h]

  v7 = a4;
  v8 = *a3;
  v29 = __readfsqword(0x28u);
  v25 = v8;
  v10 = sub_79B5C0(&v25, a1, v7, src, 1024, 82);
  if ( v10 > 0 )
  {
    v11 = &src[v10];
    v12 = src;
    v27 = (unsigned __int64)v11;
    do
    {
      if ( v12 >= v11 )
        return 0;
      ++v12;
    }
    while ( *(v12 - 1) );
    v26 = v12;
    v14 = *(_QWORD *)(a2 + 8);
    v15 = v12 - src;
    v16 = v15 - 1;
    v17 = v15 - 1;
    if ( v14 )
    {
      --v14;
      v18 = *(_QWORD *)a2;
      v17 = v16 + v14;
      v15 += v14;
      if ( *(_QWORD *)(a2 + 16) >= v15 )
        goto LABEL_8;
    }
    else
    {
      v18 = *(_QWORD *)a2;
      if ( *(_QWORD *)(a2 + 16) >= v15 )
      {
LABEL_8:
        *(_QWORD *)(a2 + 8) = v15;
        *(_BYTE *)(v18 + v17) = 0;
        memmove((void *)(v14 + *(_QWORD *)a2), src, v16);
        v19 = v26;
        if ( v27 < (unsigned __int64)(v26 + 1) )
          return 0;
        ++v26;
        *(_DWORD *)(a2 + 32) = *v19;
        v20 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
        result = (*(__int64 (__fastcall **)(void *, _DWORD **, unsigned __int64))(*(_QWORD *)v20 + 104LL))(
                   v20,
                   &v26,
                   v27);
        if ( !(_BYTE)result )
        {
          qfree(v20);
          return 0;
        }
        v21 = *(void **)(a2 + 24);
        if ( v21 )
        {
          v23 = result;
          qfree(v21);
          result = v23;
        }
        *(_QWORD *)(a2 + 24) = v20;
        return result;
      }
    }
    v24 = v15;
    v22 = qvector_reserve(a2, v18, v15, 1);
    v15 = v24;
    *(_QWORD *)a2 = v22;
    v18 = v22;
    goto LABEL_8;
  }
  return 0;
}

