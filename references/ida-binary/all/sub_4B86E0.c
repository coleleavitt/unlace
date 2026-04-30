__int64 __fastcall sub_4B86E0(unsigned int *a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r12
  char v11; // al
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  v13 = nullptr;
  v4 = 0;
  if ( !(unsigned int)parse_json_string(&v12, a2, 0, 0) && (_DWORD)v12 == 3 )
  {
    v6 = *a1;
    v7 = v13;
    LODWORD(v12) = 0;
    v13 = nullptr;
    if ( (_DWORD)v6 )
    {
      if ( !under_debugger )
        interr(40613, a2, v6, v3, a3);
      BUG();
    }
    *a1 = 3;
    *((_QWORD *)a1 + 1) = v7;
    v8 = v7[1];
    if ( v8 )
    {
      v9 = *v7;
      v10 = 0;
      while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "layout") )
      {
        ++v10;
        v9 += 40;
        if ( v8 == v10 )
          goto LABEL_12;
      }
      v11 = 1;
    }
    else
    {
LABEL_12:
      v11 = 0;
    }
    *((_BYTE *)a1 + 16) = v11;
    v4 = 1;
  }
  jvalue_t_clear(&v12);
  return v4;
}
