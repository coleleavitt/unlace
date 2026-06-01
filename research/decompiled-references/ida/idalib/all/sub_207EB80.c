__int64 __fastcall sub_207EB80(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  int v8; // edi
  __int64 v9; // rcx
  int v10; // ecx
  int v12; // edx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  _QWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h] BYREF
  int v25; // [rsp+18h] [rbp-40h] BYREF
  int v26[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    v8 = *(unsigned __int16 *)(*a2 + 2);
    if ( (v7 & 2) != 0 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      v9 = *(_QWORD *)(v5 - 32);
    }
    else
    {
      v22 = *(_QWORD *)(v5 - 8LL * ((v7 >> 2) & 0xF));
      v9 = v5 - 8LL * ((v7 >> 2) & 0xF) - 16;
      v23 = v22;
    }
    v24 = *(_QWORD *)(v9 + 24);
    v10 = 0;
    if ( *(_WORD *)(v5 + 2) != 17152 )
      v10 = *(_DWORD *)(v5 + 4);
    v12 = *(_DWORD *)(v5 + 28);
    v25 = v10;
    v14 = v3 - 1;
    v26[0] = v12;
    v26[1] = *(_DWORD *)(v5 + 24);
    v26[2] = *(_DWORD *)(v5 + 20);
    v15 = sub_2073EA0(v8, &v23, &v24, &v25, v26);
    v16 = *a2;
    v17 = v14 & v15;
    v18 = (_QWORD *)(v6 + 8LL * v17);
    v19 = *v18;
    if ( *v18 == *a2 )
    {
LABEL_17:
      *a3 = v18;
      return 1;
    }
    else
    {
      if ( v19 != -4096 )
      {
        v20 = 1;
        v21 = nullptr;
        while ( 1 )
        {
          if ( v19 != -8192 || v21 )
            v18 = v21;
          v17 = v14 & (v20 + v17);
          v19 = *(_QWORD *)(v6 + 8LL * v17);
          if ( v19 == v16 )
          {
            v18 = (_QWORD *)(v6 + 8LL * v17);
            goto LABEL_17;
          }
          if ( v19 == -4096 )
            break;
          ++v20;
          v21 = v18;
          v18 = (_QWORD *)(v6 + 8LL * v17);
        }
        if ( !v18 )
          v18 = (_QWORD *)(v6 + 8LL * v17);
      }
      *a3 = v18;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
