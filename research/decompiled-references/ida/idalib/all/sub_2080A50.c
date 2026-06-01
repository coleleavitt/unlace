__int64 __fastcall sub_2080A50(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  int v8; // edi
  __int64 *v9; // r8
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  char v22[8]; // [rsp+18h] [rbp-40h] BYREF
  __int64 v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = (_QWORD *)*a2;
    v6 = *a1;
    v7 = *(_BYTE *)(*a2 - 16);
    v8 = *(unsigned __int16 *)(*a2 + 2);
    if ( (v7 & 2) != 0 )
    {
      v20 = *(_QWORD *)*(v5 - 4);
      v21 = *(_QWORD *)(*(v5 - 4) + 8LL);
      v9 = (__int64 *)*(v5 - 4);
    }
    else
    {
      v9 = &v5[-((v7 >> 2) & 0xF) - 2];
      v20 = *v9;
      v21 = v9[1];
    }
    v22[0] = (unsigned __int8)BYTE1(*v5) >> 7;
    v12 = v3 - 1;
    v23[0] = v9[2];
    v13 = sub_207B170(v8, &v20, &v21, v22, v23);
    v14 = *a2;
    v15 = v12 & v13;
    v16 = (_QWORD *)(v6 + 8LL * v15);
    v17 = *v16;
    if ( *a2 == *v16 )
    {
LABEL_15:
      *a3 = v16;
      return 1;
    }
    else
    {
      if ( v17 != -4096 )
      {
        v18 = 1;
        v19 = nullptr;
        while ( 1 )
        {
          if ( v17 != -8192 || v19 )
            v16 = v19;
          v15 = v12 & (v18 + v15);
          v17 = *(_QWORD *)(v6 + 8LL * v15);
          if ( v17 == v14 )
          {
            v16 = (_QWORD *)(v6 + 8LL * v15);
            goto LABEL_15;
          }
          if ( v17 == -4096 )
            break;
          ++v18;
          v19 = v16;
          v16 = (_QWORD *)(v6 + 8LL * v15);
        }
        if ( !v16 )
          v16 = (_QWORD *)(v6 + 8LL * v15);
      }
      *a3 = v16;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
