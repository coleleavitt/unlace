__int64 __fastcall sub_12FBD80(__int64 (__fastcall *a1)(__int64, _QWORD *), __int64 a2, unsigned int a3)
{
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v8; // rdi
  size_t v9; // rax
  _QWORD v11[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v12; // [rsp+20h] [rbp-28h]

  v5 = sub_1105E80();
  v6 = sub_21BB380(v5, a3);
  v8 = (const char *)(**(_QWORD **)(v7 + 8)
                    + *(unsigned int *)(*(_QWORD *)(v7 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v6 + 40) - 1) + 4));
  if ( v8 )
    v9 = strlen(v8);
  else
    v9 = 0;
  v11[0] = v8;
  v12 = 261;
  v11[1] = v9;
  return a1(a2, v11);
}
