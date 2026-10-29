__int64 __fastcall sub_7B0130(_QWORD *a1, unsigned int *a2)
{
  int v2; // r12d
  __int64 v4; // rsi
  __int64 (*v5)(void); // rax
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // ebp
  int v9; // eax
  int v10; // edx

  v4 = a2[4];
  if ( (_DWORD)v4 == -2 )
    goto LABEL_7;
  v5 = *(__int64 (**)(void))(*a1 + 536LL);
  if ( v5 != sub_7C55E0 )
  {
    v8 = v5();
    LOBYTE(v2) = v8 == 0;
    goto LABEL_8;
  }
  v6 = a1[20];
  if ( !v6 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v4);
    LOBYTE(v2) = v8 == 0;
    goto LABEL_8;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 880) + 4LL * ((unsigned int)v4 >> 1));
  if ( v7 >= *(_DWORD *)(v6 + 888) )
  {
    if ( (((unsigned __int8)v7 ^ (unsigned __int8)v4) & 1) != 0 )
    {
      v2 = 0;
      v8 = -1;
LABEL_8:
      v9 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, a1 + 10);
      v10 = v9;
      LOBYTE(v9) = v9 == 0;
      LOBYTE(v10) = v10 != v8;
      return v10 & ((v2 | v9) ^ 1u);
    }
LABEL_7:
    v2 = 0;
    v8 = 1;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, a1 + 10);
  return 0;
}

