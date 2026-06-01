__int64 __fastcall sub_440C90(__int64 a1, int *a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rdi

  if ( *a2 > 1 )
  {
    sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"Tcl_DictObjRemoveKeyList", a3, a4, a5, a6);
    if ( a3 > 0 )
      goto LABEL_3;
  }
  else if ( a3 > 0 )
  {
    goto LABEL_3;
  }
  sub_47D740((unsigned int)"%s called with empty key list", (unsigned int)"Tcl_DictObjRemoveKeyList", a3, a4, a5, a6);
LABEL_3:
  v8 = sub_440270(a1, (__int64)a2, a3 - 1, a4, 1);
  result = 1;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 32);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v10 + 64))(v10, *(_QWORD *)(a4 + 8LL * a3 - 8));
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)(v11 + 24);
      v14 = *(_DWORD *)v13 - 1;
      v15 = *(_DWORD *)v13 == 1;
      *(_DWORD *)v13 = v14;
      if ( v14 < 0 || v15 )
      {
        v18 = *(_QWORD *)(v13 + 24);
        if ( v18 && *(_QWORD *)(v18 + 8) )
        {
          sub_47B120(v13);
        }
        else
        {
          v19 = *(__int64 **)(v13 + 8);
          if ( v19 && v19 != off_656088 )
            Tcl_Free((__int64)v19);
          *(_DWORD *)(v13 + 16) = -1;
          sub_496830(v13);
        }
      }
      v16 = *(_QWORD *)(v12 + 48);
      if ( v16 )
      {
        *(_QWORD *)(v16 + 40) = *(_QWORD *)(v12 + 40);
      }
      else
      {
        *(_QWORD *)(v10 + 96) = *(_QWORD *)(v12 + 40);
        v16 = *(_QWORD *)(v12 + 48);
      }
      v17 = *(_QWORD *)(v12 + 40);
      if ( v17 )
        *(_QWORD *)(v17 + 48) = v16;
      else
        *(_QWORD *)(v10 + 88) = v16;
      sub_457BC0(v12);
    }
    sub_440500(v8);
    return 0;
  }
  return result;
}

