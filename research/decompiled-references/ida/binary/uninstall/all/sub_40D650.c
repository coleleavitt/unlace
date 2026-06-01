char **__fastcall sub_40D650(__int64 a1, __int64 a2)
{
  int *v2; // rbp
  size_t v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  v2 = *(int **)(a1 + 32);
  v3 = *v2;
  v4 = (_DWORD *)sub_40FB00((unsigned int)(v3 + 8));
  *v4 = v3;
  v4[1] = v3;
  v5 = v4;
  memcpy(v4 + 2, v2 + 2, v3);
  *(_QWORD *)(a2 + 32) = v5;
  *(_QWORD *)(a2 + 24) = &off_653DC0;
  return &off_653DC0;
}

