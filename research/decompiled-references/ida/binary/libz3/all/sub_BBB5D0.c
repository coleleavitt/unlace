void __fastcall sub_BBB5D0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rbp
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // r13d
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // esi
  unsigned int v17; // edi
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int *v25; // rdx
  int *v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // [rsp-8h] [rbp-88h]
  __int64 v30; // [rsp+0h] [rbp-80h]
  __int64 v31; // [rsp+0h] [rbp-80h]
  unsigned int v32; // [rsp+8h] [rbp-78h]
  _QWORD *v33; // [rsp+8h] [rbp-78h]
  int v34[2]; // [rsp+8h] [rbp-78h]
  __int64 v35; // [rsp+8h] [rbp-78h]
  int v36[2]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v37; // [rsp+20h] [rbp-60h]
  __int64 v38; // [rsp+28h] [rbp-58h] BYREF
  int v39; // [rsp+30h] [rbp-50h]
  int v40; // [rsp+38h] [rbp-48h]
  __int64 v41; // [rsp+40h] [rbp-40h]
  __int64 v42; // [rsp+48h] [rbp-38h]
  __int128 v43; // [rsp+50h] [rbp-30h]

  if ( a3 != a4 )
  {
    v8 = *a3;
    v30 = *a4;
    v9 = *(_DWORD **)(sub_15D1F10(*a3) + 24);
    if ( v9 && *(_DWORD *)(a1 + 1720) == *v9 && !v9[1] )
    {
      v32 = sub_B39350((__int64)a3, *(_DWORD *)(a1 + 8));
      v11 = sub_B39350((__int64)a4, *(_DWORD *)(a1 + 8));
      v12 = v32;
      v13 = v11;
      if ( v32 != -1 && v11 != -1 )
      {
        v14 = *(_QWORD *)(a1 + 584);
        v15 = v32;
        do
        {
          v16 = v15;
          v15 = *(_DWORD *)(v14 + 4LL * v15);
        }
        while ( v16 != v15 );
        do
        {
          v17 = v11;
          v11 = *(_DWORD *)(v14 + 4LL * v11);
        }
        while ( v17 != v11 );
        if ( v11 != v16 )
        {
          do
          {
            v18 = v12;
            v19 = v12;
            v12 = *(_DWORD *)(v14 + 4LL * v12);
          }
          while ( v19 != v12 );
          do
          {
            v20 = v13;
            v21 = v13;
            v13 = *(_DWORD *)(v14 + 4LL * v13);
          }
          while ( v21 != v13 );
          if ( v19 == v13 )
          {
            *(_QWORD *)v34 = *(_QWORD *)(a1 + 24);
          }
          else
          {
            v22 = *(_QWORD *)(a1 + 592);
            if ( *(_DWORD *)(v22 + 4 * v20) >= *(_DWORD *)(v22 + 4 * v18) )
            {
              v13 = v12;
              v12 = v21;
            }
            *(_DWORD *)(v14 + 4LL * v13) = v12;
            v23 = 4LL * v12;
            *(_DWORD *)(v22 + v23) += *(_DWORD *)(v22 + 4LL * v13);
            v24 = *(_QWORD *)(a1 + 600);
            v25 = (int *)(v24 + v23);
            v26 = (int *)(v24 + 4LL * v13);
            v27 = *v26;
            *v26 = *v25;
            *v25 = v27;
            v33 = *(_QWORD **)(a1 + 576);
            v28 = sub_180C100(v33 + 2, 24);
            *(_DWORD *)(v28 + 16) = v13;
            *(_QWORD *)v28 = off_1C57EE8;
            *(_QWORD *)(v28 + 8) = a1 + 568;
            *(_QWORD *)v36 = v28;
            sub_BB4880(v33, v36);
            *(_QWORD *)v34 = *(_QWORD *)(a1 + 24);
          }
          ++*(_DWORD *)(v8 + 8);
          if ( v30 )
            ++*(_DWORD *)(v30 + 8);
          sub_BD0580(v36, a1, v8, v30, a2);
          sub_BD1D40(a1 + 240, v36);
          sub_2334C0(&v38);
          sub_2334C0((__int64 *)v36);
          sub_C02400(a1, v29, v30, v34[0], a1 + 240, v36[0], v37, v38, v39, v40, v41, v42, v43);
          sub_BBB3C0(a1, a3, a4);
          sub_BB0560(v31, v35);
          sub_BB0560(v8, v35);
        }
      }
    }
    else
    {
      v10 = *(_DWORD **)(sub_15D1F10(v8) + 24);
      if ( v10 && *(_DWORD *)(a1 + 1720) == *v10 && v10[1] == 1 )
      {
        sub_1872CE0("");
        sub_1873130(114, 3211);
      }
    }
  }
}

