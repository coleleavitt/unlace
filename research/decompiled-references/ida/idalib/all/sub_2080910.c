__int64 __fastcall sub_2080910(__int64 *a1, _QWORD **a2, _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // r12
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  _QWORD *v9; // rax
  int v12; // ebx
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  int v18; // r8d
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h] BYREF
  char v22[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = *((_BYTE *)*a2 - 16);
    if ( (v7 & 2) != 0 )
    {
      v8 = *(_QWORD *)*(v5 - 4);
      v9 = (_QWORD *)*(v5 - 4);
    }
    else
    {
      v20 = &v5[-((v7 >> 2) & 0xF)];
      v8 = *(v20 - 2);
      v9 = v20 - 2;
    }
    v12 = v3 - 1;
    v21 = v9[1];
    v22[0] = (unsigned __int8)BYTE1(*v5) >> 7;
    v13 = sub_207AAB0(v8, &v21, v22);
    v14 = *a2;
    v15 = v12 & v13;
    v16 = (_QWORD *)(v6 + 8LL * v15);
    v17 = (_QWORD *)*v16;
    if ( (_QWORD *)*v16 == *a2 )
    {
LABEL_15:
      *a3 = v16;
      return 1;
    }
    else
    {
      if ( v17 != (_QWORD *)-4096LL )
      {
        v18 = 1;
        v19 = nullptr;
        while ( 1 )
        {
          if ( v17 != (_QWORD *)-8192LL || v19 )
            v16 = v19;
          v15 = v12 & (v18 + v15);
          v17 = *(_QWORD **)(v6 + 8LL * v15);
          if ( v17 == v14 )
          {
            v16 = (_QWORD *)(v6 + 8LL * v15);
            goto LABEL_15;
          }
          if ( v17 == (_QWORD *)-4096LL )
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
