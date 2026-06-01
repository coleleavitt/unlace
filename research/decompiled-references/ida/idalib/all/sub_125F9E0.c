char *__fastcall sub_125F9E0(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // r12
  int v9; // eax
  __int64 *v11; // rdi
  __int64 v12; // rax
  char *v13; // r13
  signed __int64 v14; // rbp
  _BYTE *v15; // rax
  _QWORD v16[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v17; // [rsp+20h] [rbp-38h]

  v6 = a1 + 16;
  v9 = *(_DWORD *)(a4 + 32);
  if ( v9 != 37 )
  {
    if ( v9 == 38 )
    {
      *(_QWORD *)a1 = v6;
      strcpy(a1 + 16, "x86_64-gnu");
      *((_QWORD *)a1 + 1) = 10;
      return a1;
    }
LABEL_5:
    *(_QWORD *)a1 = v6;
    v13 = *(char **)a4;
    v14 = *(_QWORD *)(a4 + 8);
    if ( &v13[v14] && !v13 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v14 > 0xF )
    {
      if ( v14 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v15 = (_BYTE *)operator new(v14 + 1);
      *((_QWORD *)a1 + 2) = v14;
      *(_QWORD *)a1 = v15;
      v6 = v15;
    }
    else
    {
      if ( v14 == 1 )
      {
        a1[16] = *v13;
LABEL_10:
        *((_QWORD *)a1 + 1) = v14;
        v6[v14] = 0;
        return a1;
      }
      if ( !v14 )
        goto LABEL_10;
    }
    memcpy(v6, v13, v14);
    v6 = *(_BYTE **)a1;
    goto LABEL_10;
  }
  v11 = *(__int64 **)(a3 + 8);
  v12 = *v11;
  v17 = 773;
  v16[0] = a5;
  v16[1] = a6;
  v16[2] = "/lib/i386-gnu";
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *))(v12 + 96))(v11, v16) )
    goto LABEL_5;
  *(_QWORD *)a1 = v6;
  strcpy(a1 + 16, "i386-gnu");
  *((_QWORD *)a1 + 1) = 8;
  return a1;
}
