__int64 __fastcall sub_440AF0(__int64 a1, int *a2, int a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v13; // edx
  _QWORD *v14; // rbp
  __int64 v15; // rbx
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  __int64 *v19; // rdi
  int v20; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( *a2 > 1 )
  {
    sub_47D740(
      (unsigned int)"%s called with shared object",
      (unsigned int)"Tcl_DictObjPutKeyList",
      a3,
      a4,
      (_DWORD)a5,
      a6);
    if ( a3 > 0 )
      goto LABEL_3;
  }
  else if ( a3 > 0 )
  {
    goto LABEL_3;
  }
  sub_47D740(
    (unsigned int)"%s called with empty key list",
    (unsigned int)"Tcl_DictObjPutKeyList",
    a3,
    a4,
    (_DWORD)a5,
    a6);
LABEL_3:
  v9 = sub_440270(a1, (__int64)a2, a3 - 1, a4, 5);
  result = 1;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 32);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v11 + 72))(
                      v11,
                      *(_QWORD *)(a4 + 8LL * a3 - 8),
                      &v20);
    v13 = v20;
    v14 = v12;
    if ( v20 )
    {
      v12[6] = 0;
      if ( *(_QWORD *)(v11 + 88) )
      {
        v12[5] = *(_QWORD *)(v11 + 96);
        *(_QWORD *)(*(_QWORD *)(v11 + 96) + 48LL) = v12;
      }
      else
      {
        v12[5] = 0;
        *(_QWORD *)(v11 + 88) = v12;
      }
      *(_QWORD *)(v11 + 96) = v12;
    }
    ++*a5;
    if ( !v13 )
    {
      v15 = v12[3];
      v16 = *(_DWORD *)v15 - 1;
      v17 = *(_DWORD *)v15 == 1;
      *(_DWORD *)v15 = v16;
      if ( v16 < 0 || v17 )
      {
        v18 = *(_QWORD *)(v15 + 24);
        if ( v18 && *(_QWORD *)(v18 + 8) )
        {
          sub_47B120(v15);
        }
        else
        {
          v19 = *(__int64 **)(v15 + 8);
          if ( v19 )
          {
            if ( v19 != off_656088 )
              Tcl_Free((__int64)v19);
          }
          *(_DWORD *)(v15 + 16) = -1;
          sub_496830(v15);
        }
      }
    }
    v14[3] = a5;
    sub_440500(v9);
    return 0;
  }
  return result;
}

