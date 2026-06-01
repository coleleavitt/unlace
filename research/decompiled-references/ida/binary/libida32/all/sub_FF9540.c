__int64 __fastcall sub_FF9540(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+8h] [rbp-98h] BYREF
  __int64 v12; // [rsp+10h] [rbp-90h]
  __int64 v13; // [rsp+18h] [rbp-88h]
  __int64 v14; // [rsp+20h] [rbp-80h]
  __int64 v15; // [rsp+28h] [rbp-78h]
  __int64 v16; // [rsp+30h] [rbp-70h]
  __int64 v17; // [rsp+38h] [rbp-68h]
  __int64 v18; // [rsp+40h] [rbp-60h]
  __int64 v19; // [rsp+48h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-48h]
  __int64 v21; // [rsp+60h] [rbp-40h]
  __int64 v22; // [rsp+68h] [rbp-38h]
  __int64 v23; // [rsp+70h] [rbp-30h]
  __int64 v24; // [rsp+78h] [rbp-28h]

  result = *(_QWORD *)(a1 + 616);
  if ( !result )
  {
    v3 = operator new(0x38u);
    v4 = *(_QWORD **)(a1 + 616);
    v5 = v3;
    *(_QWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 24) = 0;
    *(_QWORD *)(v3 + 32) = 0;
    *(_QWORD *)(v3 + 40) = 0;
    *(_BYTE *)(v3 + 48) &= 0xF0u;
    *(_QWORD *)(a1 + 616) = v3;
    if ( v4 )
    {
      if ( *v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
      operator delete(v4, 0x38u);
      v5 = *(_QWORD *)(a1 + 616);
    }
    sub_FF9480((__int64)&v11, a1);
    LOBYTE(v19) = 1;
    v15 = v11;
    v17 = v13;
    v18 = v14;
    v20 = v11;
    v22 = v13;
    v23 = v14;
    v24 = v19;
    v16 = v12;
    v21 = v12;
    sub_220C650((unsigned int)&v10, 1, v12, (unsigned int)&v10, v6, v7, v11, v12, v13, v14);
    v8 = v10;
    *(_BYTE *)(v5 + 48) &= ~8u;
    v10 = 0;
    v9 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    return *(_QWORD *)(a1 + 616);
  }
  return result;
}

