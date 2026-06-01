__int64 __fastcall sub_B326F0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (*v7)(void); // rax
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rsi
  _DWORD *v15; // rax
  int v16; // eax

  v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v7 != (char *)sub_B32410 )
    return v7();
  v8 = *(unsigned int **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v8 || (v9 = *v8, *(_DWORD *)(a1 + 8) != (_DWORD)v9) )
  {
LABEL_4:
    sub_BE15D0(a1, a2);
    return 0;
  }
  v11 = v8[1];
  if ( v11 > 1 )
  {
    if ( v11 == 3 )
      return 0;
    goto LABEL_4;
  }
  if ( (unsigned __int8)sub_B31980(a1, a2, (__int64)sub_B32410, v9, a5, a6) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **((unsigned int **)a2 + 4));
    v13 = sub_B39350(v12, *(unsigned int *)(a1 + 8));
    if ( v13 == -1 || v12 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v13) )
      (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v12);
    if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) || !*(_DWORD *)(*(_QWORD *)(a1 + 264) + 12LL) )
    {
      v14 = (unsigned int)sub_B39350(v12, *(unsigned int *)(a1 + 8));
      v15 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v15 && *(_DWORD *)(a1 + 8) == *v15 )
      {
        v16 = v15[1];
        if ( v16 == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 424LL))(
            a1,
            v14,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2));
        }
        else if ( !v16 )
        {
          sub_B321C0(a1, v14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2));
        }
      }
    }
  }
  return 1;
}

