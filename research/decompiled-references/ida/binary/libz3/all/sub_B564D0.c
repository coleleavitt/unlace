__int64 __fastcall sub_B564D0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  unsigned int v18; // r13d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // [rsp+0h] [rbp-78h]
  unsigned int v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  char v38[8]; // [rsp+18h] [rbp-60h] BYREF
  char v39[88]; // [rsp+20h] [rbp-58h] BYREF

  v35 = *(_QWORD *)(a1 + 32) + 24LL;
  v8 = *(_DWORD **)(a2 + 24);
  if ( v8 && *v8 == *(_DWORD *)(a1 + 40) && v8[1] == 1 )
  {
    v29 = sub_15E1AF0(*(_QWORD *)(a1 + 24));
    v30 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v31 = *a4;
    if ( *a4 )
    {
      v32 = a4[1];
      v17 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v32, v31);
    }
    *a4 = v30;
    v33 = *a3;
    if ( *a3 != v30 )
    {
      if ( v33 )
      {
        v34 = a3[1];
        v17 = (*(_DWORD *)(v33 + 8))-- == 1;
        if ( v17 )
        {
          sub_15D7BC0(v34, v33);
          v30 = *a4;
        }
      }
      *a3 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
    }
  }
  else
  {
    sub_181A6B0(v38);
    v36 = sub_15C5560(a1 + 24, a2);
    v13 = sub_15C5540((int)a1 + 24, a2, v9, v10, v11, v12);
    sub_181AAB0(v35, v38, v13, v36, 0);
    v14 = sub_15CC210(*(_QWORD *)(a1 + 32), v38);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = *a3;
    if ( *a3 )
    {
      v16 = a3[1];
      v17 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v17 )
      {
        v37 = v14;
        sub_15D7BC0(v16, v15);
        v14 = v37;
      }
    }
    *a3 = v14;
    v18 = sub_15C5560(a1 + 24, a2);
    v23 = sub_15C5540((int)a1 + 24, a2, v19, v20, v21, v22);
    sub_181AAB0(v35, v38, v23, v18, 1);
    v24 = sub_15CC210(*(_QWORD *)(a1 + 32), v38);
    v25 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v26 = *a4;
    if ( *a4 )
    {
      v27 = a4[1];
      v17 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v27, v26);
    }
    *a4 = v25;
    sub_182EF00(*(_QWORD *)(v35 + 728), v39);
  }
  return 1;
}

