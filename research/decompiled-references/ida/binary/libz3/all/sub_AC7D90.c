void __fastcall sub_AC7D90(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r13
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // rdi
  char v11; // al
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v1 = (_QWORD *)a1[15];
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = 8 * v2;
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = v1[v5 / 8];
          sub_B6F780(a1[2]);
          v7 = sub_B645B0(a1[2], v6);
          v8 = a1[2];
          v9 = v7;
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 7488) + 48LL))(
            *(_QWORD *)(v8 + 7488),
            *(_QWORD *)(*(_QWORD *)(v8 + 8840) + 8LL * (v7 >> 1)));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 7488) + 64LL))(*(_QWORD *)(v8 + 7488));
          v10 = a1[2];
          v16[0] = 2;
          v11 = *(_BYTE *)(*(_QWORD *)(v10 + 8848) + v9);
          if ( v11 != -1 )
            break;
          v5 += 8LL;
          sub_8E8670(v10, v16, v9 ^ 1);
          v1 = (_QWORD *)a1[15];
          if ( v4 == v5 )
            goto LABEL_9;
        }
        if ( !v11 )
          sub_8F28B0(v10, v9, 2, 0);
        v5 += 8LL;
        v1 = (_QWORD *)a1[15];
      }
      while ( v4 != v5 );
LABEL_9:
      if ( v1 )
      {
        v12 = &v1[*((unsigned int *)v1 - 1)];
        if ( v1 >= v12 )
          goto LABEL_17;
        do
        {
          while ( 1 )
          {
            v13 = *v1;
            if ( *v1 )
            {
              v14 = a1[14];
              if ( (*(_DWORD *)(v13 + 8))-- == 1 )
                break;
            }
            if ( ++v1 >= v12 )
              goto LABEL_16;
          }
          sub_15D7BC0(v14, v13);
          ++v1;
        }
        while ( v1 < v12 );
LABEL_16:
        v1 = (_QWORD *)a1[15];
        if ( v1 )
LABEL_17:
          *((_DWORD *)v1 - 1) = 0;
      }
    }
  }
}

