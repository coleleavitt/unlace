__int64 __fastcall sub_438B60(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbp
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // rax
  _DWORD *v20; // rdx
  int *v21; // rdi
  int v22; // eax
  bool v23; // zf

  v9 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)a2 = a1;
  *(_QWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 16) = a4;
  *(_DWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 24) = v9;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 48) = 0;
  sub_470800(a2 + 56);
  *(_DWORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 152) = 0;
  *(_DWORD *)(a2 + 156) = 60;
  *(_QWORD *)(a2 + 112) = a2 + 228;
  *(_QWORD *)(a2 + 120) = a2 + 228;
  *(_DWORD *)(a2 + 160) = 0;
  *(_DWORD *)(a2 + 176) = 0;
  *(_QWORD *)(a2 + 128) = a2 + 478;
  *(_DWORD *)(a2 + 180) = 5;
  *(_DWORD *)(a2 + 184) = 0;
  *(_DWORD *)(a2 + 200) = 40;
  *(_QWORD *)(a2 + 144) = a2 + 480;
  *(_DWORD *)(a2 + 204) = 0;
  *(_DWORD *)(a2 + 3276) = 1;
  *(_QWORD *)(a2 + 168) = a2 + 2400;
  *(_QWORD *)(a2 + 192) = a2 + 2540;
  v10 = sub_40FB00(120);
  *(_QWORD *)(a2 + 3264) = v10;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = 0;
  *(_QWORD *)(v10 + 8) = 0;
  sub_457B90(v10 + 32, 1);
  if ( !a5 || *(_DWORD *)a5 == 1 )
  {
    v16 = *(_QWORD *)(a2 + 24);
    v15 = *(_DWORD **)(a2 + 3264);
    *(_DWORD *)(a2 + 3272) = 1;
    *v15 = v16 == 0 ? 2 : 5;
  }
  else
  {
    v11 = (_QWORD *)sub_4495F0(a1, 72);
    v12 = 0;
    *v11 = *a5;
    v11[1] = a5[1];
    v11[2] = a5[2];
    v11[3] = a5[3];
    v11[4] = a5[4];
    v11[5] = a5[5];
    v11[6] = a5[6];
    v11[7] = a5[7];
    v11[8] = a5[8];
    if ( *(_DWORD *)a5 == 2 )
    {
      sub_449C70(v11);
      v12 = 1;
    }
    if ( *((_DWORD *)v11 + 4) <= a6 || (v13 = *(_DWORD *)(v11[1] + 4LL * a6), v13 < 0) )
    {
      v19 = *(_QWORD *)(a2 + 24);
      v20 = *(_DWORD **)(a2 + 3264);
      *(_DWORD *)(a2 + 3272) = 1;
      *v20 = v19 == 0 ? 2 : 5;
      if ( v12 )
      {
        if ( *(_DWORD *)v11 == 4 )
        {
          v21 = (int *)v11[5];
          v22 = *v21 - 1;
          v23 = *v21 == 1;
          *v21 = v22;
          if ( v22 < 0 || v23 )
            sub_47B120(v21);
        }
      }
    }
    else
    {
      *(_DWORD *)(a2 + 3272) = v13;
      v14 = *(_QWORD *)(a2 + 3264);
      *(_DWORD *)v14 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 == 4 )
      {
        *(_QWORD *)(v14 + 8) = v11[5];
        if ( v12 )
          v11[5] = 0;
        else
          ++*(_DWORD *)v11[5];
      }
    }
    sub_449510(a1, v11);
    v15 = *(_DWORD **)(a2 + 3264);
  }
  v17 = *(_DWORD *)(a2 + 3272);
  *(_QWORD *)(a2 + 3280) = 0;
  *(_QWORD *)(a2 + 3288) = 0;
  v15[1] = v17;
  *(_DWORD *)(a2 + 216) = 0;
  *(_DWORD *)(a2 + 220) = 5;
  *(_DWORD *)(a2 + 224) = 0;
  *(_QWORD *)(a2 + 208) = a2 + 3184;
  return a2 + 3184;
}

