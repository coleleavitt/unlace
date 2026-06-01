__int64 __fastcall sub_440560(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  int v12; // edx
  _QWORD *v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  __int64 *v18; // rdi
  int v19; // [rsp+4h] [rbp-24h] BYREF

  if ( *(int *)a2 > 1 )
    sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"Tcl_DictObjPut", a3, (_DWORD)a4, a5, a6);
  if ( *(char ***)(a2 + 24) == &off_6554A0 || (result = sub_43FB20(a1, a2), !(_DWORD)result) )
  {
    v9 = *(__int64 **)(a2 + 8);
    if ( v9 )
    {
      if ( v9 != off_656088 )
        Tcl_Free((__int64)v9);
      *(_QWORD *)(a2 + 8) = 0;
    }
    v10 = *(_QWORD *)(a2 + 32);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(v10 + 72))(v10, a3, &v19);
    v12 = v19;
    v13 = v11;
    if ( v19 )
    {
      v11[6] = 0;
      if ( *(_QWORD *)(v10 + 88) )
      {
        v11[5] = *(_QWORD *)(v10 + 96);
        *(_QWORD *)(*(_QWORD *)(v10 + 96) + 48LL) = v11;
      }
      else
      {
        v11[5] = 0;
        *(_QWORD *)(v10 + 88) = v11;
      }
      *(_QWORD *)(v10 + 96) = v11;
    }
    ++*a4;
    if ( !v12 )
    {
      v14 = v11[3];
      v15 = *(_DWORD *)v14 - 1;
      v16 = *(_DWORD *)v14 == 1;
      *(_DWORD *)v14 = v15;
      if ( v15 < 0 || v16 )
      {
        v17 = *(_QWORD *)(v14 + 24);
        if ( v17 && *(_QWORD *)(v17 + 8) )
        {
          sub_47B120(v14);
        }
        else
        {
          v18 = *(__int64 **)(v14 + 8);
          if ( v18 )
          {
            if ( v18 != off_656088 )
              Tcl_Free((__int64)v18);
          }
          *(_DWORD *)(v14 + 16) = -1;
          sub_496830(v14);
        }
      }
    }
    ++*(_DWORD *)(v10 + 104);
    v13[3] = a4;
    return 0;
  }
  return result;
}

