__int64 __fastcall sub_B32410(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v7; // rax
  __int64 v8; // rcx
  unsigned int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rsi
  _DWORD *v14; // rax
  int v15; // eax

  v7 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v7 || (v8 = *(unsigned int *)(a1 + 8), *v7 != (_DWORD)v8) )
  {
LABEL_3:
    sub_BE15D0(a1, a2);
    return 0;
  }
  v10 = v7[1];
  if ( v10 > 1 )
  {
    if ( v10 == 3 )
      return 0;
    goto LABEL_3;
  }
  if ( (unsigned __int8)sub_B31980(a1, a2, a3, v8, a5, a6) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **((unsigned int **)a2 + 4));
    v12 = sub_B39350(v11, *(unsigned int *)(a1 + 8));
    if ( v12 == -1 || v11 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v12) )
      (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v11);
    if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) || !*(_DWORD *)(*(_QWORD *)(a1 + 264) + 12LL) )
    {
      v13 = (unsigned int)sub_B39350(v11, *(unsigned int *)(a1 + 8));
      v14 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v14 && *(_DWORD *)(a1 + 8) == *v14 )
      {
        v15 = v14[1];
        if ( v15 == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 424LL))(
            a1,
            v13,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2));
        }
        else if ( !v15 )
        {
          sub_B321C0(a1, v13, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2));
        }
      }
    }
  }
  return 1;
}

