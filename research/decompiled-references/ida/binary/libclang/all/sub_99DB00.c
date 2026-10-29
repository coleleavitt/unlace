__int64 __fastcall sub_99DB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v9; // edx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned int v13; // r10d
  __int64 v14; // r11
  int v15; // r9d
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  int v19; // edx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rbp
  unsigned int v23; // r10d
  __int64 v24; // r11
  int v25; // r9d
  int v26; // edx
  int v27; // ebx
  int v28; // ebp
  __int64 *v29; // rsi
  int v31; // [rsp+8h] [rbp-40h] BYREF
  int v32; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v33[7]; // [rsp+10h] [rbp-38h] BYREF

  v9 = *(_DWORD *)(a3 + 48);
  v10 = *(_QWORD *)a3;
  if ( v9 == 1 )
  {
    v16 = v10 + *(_DWORD *)(a3 + 32);
  }
  else if ( v9
         || (v11 = *(_QWORD *)(a3 + 24)) == 0
         || ((v12 = *(_QWORD *)(v11 + 32), v13 = *(_DWORD *)(a3 + 32), *(_DWORD *)(v12 + 16) != v13) && v13
           ? (v14 = *(_QWORD *)(v11 + v13 + 32))
           : (v14 = *(_QWORD *)(v11 + 32)),
             v15 = *(_DWORD *)(v14 + 12),
             v15 == -1) )
  {
    v16 = *(_QWORD *)a3;
  }
  else
  {
    v16 = -1;
    if ( v10 != 0xFFFFFFFF && *(unsigned int *)(v12 + 20) >= v10 )
    {
      v16 = *(_QWORD *)a3;
      v17 = v16;
      if ( v13 != -1 )
      {
        v18 = 0;
        if ( v10 != v13 )
        {
          v18 = 32;
          if ( *(_QWORD *)(v14 + 32) )
            v18 = 16;
        }
        v17 = v10 - v13 - v18;
      }
      if ( v15 == v17 && v15 )
        v16 = -1;
    }
  }
  v31 = v16;
  v19 = *(_DWORD *)(a4 + 48);
  v20 = *(_QWORD *)a4;
  if ( v19 == 1 )
  {
    v26 = v20 + *(_DWORD *)(a4 + 32);
  }
  else if ( v19
         || (v21 = *(_QWORD *)(a4 + 24)) == 0
         || ((v22 = *(_QWORD *)(v21 + 32), v23 = *(_DWORD *)(a4 + 32), *(_DWORD *)(v22 + 16) != v23) && v23
           ? (v24 = *(_QWORD *)(v21 + v23 + 32))
           : (v24 = *(_QWORD *)(v21 + 32)),
             v25 = *(_DWORD *)(v24 + 12),
             v25 == -1) )
  {
    v26 = *(_QWORD *)a4;
  }
  else
  {
    v26 = -1;
    if ( v20 != 0xFFFFFFFF && *(unsigned int *)(v22 + 20) >= v20 )
    {
      v26 = *(_QWORD *)a4;
      v27 = v26;
      if ( v23 != -1 )
      {
        v28 = 0;
        if ( v20 != v23 )
        {
          v28 = 32;
          if ( *(_QWORD *)(v24 + 32) )
            v28 = 16;
        }
        v27 = v20 - v23 - v28;
      }
      if ( v25 == v27 && v25 )
        v26 = -1;
    }
  }
  v32 = v26;
  v29 = *(__int64 **)(a1 + 192);
  v33[1] = a4;
  v33[2] = &v32;
  v33[0] = &v31;
  sub_998620(
    a3,
    v29,
    0,
    a5,
    (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, _BOOL4))sub_999A50,
    (__int64)v33);
  return 1;
}

