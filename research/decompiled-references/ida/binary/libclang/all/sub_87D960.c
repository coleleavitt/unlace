__int64 __fastcall sub_87D960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int8 **v18; // rax
  unsigned int v19; // eax
  bool v20; // cc
  unsigned __int8 **v21; // rbp
  int v22; // [rsp+0h] [rbp-78h]
  int v23; // [rsp+0h] [rbp-78h]
  unsigned int v24; // [rsp+0h] [rbp-78h]
  unsigned int v25; // [rsp+0h] [rbp-78h]
  unsigned int v26; // [rsp+4h] [rbp-74h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  void *v28; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-60h]
  char v30; // [rsp+1Ch] [rbp-5Ch]
  void *v31; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-50h]
  char v33; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-40h]

  v8 = sub_87D880(a1, a4, a3, a4, a5, a6);
  if ( !(_BYTE)v8 )
    return 0;
  v11 = *(unsigned int *)(a4 + 8);
  v29 = 64;
  v9 = v8;
  v28 = nullptr;
  v30 = 0;
  if ( (_DWORD)v11 == 64 )
  {
    if ( *(_BYTE *)(a4 + 12) )
      v12 = sub_25867A0(a4, &v28);
    else
      v12 = sub_2586820(a4, &v28);
    goto LABEL_14;
  }
  if ( (unsigned int)v11 > 0x40 )
  {
    sub_2587BE0(&v34, &v28, v11);
    v33 = 0;
    v32 = v35;
    v31 = (void *)v34;
    v12 = sub_804370((__int64 *)a4, (__int64 *)&v31);
    if ( v32 > 0x40 )
      goto LABEL_9;
  }
  else
  {
    if ( *(_BYTE *)(a4 + 12) )
    {
      sub_2587D60(&v34, a4);
      v33 = 1;
    }
    else
    {
      sub_2587BE0(&v34, a4, 64);
      v33 = 0;
    }
    v32 = v35;
    v31 = (void *)v34;
    v12 = sub_804370((__int64 *)&v31, (__int64 *)&v28);
    if ( v32 > 0x40 )
    {
LABEL_9:
      if ( v31 )
      {
        v22 = v12;
        operator delete[](v31);
        v12 = v22;
      }
    }
  }
  if ( v29 > 0x40 && v28 )
  {
    v23 = v12;
    operator delete[](v28);
    v12 = v23;
  }
LABEL_14:
  if ( v12 < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)(a4 + 8) > 0x40u )
  {
    if ( (unsigned int)sub_25876C0(a4) == 1 )
      goto LABEL_18;
LABEL_33:
    v34 = sub_A2E130(a3, a1, 2214, 0);
    if ( v34 )
      sub_829A30((unsigned __int8 ***)&v34, a4);
    return 0;
  }
  if ( !*(_QWORD *)a4 || (*(_QWORD *)a4 & (*(_QWORD *)a4 - 1LL)) != 0 )
    goto LABEL_33;
LABEL_18:
  v13 = sub_70B280(*(_QWORD *)(a3 + 16), a2);
  v14 = v13 - 1;
  v35 = v13;
  v15 = v13;
  v16 = 1LL << ((unsigned __int8)v13 - 1);
  if ( v15 > 0x40 )
  {
    v27 = v16;
    v26 = v15;
    v25 = v14;
    sub_2585A50(&v34, 0, 0);
    v17 = v35;
    v15 = v26;
    v16 = v27;
    if ( v35 > 0x40 )
    {
      *(_QWORD *)(v34 + 8LL * (v25 >> 6)) |= v27;
      v17 = v35;
      v18 = (unsigned __int8 **)v34;
      goto LABEL_21;
    }
  }
  else
  {
    v34 = 0;
    v17 = v15;
  }
  v18 = (unsigned __int8 **)(v34 | v16);
LABEL_21:
  v24 = v15;
  v29 = v17;
  v28 = v18;
  v30 = 1;
  if ( (int)sub_804370((__int64 *)a4, (__int64 *)&v28) > 0 )
  {
    v34 = sub_A2E130(a3, a1, 2178, 0);
    v21 = (unsigned __int8 **)v34;
    if ( v34 )
    {
      sub_829A30((unsigned __int8 ***)&v34, (__int64)&v28);
      sub_8356A0(v21, a2, 8u);
      sub_829A30((unsigned __int8 ***)&v34, a4);
    }
    v9 = 0;
  }
  else
  {
    sub_2587E20(&v34, a4, v24);
    v19 = v35;
    v33 = 1;
    v20 = *(_DWORD *)(a4 + 8) <= 0x40u;
    v32 = v35;
    v31 = (void *)v34;
    if ( v20 && v35 <= 0x40 )
    {
      *(_QWORD *)a4 = v34;
      *(_DWORD *)(a4 + 8) = v19;
      *(_BYTE *)(a4 + 12) = 1;
    }
    else
    {
      sub_2585EA0(a4, &v31);
      v20 = v32 <= 0x40;
      *(_BYTE *)(a4 + 12) = v33;
      if ( !v20 && v31 )
        operator delete[](v31);
    }
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v9;
}

