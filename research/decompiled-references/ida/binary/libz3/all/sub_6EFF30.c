__int64 __fastcall sub_6EFF30(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _DWORD *v5; // rax
  int v6; // edx
  _DWORD *v8; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19[2]; // [rsp+8h] [rbp-78h]
  int v20[2]; // [rsp+8h] [rbp-78h]
  __int64 v21; // [rsp+10h] [rbp-70h]
  unsigned int v22; // [rsp+18h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  int v27[14]; // [rsp+48h] [rbp-38h] BYREF

  v5 = *(_DWORD **)(a2 + 24);
  v22 = 5;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    if ( v6 == *v5 && v5[1] == 1 && !*(_WORD *)(*a3 + 4LL) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(*a3 + 16LL) + 24LL);
      if ( v8 )
      {
        if ( v6 == *v8 && !v8[1] )
        {
          v21 = *(_QWORD *)a1;
          sub_13615B0(&v26, a1 + 24, a3[1]);
          v11 = v26;
          sub_13615B0(&v26, a1 + 24, *(_QWORD *)(*a3 + 40LL));
          v12 = v26;
          if ( v11 == v26 )
          {
            v16 = *(_QWORD *)(*a3 + 48LL);
            if ( v16 )
              ++*(_DWORD *)(v16 + 8);
            *(_QWORD *)v20 = v16;
            sub_6EF400(*a4, a4[1]);
            v17 = *(_QWORD *)a1;
            *a4 = *(_QWORD *)v20;
            v18 = sub_15E1B70(v17);
            v26 = v18;
            if ( v18 )
              ++*(_DWORD *)(v18 + 8);
            sub_6EFE70((_QWORD *)(a1 + 40), &v26);
            v22 = 4;
          }
          else
          {
            *(_QWORD *)v19 = *(_QWORD *)a1;
            sub_15E1B70(*(_QWORD *)a1);
            v13 = sub_15E1A70(v19[0]);
            v25 = v13;
            if ( v13 )
              ++*(_DWORD *)(v13 + 8);
            sub_6EFE70((_QWORD *)(a1 + 40), &v25);
            v26 = *(_QWORD *)a1;
            v14 = *(_QWORD *)(*a3 + 32LL);
            v24 = v14;
            if ( v14 )
              ++*(_DWORD *)(v14 + 8);
            *(_QWORD *)v27 = 0;
            sub_6EFE70(v27, &v24);
            v23 = a3[1];
            if ( v23 )
              ++*(_DWORD *)(v23 + 8);
            sub_6EFE70(v27, &v23);
            v15 = sub_15DCAD0(*(_QWORD *)(a1 + 16), v27[0], 0);
            if ( v15 )
              ++*(_DWORD *)(v15 + 8);
            sub_6EF400(*a4, a4[1]);
            *a4 = v15;
            sub_2334C0(&v26);
            v22 = 0;
          }
          sub_6EF400(v12, v21);
          sub_6EF400(v11, v21);
        }
      }
    }
  }
  return v22;
}

