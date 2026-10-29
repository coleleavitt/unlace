__int64 __fastcall sub_F994D0(__int64 a1, unsigned int *a2, __int64 a3)
{
  const char *v4; // rbx
  size_t v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD v9[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]

  v4 = (const char *)(**(_QWORD **)a3 + *a2);
  if ( v4 )
    v5 = strlen(v4);
  else
    v5 = 0;
  v6 = *(_QWORD *)(a3 + 24);
  v7 = *(_QWORD *)(a3 + 32);
  v9[3] = v5;
  v9[2] = v4;
  v10 = 1286;
  v9[0] = v6;
  v9[1] = v7;
  sub_222F820(a1, v9);
  return a1;
}

