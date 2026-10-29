__int64 __fastcall sub_2F5340(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r9
  _DWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  _DWORD *v8; // r12
  __int64 v9; // rbp
  void (__fastcall ***v10)(void *); // r13
  bool v11; // zf
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r14
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  void *ptr; // [rsp+18h] [rbp-60h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v24[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *a2;
  if ( *(_WORD *)(*a2 + 4) )
    goto LABEL_5;
  v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( !v4 )
    goto LABEL_5;
  if ( *v4 != 5 )
  {
    if ( !*v4 && v4[1] == 4 )
    {
LABEL_6:
      ptr = nullptr;
      v6 = sub_2F4DC0(a1, (__int64)&ptr, v3);
      ++*(_DWORD *)(v6 + 8);
      v7 = v6;
      v8 = ptr;
      result = sub_2EB410(*a2, a2[1]);
      *a2 = v7;
      goto LABEL_7;
    }
LABEL_5:
    result = sub_2EC520((__int64)a1, *a2);
    if ( (_BYTE)result )
      return result;
    goto LABEL_6;
  }
  if ( v4[1] != 6 )
    goto LABEL_5;
  v12 = (__int64 *)(v3 + 32);
  v23 = a1[1];
  v13 = 8LL * *(unsigned int *)(v3 + 24);
  v14 = (__int64 *)(v3 + 32 + v13);
  if ( !v13 )
  {
    v18 = a1[21];
    v8 = nullptr;
LABEL_34:
    v15 = 0;
    goto LABEL_30;
  }
  v15 = 0;
  v8 = nullptr;
  do
  {
    if ( (unsigned __int8)sub_2EC520((__int64)a1, *v12) )
    {
      v21 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v24[0] = v15;
      sub_2F13A0(v24, &v21);
    }
    else
    {
      ptr = v8;
      v17 = sub_2F4DC0(a1, (__int64)&ptr, v16);
      ++*(_DWORD *)(v17 + 8);
      v8 = ptr;
      v22 = v17;
      v24[0] = v15;
      sub_2F13A0(v24, &v22);
    }
    ++v12;
    v15 = v24[0];
  }
  while ( v14 != v12 );
  v18 = a1[21];
  if ( !v24[0] )
    goto LABEL_34;
  if ( *(_DWORD *)(v24[0] - 4LL) == 1 )
  {
    v19 = *(_QWORD *)v24[0];
    if ( !*(_WORD *)(*(_QWORD *)v24[0] + 4LL) )
      goto LABEL_31;
  }
LABEL_30:
  v19 = sub_15E1AF0(v18);
  if ( v19 )
LABEL_31:
    ++*(_DWORD *)(v19 + 8);
  sub_2EB410(*a2, a2[1]);
  *a2 = v19;
  v24[0] = v15;
  result = sub_2334C0(&v23);
LABEL_7:
  if ( v8 )
  {
    result = sub_1336AB0(a1[78], v8);
    v9 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v10 = (void (__fastcall ***)(void *))a1[78];
    if ( v10 )
    {
      v11 = (*((_DWORD *)v10 + 2))-- == 1;
      if ( v11 )
      {
        (**v10)(v10);
        result = sub_186B220(v10);
      }
    }
    a1[78] = v9;
    v11 = v8[2]-- == 1;
    if ( v11 )
    {
      (**(void (__fastcall ***)(_DWORD *))v8)(v8);
      return sub_186B220(v8);
    }
  }
  return result;
}

