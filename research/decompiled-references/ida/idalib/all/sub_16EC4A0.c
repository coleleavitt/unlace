__int64 __fastcall sub_16EC4A0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v18; // [rsp+14h] [rbp-C4h] BYREF
  char v19; // [rsp+1Ch] [rbp-BCh]
  _QWORD v20[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-A8h]
  __int64 v22[11]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int8 v23; // [rsp+98h] [rbp-40h]
  unsigned int v24; // [rsp+A0h] [rbp-38h]
  unsigned __int8 v25; // [rsp+A4h] [rbp-34h]

  v2 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 784LL);
  if ( v2 == sub_102BB40 || (v7 = 0, !(unsigned __int8)v2()) )
  {
    v3 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v3, 0xD28u, 0);
    v4 = *(_DWORD *)(a2 + 20);
    v5 = sub_BF6D70(a2);
    v6 = v5;
    if ( v23 )
    {
      v18 = __PAIR64__(v4, v5);
      v19 = 1;
      sub_AEC610(v22, (__int64 *)&v18);
      v7 = v23;
    }
    else
    {
      v7 = v25;
      if ( v25 )
      {
        v13 = sub_168B9E0(v20);
        v14 = v21;
        if ( v21 )
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
        v17 = v14;
        v15 = sub_1587BC0(v13, &v17, v9, v10, v11, v12);
        v16 = *v15 + 32LL * v24;
        v18 = __PAIR64__(v4, v6);
        v19 = 1;
        sub_AEC610((__int64 *)(v16 + 8), (__int64 *)&v18);
        v7 = v23;
      }
    }
    sub_15F7200(v20);
  }
  return v7;
}
