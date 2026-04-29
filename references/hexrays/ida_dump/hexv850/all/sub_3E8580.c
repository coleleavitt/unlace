__int64 __fastcall sub_3E8580(__int64 **a1, unsigned int *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  int v4; // r14d
  __int64 v5; // rbx
  char v6; // r12
  _DWORD *v7; // rdi
  __int64 (__fastcall *v8)(_DWORD *, unsigned int); // rax
  __int64 v9; // rbp
  int *v10; // rax
  int v11; // edx
  int v13; // eax

  v2 = *a2;
  v3 = **a1;
  v4 = *((_DWORD *)*a1 + 4);
  v5 = *((int *)*a1 + 3);
  v6 = *((_BYTE *)*a1 + 8);
  v7 = *(_DWORD **)(v3 + 832);
  v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v7 + 168LL);
  if ( v8 == sub_3E40F0 )
  {
    if ( (unsigned int)v2 <= 0x1F )
    {
      v9 = v7[88] + v7[20] * (int)v2;
    }
    else if ( (_DWORD)v2 == 48 )
    {
      v9 = (int)v7[120];
    }
    else if ( (_DWORD)v2 == 49 )
    {
      v9 = (int)v7[121];
    }
    else
    {
      v9 = -1;
    }
  }
  else
  {
    v13 = v8(v7, v2);
    v7 = *(_DWORD **)(v3 + 832);
    v9 = v13;
  }
  sub_3E8420(v3, 0xDu, v7[21], v5, v4, v5, 0);
  v10 = *(int **)(v3 + 832);
  v11 = v10[20];
  if ( v6 )
    sub_3E8420(v3, 1u, v11, v9, v10[16], v5, v10[21]);
  else
    sub_3E8420(v3, 2u, v11, v10[16], v5, v9, v10[21]);
  return 0;
}
