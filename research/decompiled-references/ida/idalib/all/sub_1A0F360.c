unsigned __int64 __fastcall sub_1A0F360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v26; // [rsp+30h] [rbp-A8h] BYREF
  char v27; // [rsp+88h] [rbp-50h]
  unsigned int v28; // [rsp+90h] [rbp-48h]
  char v29; // [rsp+94h] [rbp-44h]

  result = sub_B7E900(a2, a2, a3, a4, a5, a6);
  if ( result )
  {
    v11 = result;
LABEL_3:
    if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
      goto LABEL_6;
    v12 = sub_B8C3D0(v11, a2, v7, v8, v9, v10);
    v7 = *v12;
    v8 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( *v12 >= v8 )
    {
      if ( v7 == v8 )
        goto LABEL_6;
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 212 )
      {
        v14 = (__int64 *)(v8 + 8);
        do
        {
          v8 = (unsigned __int64)v14;
          if ( (__int64 *)v7 == v14 )
            goto LABEL_6;
          v15 = *v14++;
        }
        while ( *(_WORD *)(v15 + 36) != 212 );
      }
      goto LABEL_13;
    }
    v13 = (__int64 *)*v12;
    while ( 1 )
    {
      v7 = *v13;
      if ( *(_WORD *)(*v13 + 36) == 212 )
        break;
      if ( (__int64 *)v8 == ++v13 )
        goto LABEL_6;
    }
    if ( (__int64 *)v8 != v13 )
    {
LABEL_13:
      a2 = a1 + 8;
      sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), *(_DWORD *)(v11 + 24), 0x172Eu, 0);
      if ( v27 )
      {
        a2 = v11;
        sub_AE9DF0(&v26, v11, 0xAu);
        sub_15F7200(v24);
      }
      else if ( v29 )
      {
        v20 = sub_168B9E0(v24);
        v21 = v25;
        if ( v25 )
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
        v23 = v21;
        v22 = sub_1587BC0(v20, &v23, v16, v17, v18, v19);
        a2 = v11;
        sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v28 + 8), v11, 0xAu);
        sub_15F7200(v24);
      }
      else
      {
        sub_15F7200(v24);
      }
    }
LABEL_6:
    while ( 1 )
    {
      result = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v11 = result;
      if ( !result )
        break;
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_3;
    }
  }
  return result;
}
