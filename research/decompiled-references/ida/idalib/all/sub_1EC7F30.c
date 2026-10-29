_QWORD *__fastcall sub_1EC7F30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // eax
  __int64 *v9; // rsi
  char *v10; // rsi
  __int64 *v11; // rax
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-2E8h]
  void *v18; // [rsp+28h] [rbp-2E0h]
  __int64 *v19; // [rsp+28h] [rbp-2E0h]
  __int64 *v20; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-2C8h] BYREF
  char v22; // [rsp+48h] [rbp-2C0h]
  _BYTE *v23; // [rsp+50h] [rbp-2B8h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-2B0h]
  __int64 v25; // [rsp+60h] [rbp-2A8h] BYREF
  char v26; // [rsp+68h] [rbp-2A0h]
  void *v27; // [rsp+70h] [rbp-298h] BYREF
  __int64 v28; // [rsp+78h] [rbp-290h]
  _BYTE v29[24]; // [rsp+80h] [rbp-288h] BYREF
  void *v30; // [rsp+98h] [rbp-270h]
  __int64 v31; // [rsp+A0h] [rbp-268h]
  _BYTE v32[24]; // [rsp+A8h] [rbp-260h] BYREF
  void *ptr; // [rsp+C0h] [rbp-248h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-240h]
  _BYTE v35[568]; // [rsp+D0h] [rbp-238h] BYREF

  v4 = a3 + 464;
  ptr = v35;
  v34 = 0x4000000000LL;
  while ( 1 )
  {
    sub_1EAFE10((__int64)&v21, v4);
    if ( (v22 & 1) != 0 )
    {
      v13 = v21;
      v21 = 0;
      *a1 = v13;
      goto LABEL_8;
    }
    if ( (_DWORD)v21 == 1 )
    {
      *a1 = 0;
      goto LABEL_8;
    }
    if ( !(_DWORD)v21 )
    {
      v6 = std::_V2::generic_category((std::_V2 *)&v21);
      sub_A09EA0((__int64)a1, 0x54u, v6, "malformed block record in AST file");
      goto LABEL_8;
    }
    if ( (_DWORD)v21 != 2 )
      break;
    sub_A0BAF0((__int64 *)&v27, v4);
    if ( v27 )
    {
      *a1 = v27;
      goto LABEL_8;
    }
LABEL_14:
    sub_A0B030(&v21);
  }
  LODWORD(v34) = 0;
  v23 = nullptr;
  v24 = 0;
  sub_2027F10(&v25, v4, HIDWORD(v21), &ptr, &v23);
  if ( (v26 & 1) != 0 )
  {
    v14 = v25;
    v25 = 0;
    *a1 = v14;
    goto LABEL_34;
  }
  if ( (_DWORD)v25 != 1 )
  {
LABEL_13:
    sub_A0AE90(&v25);
    goto LABEL_14;
  }
  v28 = 0;
  v27 = v29;
  v29[0] = 0;
  v30 = v32;
  v31 = 0;
  v32[0] = 0;
  if ( !(unsigned __int8)sub_1EADD10(&ptr, v23, v24, (__int64)&v27) )
  {
    v18 = v27;
    v17 = v28;
    v7 = sub_2244B30(v27, v28);
    v8 = sub_2244E60(a2 + 472, v18, v17, v7);
    if ( v8 == -1 )
      v9 = (__int64 *)(*(_QWORD *)(a2 + 472) + 8LL * *(unsigned int *)(a2 + 480));
    else
      v9 = (__int64 *)(*(_QWORD *)(a2 + 472) + 8LL * v8);
    sub_1EC6490(&v20, v9, 1);
    v19 = v20;
    sub_1EC6490(&v20, (__int64 *)(*(_QWORD *)(a2 + 472) + 8LL * *(unsigned int *)(a2 + 480)), 1);
    if ( v20 != v19 )
    {
      (*(void (__fastcall **)(__int64 **, _QWORD, void **, __int64, __int64, __int64))(**(_QWORD **)(*v19 + 8) + 64LL))(
        &v20,
        *(_QWORD *)(*v19 + 8),
        &v27,
        a2,
        a3,
        v4);
      if ( v20 )
      {
        v10 = *(char **)(a3 + 832);
        if ( v10 == *(char **)(a3 + 840) )
        {
          sub_1EC7C90(a3 + 824, v10, &v20);
        }
        else
        {
          v11 = v20;
          v12 = v10 + 8;
          v20 = nullptr;
          *((_QWORD *)v12 - 1) = v11;
          *(_QWORD *)(a3 + 832) = v12;
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64 *))(*v20 + 8))(v20);
      }
    }
    if ( v30 != v32 )
      operator delete(v30);
    if ( v27 != v29 )
      operator delete(v27);
    goto LABEL_13;
  }
  v15 = std::_V2::generic_category((std::_V2 *)&ptr);
  sub_A09EA0((__int64)a1, 0x54u, v15, "malformed EXTENSION_METADATA in AST file");
  sub_1EAB240((__int64)&v27);
LABEL_34:
  sub_A0AE90(&v25);
LABEL_8:
  sub_A0B030(&v21);
  if ( ptr != v35 )
    free(ptr);
  return a1;
}
