__int64 __fastcall sub_207E530(__int64 *a1, __int64 *a2, _QWORD *a3)
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
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rsi
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  _QWORD *v25; // rdi
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
      v16 = v5 - 8LL * ((v7 >> 2) & 0xF);
      v17 = *(_QWORD *)(v16 - 8);
      v8 = *(_QWORD *)(v16 - 16);
      v9 = v16 - 16;
      v26 = v17;
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
      v18 = sub_2071440(v15, &v26, &v27, v28);
    }
    else
    {
      v18 = sub_2071B00(v8, &v26, &v27, v28);
    }
    v19 = v3 - 1;
    v20 = *a2;
    v21 = v19 & v18;
    v22 = (_QWORD *)(v6 + 8LL * v21);
    v23 = *v22;
    if ( *a2 == *v22 )
    {
LABEL_23:
      *a3 = v22;
      return 1;
    }
    else
    {
      if ( v23 != -4096 )
      {
        v24 = 1;
        v25 = nullptr;
        while ( 1 )
        {
          if ( v23 != -8192 || v25 )
            v22 = v25;
          v21 = v19 & (v24 + v21);
          v23 = *(_QWORD *)(v6 + 8LL * v21);
          if ( v23 == v20 )
          {
            v22 = (_QWORD *)(v6 + 8LL * v21);
            goto LABEL_23;
          }
          if ( v23 == -4096 )
            break;
          ++v24;
          v25 = v22;
          v22 = (_QWORD *)(v6 + 8LL * v21);
        }
        if ( !v22 )
          v22 = (_QWORD *)(v6 + 8LL * v21);
      }
      *a3 = v22;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
