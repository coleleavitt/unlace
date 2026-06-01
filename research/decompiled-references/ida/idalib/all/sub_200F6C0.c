__int64 __fastcall sub_200F6C0(_QWORD *a1, const void *a2, const void *a3, size_t a4, const void *a5, size_t a6)
{
  _QWORD *v6; // rbp
  __int64 v7; // r15
  bool v8; // zf
  size_t v9; // r14
  const void *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-B8h]
  __int16 v20; // [rsp+Ch] [rbp-ACh]
  int v21; // [rsp+1Ch] [rbp-9Ch] BYREF
  _QWORD v22[4]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v23; // [rsp+40h] [rbp-78h]
  _QWORD v24[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v25; // [rsp+70h] [rbp-48h]

  v6 = a1;
  v7 = *((unsigned int *)a1 + 42);
  v20 = (__int16)a2;
  v8 = *(_QWORD *)(a1[19] + 24LL) == 0;
  v21 = 0;
  if ( !v8 )
  {
    a4 = a6;
    a3 = a5;
  }
  v9 = a4;
  v10 = a3;
  if ( v7 )
  {
    v11 = a1[20];
    if ( a4 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = v11;
        if ( *(_QWORD *)(v11 + 8) == v9 )
        {
          a1 = *(_QWORD **)v11;
          a2 = v10;
          v19 = v12;
          v14 = memcmp(*(const void **)v11, v10, v9);
          v12 = v19;
          if ( !v14 )
            break;
        }
        ++v12;
        v11 += 48;
        if ( v7 == v12 )
          goto LABEL_9;
      }
    }
    else
    {
      v18 = 0;
      while ( 1 )
      {
        v13 = v11;
        if ( !*(_QWORD *)(v11 + 8) )
          break;
        ++v18;
        v11 += 48;
        if ( v7 == v18 )
          goto LABEL_9;
      }
    }
    v17 = *(_DWORD *)(v13 + 40);
    v21 = v17;
  }
  else
  {
LABEL_9:
    v15 = sub_227D6D0(a1, a2);
    v25 = 770;
    v23 = 1283;
    v22[0] = "Cannot find option named '";
    v24[0] = v22;
    v22[2] = v10;
    v22[3] = v9;
    v24[2] = "'!";
    result = sub_22116C0(v6, v24, 0, 0, v15);
    if ( (_BYTE)result )
      return result;
    v17 = v21;
  }
  *((_DWORD *)v6 + 30) = v17;
  v8 = v6[72] == 0;
  *((_WORD *)v6 + 6) = v20;
  if ( v8 )
    std::__throw_bad_function_call();
  ((void (__fastcall *)(_QWORD *, int *))v6[73])(v6 + 70, &v21);
  return 0;
}
