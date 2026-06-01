__int64 __fastcall sub_205E630(__int64 a1, char *a2)
{
  char *v3; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r9
  _QWORD *v8; // r13
  __int64 **v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  int v12; // eax
  int v13; // esi
  __int64 v14; // r8
  bool v15; // zf
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rdi
  int v22; // r8d
  unsigned int v23; // ecx
  __int64 *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // edx
  int v28; // r10d
  __int64 v29; // r9
  __int64 v30; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v31; // [rsp+10h] [rbp-38h] BYREF
  __int64 v32[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = a2;
  if ( sub_20510E0(a2, (__int64)a2) )
    return (__int64)v3;
  v5 = sub_20CA960(a2);
  v6 = *(_QWORD *)sub_20CB0D0(a1);
  v30 = v5;
  if ( !(unsigned __int8)sub_2053450((__int64 *)(v6 + 1632), &v30, &v31) )
  {
    v10 = *(unsigned int *)(v6 + 1648);
    v11 = v31;
    v12 = *(_DWORD *)(v6 + 1640) + 1;
    v13 = 2 * v10;
    v14 = (unsigned int)(4 * v12);
    v32[0] = (__int64)v31;
    if ( (unsigned int)v14 < 3 * (int)v10 )
    {
      if ( (int)v10 - *(_DWORD *)(v6 + 1644) - v12 > (unsigned int)v10 >> 3 )
      {
LABEL_9:
        v15 = *v11 == -4096;
        *(_DWORD *)(v6 + 1640) = v12;
        if ( !v15 )
          --*(_DWORD *)(v6 + 1644);
        v16 = v30;
        v11[1] = 0;
        v8 = v11 + 1;
        *v11 = v16;
LABEL_12:
        v17 = (__int64 *)sub_20CB0D0(a1);
        v18 = *(_QWORD *)(a1 - 32);
        v19 = *v17;
        v20 = *(_DWORD *)(v19 + 1648);
        v21 = *(_QWORD *)(v19 + 1632);
        if ( !v20 )
          goto LABEL_15;
        v22 = v20 - 1;
        v23 = (v20 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
        v24 = (__int64 *)(v21 + 16LL * v23);
        v25 = *v24;
        if ( *v24 != v18 )
        {
          v27 = 1;
          if ( v25 == -4096 )
          {
LABEL_15:
            *v8 = a1;
            v3 = nullptr;
            sub_20166C0((_QWORD *)(a1 - 32), v5);
            v26 = *(_QWORD *)(v5 + 8);
            if ( v26 != *(_QWORD *)(a1 + 8) )
              *(_QWORD *)(a1 + 8) = v26;
            return (__int64)v3;
          }
          while ( 1 )
          {
            v28 = v27 + 1;
            v23 = v22 & (v27 + v23);
            v24 = (__int64 *)(v21 + 16LL * v23);
            v29 = *v24;
            if ( v18 == *v24 )
              break;
            v27 = v28;
            if ( v29 == -4096 )
              goto LABEL_15;
          }
        }
        *v24 = -8192;
        --*(_DWORD *)(v19 + 1640);
        ++*(_DWORD *)(v19 + 1644);
        goto LABEL_15;
      }
      v13 = v10;
    }
    sub_2059670(v6 + 1632, v13, (__int64)v31, v10, v14, v7);
    sub_2053450((__int64 *)(v6 + 1632), &v30, v32);
    v11 = (__int64 *)v32[0];
    v12 = *(_DWORD *)(v6 + 1640) + 1;
    goto LABEL_9;
  }
  v3 = (char *)v31[1];
  v8 = v31 + 1;
  if ( !v3 )
    goto LABEL_12;
  v9 = *(__int64 ***)(a1 + 8);
  if ( v9 == *((__int64 ***)v3 + 1) )
    return (__int64)v3;
  return sub_205E4A0(0x31u, (_BYTE *)v31[1], v9, 0);
}
