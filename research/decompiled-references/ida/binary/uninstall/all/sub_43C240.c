__int64 __fastcall sub_43C240(int a1, __int64 a2)
{
  unsigned int v2; // r13d
  int v3; // edx
  unsigned int v4; // eax
  __int64 v5; // r12
  int v6; // r15d
  int v7; // eax
  void *v8; // rbx
  __int64 v9; // rdx
  _DWORD *v10; // rax
  int v11; // edx

  v2 = *(_DWORD *)(a2 + 176);
  v3 = *(_DWORD *)(a2 + 180);
  v4 = v2;
  if ( v3 > (int)v2 )
  {
    v9 = *(_QWORD *)(a2 + 168);
    v5 = (int)v2;
  }
  else
  {
    v5 = (int)v2;
    v6 = 2 * v3;
    v7 = 56 * v3;
    if ( *(_DWORD *)(a2 + 184) )
    {
      v9 = sub_40FC10(*(void **)(a2 + 168), v7);
      *(_QWORD *)(a2 + 168) = v9;
    }
    else
    {
      v8 = (void *)sub_40FB00(v7);
      memcpy(v8, *(const void **)(a2 + 168), 28LL * (int)v2);
      v9 = (__int64)v8;
      *(_QWORD *)(a2 + 168) = v8;
      *(_DWORD *)(a2 + 184) = 1;
    }
    v4 = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(a2 + 180) = v6;
  }
  *(_DWORD *)(a2 + 176) = v4 + 1;
  v10 = (_DWORD *)(v9 + 28 * v5);
  *v10 = a1;
  v11 = *(_DWORD *)(a2 + 36);
  v10[2] = -1;
  v10[3] = -1;
  v10[4] = -1;
  v10[5] = -1;
  v10[1] = v11;
  v10[6] = -1;
  return v2;
}

