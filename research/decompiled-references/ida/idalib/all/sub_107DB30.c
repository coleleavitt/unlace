__int64 __fastcall sub_107DB30(__int64 a1, __int64 a2, const void *a3, size_t a4, char a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 result; // rax
  unsigned int v19; // [rsp+Ch] [rbp-4Ch]
  __int64 *v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = sub_2244B30(a3, a4);
  v9 = (unsigned int)sub_2244CB0(a2, a3, a4, v8);
  v12 = (__int64 *)(*(_QWORD *)a2 + 8 * v9);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      sub_10298F0(v20, v12, 0);
      v13 = v20[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(a2 + 16);
  }
  v19 = v9;
  v14 = sub_22300B0(a4 + 17, 8, v9, v9, v10, v11);
  v15 = v19;
  v16 = v14;
  if ( a4 )
  {
    memcpy((void *)(v14 + 16), a3, a4);
    v15 = v19;
  }
  *(_BYTE *)(v16 + a4 + 16) = 0;
  *(_QWORD *)v16 = a4;
  *(_BYTE *)(v16 + 8) = 0;
  *v12 = v16;
  ++*(_DWORD *)(a2 + 12);
  v17 = sub_22450D0(a2, v15);
  sub_10298F0(v20, (__int64 *)(*(_QWORD *)a2 + 8LL * v17), 0);
  v13 = v20[0];
LABEL_8:
  result = *v13;
  *(_BYTE *)(result + 8) = a5;
  return result;
}
