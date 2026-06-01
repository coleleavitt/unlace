__int64 __fastcall sub_184F250(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // al
  unsigned int v12; // ebp
  unsigned __int8 v14; // al
  unsigned int v15; // eax
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v36; // [rsp+18h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v40[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v41; // [rsp+A8h] [rbp-50h]
  unsigned int v42; // [rsp+B0h] [rbp-48h]
  char v43; // [rsp+B4h] [rbp-44h]

  v7 = sub_B94670(a3 + 64, a4, a3, a4, a5, a6);
  if ( v7 )
  {
    v8 = v7;
    while ( 1 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((v8 >> 2) & 1) != 0 )
      {
        if ( !v9 )
          return 0;
        v10 = *(_QWORD *)v9;
        v11 = *(_BYTE *)(*(_QWORD *)v9 + 28LL) & 0x7F;
        if ( (unsigned int)v11 - 49 > 2 && v11 != 32 )
          goto LABEL_7;
      }
      else
      {
        v14 = *(_BYTE *)(v9 + 28) & 0x7F;
        if ( (unsigned int)v14 - 49 > 2 && v14 != 32 )
          return 0;
        v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      }
      LOBYTE(v15) = sub_B72A20(v10, *(_QWORD *)(a1 + 232));
      v12 = v15;
      if ( (_BYTE)v15 )
        break;
      if ( ((v8 >> 2) & 1) == 0 || !v9 )
        return 0;
LABEL_7:
      v8 = *(_QWORD *)(v9 + 8);
      if ( !v8 )
        return 0;
    }
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a2, 0x1528u, 0);
    if ( v41 )
    {
      sub_AE9DF0(v40, a4, 5u);
    }
    else if ( v43 )
    {
      v26 = sub_168B9E0(v38);
      v27 = v39;
      if ( v39 )
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
      v37 = v27;
      v28 = sub_1587BC0(v26, &v37, v22, v23, v24, v25);
      sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v42 + 8), a4, 5u);
    }
    sub_15F7200(v38);
    while ( 1 )
    {
      v16 = v8;
      v17 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = (v16 >> 2) & 1;
      if ( (_DWORD)v18 && v17 )
      {
        v19 = *(_QWORD *)v17;
        v20 = *(_BYTE *)(*(_QWORD *)v17 + 28LL) & 0x7F;
        if ( (unsigned int)v20 - 49 > 2 && v20 != 32 )
          goto LABEL_21;
      }
      else
      {
        v21 = *(_BYTE *)(v17 + 28) & 0x7F;
        if ( (unsigned int)v21 - 49 > 2 && v21 != 32 )
          goto LABEL_31;
        v19 = v17;
      }
      if ( sub_B72A20(v19, *(_QWORD *)(a1 + 232)) )
      {
        sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x18C7u, 0);
        if ( v41 )
        {
          sub_AE9DF0(v40, v19, 0xAu);
        }
        else if ( v43 )
        {
          v29 = sub_168B9E0(v38);
          v33 = v39;
          if ( v39 )
          {
            v36 = v29;
            v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
            v29 = v36;
          }
          v37 = v33;
          v34 = sub_1587BC0(v29, &v37, v29, v30, v31, v32);
          sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v42 + 8), v19, 0xAu);
        }
        sub_15F7200(v38);
      }
LABEL_31:
      if ( !(_DWORD)v18 || !v17 )
        return v12;
LABEL_21:
      v8 = *(_QWORD *)(v17 + 8);
      if ( !v8 )
        return v12;
    }
  }
  return 0;
}
