char __fastcall sub_B0B940(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // r12d
  unsigned int v5; // r8d
  int v6; // ecx
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v14; // rdi
  int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rdi
  int v18; // [rsp+8h] [rbp-40h]
  int v19; // [rsp+8h] [rbp-40h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]

  v2 = a1[101];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = a1[102];
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 >= *(_DWORD *)(v3 - 4) )
          return 10 * v6 >= v5;
        v7 = v4;
        v8 = *(_DWORD *)(v3 + 4LL * v4);
        if ( v8 != 0x7FFFFFFF )
        {
          v9 = a1[8] + 48LL * v8;
          v10 = *(_DWORD **)(v9 + 40);
          if ( v10 )
          {
            v10[6] += v10[5];
            v11 = *((_BYTE *)v10 + 28) == 0;
            v10[5] = 0;
            if ( !v11 )
            {
              v12 = a1[2];
              if ( *(_DWORD *)(v12 + 9472) < (*(_DWORD *)(*(_QWORD *)(v12 + 8872) + 16LL * (*v10 >> 1) + 8) & 0xFFFFFFu) )
                break;
            }
          }
        }
LABEL_12:
        ++v4;
      }
      if ( *(double *)(*(_QWORD *)(v12 + 8880) + 8LL * v8) <= 0.0 )
      {
        ++v5;
        goto LABEL_12;
      }
      v20 = v5;
      v18 = v6 + 1;
      sub_B05780((__int64)a1, (__int64)v10);
      v14 = *((_QWORD *)v10 + 1);
      v15 = v18;
      *(_QWORD *)(v9 + 40) = 0;
      v16 = v20;
      if ( v14 )
      {
        sub_186B220((void *)(v14 - 8));
        v16 = v20;
        v15 = v18;
      }
      v21 = v16;
      ++v4;
      v19 = v15;
      sub_186B220(v10);
      v17 = a1[2];
      *(_DWORD *)(a1[102] + 4 * v7) = 0x7FFFFFFF;
      sub_8E8A60(v17, v8);
      sub_506520(a1 + 101, v8);
      v3 = a1[102];
      v5 = v21;
      v6 = v19;
      if ( !v3 )
        return 10 * v6 >= v5;
    }
  }
  return 1;
}

