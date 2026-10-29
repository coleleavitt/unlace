__int64 __fastcall sub_2080730(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 *v8; // rcx
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  _QWORD *v17; // rdi
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  __int64 v22[2]; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+30h] [rbp-38h]
  char v24; // [rsp+34h] [rbp-34h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    if ( (*(_BYTE *)(*a2 - 16) & 2) != 0 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
      v20 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
      v21 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 24LL);
      v22[0] = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 32LL);
      v8 = *(__int64 **)(v5 - 32);
    }
    else
    {
      v18 = (__int64 *)(v5 - 8LL * ((*(_BYTE *)(*a2 - 16) >> 2) & 0xF));
      v7 = *(v18 - 1);
      v19 = *v18;
      v8 = v18 - 2;
      v20 = v19;
      v21 = v8[3];
      v22[0] = v8[4];
    }
    v10 = v3 - 1;
    v22[1] = v8[5];
    v23 = *(_DWORD *)(v5 + 4);
    v24 = (unsigned __int8)BYTE1(*(_QWORD *)v5) >> 7;
    v11 = sub_2079A80(v7, &v20, &v21, v22);
    v12 = *a2;
    v13 = v10 & v11;
    v14 = (_QWORD *)(v6 + 8LL * v13);
    v15 = *v14;
    if ( v12 == *v14 )
    {
LABEL_15:
      *a3 = v14;
      return 1;
    }
    else
    {
      if ( v15 != -4096 )
      {
        v16 = 1;
        v17 = nullptr;
        while ( 1 )
        {
          if ( v15 != -8192 || v17 )
            v14 = v17;
          v13 = v10 & (v16 + v13);
          v15 = *(_QWORD *)(v6 + 8LL * v13);
          if ( v15 == v12 )
          {
            v14 = (_QWORD *)(v6 + 8LL * v13);
            goto LABEL_15;
          }
          if ( v15 == -4096 )
            break;
          ++v16;
          v17 = v14;
          v14 = (_QWORD *)(v6 + 8LL * v13);
        }
        if ( !v14 )
          v14 = (_QWORD *)(v6 + 8LL * v13);
      }
      *a3 = v14;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
