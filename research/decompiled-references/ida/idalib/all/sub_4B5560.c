__int64 __fastcall sub_4B5560(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  size_t v14; // rbx
  size_t v15; // r15
  __int64 v16; // rsi
  _DWORD *v17; // rax
  void *v18; // rbx
  void *v19; // rdi
  __int64 v20; // rax
  unsigned __int8 v21; // [rsp+8h] [rbp-470h]
  unsigned __int64 v22; // [rsp+8h] [rbp-470h]
  __int64 v23; // [rsp+18h] [rbp-460h] BYREF
  _DWORD *v24; // [rsp+20h] [rbp-458h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-450h]
  _BYTE src[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v27; // [rsp+438h] [rbp-40h]

  v6 = *a3;
  v27 = __readfsqword(0x28u);
  v23 = v6;
  v8 = sub_7BE950(&v23, a1, a4, src, 1024, 82);
  if ( v8 > 0 )
  {
    v9 = &src[v8];
    v10 = src;
    v25 = (unsigned __int64)v9;
    do
    {
      if ( v10 >= v9 )
        return 0;
      ++v10;
    }
    while ( *(v10 - 1) );
    v24 = v10;
    v12 = *(_QWORD *)(a2 + 8);
    v13 = v10 - src;
    v14 = v13 - 1;
    v15 = v13 - 1;
    if ( v12 )
    {
      --v12;
      v16 = *(_QWORD *)a2;
      v15 = v14 + v12;
      v13 += v12;
      if ( *(_QWORD *)(a2 + 16) >= v13 )
        goto LABEL_8;
    }
    else
    {
      v16 = *(_QWORD *)a2;
      if ( *(_QWORD *)(a2 + 16) >= v13 )
      {
LABEL_8:
        *(_QWORD *)(a2 + 8) = v13;
        *(_BYTE *)(v16 + v15) = 0;
        memmove((void *)(v12 + *(_QWORD *)a2), src, v14);
        v17 = v24;
        if ( v25 < (unsigned __int64)(v24 + 1) )
          return 0;
        ++v24;
        *(_DWORD *)(a2 + 32) = *v17;
        v18 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
        result = (*(__int64 (__fastcall **)(void *, _DWORD **, unsigned __int64))(*(_QWORD *)v18 + 104LL))(
                   v18,
                   &v24,
                   v25);
        if ( !(_BYTE)result )
        {
          qfree(v18);
          return 0;
        }
        v19 = *(void **)(a2 + 24);
        if ( v19 )
        {
          v21 = result;
          qfree(v19);
          result = v21;
        }
        *(_QWORD *)(a2 + 24) = v18;
        return result;
      }
    }
    v22 = v13;
    v20 = qvector_reserve(a2, v16, v13, 1);
    v13 = v22;
    *(_QWORD *)a2 = v20;
    v16 = v20;
    goto LABEL_8;
  }
  return 0;
}
