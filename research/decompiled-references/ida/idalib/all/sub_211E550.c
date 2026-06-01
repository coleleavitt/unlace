__int64 __fastcall sub_211E550(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v12; // [rsp+4h] [rbp-34h] BYREF
  int *v13; // [rsp+8h] [rbp-30h] BYREF

  v7 = a1[1];
  v8 = *(_DWORD *)(v7 + 1888);
  v9 = *(_QWORD *)(v7 + 1728);
  v10 = v7 + 1720;
  v12 = v8;
  if ( !v9 )
    goto LABEL_8;
  do
  {
    while ( v8 <= *(_DWORD *)(v9 + 32) )
    {
      v10 = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v9 );
LABEL_6:
  if ( v7 + 1720 == v10 || v8 < *(_DWORD *)(v10 + 32) )
  {
LABEL_8:
    v13 = (int *)&v12;
    v10 = sub_211E240((_QWORD *)(v7 + 1712), v10, &v13);
  }
  return sub_210BE80(v10 + 40, a1, a2, a3, a4);
}
