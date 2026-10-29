__int64 __fastcall sub_207E370(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rsi
  unsigned int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h] BYREF
  __int64 v28[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    if ( (v7 & 2) != 0 )
    {
      v8 = **(_QWORD **)(v5 - 32);
      v26 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      v9 = *(_QWORD *)(v5 - 32);
    }
    else
    {
      v24 = v5 - 8LL * ((v7 >> 2) & 0xF);
      v25 = *(_QWORD *)(v24 - 8);
      v8 = *(_QWORD *)(v24 - 16);
      v9 = v24 - 16;
      v26 = v25;
      v27 = *(_QWORD *)(v9 + 16);
    }
    v28[0] = *(_QWORD *)(v9 + 24);
    if ( v8 && *(_BYTE *)v8 == 1 )
    {
      v12 = *(_QWORD *)(v8 + 128);
      v13 = *(_DWORD *)(v12 + 32);
      v14 = *(__int64 **)(v12 + 24);
      if ( v13 > 0x40 )
      {
        v15 = *v14;
      }
      else
      {
        v15 = 0;
        if ( v13 )
          v15 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      }
      v16 = sub_2071440(v15, &v26, &v27, v28);
    }
    else
    {
      v16 = sub_2071B00(v8, &v26, &v27, v28);
    }
    v17 = v3 - 1;
    v18 = *a2;
    v19 = v17 & v16;
    v20 = (_QWORD *)(v6 + 8LL * v19);
    v21 = *v20;
    if ( *a2 == *v20 )
    {
LABEL_23:
      *a3 = v20;
      return 1;
    }
    else
    {
      if ( v21 != -4096 )
      {
        v22 = 1;
        v23 = nullptr;
        while ( 1 )
        {
          if ( v21 != -8192 || v23 )
            v20 = v23;
          v19 = v17 & (v22 + v19);
          v21 = *(_QWORD *)(v6 + 8LL * v19);
          if ( v21 == v18 )
          {
            v20 = (_QWORD *)(v6 + 8LL * v19);
            goto LABEL_23;
          }
          if ( v21 == -4096 )
            break;
          ++v22;
          v23 = v20;
          v20 = (_QWORD *)(v6 + 8LL * v19);
        }
        if ( !v20 )
          v20 = (_QWORD *)(v6 + 8LL * v19);
      }
      *a3 = v20;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
