__int64 __fastcall sub_440760(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdi

  if ( *(int *)a2 > 1 )
    sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"Tcl_DictObjRemove", a3, a4, a5, a6);
  if ( *(char ***)(a2 + 24) == &off_6554A0 || (result = sub_43FB20(a1, a2), !(_DWORD)result) )
  {
    v8 = *(__int64 **)(a2 + 8);
    if ( v8 )
    {
      if ( v8 != off_656088 )
        Tcl_Free((__int64)v8);
      *(_QWORD *)(a2 + 8) = 0;
    }
    v9 = *(_QWORD *)(a2 + 32);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(v9 + 64))(v9, a3);
    v11 = v10;
    if ( v10 )
    {
      v12 = *(_QWORD *)(v10 + 24);
      v13 = *(_DWORD *)v12 - 1;
      v14 = *(_DWORD *)v12 == 1;
      *(_DWORD *)v12 = v13;
      if ( v13 < 0 || v14 )
      {
        v17 = *(_QWORD *)(v12 + 24);
        if ( v17 && *(_QWORD *)(v17 + 8) )
        {
          sub_47B120(v12);
        }
        else
        {
          v18 = *(__int64 **)(v12 + 8);
          if ( v18 && v18 != off_656088 )
            Tcl_Free((__int64)v18);
          *(_DWORD *)(v12 + 16) = -1;
          sub_496830(v12);
        }
      }
      v15 = *(_QWORD *)(v11 + 48);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 40) = *(_QWORD *)(v11 + 40);
      }
      else
      {
        *(_QWORD *)(v9 + 96) = *(_QWORD *)(v11 + 40);
        v15 = *(_QWORD *)(v11 + 48);
      }
      v16 = *(_QWORD *)(v11 + 40);
      if ( v16 )
        *(_QWORD *)(v16 + 48) = v15;
      else
        *(_QWORD *)(v9 + 88) = v15;
      sub_457BC0(v11);
      ++*(_DWORD *)(v9 + 104);
    }
    return 0;
  }
  return result;
}

