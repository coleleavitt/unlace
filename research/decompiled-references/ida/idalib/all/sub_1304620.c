volatile signed __int32 **__fastcall sub_1304620(
        volatile signed __int32 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 **a5)
{
  volatile signed __int32 *v5; // rbp
  __int64 v7; // rdx
  __int64 *v8; // r13
  unsigned __int8 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  volatile signed __int32 *v13; // r15
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdx
  int v16; // ecx
  __int64 v19; // [rsp+30h] [rbp-B8h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-A8h] BYREF
  char v22; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v23[4]; // [rsp+60h] [rbp-88h] BYREF
  __int16 v24; // [rsp+80h] [rbp-68h]

  v5 = *a5;
  if ( !a3 )
  {
    *a1 = v5;
    *a5 = nullptr;
    return a1;
  }
  if ( v5 )
    _InterlockedAdd(v5 + 2, 1u);
  v7 = 4 * a3;
  v8 = &a2[v7];
  if ( &a2[v7] != a2 )
  {
    v9 = (unsigned __int8 *)a2;
    do
    {
      while ( 1 )
      {
        v23[0] = v9;
        v24 = 260;
        sub_225D6F0((unsigned int)v21, (_DWORD)v5, (unsigned int)v23, -1, 1, 0, 1);
        v16 = 754;
        if ( (v22 & 1) == 0 )
          break;
LABEL_25:
        v9 += 32;
        sub_FC70B0((__int64)v23, a4, 0, v16);
        sub_AEC220(v23, *((_BYTE **)v9 - 4), *((_QWORD *)v9 - 3));
        sub_AEA040((__int64)v23);
        sub_FC2AF0(v21);
        if ( v8 == (__int64 *)v9 )
          goto LABEL_26;
      }
      v20 = v5;
      if ( v5 )
        _InterlockedAdd(v5 + 2, 1u);
      v10 = v21[0];
      v11 = *(_QWORD *)v9;
      v21[0] = 0;
      v12 = *((_QWORD *)v9 + 1);
      v19 = v10;
      sub_226BE20((unsigned int)v23, (unsigned int)&v19, 0, v11, v12, 0, (__int64)&v20);
      v13 = (volatile signed __int32 *)v23[0];
      v23[0] = nullptr;
      if ( v13 )
      {
        _InterlockedAdd(v13 + 2, 1u);
        if ( v23[0] )
          (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v14 = v20;
      if ( v20 && !_InterlockedSub(v20 + 2, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( !v13 )
      {
        v16 = 751;
        goto LABEL_25;
      }
      v15 = v13 + 2;
      _InterlockedAdd(v13 + 2, 1u);
      if ( v5 && !_InterlockedSub(v5 + 2, 1u) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
        v15 = v13 + 2;
      }
      if ( !_InterlockedSub(v15, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      v9 += 32;
      v5 = v13;
      sub_FC2AF0(v21);
    }
    while ( v8 != (__int64 *)v9 );
  }
LABEL_26:
  *a1 = v5;
  return a1;
}
