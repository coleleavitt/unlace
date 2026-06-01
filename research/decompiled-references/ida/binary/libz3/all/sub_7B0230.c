__int64 __fastcall sub_7B0230(_QWORD *a1, unsigned int *a2)
{
  __int64 v3; // rsi
  __int64 (*v4)(void); // rax
  __int64 v5; // rax
  unsigned int v6; // edx
  bool v7; // r12
  int v8; // ebp
  int v9; // eax

  v3 = a2[4];
  if ( (_DWORD)v3 == -2 )
    goto LABEL_7;
  v4 = *(__int64 (**)(void))(*a1 + 536LL);
  if ( v4 != sub_7C55E0 )
  {
    v8 = v4();
    v7 = v8 == 0;
    goto LABEL_8;
  }
  v5 = a1[20];
  if ( !v5 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v3);
    v7 = v8 == 0;
    goto LABEL_8;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 880) + 4LL * ((unsigned int)v3 >> 1));
  if ( v6 < *(_DWORD *)(v5 + 888) )
  {
    (*(void (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, a1 + 10);
    return 0;
  }
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v3) & 1) == 0 )
  {
LABEL_7:
    v7 = 0;
    v8 = 1;
  }
  else
  {
    v7 = 0;
    v8 = -1;
  }
LABEL_8:
  v9 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, a1 + 10);
  if ( v9 && !v7 )
    return 2 * (unsigned int)(v8 == v9) - 1;
  return 0;
}

