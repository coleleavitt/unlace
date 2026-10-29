__int64 __fastcall sub_A7C8C0(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4, unsigned int *a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned int v12; // edx
  unsigned int **v13; // rax
  unsigned int *v14; // rbx
  int *v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  int *v21; // [rsp+0h] [rbp-48h]
  unsigned int v22; // [rsp+Ch] [rbp-3Ch]

  v8 = *(_QWORD *)(a1 + 56);
  *a4 = -1;
  v9 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(v8 + 504)) + 256);
  v10 = (unsigned int)sub_FF9D30(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), a2);
  v11 = *(_QWORD **)(a1 + 144);
  *a3 = v10;
  if ( *(_DWORD *)(*v11 + 4 * v10) != 4
    || (v20 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v10), v12 = 0, *(_DWORD *)(v20 + 32)) )
  {
    v12 = 1;
    v13 = (unsigned int **)(v9 + 24LL * a2);
    v14 = *v13;
    v15 = (int *)v13[1];
    if ( v15 != (int *)*v13 )
    {
      do
      {
        v16 = *v14;
        if ( *a3 != *v14 )
        {
          if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4LL * v16) != 4
            || (v22 = v12,
                v21 = v15,
                v19 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v16),
                v15 = v21,
                v12 = v22,
                *(_DWORD *)(v19 + 32)) )
          {
            if ( ++v12 > 2 )
              return v12;
            *a4 = v16;
            if ( (v14[3] & 1) != 0 )
            {
LABEL_9:
              *a5 = 0;
              return v12;
            }
            v17 = v14[2];
            if ( v17 == 1 )
            {
              if ( (v14[7] & 1) != 0 )
                goto LABEL_9;
              v17 = v14[6];
              if ( v17 != 1 )
                goto LABEL_9;
            }
            else if ( v17 != -1 || (v14[7] & 1) != 0 || v14[6] != 1 )
            {
              goto LABEL_9;
            }
            *a5 = v17;
          }
        }
        v14 += 10;
      }
      while ( v15 != (int *)v14 );
    }
  }
  return v12;
}

