char *__fastcall sub_125FB50(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // r12
  int v8; // eax
  __int64 *v10; // rdi
  __int64 v11; // rax
  char *v12; // r13
  signed __int64 v13; // rbp
  _BYTE *v14; // rax
  _QWORD v15[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v16; // [rsp+20h] [rbp-38h]

  v5 = a1 + 16;
  v8 = *(_DWORD *)(a3 + 32);
  if ( v8 != 37 )
  {
    if ( v8 == 38 )
    {
      *(_QWORD *)a1 = v5;
      strcpy(a1 + 16, "x86_64-gnu");
      *((_QWORD *)a1 + 1) = 10;
      return a1;
    }
LABEL_5:
    *(_QWORD *)a1 = v5;
    v12 = *(char **)a3;
    v13 = *(_QWORD *)(a3 + 8);
    if ( &v12[v13] && !v12 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v13 > 0xF )
    {
      if ( v13 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v14 = (_BYTE *)operator new(v13 + 1);
      *((_QWORD *)a1 + 2) = v13;
      *(_QWORD *)a1 = v14;
      v5 = v14;
    }
    else
    {
      if ( v13 == 1 )
      {
        a1[16] = *v12;
LABEL_10:
        *((_QWORD *)a1 + 1) = v13;
        v5[v13] = 0;
        return a1;
      }
      if ( !v13 )
        goto LABEL_10;
    }
    memcpy(v5, v12, v13);
    v5 = *(_BYTE **)a1;
    goto LABEL_10;
  }
  v10 = *(__int64 **)(a2 + 8);
  v11 = *v10;
  v16 = 773;
  v15[0] = a4;
  v15[1] = a5;
  v15[2] = "/lib/i386-gnu";
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *))(v11 + 96))(v10, v15) )
    goto LABEL_5;
  *(_QWORD *)a1 = v5;
  strcpy(a1 + 16, "i386-gnu");
  *((_QWORD *)a1 + 1) = 8;
  return a1;
}
