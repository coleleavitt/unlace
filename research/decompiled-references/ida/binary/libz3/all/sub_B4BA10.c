__int64 __fastcall sub_B4BA10(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int v3; // eax
  _DWORD *v4; // rdx
  _DWORD *v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // eax

  result = sub_9671F0(a1);
  if ( !*((_WORD *)a2 + 2) )
  {
    if ( (v3 = sub_15F0200(a1 + 56), !*((_WORD *)a2 + 2))
      && (v4 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
      && v3 == *v4
      && v4[1] == 1
      || (result = sub_15F0200(a1 + 56), !*((_WORD *)a2 + 2))
      && (v5 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
      && (_DWORD)result == *v5
      && v5[1] == 2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2);
      v7 = sub_B39350(*(_QWORD *)(v6 + 112), *(_DWORD *)(a1 + 8));
      return sub_B4A4F0(a1, v7, (double *)v6);
    }
  }
  return result;
}

