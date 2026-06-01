__int64 __fastcall sub_DC2620(__int64 a1, __int64 *a2, unsigned int *a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  __int64 v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  unsigned __int8 **v14; // rax
  unsigned __int8 **v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h] BYREF
  char v21; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 96LL);
  if ( v6 == sub_CF0240 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 96LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_16:
      v11 = v8();
      goto LABEL_6;
    }
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 96LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[12];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 96LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_16;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  if ( !*(_QWORD *)(v11 + 8) )
    return 0;
  v12 = a3[7] & 0x7F;
  if ( v12 == 43 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      v19 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
      {
        v16 = (unsigned __int8 **)sub_E33BA0(a1, &v19, 2413, 0);
        if ( v16 )
          sub_AE9DF0(v16, (__int64)a3, 0xAu);
        v17 = (__int64 *)sub_E33DB0(a1, a3[6], 103);
        v18 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a3 + 16LL))(a3);
        if ( v17 )
        {
          v20 = v18;
          v21 = 1;
          sub_AEC610(v17, &v20);
        }
      }
      else
      {
        sub_E33BA0(a1, &v19, 108, 0);
      }
    }
    return 0;
  }
  v13 = *((_QWORD *)a3 + 6);
  if ( (v13 & 1) != 0 || (byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
  {
    if ( (unsigned int)v12 - 40 <= 6 )
    {
      if ( sub_B7D120((__int64)a3, &v20) )
      {
        v20 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
        v14 = (unsigned __int8 **)sub_E33BA0(a1, &v20, 2501, 1);
        if ( v14 )
          sub_AE9DF0(v14, (__int64)a3, 0xAu);
        sub_E33DB0(a1, a3[6], 103);
      }
      else
      {
        sub_DC2230(a1, (__int64)a2, a3);
      }
    }
    return 0;
  }
  sub_DC22C0(a1, a2, (__int64)a3);
  return 0;
}
