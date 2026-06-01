__int64 __fastcall sub_2052700(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v6; // r14
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edx
  int v11; // r9d
  __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 *v14; // r10
  unsigned int v15; // r13d
  __int64 v16; // r15
  char v17; // al
  __int64 v18; // rcx
  __int64 *v19; // r10
  __int64 v20; // rsi
  char v21; // al
  char v22; // al
  __int64 *v23; // r10
  char v24; // al
  __int64 v25; // rsi
  char v26; // al
  __int64 *v27; // [rsp+8h] [rbp-80h]
  __int64 *v28; // [rsp+8h] [rbp-80h]
  __int64 *v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 *v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  int v33; // [rsp+10h] [rbp-78h]
  unsigned int v34; // [rsp+10h] [rbp-78h]
  unsigned int v35; // [rsp+18h] [rbp-70h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  int v37; // [rsp+18h] [rbp-70h]
  int v38; // [rsp+20h] [rbp-68h]
  unsigned int v39; // [rsp+20h] [rbp-68h]
  __int64 *v40; // [rsp+20h] [rbp-68h]
  __int64 *v41; // [rsp+28h] [rbp-60h]
  __int64 *v42; // [rsp+28h] [rbp-60h]
  __int64 *v43; // [rsp+28h] [rbp-60h]
  __int64 *v44; // [rsp+28h] [rbp-60h]
  __int64 *v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h] BYREF
  int v47; // [rsp+38h] [rbp-50h]
  __int64 v48; // [rsp+40h] [rbp-48h] BYREF
  int v49; // [rsp+48h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v6 = *a1;
    v47 = 0;
    v8 = v3 - 1;
    v46 = -1;
    v49 = 0;
    v48 = -2;
    v9 = sub_220C660(a2);
    v10 = *(_DWORD *)(a2 + 8);
    v11 = 1;
    v12 = 0;
    v13 = &v46;
    v14 = &v48;
    v15 = v8 & v9;
    if ( v10 <= 0x40 )
    {
      while ( 1 )
      {
        v16 = v6 + 24LL * v15;
        if ( v10 == *(_DWORD *)(v16 + 8) && *(_QWORD *)a2 == *(_QWORD *)v16 )
          break;
        v43 = v14;
        v39 = v10;
        v36 = v12;
        v33 = v11;
        v29 = v13;
        v22 = sub_2050E70(v6 + 24LL * v15, (__int64)v13);
        v18 = v36;
        v23 = v43;
        if ( v22 )
        {
LABEL_6:
          if ( !v18 )
            v18 = v16;
          *a3 = v18;
          return 0;
        }
        v20 = (__int64)v43;
        v42 = v29;
        v28 = v23;
        v21 = sub_2050E70(v6 + 24LL * v15, v20);
        v14 = v28;
        v10 = v39;
        v13 = v42;
        if ( v36 || !v21 )
          v16 = v36;
        v12 = v16;
        v11 = v33 + 1;
        v15 = v8 & (v33 + v15);
      }
    }
    else
    {
      while ( 1 )
      {
        v16 = v6 + 24LL * v15;
        if ( *(_DWORD *)(v16 + 8) == v10 )
        {
          v44 = v14;
          v40 = v13;
          v37 = v11;
          v34 = v10;
          v30 = v12;
          v24 = sub_2205D70(a2, v6 + 24LL * v15);
          v12 = v30;
          v10 = v34;
          v11 = v37;
          v13 = v40;
          v14 = v44;
          if ( v24 )
            break;
        }
        v41 = v14;
        v32 = v12;
        v27 = v13;
        v38 = v11;
        v35 = v10;
        v17 = sub_2050E70(v6 + 24LL * v15, (__int64)v13);
        v18 = v32;
        v19 = v41;
        if ( v17 )
          goto LABEL_6;
        v25 = (__int64)v41;
        v45 = v27;
        v31 = v19;
        v26 = sub_2050E70(v6 + 24LL * v15, v25);
        v12 = v32;
        v14 = v31;
        v10 = v35;
        v13 = v45;
        if ( !v32 && v26 )
          v12 = v6 + 24LL * v15;
        v11 = v38 + 1;
        v15 = v8 & (v38 + v15);
      }
    }
    *a3 = v16;
    return 1;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
