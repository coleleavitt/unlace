void __fastcall sub_166C930(
        __int64 a1,
        unsigned __int32 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v26; // [rsp+18h] [rbp-F0h]
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v31[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v32; // [rsp+B8h] [rbp-50h]
  unsigned int v33; // [rsp+C0h] [rbp-48h]
  char v34; // [rsp+C4h] [rbp-44h]

  if ( a8 == 8 )
  {
    if ( *(_QWORD *)a7 == 0x6765735F61746164LL )
    {
      v26 = a1 + 1360;
    }
    else
    {
      v10 = a1 + 1672;
      if ( *(_QWORD *)a7 != 0x6765735F65646F63LL )
        v10 = 0;
      v26 = v10;
    }
  }
  else if ( a8 == 7 )
  {
    if ( *(_DWORD *)a7 == 1601401698 && *(_WORD *)(a7 + 4) == 25971 && *(_BYTE *)(a7 + 6) == 103 )
      v26 = a1 + 1464;
  }
  else if ( a8 == 9 && *(_QWORD *)a7 == 0x65735F74736E6F63LL && *(_BYTE *)(a7 + 8) == 103 )
  {
    v26 = a1 + 1568;
  }
  if ( (a3 & 4) != 0 && !*(_DWORD *)(v26 + 8) )
  {
    sub_168B9F0(v29, a1 + 8, a2, 7267, 0);
    if ( v32 )
    {
      sub_AEC220(v31, (_BYTE *)a7, a8);
    }
    else
    {
      if ( !v34 )
      {
LABEL_29:
        sub_15F7200(v29);
        goto LABEL_8;
      }
      v11 = sub_168B9E0(v29);
      v15 = v30;
      if ( v30 )
      {
        v27 = v11;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
        v11 = v27;
      }
      v28 = v15;
      v16 = sub_1587BC0(v11, &v28, v11, v12, v13, v14);
      sub_AEC220((unsigned __int8 **)(*v16 + 32LL * v33 + 8), (_BYTE *)a7, a8);
    }
    if ( v32 )
    {
      sub_AE9DF0(v31, (__int64)"stack empty", 1u);
    }
    else if ( v34 )
    {
      sub_1669EA0((__int64)v29, (__int64)"stack empty");
    }
    goto LABEL_29;
  }
LABEL_8:
  if ( !a6 )
  {
LABEL_22:
    sub_1667960(v26, a2, a3, a4, a5, a6);
    return;
  }
  if ( (unsigned __int8)sub_180C270(
                          a1,
                          *(unsigned int *)(a6 + 20),
                          a6 + 20 + 4LL * *(unsigned int *)(a6 + 4),
                          *(_DWORD *)(a6 + 16) * ((*(_WORD *)(a6 + 2) >> 6) & 7u)) )
  {
    if ( *(_DWORD *)(a6 + 16) * ((*(_WORD *)(a6 + 2) >> 6) & 7) == 8
      && *(_QWORD *)(a6 + 20 + 4LL * *(unsigned int *)(a6 + 4)) == 0x657674636572642ELL
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
    {
      sub_168B9F0(v29, a1 + 8, a2, 6588, 0);
      if ( v32 )
      {
        sub_AEC220(v31, (_BYTE *)a7, a8);
      }
      else if ( v34 )
      {
        v19 = sub_168B9E0(v29);
        v22 = v30;
        if ( v30 )
          v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
        v28 = v22;
        v23 = sub_1587BC0(v19, &v28, v17, v18, v20, v21);
        sub_AEC220((unsigned __int8 **)(*v23 + 32LL * v33 + 8), (_BYTE *)a7, a8);
      }
      sub_15F7200(v29);
    }
    goto LABEL_22;
  }
}
