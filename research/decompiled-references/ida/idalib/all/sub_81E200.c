__int64 __fastcall sub_81E200(__int64 a1, __int64 **a2, __int64 **a3, __int64 *a4, __int64 a5, _DWORD *a6)
{
  __int64 *v6; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r13
  __int64 *v10; // r15
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdi
  _BYTE *v14; // rbx
  size_t v15; // r14
  size_t v16; // rdx
  size_t v17; // r12
  __int64 v18; // rdx
  __int64 *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 *v23; // rbx
  unsigned int v25; // [rsp+4h] [rbp-84h]
  _BYTE v30[9]; // [rsp+3Eh] [rbp-4Ah] BYREF
  char v31; // [rsp+47h] [rbp-41h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v6 = *a2;
  if ( !*a2 )
    return 0;
  v8 = 0;
  do
  {
    v8 += v6[1];
    v6 = (__int64 *)v6[3];
    v9 = v8;
  }
  while ( v6 );
  if ( v8 > 9 )
  {
    v25 = sub_8177B0(a1, a4, 1u);
    if ( !v25 )
    {
      v10 = sub_81BFF0(a1, 0);
      v11 = 10;
      do
      {
        --v11;
        v12 = v8 | 0x80;
        v8 >>= 7;
        v30[v11] = v12;
      }
      while ( v8 );
      v31 &= ~0x80u;
      v13 = v10[1];
      v14 = &v30[v11];
      v15 = 10 - v11;
      do
      {
        v18 = v10[2];
        if ( v13 == v18 )
        {
          v19 = sub_81BFF0(a1, (__int64)v10);
          if ( !v19 )
          {
            v25 = 12;
            goto LABEL_24;
          }
          v18 = v19[2];
          v13 = v19[1];
          v10 = v19;
        }
        v16 = v18 - v13;
        if ( v16 > v15 )
          v16 = v15;
        v17 = v16;
        memcpy((void *)(*v10 + v13), v14, v16);
        v14 += v17;
        v13 = v17 + v10[1];
        v10[1] = v13;
        v15 -= v17;
      }
      while ( v15 );
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64))(*(_QWORD *)(a1 + 1352) + 56LL))(
              a1,
              *a4,
              *a2,
              v10,
              a5);
      if ( v20 )
      {
        if ( v20 == -17713 )
          v20 = 0;
        v25 = v20;
      }
      else
      {
        v21 = v10[3];
        v22 = v10[1];
        if ( v21 )
        {
          do
          {
            v22 += *(_QWORD *)(v21 + 8);
            v23 = (__int64 *)v21;
            v21 = *(_QWORD *)(v21 + 24);
          }
          while ( v21 );
        }
        else
        {
          v23 = v10;
        }
        if ( v22 < v9 - 2 || *(_DWORD *)(a5 + 24) )
        {
          sub_816FD0(a1, *a2);
          *a2 = v10;
          *a3 = v23;
          *a6 = 1;
          return 0;
        }
      }
LABEL_24:
      sub_816FD0(a1, v10);
    }
  }
  else
  {
    return 0;
  }
  return v25;
}
