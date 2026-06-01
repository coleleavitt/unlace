__int64 __fastcall sub_40DC70(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned int v11; // esi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v26; // [rsp+18h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0;
  sub_403090(a4, a1 + 40);
  for ( result = a1[40]; result; result = a1[40] )
  {
    if ( v8 >= *(_DWORD *)(result - 4) )
      break;
    v10 = a1[1];
    v11 = *(_DWORD *)(a2 + 8);
    v27 = 0;
    v12 = *(_QWORD **)a2;
    v28 = v10;
    v13 = sub_3FCD00(v12, v11, *(_QWORD *)(result + 8LL * v8));
    sub_40B100((__int64)v29, v13[1], a3, v14, v15, v16);
    v17 = v29[1];
    ++v8;
    v18 = v29[0];
    if ( *(_QWORD *)(a1[1] + 856LL) != v29[0] )
    {
      sub_43D1D0(*a1 + 8LL, v29[0], 0, v8, &v27, 1);
      v19 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v20 = *(_QWORD *)(a5 + 8);
      if ( !v20 || (v21 = *(_DWORD *)(v20 - 4), v21 == *(_DWORD *)(v20 - 8)) )
      {
        v26 = v19;
        sub_23A6F0((unsigned int **)(a5 + 8));
        v20 = *(_QWORD *)(a5 + 8);
        v19 = v26;
        v21 = *(_DWORD *)(v20 - 4);
      }
      *(_QWORD *)(v20 + 8LL * v21) = v19;
      *(_DWORD *)(v20 - 4) = v21 + 1;
    }
    if ( v18 )
    {
      v22 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v17, v18);
    }
    v23 = v27;
    if ( v27 )
    {
      v24 = v28;
      v22 = (*(_DWORD *)(v27 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v24, v23);
    }
  }
  return result;
}

