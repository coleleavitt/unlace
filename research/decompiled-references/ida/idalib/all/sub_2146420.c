__int64 __fastcall sub_2146420(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 *v15; // r8
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 result; // rax
  unsigned int v19; // [rsp+Ch] [rbp-5Ch]
  __int64 *v20; // [rsp+10h] [rbp-58h]
  _QWORD *v21; // [rsp+18h] [rbp-50h]
  __int64 *v22[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = sub_2244B30(a2, a3);
  v9 = (unsigned int)sub_2244CB0(a1 + 336, a2, a3, v8);
  v11 = (__int64 *)(*(_QWORD *)(a1 + 336) + 8 * v9);
  if ( *v11 )
  {
    if ( *v11 != -8 )
    {
      sub_21463E0(v22, v11, 0);
      v12 = v22[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(a1 + 352);
  }
  v20 = v11;
  v19 = v9;
  v13 = sub_22300B0(a3 + 25, 8, v9, v10, v11, v9);
  v14 = v19;
  v15 = v20;
  v16 = (_QWORD *)v13;
  if ( a3 )
  {
    v21 = (_QWORD *)v13;
    memcpy((void *)(v13 + 24), a2, a3);
    v16 = v21;
    v15 = v20;
    v14 = v19;
  }
  *((_BYTE *)v16 + a3 + 24) = 0;
  *v16 = a3;
  v16[1] = 0;
  v16[2] = 0;
  *v15 = (__int64)v16;
  ++*(_DWORD *)(a1 + 348);
  v17 = sub_22450D0(a1 + 336, v14);
  sub_21463E0(v22, (__int64 *)(*(_QWORD *)(a1 + 336) + 8LL * v17), 0);
  v12 = v22[0];
LABEL_8:
  result = *v12;
  *(_QWORD *)(result + 8) = a4;
  *(_QWORD *)(result + 16) = a5;
  return result;
}
