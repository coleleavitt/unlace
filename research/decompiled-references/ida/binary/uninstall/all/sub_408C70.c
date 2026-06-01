__int64 __fastcall sub_408C70(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbp
  _DWORD *v6; // r14
  int *v7; // rax
  int *v8; // r12
  unsigned int v9; // ebx
  int v10; // eax
  bool v11; // zf
  char *v13; // rdx
  int v14; // r9d
  const char *v15; // rcx
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  char v25[4]; // [rsp+1Ch] [rbp-13Ch] BYREF
  __int64 v26; // [rsp+20h] [rbp-138h] BYREF
  char v27; // [rsp+28h] [rbp-130h] BYREF
  char v28[8]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v29; // [rsp+38h] [rbp-120h] BYREF
  __int64 v30[29]; // [rsp+40h] [rbp-118h] BYREF

  v4 = sub_474D60(a1, a2, 0, 0);
  v5 = (__int64 *)v4;
  if ( v4 )
  {
    v6 = *(_DWORD **)(v4 + 8);
    v7 = (int *)sub_47B0B0();
    ++*v7;
    v8 = v7;
    sub_4072E0(a1, v5, (__int64)v7);
    if ( !a3 || !*a3 )
    {
      v9 = 0;
      sub_4075E0(a1, v5);
      goto LABEL_5;
    }
    sub_473C40(a1, (_DWORD)a3, 0, 2048, (unsigned int)&v26, (unsigned int)&v27, (__int64)v28, (__int64)&v29);
    if ( v26 && v29 )
    {
      if ( !(*(__int64 (__fastcall **)(__int64))(v26 + 224))(v26 + 160) )
      {
        v20 = *v5;
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v26 + 232))(v26 + 160, v29, v25);
        *(_QWORD *)(v21 + 24) = v5;
        *v5 = v21;
        v5[1] = v26;
        sub_475540(a1, v5);
        v9 = sub_459430(a1, a1, v5);
        if ( v9 )
        {
          sub_457BC0(*v5);
          *v5 = v20;
          v5[1] = (__int64)v6;
        }
        else
        {
          if ( v6[88] )
            ++v6[98];
          if ( v6[104] )
            ++v6[90];
          v22 = (_DWORD *)v5[1];
          if ( v22[88] )
            ++v22[98];
          if ( v22[104] )
            ++v22[90];
          sub_49EDC0(v30);
          sub_49EDE0(v30, *(_QWORD *)(v26 + 8), 0xFFFFFFFFLL);
          if ( *(_QWORD *)(a1 + 40) != v26 )
            sub_49EDE0(v30, "::", 2);
          sub_49EDE0(v30, v29, 0xFFFFFFFFLL);
          ++*((_DWORD *)v5 + 4);
          v23 = sub_47B3B0(v8);
          sub_4073A0(a1, (__int64)v5, v23, v30[0], 0x2000u);
          sub_49F100(v30);
          sub_457BC0(v20);
          ++*((_DWORD *)v5 + 5);
          if ( v5[3] )
            ++*(_DWORD *)(a1 + 392);
          v24 = *((_DWORD *)v5 + 4) - 1;
          v11 = *((_DWORD *)v5 + 4) == 1;
          *((_DWORD *)v5 + 4) = v24;
          if ( v24 < 0 || v11 )
            Tcl_Free(v5);
        }
LABEL_5:
        v10 = *v8 - 1;
        v11 = *v8 == 1;
        *v8 = v10;
        if ( v10 >= 0 && !v11 )
          return v9;
LABEL_16:
        v18 = *((_QWORD *)v8 + 3);
        if ( v18 && *(_QWORD *)(v18 + 8) )
        {
          sub_47B120(v8);
        }
        else
        {
          v19 = *((__int64 **)v8 + 1);
          if ( v19 )
          {
            if ( v19 != off_656088 )
              Tcl_Free(v19);
          }
          v8[4] = -1;
          sub_496830(v8);
        }
        return v9;
      }
      v15 = "\": command already exists";
    }
    else
    {
      v15 = "\": bad command name";
    }
    v16 = (int)a3;
    v9 = 1;
    sub_48B710(a1, (unsigned int)"can't rename to \"", v16, (_DWORD)v15, 0, v14);
    v17 = *v8 - 1;
    v11 = *v8 == 1;
    *v8 = v17;
    if ( v17 >= 0 && !v11 )
      return v9;
    goto LABEL_16;
  }
  if ( !a3 || (v13 = "rename", !*a3) )
    v13 = "delete";
  sub_48B710(
    a1,
    (unsigned int)"can't ",
    (_DWORD)v13,
    (unsigned int)" \"",
    a2,
    (unsigned int)"\": command doesn't exist");
  return 1;
}

