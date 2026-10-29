__int64 __fastcall sub_FF7650(__int64 a1, int *a2)
{
  int v3; // esi
  __int64 v5; // r12
  unsigned int v6; // esi
  int v7; // eax
  int v8; // esi
  const char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // [rsp+0h] [rbp-38h] BYREF
  const char *v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]

  v3 = *a2;
  if ( v3 )
  {
    v5 = *((_QWORD *)a2 + 1);
    v6 = v3 & 0x7FFFFFFF;
    if ( v6 >= *(_DWORD *)(v5 + 476) && v6 < *(_DWORD *)(v5 + 480) )
      v7 = *(_DWORD *)(v5 + 472);
    else
      v7 = sub_FF9850(*((_QWORD *)a2 + 1));
    if ( v7 >= -1 )
    {
      v10 = 0;
      v9 = &byte_22CD811;
      v8 = 0;
    }
    else
    {
      (*(void (__fastcall **)(int *, _QWORD, _QWORD))(**(_QWORD **)(v5 + 464) + 32LL))(
        &v12,
        *(_QWORD *)(v5 + 464),
        (unsigned int)v7);
      v8 = v12;
      v9 = v13;
      v10 = v14;
    }
    v11 = *((_QWORD *)a2 + 1);
    *(_DWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 24) = v10;
    return a1;
  }
  else
  {
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 16) = 0;
    return a1;
  }
}

