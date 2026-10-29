__int64 __fastcall sub_41B500(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // [rsp+8h] [rbp-30h] BYREF
  int v14; // [rsp+Ch] [rbp-2Ch] BYREF
  _BYTE src[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( a3 != 3 )
  {
    sub_458930(a2, 1, a4, "string charIndex");
    return 1;
  }
  v7 = *(_QWORD *)(a4 + 8);
  if ( *(char ***)(v7 + 24) != &off_653DC0 || *(_QWORD *)(v7 + 8) )
  {
    v8 = sub_48F360(v7);
    v9 = *(_QWORD *)(a4 + 16);
    v14 = v8;
    if ( (unsigned int)sub_49FAC0(a2, v9, (unsigned int)(v8 - 1), &v13) )
      return 1;
    if ( v13 >= 0 && v13 < v14 )
    {
      v10 = sub_48F4E0(*(_QWORD *)(a4 + 8), (unsigned int)v13, 1);
      v14 = sub_49BA90(v10, src);
      v11 = sub_48DF10(src, (unsigned int)v14);
LABEL_10:
      sub_48AFD0(a2, v11);
    }
  }
  else
  {
    sub_40D5E0(v7, &v14);
    if ( (unsigned int)sub_49FAC0(a2, *(_QWORD *)(a4 + 16), (unsigned int)(v14 - 1), &v13) )
      return 1;
    v12 = sub_40D5E0(*(_QWORD *)(a4 + 8), &v14);
    if ( v13 >= 0 && v13 < v14 )
    {
      v11 = sub_40D3B0((char *)v12 + v13, 1);
      goto LABEL_10;
    }
  }
  return 0;
}

