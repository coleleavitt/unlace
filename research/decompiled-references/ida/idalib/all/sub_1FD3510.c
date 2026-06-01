__int64 __fastcall sub_1FD3510(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbp
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v20; // rax
  int v21; // r14d
  bool v22; // zf
  __int64 *v23; // rax
  unsigned int v24; // edi
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v28; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a1 + 1464;
  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 48);
  v27 = a2;
  v6 = sub_2244B30(v4, v5);
  v7 = sub_2244E60(a1 + 1464, v4, v5, v6);
  if ( v7 == -1 )
    v8 = (__int64 *)(*(_QWORD *)(a1 + 1464) + 8LL * *(unsigned int *)(a1 + 1472));
  else
    v8 = (__int64 *)(*(_QWORD *)(a1 + 1464) + 8LL * v7);
  sub_E37610(v29, v8, 1);
  v9 = v29[0];
  sub_E37610(v29, (__int64 *)(*(_QWORD *)(a1 + 1464) + 8LL * *(unsigned int *)(a1 + 1472)), 1);
  if ( v29[0] == v9 )
  {
    return 1;
  }
  else
  {
    v12 = (_QWORD *)*v9;
    v13 = v27;
    v14 = *(_QWORD *)(v27 + 216);
    v15 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL * *(unsigned int *)(*v9 + 8));
    v16 = v14;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( !v17 )
        break;
      v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 4) == 0 || !v16 )
        goto LABEL_8;
    }
    v16 = 0;
LABEL_8:
    v18 = 1;
    if ( v15[5] == *(_QWORD *)(v16 + 32) )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v14 + 8);
        if ( !v20 )
          break;
        v14 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v20 & 4) == 0 || !v14 )
        {
          v18 = 1;
          if ( v15[6] != *(_QWORD *)(v14 + 40) )
            goto LABEL_9;
LABEL_15:
          *v15 = v27;
          v21 = *(_DWORD *)(*v9 + 8);
          v22 = (unsigned __int8)sub_1FB49E0((__int64 *)(a1 + 1440), &v27, &v28) == 0;
          v23 = v28;
          if ( !v22 )
          {
LABEL_16:
            *((_DWORD *)v23 + 2) = v21;
            v12 = (_QWORD *)*v9;
            v18 = 0;
            goto LABEL_9;
          }
          v24 = *(_DWORD *)(a1 + 1456);
          v10 = *(unsigned int *)(a1 + 1448);
          v29[0] = v28;
          v25 = (unsigned int)(v10 + 1);
          v26 = 2 * v24;
          v11 = (unsigned int)(4 * v25);
          v13 = 3 * v24;
          if ( (unsigned int)v11 < (unsigned int)v13 )
          {
            v13 = v24 >> 3;
            if ( v24 - *(_DWORD *)(a1 + 1452) - (unsigned int)v25 > (unsigned int)v13 )
            {
LABEL_24:
              v22 = *v23 == -4096;
              *(_DWORD *)(a1 + 1448) = v25;
              if ( !v22 )
                --*(_DWORD *)(a1 + 1452);
              v16 = v27;
              *((_DWORD *)v23 + 2) = 0;
              *v23 = v16;
              goto LABEL_16;
            }
            v26 = v24;
          }
          sub_1FB6B40((__int64 *)(a1 + 1440), v26, v25, v10, v13, v11);
          sub_1FB49E0((__int64 *)(a1 + 1440), &v27, v29);
          LODWORD(v25) = *(_DWORD *)(a1 + 1448) + 1;
          v23 = v29[0];
          goto LABEL_24;
        }
      }
      v18 = 1;
      if ( v15[6] == 46966720 )
        goto LABEL_15;
    }
LABEL_9:
    sub_2244F90(v3, v12, v16, v10, v13, v11);
    operator delete(v12, *v12 + 17LL, 8);
  }
  return v18;
}
