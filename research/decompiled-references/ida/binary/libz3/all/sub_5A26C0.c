__int64 __fastcall sub_5A26C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-30h]

  v20 = 0;
  sub_5A2520((_QWORD *)a1, a2, &v20);
  sub_4D6590(&v21, *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 8LL));
  sub_5A09A0(a1, a2, &v21);
  v3 = (unsigned int)sub_5A1A80(a1);
  v4 = 0x7FFFFFFF8LL;
  if ( v20 )
    v4 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
  v5 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(v20 + v4) = v3;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 136LL))(v5, &v20) )
  {
    v16 = *(__int64 **)(a1 + 88);
    v17 = a1 + 64;
    v18 = *v16;
    if ( *(_DWORD *)(a1 + 96) == -1 )
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v18 + 40))(v16, v17);
    else
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v18 + 48))(v16, v17);
    v8 = v19;
  }
  else
  {
    v6 = 0x7FFFFFFF8LL;
    if ( v20 )
      v6 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * *(unsigned int *)(v20 + v6));
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
    v9 = 0x7FFFFFFF8LL;
    if ( v20 )
      v9 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
    v10 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(v20 + v9) = v3;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 152LL))(v10, &v20);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, &v21);
  result = *(_QWORD *)(a1 + 112);
  v12 = v22;
  *(_QWORD *)(result + 8 * v3) = v8;
  if ( v12 )
  {
    result = *((unsigned int *)v12 - 1);
    v13 = &v12[result];
    if ( v12 >= v13 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          if ( (*(_DWORD *)(v14 + 8))-- == 1 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_16;
      }
      result = sub_15D7BC0(v21, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_16:
    v12 = v22;
    if ( v22 )
LABEL_17:
      result = sub_186B220(v12 - 1);
  }
  if ( v20 )
    return sub_186B220((void *)(v20 - 8));
  return result;
}

