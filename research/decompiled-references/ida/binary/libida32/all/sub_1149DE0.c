__int16 __fastcall sub_1149DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 result; // ax
  int v6; // eax
  __int64 v7; // rbx
  size_t v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void *v11; // rax
  size_t v12; // rdx
  unsigned int v13; // ebx
  bool v14; // dl
  __int64 v15; // rbp
  size_t v16; // rdx
  void *v17; // rax
  size_t v18; // rdx
  unsigned int v19; // eax
  _BOOL8 v20; // rcx

  if ( !a4 )
    return 0;
  if ( sub_21D5360() != a4 )
    return 0;
  v6 = *(_DWORD *)(a3 + 64);
  v7 = a1 + 16;
  if ( v6 == 2 || v6 == 8 )
  {
    v15 = *(_QWORD *)(a3 + 72);
    v16 = 0;
    if ( v15 )
      v16 = j__strlen(*(const char **)(a3 + 72));
    v17 = (void *)sub_1005B00(v7, v15, v16);
    v19 = sub_228CEA0(v17, v18);
    v20 = 0;
    if ( v19 )
      v20 = (sub_228CFC0(v19) & 0x30) != 48;
    v14 = (unsigned __int8)sub_2193B10(a2, 823, 1163, v20) != 0;
  }
  else
  {
    v8 = j__strlen(&byte_22CD811);
    v9 = sub_2193E80(a2, 2323, &byte_22CD811, v8);
    v11 = (void *)sub_1005B00(v7, v9, v10);
    v13 = sub_228CEA0(v11, v12);
    v14 = sub_10B8FF0(a2, 0xB6u) || v13 && (sub_228CFC0(v13) & 0x30) != 0x30;
  }
  LOBYTE(result) = v14;
  HIBYTE(result) = v14;
  return result;
}

