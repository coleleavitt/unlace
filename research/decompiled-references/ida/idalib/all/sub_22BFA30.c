__int64 __fastcall sub_22BFA30(__int64 a1, __int16 a2, const void *a3, size_t a4, const void *a5, size_t a6)
{
  __int64 v6; // r15
  bool v7; // zf
  size_t v8; // r14
  const void *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r13
  int v13; // eax
  void *v14; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-B8h]
  int v19; // [rsp+1Ch] [rbp-9Ch] BYREF
  _QWORD v20[4]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v21; // [rsp+40h] [rbp-78h]
  _QWORD v22[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v23; // [rsp+70h] [rbp-48h]

  v6 = *(unsigned int *)(a1 + 168);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 0;
  v19 = 0;
  if ( !v7 )
  {
    a4 = a6;
    a3 = a5;
  }
  v8 = a4;
  v9 = a3;
  if ( v6 )
  {
    v10 = *(_QWORD *)(a1 + 160);
    if ( a4 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = v10;
        if ( *(_QWORD *)(v10 + 8) == v8 )
        {
          v18 = v11;
          v13 = memcmp(*(const void **)v10, v9, v8);
          v11 = v18;
          if ( !v13 )
            break;
        }
        ++v11;
        v10 += 48;
        if ( v6 == v11 )
          goto LABEL_9;
      }
    }
    else
    {
      v17 = 0;
      while ( 1 )
      {
        v12 = v10;
        if ( !*(_QWORD *)(v10 + 8) )
          break;
        ++v17;
        v10 += 48;
        if ( v6 == v17 )
          goto LABEL_9;
      }
    }
    v16 = *(_DWORD *)(v12 + 40);
    v19 = v16;
  }
  else
  {
LABEL_9:
    v14 = sub_227D6D0();
    v21 = 770;
    v23 = 1283;
    v22[0] = "Cannot find option named '";
    v20[0] = v22;
    v22[2] = v9;
    v22[3] = v8;
    v20[2] = "'!";
    result = sub_22116C0(a1, (__int64)v20, 0, 0, (__int64)v14);
    if ( (_BYTE)result )
      return result;
    v16 = v19;
  }
  *(_DWORD *)(a1 + 120) = v16;
  v7 = *(_QWORD *)(a1 + 576) == 0;
  *(_WORD *)(a1 + 12) = a2;
  if ( v7 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, int *))(a1 + 584))(a1 + 560, &v19);
  return 0;
}
