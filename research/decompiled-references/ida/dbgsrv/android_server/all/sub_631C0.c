/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_631C0
// Address: 0x00000000000631C0

//----- (00000000000631C0) ----------------------------------------------------
__int64 __fastcall sub_631C0(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x8
  const char *v4; // x1
  __int64 result; // x0
  __int64 v6; // x10
  int v7; // w8
  void *v8; // x0
  __int64 v9; // x21
  __int64 v10; // x9
  int *v11; // x20
  const char *v12; // x1
  __int64 v13; // x9
  __int64 v14; // x8
  int *v15; // x20
  unsigned int v16; // w19
  void *ptr[4]; // [xsp+0h] [xbp-60h] BYREF

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return 0;
  v2 = *(int *)(*(_QWORD *)(a1 + 184) + 24LL);
  if ( !(_DWORD)v2 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v2);
  if ( *(_QWORD *)(v3 + 40) )
    v4 = *(const char **)(v3 + 32);
  else
    v4 = &byte_F154B;
  result = sub_62DE4(a1, v4);
  if ( !(_DWORD)result )
  {
    ptr[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
    sub_635B0(a1, 2);
    v6 = *(_QWORD *)(a1 + 328);
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 320) + 2 * (v6 - 1));
    if ( v6 )
      *(_QWORD *)(a1 + 328) = v6 - 1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8) + 24LL) = v7;
    sub_637B8((__int64 *)(a1 + 160), ptr);
    v8 = ptr[0];
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    v9 = *(_QWORD *)(a1 + 184);
    while ( *(_DWORD *)(v9 + 24) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * *(int *)(*(_QWORD *)(a1 + 184) + 24LL));
      v8 = (void *)sub_716E8(v9, (_QWORD *)(v9 + 32));
      v10 = *(_QWORD *)(a1 + 352);
      v11 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * (v10 - 1));
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        if ( v10 )
          *(_QWORD *)(a1 + 352) = v10 - 1;
        v16 = sub_642D8((pthread_mutex_t *)a1, v11, 0, 0);
        if ( v11 )
        {
          sub_62860(v11);
          operator delete(v11);
        }
        return set_qerrno(v16);
      }
      if ( v11[6] >= 1 )
      {
        if ( *(_QWORD *)(v9 + 40) )
          v12 = *(const char **)(v9 + 32);
        else
          v12 = &byte_F154B;
        set_error_string(nullptr, v12);
        v16 = 56;
        return set_qerrno(v16);
      }
    }
    v13 = *(_QWORD *)(a1 + 352);
    v14 = v13 - 1;
    v15 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * (v13 - 1));
    if ( v13 )
    {
      *(_QWORD *)(a1 + 352) = v14;
      if ( !v15 )
      {
LABEL_22:
        if ( v14 )
        {
          if ( !under_debugger )
            v8 = interr(270);
          __break(1u);
          sub_39134(v8);
        }
        return 0;
      }
    }
    else
    {
      v14 = 0;
      if ( !v15 )
        goto LABEL_22;
    }
    sub_62860(v15);
    operator delete(v15);
    v14 = *(_QWORD *)(a1 + 352);
    goto LABEL_22;
  }
  return result;
}
// 633F4: variable 'v8' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
