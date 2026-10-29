__int64 __fastcall sub_1EAB620(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r12
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rsi
  __int64 v13; // rbx
  size_t v14; // rax
  void *v15; // rdi
  size_t v16; // r12
  __int64 *v17; // rbx
  __int64 result; // rax
  __int64 *i; // rbp
  __int64 v20; // rdi

  v3 = sub_227D6D0(a1, a2);
  v4 = j__strlen("*** PCH/ModuleFile Remappings:\n");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    sub_227BF10(v3, "*** PCH/ModuleFile Remappings:\n", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, "*** PCH/ModuleFile Remappings:\n", v4);
    *(_QWORD *)(v3 + 32) += v6;
  }
  v7 = j__strlen("Global bit offset map");
  sub_1EAA2A0((void *)"Global bit offset map", v7, a1 + 528);
  v8 = j__strlen("Global source location entry map");
  sub_1EAA4C0((void *)"Global source location entry map", v8, (unsigned int **)(a1 + 608));
  v9 = j__strlen("Global macro map");
  sub_1EAA080((void *)"Global macro map", v9, (unsigned int **)(a1 + 4392));
  v10 = j__strlen("Global submodule map");
  sub_1EAA080((void *)"Global submodule map", v10, (unsigned int **)(a1 + 4504));
  v11 = j__strlen("Global selector map");
  sub_1EAA080((void *)"Global selector map", v11, (unsigned int **)(a1 + 4864));
  v12 = j__strlen("Global preprocessed entity map");
  sub_1EAA080((void *)"Global preprocessed entity map", v12, (unsigned int **)(a1 + 5032));
  v13 = sub_227D6D0("Global preprocessed entity map", v12);
  v14 = j__strlen("\n*** PCH/Modules Loaded:");
  v15 = *(void **)(v13 + 32);
  v16 = v14;
  if ( v14 > *(_QWORD *)(v13 + 24) - (_QWORD)v15 )
  {
    sub_227BF10(v13, "\n*** PCH/Modules Loaded:", v14);
  }
  else if ( v14 )
  {
    memcpy(v15, "\n*** PCH/Modules Loaded:", v14);
    *(_QWORD *)(v13 + 32) += v16;
  }
  v17 = *(__int64 **)(a1 + 160);
  result = *(unsigned int *)(a1 + 168);
  for ( i = &v17[result]; i != v17; result = sub_1FDA3E0(v20) )
    v20 = *v17++;
  return result;
}
