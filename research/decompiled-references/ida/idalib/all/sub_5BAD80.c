__int64 __fastcall sub_5BAD80(__m128i *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r13d
  void **v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  unsigned int v11; // eax
  void *v12; // rdi
  _BYTE *v13; // r9
  unsigned int v14; // r10d
  int v15; // eax
  void **v16; // rbp
  unsigned int v17; // edx
  unsigned int v20; // [rsp+10h] [rbp-48h]
  _BYTE *v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  if ( a3 < a4 )
  {
    v7 = (void **)sub_5B8DA0(a1, a2);
    if ( v7 )
    {
      if ( *(_DWORD *)(a2 + 68) )
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
            if ( (unsigned __int64)*v7 >= a3 && (unsigned __int64)v12 < v8 )
              break;
            v11 = *(_DWORD *)(a2 + 68);
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
            v13 -= (unsigned __int64)*(v7 - 1);
          v15 = *(_DWORD *)(a2 + 68);
          v16 = v7 + 2;
          v21 = v13;
          *(_DWORD *)(a2 + 68) = v15 - 1;
          memmove(v7, v7 + 2, 16LL * (v15 - 1 - v14));
          v11 = *(_DWORD *)(a2 + 68);
          v10 = v9;
          if ( v9 >= v11 )
            break;
          v8 = v22;
          v17 = v9;
          while ( 1 )
          {
            v7[1] = (void *)((_BYTE *)v7[1] - v21);
            v11 = *(_DWORD *)(a2 + 68);
            ++v17;
            v7 = v16;
            if ( v17 >= v11 )
              break;
            v16 += 2;
          }
          ++v4;
          v7 = (void **)(*(_QWORD *)(a2 + 72) + 16LL * (int)(v9 - 1) + 16);
          if ( v9 >= v11 )
            goto LABEL_17;
        }
        ++v4;
LABEL_17:
        if ( v11 )
        {
          sub_5BA4E0(a1, a2);
LABEL_19:
          sub_5BA1C0((__int64)a1, a2, 1);
          return v4;
        }
      }
      else
      {
        v4 = 0;
      }
      qfree(*(void **)(a2 + 72));
      *(_QWORD *)(a2 + 72) = 0;
      goto LABEL_19;
    }
  }
  return 0;
}
