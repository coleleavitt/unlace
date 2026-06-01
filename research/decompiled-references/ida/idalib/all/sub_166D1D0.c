void __fastcall sub_166D1D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  unsigned int v5; // r13d
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v21; // [rsp+30h] [rbp-98h] BYREF
  char v22; // [rsp+88h] [rbp-40h]
  unsigned int v23; // [rsp+90h] [rbp-38h]
  char v24; // [rsp+94h] [rbp-34h]

  v3 = a3;
  if ( a2 )
  {
    if ( (unsigned __int8)sub_B1B4B0(*(_QWORD *)(a2 + 16) + 16LL, **(unsigned int **)(a2 + 16), (int *)&v17) )
    {
      v4 = *(_QWORD *)(a1 + 2008);
      v5 = v17;
      if ( v4 )
      {
        v6 = *(unsigned int **)(v4 + 8);
        v7 = *(unsigned int **)(v4 + 16);
        v19[0] = __PAIR64__(v3, v17);
        if ( v7 != v6 )
        {
          *v6 = v17;
          v8 = v6 + 2;
          *(v8 - 1) = v3;
          *(_QWORD *)(v4 + 8) = v8;
          return;
        }
        v9 = v4;
        v4 = (__int64)v7;
      }
      else
      {
        v9 = operator new(0x18u);
        LODWORD(v19[0]) = v5;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(a1 + 2008) = v9;
        HIDWORD(v19[0]) = v3;
        *(_OWORD *)v9 = 0;
      }
      sub_1668B00(v9, (char *)v4, v19);
    }
    else
    {
      sub_168B9F0(v19, a1 + 8, v3, 6594, 0);
      if ( v22 )
      {
        sub_AE9DF0(&v21, a2, 5u);
      }
      else if ( v24 )
      {
        v12 = sub_168B9E0(v19);
        v15 = v20;
        if ( v20 )
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
        v18 = v15;
        v16 = sub_1587BC0(v12, &v18, v10, v11, v13, v14);
        sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v23 + 8), a2, 5u);
      }
      sub_15F7200(v19);
    }
  }
  else
  {
    sub_1666E90(a1, 0, a3);
  }
}
