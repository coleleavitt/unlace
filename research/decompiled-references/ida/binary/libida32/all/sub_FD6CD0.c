__int64 __fastcall sub_FD6CD0(__int64 a1, const void *a2, size_t a3, char a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 result; // rax
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]
  __int64 *v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = sub_2220DF0(a2, a3);
  v7 = (unsigned int)sub_2220F70(a1, a2, a3, v6);
  v10 = (__int64 *)(*(_QWORD *)a1 + 8 * v7);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_FD6880(v18, v10, 0);
      v11 = v18[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v17 = v7;
  v12 = sub_220C370(a3 + 33, 8, v7, v7, v8, v9);
  v13 = v17;
  v14 = v12;
  if ( a3 )
  {
    memcpy((void *)(v12 + 32), a2, a3);
    v13 = v17;
  }
  *(_BYTE *)(v14 + a3 + 32) = 0;
  *(_QWORD *)v14 = a3;
  *(_BYTE *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 12) = 100;
  *(_QWORD *)(v14 + 16) = 0;
  *(_WORD *)(v14 + 24) = 0;
  *v10 = v14;
  ++*(_DWORD *)(a1 + 12);
  v15 = sub_2221390(a1, v13);
  sub_FD6880(v18, (__int64 *)(*(_QWORD *)a1 + 8LL * v15), 0);
  v11 = v18[0];
LABEL_8:
  result = *v11;
  *(_BYTE *)(result + 24) = a4;
  return result;
}

