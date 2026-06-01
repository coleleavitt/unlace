__int64 __fastcall sub_440900(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rax

  if ( *(char ***)(a2 + 24) == &off_6554A0 || (result = sub_43FB20(a1, a2), !(_DWORD)result) )
  {
    v11 = *(_QWORD *)(a2 + 32);
    v12 = *(_QWORD **)(v11 + 88);
    if ( v12 )
    {
      *a6 = 0;
      v13 = *(_DWORD *)(v11 + 104);
      *(_QWORD *)(a3 + 16) = v11;
      *(_DWORD *)(a3 + 8) = v13;
      v14 = v12[6];
      ++*(_DWORD *)(v11 + 108);
      *(_QWORD *)a3 = v14;
      if ( a4 )
      {
        if ( *(_DWORD *)(v11 + 60) == 1 || *(_DWORD *)(v11 + 60) == -1 )
          v15 = (_QWORD *)v12[4];
        else
          v15 = v12 + 4;
        *a4 = v15;
      }
      if ( a5 )
        *a5 = v12[3];
      return 0;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = -1;
      *a6 = 1;
      return 0;
    }
  }
  return result;
}

