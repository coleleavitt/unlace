__int64 __fastcall sub_5A0860(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned int *v7; // rbx
  unsigned int v8; // ecx
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  int v15; // eax
  unsigned int *v16; // rbp
  unsigned int v17; // edx
  unsigned int v20; // [rsp+8h] [rbp-40h]
  unsigned int v21; // [rsp+8h] [rbp-40h]
  unsigned int v22; // [rsp+Ch] [rbp-3Ch]

  if ( a3 < a4 )
  {
    v7 = (unsigned int *)sub_59EB00(a1, a2);
    if ( v7 )
    {
      if ( *(_DWORD *)(a2 + 40) )
      {
        v8 = a4;
        v9 = 0;
        v4 = 0;
        v10 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v12 = *v7;
            if ( (unsigned int)v12 >= a3 && (unsigned int)v12 < v8 )
              break;
            v11 = *(_DWORD *)(a2 + 40);
            ++v9;
            v7 += 2;
            v10 = v9;
            if ( v9 >= v11 )
              goto LABEL_17;
          }
          v22 = v8;
          v20 = v10;
          clr_abits(v12, 2);
          v13 = v7[1];
          v14 = v20;
          if ( v9 )
            v13 -= *(v7 - 1);
          v15 = *(_DWORD *)(a2 + 40);
          v16 = v7 + 2;
          v21 = v13;
          *(_DWORD *)(a2 + 40) = v15 - 1;
          memmove(v7, v7 + 2, 8LL * (v15 - 1 - v14));
          v11 = *(_DWORD *)(a2 + 40);
          v10 = v9;
          if ( v9 >= v11 )
            break;
          v8 = v22;
          v17 = v9;
          while ( 1 )
          {
            v7[1] -= v21;
            v11 = *(_DWORD *)(a2 + 40);
            ++v17;
            v7 = v16;
            if ( v17 >= v11 )
              break;
            v16 += 2;
          }
          ++v4;
          v7 = (unsigned int *)(*(_QWORD *)(a2 + 48) + 8LL * (int)(v9 - 1) + 8);
          if ( v9 >= v11 )
            goto LABEL_17;
        }
        ++v4;
LABEL_17:
        if ( v11 )
        {
          sub_5A0050(a1, a2);
LABEL_19:
          sub_59FD50((__int64)a1, a2, 1);
          return v4;
        }
      }
      else
      {
        v4 = 0;
      }
      qfree(*(void **)(a2 + 48));
      *(_QWORD *)(a2 + 48) = 0;
      goto LABEL_19;
    }
  }
  return 0;
}

